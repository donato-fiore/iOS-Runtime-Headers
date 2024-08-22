typedef struct USet {
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

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL hasOverrideClient;
    BOOL hasOverrideHost;
    BOOL hasInputAssistantItem;
    BOOL suppressSoftwareKeyboard;
    BOOL conformsToUIKeyInputIsSet;
    BOOL conformsToUIKeyInput;
} ?;

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

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct UIRectCornerRadii {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIRectCornerRadii;

typedef struct _UITraitCollectionTraitChanges {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
} _UITraitCollectionTraitChanges;

typedef struct _UITraitCollectionChangeDescription {
    id field0;
    id field1;
    BOOL field2;
    _UITraitCollectionTraitChanges field3;
} _UITraitCollectionChangeDescription;

typedef struct CATransform3D {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
    CGFloat field6;
    CGFloat field7;
    CGFloat field8;
    CGFloat field9;
    CGFloat field10;
    CGFloat field11;
    CGFloat field12;
    CGFloat field13;
    CGFloat field14;
    CGFloat field15;
} CATransform3D;

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CAFrameRateRange {
    float minimum;
    float maximum;
    float preferred;
} CAFrameRateRange;

typedef struct _UIUpdateRequest {
    unsigned int flags;
    unsigned int minRate;
    unsigned int preferredRate;
    unsigned int maxRate;
    NSUInteger phase;
    NSUInteger load;
} _UIUpdateRequest;

typedef struct _UIUpdateRequestRecord {
    _UIUpdateRequest field0;
    unsigned int field1;
} _UIUpdateRequestRecord;

typedef struct UIOffset {
    CGFloat horizontal;
    CGFloat vertical;
} UIOffset;

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct _MKBEvent {
} // Error Processing Struct Fields

typedef struct __CFRunLoopObserver {
} // Error Processing Struct Fields

typedef struct CGPDFPage {
} // Error Processing Struct Fields

typedef struct CGSVGDocument {
} // Error Processing Struct Fields

typedef struct __MKBAssertion {
} // Error Processing Struct Fields

typedef struct __ACMHandle {
} // Error Processing Struct Fields

typedef struct SBNormalizedTransitionInterval {
    CGFloat start;
    CGFloat duration;
} SBNormalizedTransitionInterval;

typedef struct SBFDashBoardOrientationLeadingInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} SBFDashBoardOrientationLeadingInsets;

typedef struct SBFDashBoardPadPageInsets {
    SBFDashBoardOrientationLeadingInsets field0;
    SBFDashBoardOrientationLeadingInsets field1;
    SBFDashBoardOrientationLeadingInsets field2;
} SBFDashBoardPadPageInsets;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct CGGradient {
} // Error Processing Struct Fields

typedef struct __IOHIDEvent {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct _CARenderRendererInfo {
    int field0;
    unsigned int field1;
    unsigned int field2;
} _CARenderRendererInfo;

typedef struct _CAPropertyInfo {
} // Error Processing Struct Fields

typedef struct _CALayerIvars {
    int refcount;
    unsigned int magic;
    void layer;
    void _objc_observation_info;
} _CALayerIvars;

