typedef struct __CFRuntimeBase {
    NSUInteger field0;
    uint8_t field1;
    NSUInteger field2;
} __CFRuntimeBase;

typedef struct __DDQueryFragment {
} // Error Processing Struct Fields

typedef struct __DDScanQuery {
    __CFRuntimeBase field0;
    __DDQueryFragment field1;
    NSInteger field2;
    NSInteger field3;
    unk field4;
    void field5;
} __DDScanQuery;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct __DDQueryOffset {
    BOOL field0;
    BOOL field1;
} __DDQueryOffset;

typedef struct __DDQueryRange {
    __DDQueryOffset field0;
    __DDQueryOffset field1;
} __DDQueryRange;

typedef struct ? {
    BOOL hasOverrideClient;
    BOOL hasOverrideHost;
    BOOL hasInputAssistantItem;
    BOOL suppressSoftwareKeyboard;
    BOOL conformsToUIKeyInputIsSet;
    BOOL conformsToUIKeyInput;
} ?;

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct __DDResult {
} // Error Processing Struct Fields

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

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

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct NSDirectionalEdgeInsets {
    CGFloat top;
    CGFloat leading;
    CGFloat bottom;
    CGFloat trailing;
} NSDirectionalEdgeInsets;

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

