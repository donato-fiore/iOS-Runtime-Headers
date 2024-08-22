typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CLLocationCoordinate2D {
    CGFloat latitude;
    CGFloat longitude;
} CLLocationCoordinate2D;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct CGImage {
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

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

