typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct cczp_funcs {
} // Error Processing Struct Fields

typedef struct ccrsa_pub_ctx {
    NSUInteger pb_n;
    NSUInteger pb_bitlen;
    cczp_funcs pb_funcs;
    NSUInteger pb_ccn;
} ccrsa_pub_ctx;

typedef struct ccrsabssa_ciphersuite {
} // Error Processing Struct Fields

typedef struct ccrsa_full_ctx {
    NSUInteger pb_n;
    NSUInteger pb_bitlen;
    cczp_funcs pb_funcs;
    NSUInteger pb_ccn;
} ccrsa_full_ctx;

typedef struct __SecKey {
} // Error Processing Struct Fields

typedef struct RefCountBitsT<swift::RefCountIsInline> {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> {
    uint8_t __a_value;
    RefCountBitsT<swift::RefCountIsInline> field1;
} __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>>;

typedef struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> {
    __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> __a_;
} atomic<swift::RefCountBitsT<swift::RefCountIsInline>>;

typedef struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> {
    atomic<swift::RefCountBitsT<swift::RefCountIsInline>> refCounts;
} RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>>;

