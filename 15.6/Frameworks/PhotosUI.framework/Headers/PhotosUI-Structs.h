typedef struct ? {
    BOOL hasOverrideClient;
    BOOL hasOverrideHost;
    BOOL hasInputAssistantItem;
    BOOL suppressSoftwareKeyboard;
    BOOL conformsToUIKeyInputIsSet;
    BOOL conformsToUIKeyInput;
} ?;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct TransformMetadataItemPair {
    id field0;
    id field1;
} TransformMetadataItemPair;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

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

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct PUDisplayVelocity {
    CGFloat x;
    CGFloat y;
    CGFloat scale;
    CGFloat rotation;
} PUDisplayVelocity;

typedef struct PHDisplayVelocity {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} PHDisplayVelocity;

typedef struct PUBarAnimationSettings {
    NSInteger field0;
    CGFloat field1;
} PUBarAnimationSettings;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

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

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct _UIUpdateRequest {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequestRecord {
    _UIUpdateRequest field0;
    unsigned int field1;
} _UIUpdateRequestRecord;

typedef struct UIOffset {
    CGFloat horizontal;
    CGFloat vertical;
} UIOffset;

typedef struct CGVector {
    CGFloat dx;
    CGFloat dy;
} CGVector;

typedef struct CLLocationCoordinate2D {
    CGFloat latitude;
    CGFloat longitude;
} CLLocationCoordinate2D;

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

typedef struct PXAssetMediaTypeCount {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    NSUInteger field7;
    NSUInteger field8;
} PXAssetMediaTypeCount;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct PXGadgetUpdateFlags {
    BOOL collectionNeedsUpdate;
    BOOL loadRemaingGadgetsAfterViewAppeared;
} PXGadgetUpdateFlags;

typedef struct PXSimpleIndexPath {
    NSInteger dataSourceIdentifier;
    NSInteger section;
    NSInteger item;
    NSInteger subitem;
} PXSimpleIndexPath;

typedef struct PXAssetBadgeInfo {
    NSUInteger badges;
    CGFloat duration;
    NSInteger count;
} PXAssetBadgeInfo;

typedef struct PUFeedSeparatorMetrics {
    CGSize field0;
    UIEdgeInsets field1;
} PUFeedSeparatorMetrics;

typedef struct _PUSectionedTilingLayoutSectionInfo {
    BOOL field0;
    NSInteger field1;
    CGRect field2;
} _PUSectionedTilingLayoutSectionInfo;

typedef struct PXDisplayVelocity {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} PXDisplayVelocity;

typedef struct PXViewSpecDescriptor {
    NSInteger field0;
    NSUInteger field1;
    CGSize field2;
} PXViewSpecDescriptor;

typedef struct PUGridCoordinates {
    NSInteger row;
    NSInteger column;
} PUGridCoordinates;

typedef struct PUSimpleIndexPath {
    NSInteger field0;
    NSInteger field1;
} PUSimpleIndexPath;

typedef struct __CFUserNotification {
} // Error Processing Struct Fields

typedef struct CGPath {
} // Error Processing Struct Fields

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

typedef struct CGPDFDocument {
} // Error Processing Struct Fields

typedef struct CMPhotoDecompressionContainer {
} // Error Processing Struct Fields

typedef struct __IOSurface {
} // Error Processing Struct Fields

