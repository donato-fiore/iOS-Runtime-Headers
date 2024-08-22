typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL hasOverrideClient;
    BOOL hasOverrideHost;
    BOOL hasInputAssistantItem;
    BOOL suppressSoftwareKeyboard;
    BOOL conformsToUIKeyInputIsSet;
    BOOL conformsToUIKeyInput;
} ?;

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

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct SBIconImageInfo {
    CGSize size;
    CGFloat scale;
    CGFloat continuousCornerRadius;
} SBIconImageInfo;

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

typedef struct CGVector {
    CGFloat field0;
    CGFloat field1;
} CGVector;

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct _UITraitCollectionTraitChanges {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
    BOOL field8;
    BOOL field9;
} _UITraitCollectionTraitChanges;

typedef struct _UITraitCollectionChangeDescription {
    id field0;
    id field1;
    BOOL field2;
    _UITraitCollectionTraitChanges field3;
} _UITraitCollectionChangeDescription;

typedef struct CGContext {
} // Error Processing Struct Fields

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

typedef struct UIRectCornerRadii {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIRectCornerRadii;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct UIOffset {
    CGFloat horizontal;
    CGFloat vertical;
} UIOffset;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct SBVisibleColumnRange {
    NSUInteger startIconListIndex;
    NSUInteger startColumnIndex;
    NSUInteger endIconListIndex;
    NSUInteger endColumnIndex;
} SBVisibleColumnRange;

typedef struct SBHFloatRange {
    CGFloat field0;
    CGFloat field1;
} SBHFloatRange;

typedef struct SBIconListPredictedVisibleColumn {
    NSUInteger column;
    CGFloat confidence;
} SBIconListPredictedVisibleColumn;

typedef struct SBFolderPredictedVisibleColumn {
    NSUInteger iconListIndex;
    SBIconListPredictedVisibleColumn predictedVisibleColumn;
} SBFolderPredictedVisibleColumn;

typedef struct SBIconCoordinate {
    NSInteger field0;
    NSInteger field1;
} SBIconCoordinate;

typedef struct SBRootFolderViewMetrics {
    CGRect field0;
    CGRect field1;
    CGRect field2;
    CGRect field3;
    CGRect field4;
    CGRect field5;
    CGRect field6;
    CGFloat field7;
    CGRect field8;
    CGRect field9;
    CGRect field10;
} SBRootFolderViewMetrics;

typedef struct _UIUpdateRequest {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequestRecord {
    _UIUpdateRequest field0;
    unsigned int field1;
} _UIUpdateRequestRecord;

typedef struct SBIconApproximateLayoutPosition {
    NSUInteger horizontal;
    NSUInteger vertical;
} SBIconApproximateLayoutPosition;

typedef struct os_activity_scope_state_s {
    NSUInteger opaque;
} os_activity_scope_state_s;

typedef struct CLLocationCoordinate2D {
    CGFloat field0;
    CGFloat field1;
} CLLocationCoordinate2D;

typedef struct SBHIconGridSize {
    unsigned short field0;
    unsigned short field1;
} SBHIconGridSize;

typedef struct SBIconListPredictedVisibleRow {
    NSUInteger row;
    CGFloat confidence;
} SBIconListPredictedVisibleRow;

typedef struct SBHIconGridRange {
    NSUInteger field0;
    SBHIconGridSize field1;
} SBHIconGridRange;

typedef struct SBHIconGridSizeClassSizes {
    SBHIconGridSize field0;
    SBHIconGridSize field1;
    SBHIconGridSize field2;
    SBHIconGridSize field3;
    SBHIconGridSize field4;
} SBHIconGridSizeClassSizes;

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
    CGSize field12;
    CGSize field13;
    CGFloat field14;
    CGSize field15;
    NSUInteger field16;
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

typedef struct __CFRunLoopObserver {
} // Error Processing Struct Fields

typedef struct SBHIconGridSizeClassAreas {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
} SBHIconGridSizeClassAreas;

typedef struct SBHIconManagerStatistics {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    NSUInteger field7;
    NSUInteger field8;
    NSUInteger field9;
    NSUInteger field10;
    NSUInteger field11;
    NSUInteger field12;
    NSUInteger field13;
    NSUInteger field14;
    NSUInteger field15;
    NSUInteger field16;
    NSUInteger field17;
    NSUInteger field18;
    NSUInteger field19;
    NSUInteger field20;
    NSUInteger field21;
} SBHIconManagerStatistics;

typedef struct SBRootFolderPageStateTransitionSnapshot {
    NSInteger field0;
    NSInteger field1;
    CGFloat field2;
} SBRootFolderPageStateTransitionSnapshot;

typedef struct __WiFiManagerClient {
} // Error Processing Struct Fields

typedef struct IONotificationPort {
} // Error Processing Struct Fields

typedef struct __IOHIDEvent {
} // Error Processing Struct Fields

typedef struct __GSKeyboard {
} // Error Processing Struct Fields

typedef struct __CFRunLoop {
} // Error Processing Struct Fields

typedef struct __CFMessagePort {
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

