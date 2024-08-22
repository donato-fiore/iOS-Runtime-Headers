typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct NSDirectionalEdgeInsets {
    CGFloat top;
    CGFloat leading;
    CGFloat bottom;
    CGFloat trailing;
} NSDirectionalEdgeInsets;

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __SecCode {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL _supportsWebRequestEvents;
} ?;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct OpaqueJSContext {
} // Error Processing Struct Fields

typedef struct OpaqueJSValue {
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

typedef struct Vector<WTF::RetainPtr<CGImage *>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> {
    void m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector<WTF::RetainPtr<CGImage *>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>;

typedef struct RetainPtr<const __SecCode *> {
    void m_ptr;
} RetainPtr<const __SecCode *>;

typedef struct RetainPtr<CGImageSource> {
    void field0;
} RetainPtr<CGImageSource>;

typedef struct CGImage {
} // Error Processing Struct Fields

