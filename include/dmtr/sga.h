// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#ifndef DMTR_WAIT_H_IS_INCLUDED
#define DMTR_WAIT_H_IS_INCLUDED

#include <dmtr/sys/gcc.h>
#include <dmtr/types.h>

#ifdef __cplusplus
extern "C" {
#endif

DMTR_EXPORT int dmtr_sgalen(size_t *len_out, const dmtr_sgarray_t *sga);

#ifdef __cplusplus
}
#endif

#endif /* DMTR_WAIT_H_IS_INCLUDED */
