typedef struct _NSZone {
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

typedef struct _CFHSTSPolicy {
} // Error Processing Struct Fields

typedef struct _CFURLCache {
} // Error Processing Struct Fields

typedef struct _CFURLCredentialStorage {
} // Error Processing Struct Fields

typedef struct OpaqueCFHTTPCookieStorage {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFAllocator {
} // Error Processing Struct Fields

typedef struct XCredentialStorage {
    unk field0;
    __CFAllocator field1;
    int field2;
} XCredentialStorage;

typedef struct XCookieStorage {
    unk field0;
    __CFAllocator field1;
    int field2;
} XCookieStorage;

typedef struct __CFSet {
} // Error Processing Struct Fields

typedef struct _CFURLResponse {
} // Error Processing Struct Fields

typedef struct __CFURLStorageSession {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

