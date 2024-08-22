typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct OpaqueJSContext {
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

typedef struct __IOHIDEvent {
} // Error Processing Struct Fields

typedef struct __GSKeyboard {
} // Error Processing Struct Fields

typedef struct __CFMessagePort {
} // Error Processing Struct Fields

typedef struct __CFRunLoop {
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

typedef struct __CFString {
} // Error Processing Struct Fields

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
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct __CFSet {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct __CFCharacterSet {
} // Error Processing Struct Fields

typedef struct _UIWebViewportConfiguration {
    CGSize size;
    float initialScale;
    float minimumScale;
    float maximumScale;
    BOOL allowsUserScaling;
    BOOL allowsShrinkToFit;
    BOOL avoidsUnsafeArea;
} _UIWebViewportConfiguration;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct CGGradient {
} // Error Processing Struct Fields

typedef struct UIOffset {
    CGFloat horizontal;
    CGFloat vertical;
} UIOffset;

typedef struct SUGradientPoint {
    CGPoint point;
    CGFloat radius;
} SUGradientPoint;

typedef struct CGShading {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequest {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequestRecord {
    _UIUpdateRequest field0;
    unsigned int field1;
} _UIUpdateRequestRecord;

typedef struct _UITableViewVisibleCellsUpdateRanges {
    _NSRange field0;
    _NSRange field1;
    _NSRange field2;
    _NSRange field3;
    _NSRange field4;
    BOOL field5;
} _UITableViewVisibleCellsUpdateRanges;

typedef struct OpaqueCMTimebase {
} // Error Processing Struct Fields

typedef struct FairPlayHWInfo_ {
    unsigned int IDLength;
    unsigned char ID;
} FairPlayHWInfo_;

typedef struct FPSAPContextOpaque_ {
} // Error Processing Struct Fields

