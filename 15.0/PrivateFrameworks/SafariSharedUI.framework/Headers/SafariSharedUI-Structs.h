typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __SecCode {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL _supportsWebRequestEvents;
} ?;

typedef struct OpaqueJSValue {
} // Error Processing Struct Fields

typedef struct OpaqueJSContext {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
    uint8_t __a_value;
    BOOL field1;
} __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>;

typedef struct atomic<bool> {
    __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> __a_;
} atomic<bool>;

typedef struct RetainPtr<CGImage *> {
    void m_ptr;
} RetainPtr<CGImage *>;

typedef struct RetainPtr<CGImageSource *> {
    void field0;
} RetainPtr<CGImageSource *>;

typedef struct Vector<WTF::RetainPtr<CGImage *>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> {
    void m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WTF::RetainPtr<CGImage *>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>;

typedef struct RetainPtr<const __SecCode *> {
    void m_ptr;
} RetainPtr<const __SecCode *>;

typedef struct WBSWebExtensionAPIPort {
} // Error Processing Struct Fields

typedef struct Ref<SafariShared::WBSWebExtensionAPIPort, WTF::RawPtrTraits<SafariShared::WBSWebExtensionAPIPort>> {
    WBSWebExtensionAPIPort field0;
} Ref<SafariShared::WBSWebExtensionAPIPort, WTF::RawPtrTraits<SafariShared::WBSWebExtensionAPIPort>>;

typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct CGImage {
} // Error Processing Struct Fields

