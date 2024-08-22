typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct IMFileSize {
    NSUInteger file_size;
    NSUInteger disk_allocation_size;
} IMFileSize;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct IMPreviewConstraints {
    CGFloat field0;
    CGSize field1;
    CGFloat field2;
    BOOL field3;
    BOOL field4;
} IMPreviewConstraints;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL associatedMessageType;
    BOOL expireState;
    BOOL timeDelivered;
    BOOL timeExpressiveSentPlayed;
    BOOL timePlayed;
    BOOL timeRead;
    BOOL associatedMessageRangeLength;
    BOOL associatedMessageRangeLocation;
    BOOL version;
} ?;

typedef struct CGImageSource {
} // Error Processing Struct Fields

typedef struct IMMessagePartRanges {
    _NSRange prefixRange;
    _NSRange partNumberRange;
    _NSRange messageGUIDRange;
} IMMessagePartRanges;

typedef struct IMRequirementFailed_t {
    char * field0;
    BOOL field1;
    BOOL field2;
    unsigned char field3;
} IMRequirementFailed_t;

typedef struct _xpc_type_s {
} // Error Processing Struct Fields

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct objc_method {
} // Error Processing Struct Fields

typedef struct _TidyDoc {
    int field0;
} _TidyDoc;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __CFError {
} // Error Processing Struct Fields

typedef struct CLLocationCoordinate2D {
    CGFloat field0;
    CGFloat field1;
} CLLocationCoordinate2D;

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

