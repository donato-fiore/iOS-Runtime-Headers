typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CGImageSource {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct CGContext {
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

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct NSDirectionalEdgeInsets {
    CGFloat top;
    CGFloat leading;
    CGFloat bottom;
    CGFloat trailing;
} NSDirectionalEdgeInsets;

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct UIRectCornerRadii {
    CGFloat topLeft;
    CGFloat bottomLeft;
    CGFloat bottomRight;
    CGFloat topRight;
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
    CGFloat m11;
    CGFloat m12;
    CGFloat m13;
    CGFloat m14;
    CGFloat m21;
    CGFloat m22;
    CGFloat m23;
    CGFloat m24;
    CGFloat m31;
    CGFloat m32;
    CGFloat m33;
    CGFloat m34;
    CGFloat m41;
    CGFloat m42;
    CGFloat m43;
    CGFloat m44;
} CATransform3D;

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct SBSwitcherAsyncRenderingAttributes {
    BOOL field0;
    BOOL field1;
} SBSwitcherAsyncRenderingAttributes;

typedef struct __IOHIDEvent {
} // Error Processing Struct Fields

typedef struct __GSKeyboard {
} // Error Processing Struct Fields

typedef struct __CFMessagePort {
} // Error Processing Struct Fields

typedef struct __CFRunLoop {
} // Error Processing Struct Fields

typedef struct __CFBoolean {
} // Error Processing Struct Fields

typedef struct SBIconImageInfo {
    CGSize size;
    CGFloat scale;
    CGFloat continuousCornerRadius;
} SBIconImageInfo;

typedef struct __CTServerConnection {
} // Error Processing Struct Fields

typedef struct __SCDynamicStore {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct SBIconApproximateLayoutPosition {
    NSUInteger horizontal;
    NSUInteger vertical;
} SBIconApproximateLayoutPosition;

typedef struct os_activity_scope_state_s {
    NSUInteger opaque;
} os_activity_scope_state_s;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct UIOffset {
    CGFloat horizontal;
    CGFloat vertical;
} UIOffset;

typedef struct __WiFiManagerClient {
} // Error Processing Struct Fields

typedef struct __WiFiDeviceClient {
} // Error Processing Struct Fields

typedef struct __WiFiNetwork {
} // Error Processing Struct Fields

typedef struct SBHIconGridSize {
    unsigned short field0;
    unsigned short field1;
} SBHIconGridSize;

typedef struct SBHIconGridSizeClassSizes {
    SBHIconGridSize field0;
    SBHIconGridSize field1;
    SBHIconGridSize field2;
    SBHIconGridSize field3;
    SBHIconGridSize field4;
} SBHIconGridSizeClassSizes;

typedef struct __CFRunLoopObserver {
} // Error Processing Struct Fields

typedef struct IONotificationPort {
} // Error Processing Struct Fields

typedef struct SBSwitcherShelfPresentationAttributes {
    BOOL field0;
    CGRect field1;
    NSUInteger field2;
    NSUInteger field3;
} SBSwitcherShelfPresentationAttributes;

typedef struct WGWidgetListSettings {
    NSUInteger field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
} WGWidgetListSettings;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct SBIconListPredictedVisibleColumn {
    NSUInteger column;
    CGFloat confidence;
} SBIconListPredictedVisibleColumn;

typedef struct SBIconListPredictedVisibleRow {
    NSUInteger row;
    CGFloat confidence;
} SBIconListPredictedVisibleRow;

typedef struct SBIconCoordinate {
    NSInteger field0;
    NSInteger field1;
} SBIconCoordinate;

typedef struct SBIconListLayoutMetricsParameters {
    CGRect field0;
    CGFloat field1;
    UIEdgeInsets field2;
    NSInteger field3;
    NSInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    SBHIconGridSizeClassSizes field7;
    NSUInteger field8;
    NSUInteger field9;
    NSUInteger field10;
    NSUInteger field11;
    SBHIconGridSize field12;
    NSInteger field13;
    CGSize field14;
    CGSize field15;
    CGFloat field16;
    CGSize field17;
    NSUInteger field18;
} SBIconListLayoutMetricsParameters;

typedef struct SBIconListLayoutAnimationParameters {
    CGPoint field0;
    CGFloat field1;
    SBIconImageInfo field2;
    BOOL field3;
    SBIconCoordinate field4;
    BOOL field5;
    BOOL field6;
    NSUInteger field7;
} SBIconListLayoutAnimationParameters;

typedef struct SBHIconGridRange {
    NSUInteger field0;
    SBHIconGridSize field1;
} SBHIconGridRange;

typedef struct BKSDisplayBrightnessTransaction {
} // Error Processing Struct Fields

typedef struct CAColorMatrix {
    float field0;
    float field1;
    float field2;
    float field3;
    float field4;
    float field5;
    float field6;
    float field7;
    float field8;
    float field9;
    float field10;
    float field11;
    float field12;
    float field13;
    float field14;
    float field15;
    float field16;
    float field17;
    float field18;
    float field19;
} CAColorMatrix;

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequest {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequestRecord {
    _UIUpdateRequest field0;
    unsigned int field1;
} _UIUpdateRequestRecord;

typedef struct SBDragPreviewShadowParameters {
    CGFloat shadowOpacity;
    CGFloat shadowRadius;
    CGSize shadowOffset;
} SBDragPreviewShadowParameters;

typedef struct CGColorSpace {
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

typedef struct MGNotificationTokenStruct {
} // Error Processing Struct Fields

typedef struct SBPIPPositionInteractionStateContext {
    BOOL isStashed;
    BOOL isInteractive;
    BOOL hasActiveGesture;
    BOOL isFreelyPositionable;
    CGPoint projectedPosition;
    CGPoint initialPosition;
    CGPoint currentPosition;
    CGFloat currentPositionStashProgress;
    CGFloat projectedPositionStashProgress;
} SBPIPPositionInteractionStateContext;

typedef struct SBPIPPositionGeometryContext {
    CGSize pipCurrentSize;
    CGSize pipLastSteadySize;
    CGSize pipStashedSize;
    CGPoint pipAnchorPointOffset;
    CGSize containerSize;
    UIEdgeInsets edgeInsets;
    UIEdgeInsets minimumPadding;
    UIEdgeInsets stashedMinimumPadding;
    NSUInteger offscreenCorner;
    NSInteger orientation;
} SBPIPPositionGeometryContext;

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct AWNotification_s {
} // Error Processing Struct Fields

typedef struct _CARenderImage {
} // Error Processing Struct Fields

typedef struct SBModifierCacheDispatchData {
    id field0;
    unk field1;
} SBModifierCacheDispatchData;

typedef struct SBTodayIconListLayoutAttributes {
    CGRect field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} SBTodayIconListLayoutAttributes;

typedef struct SBReachabilityActivationContext {
    CGPoint location;
    CGPoint translation;
    CGPoint velocity;
    CGRect viewBounds;
    BOOL everTranslatedUpwards;
} SBReachabilityActivationContext;

typedef struct TouchHistory {
    CGPoint field0;
    CGFloat field1;
} TouchHistory;

typedef struct SBDeviceApplicationSceneStatusBarStateObserverFlags {
    BOOL wantsDidChangeStatusBarStyleTo;
    BOOL wantsDidChangeStatusBarPartStylesTo;
    BOOL wantsDidChangeStatusBarAlphaTo;
    BOOL wantsDidChangeStatusBarHiddenTo_withAnimation;
    BOOL wantsDidChangeStatusBarOrientationTo;
    BOOL wantsDidInvalidateStatusBarDescriptionForSceneWithIdentifier;
    BOOL wantsDidChangeStatusBarStyleOverridesToSuppressTo;
    BOOL wantsDidChangeStatusBarAvoidanceFrameTo;
    BOOL wantsDidChangeSceneInterfaceOrientationTo;
} SBDeviceApplicationSceneStatusBarStateObserverFlags;

typedef struct SBHClockApplicationIconImageMetrics {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGSize field5;
    CGFloat field6;
    CGFloat field7;
    CGFloat field8;
    CGFloat field9;
    CGSize field10;
    CGFloat field11;
    CGFloat field12;
    CGFloat field13;
    CGFloat field14;
    CGSize field15;
    CGFloat field16;
    CGFloat field17;
    CGFloat field18;
    CGFloat field19;
    CGFloat field20;
    CGFloat field21;
    SBIconImageInfo field22;
} SBHClockApplicationIconImageMetrics;

typedef struct _SBPressSequenceValidatorBounds {
    CGFloat field0;
    CGFloat field1;
} _SBPressSequenceValidatorBounds;

typedef struct SBWindowLevelRange_struct {
    CGFloat start;
    CGFloat end;
} SBWindowLevelRange_struct;

typedef struct CGVector {
    CGFloat field0;
    CGFloat field1;
} CGVector;

