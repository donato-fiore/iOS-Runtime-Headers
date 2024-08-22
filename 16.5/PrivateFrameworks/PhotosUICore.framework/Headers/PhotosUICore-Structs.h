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

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct UIEdgeInsets {
    CGFloat top;
    CGFloat left;
    CGFloat bottom;
    CGFloat right;
} UIEdgeInsets;

typedef struct ? {
    NSUInteger pixelFormat;
    __CFString colorSpaceName;
    unsigned short width;
    unsigned short height;
} ?;

typedef struct PXDisplayVelocity {
    CGFloat x;
    CGFloat y;
    CGFloat scale;
    CGFloat rotation;
} PXDisplayVelocity;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct PXTileGeometry {
    CGRect frame;
    CGPoint center;
    CGSize size;
    CGAffineTransform transform;
    CGFloat alpha;
    CGFloat zPosition;
    BOOL hidden;
    CGSize contentSize;
    CGRect contentsRect;
    void coordinateSpaceIdentifier;
} PXTileGeometry;

typedef struct PXTileIdentifier {
    NSUInteger length;
    NSUInteger index;
} PXTileIdentifier;

typedef struct PXMemoryFontsSpecIdentifier {
    NSInteger field0;
    NSInteger field1;
    NSInteger field2;
    CGSize field3;
    CGFloat field4;
    BOOL field5;
} PXMemoryFontsSpecIdentifier;

typedef struct PXSimpleIndexPath {
    NSInteger dataSourceIdentifier;
    NSInteger section;
    NSInteger item;
    NSInteger subitem;
} PXSimpleIndexPath;

typedef struct PXViewSpecDescriptor {
    NSInteger field0;
    NSUInteger field1;
    CGSize field2;
} PXViewSpecDescriptor;

typedef struct PXIntSize_st {
    NSUInteger field0;
    NSUInteger field1;
} PXIntSize_st;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _PXGSpriteIndexRange {
    unsigned int location;
    unsigned int length;
} _PXGSpriteIndexRange;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct CGVector {
    CGFloat field0;
    CGFloat field1;
} CGVector;

typedef struct NSDirectionalEdgeInsets {
    CGFloat top;
    CGFloat leading;
    CGFloat bottom;
    CGFloat trailing;
} NSDirectionalEdgeInsets;

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

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct PXGCameraConfiguration {
    ? viewMatrix;
    ? projectionMatrix;
    ? billboardMatrix;
} PXGCameraConfiguration;

typedef struct UIOffset {
    CGFloat horizontal;
    CGFloat vertical;
} UIOffset;

typedef struct _UIUpdateRequest {
} // Error Processing Struct Fields

typedef struct _UIUpdateRequestRecord {
    _UIUpdateRequest field0;
    unsigned int field1;
} _UIUpdateRequestRecord;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct _PXCornerSpriteIndexes {
    unsigned int topLeft;
    unsigned int topRight;
    unsigned int bottomLeft;
    unsigned int bottomRight;
} _PXCornerSpriteIndexes;

typedef struct _PXLayoutGeometry {
    NSInteger field0;
    CGPoint field1;
    CGSize field2;
    CGAffineTransform field3;
    float field4;
    NSInteger field5;
    CGRect field6;
    CGSize field7;
} _PXLayoutGeometry;

typedef struct PXGadgetUpdateFlags {
    BOOL collectionNeedsUpdate;
    BOOL loadRemaingGadgetsAfterViewAppeared;
} PXGadgetUpdateFlags;

typedef struct __CTFramesetter {
} // Error Processing Struct Fields

typedef struct __CTFrame {
} // Error Processing Struct Fields

typedef struct __CTLine {
} // Error Processing Struct Fields

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct PXMediaProviderThumbnailDataFormat {
} // Error Processing Struct Fields

typedef struct PXMediaProviderThumbnailDataSpec {
    PXMediaProviderThumbnailDataFormat field0;
    unsigned short field1;
    unsigned short field2;
    unsigned short field3;
    unsigned short field4;
    unsigned short field5;
    unsigned short field6;
    unsigned short field7;
} PXMediaProviderThumbnailDataSpec;

typedef struct _UICollectionViewVisibleCellsUpdateResult {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    BOOL field3;
} _UICollectionViewVisibleCellsUpdateResult;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct CLLocationCoordinate2D {
    CGFloat latitude;
    CGFloat longitude;
} CLLocationCoordinate2D;

typedef struct PXAssetBadgeInfo {
    NSUInteger badges;
    CGFloat duration;
    NSInteger count;
    NSInteger fileSize;
} PXAssetBadgeInfo;

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct CACornerRadii {
    CGSize field0;
    CGSize field1;
    CGSize field2;
    CGSize field3;
} CACornerRadii;

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

typedef struct __CFCharacterSet {
} // Error Processing Struct Fields

typedef struct PXTileState {
    BOOL field0;
    PXTileIdentifier field1;
    PXTileIdentifier field2;
    PXTileIdentifier field3;
    NSUInteger field4;
    BOOL field5;
    PXTileGeometry field6;
    PXTileGeometry field7;
    BOOL field8;
    BOOL field9;
    void field10;
    void field11;
    void field12;
    NSUInteger field13;
} PXTileState;

typedef struct PXProtectedTileState {
    BOOL field0;
    PXTileIdentifier field1;
    PXTileIdentifier field2;
    PXTileIdentifier field3;
    NSUInteger field4;
    BOOL field5;
    PXTileGeometry field6;
    PXTileGeometry field7;
    BOOL field8;
    BOOL field9;
    void field10;
    void field11;
    void field12;
    NSUInteger field13;
} PXProtectedTileState;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<PXTileIdentifier, std::__hash_value_type<PXTileIdentifier, unsigned long>, std::hash<PXTileIdentifier>, std::equal_to<PXTileIdentifier>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<PXTileIdentifier, std::__hash_value_type<PXTileIdentifier, unsigned long>, std::hash<PXTileIdentifier>, std::equal_to<PXTileIdentifier>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<PXTileIdentifier, std::__hash_value_type<PXTileIdentifier, unsigned long>, std::equal_to<PXTileIdentifier>, std::hash<PXTileIdentifier>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<PXTileIdentifier, std::__hash_value_type<PXTileIdentifier, unsigned long>, std::equal_to<PXTileIdentifier>, std::hash<PXTileIdentifier>, true>>;

typedef struct __hash_table<std::__hash_value_type<PXTileIdentifier, unsigned long>, std::__unordered_map_hasher<PXTileIdentifier, std::__hash_value_type<PXTileIdentifier, unsigned long>, std::hash<PXTileIdentifier>, std::equal_to<PXTileIdentifier>, true>, std::__unordered_map_equal<PXTileIdentifier, std::__hash_value_type<PXTileIdentifier, unsigned long>, std::equal_to<PXTileIdentifier>, std::hash<PXTileIdentifier>, true>, std::allocator<std::__hash_value_type<PXTileIdentifier, unsigned long>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<PXTileIdentifier, unsigned long>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<PXTileIdentifier, std::__hash_value_type<PXTileIdentifier, unsigned long>, std::hash<PXTileIdentifier>, std::equal_to<PXTileIdentifier>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<PXTileIdentifier, std::__hash_value_type<PXTileIdentifier, unsigned long>, std::equal_to<PXTileIdentifier>, std::hash<PXTileIdentifier>, true>> __p3_;
} __hash_table<std::__hash_value_type<PXTileIdentifier, unsigned long>, std::__unordered_map_hasher<PXTileIdentifier, std::__hash_value_type<PXTileIdentifier, unsigned long>, std::hash<PXTileIdentifier>, std::equal_to<PXTileIdentifier>, true>, std::__unordered_map_equal<PXTileIdentifier, std::__hash_value_type<PXTileIdentifier, unsigned long>, std::equal_to<PXTileIdentifier>, std::hash<PXTileIdentifier>, true>, std::allocator<std::__hash_value_type<PXTileIdentifier, unsigned long>>>;

typedef struct unordered_map<PXTileIdentifier, unsigned long, std::hash<PXTileIdentifier>, std::equal_to<PXTileIdentifier>, std::allocator<std::pair<const PXTileIdentifier, unsigned long>>> {
    __hash_table<std::__hash_value_type<PXTileIdentifier, unsigned long>, std::__unordered_map_hasher<PXTileIdentifier, std::__hash_value_type<PXTileIdentifier, unsigned long>, std::hash<PXTileIdentifier>, std::equal_to<PXTileIdentifier>, true>, std::__unordered_map_equal<PXTileIdentifier, std::__hash_value_type<PXTileIdentifier, unsigned long>, std::equal_to<PXTileIdentifier>, std::hash<PXTileIdentifier>, true>, std::allocator<std::__hash_value_type<PXTileIdentifier, unsigned long>>> __table_;
} unordered_map<PXTileIdentifier, unsigned long, std::hash<PXTileIdentifier>, std::equal_to<PXTileIdentifier>, std::allocator<std::pair<const PXTileIdentifier, unsigned long>>>;

typedef struct PXGDecorationSpriteInfo {
    NSInteger field0;
    NSInteger field1;
    CGFloat field2;
    NSInteger field3;
    NSInteger field4;
} PXGDecorationSpriteInfo;

typedef struct PXFaceTileImageParams {
    CGSize targetSize;
    NSUInteger cropFactor;
    NSUInteger style;
    BOOL cropBounded;
} PXFaceTileImageParams;

typedef struct vector<PXStoryAutoEditComposabilityScores, std::allocator<PXStoryAutoEditComposabilityScores>> {
} // Error Processing Struct Fields

typedef struct _PXStoryAutoEditCropScore {
    float field0;
    float field1;
} _PXStoryAutoEditCropScore;

typedef struct _PXStoryAutoEditCropScoreInfo {
    _PXStoryAutoEditCropScore field0;
    _PXStoryAutoEditCropScore field1;
} _PXStoryAutoEditCropScoreInfo;

typedef struct vector<(anonymous namespace)::_PXStoryAutoEditCropScoreInfo, std::allocator<(anonymous namespace)::_PXStoryAutoEditCropScoreInfo>> {
} // Error Processing Struct Fields

typedef struct __CFNumberFormatter {
} // Error Processing Struct Fields

typedef struct __CVPixelBufferPool {
} // Error Processing Struct Fields

typedef struct __CVMetalTextureCache {
} // Error Processing Struct Fields

typedef struct archive {
} // Error Processing Struct Fields

typedef struct PXTileInfo {
    NSInteger index;
    CGSize imageSize;
    CGSize minimumSize;
    BOOL hasCaption;
    BOOL hasLikes;
    NSInteger commentCount;
    BOOL isBatchStart;
} PXTileInfo;

typedef struct OpaqueCMClock {
} // Error Processing Struct Fields

typedef struct PXContextualNotificationVisualState {
    BOOL onscreen;
    CGRect containingFrame;
    CGFloat verticalOffset;
    CGFloat alpha;
} PXContextualNotificationVisualState;

typedef struct PXMagazineOrigin {
    NSInteger field0;
    NSInteger field1;
} PXMagazineOrigin;

typedef struct PXMagazineSize {
    NSInteger field0;
    NSInteger field1;
} PXMagazineSize;

typedef struct PXMagazineRect {
    PXMagazineOrigin field0;
    PXMagazineSize field1;
} PXMagazineRect;

typedef struct CGColorConversionInfo {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct __CFRunLoopObserver {
} // Error Processing Struct Fields

typedef struct PXGThumbnailRequest {
    void field0;
    NSUInteger field1;
    unsigned int field2;
    unsigned short field3;
    unsigned short field4;
} PXGThumbnailRequest;

typedef struct _PXLRUMemoryCacheListElement {
} // Error Processing Struct Fields

typedef struct _PXLRUMemoryCacheList {
} // Error Processing Struct Fields

typedef struct PXGImageRequest {
    unsigned int field0;
    int field1;
    void field2;
} PXGImageRequest;

typedef struct _PXValueAnimationSpec {
    NSInteger type;
    CGFloat duration;
    NSInteger curve;
    CGFloat epsilon;
    CGFloat stiffness;
    CGFloat dampingRatio;
    CGFloat initialVelocity;
} _PXValueAnimationSpec;

typedef struct PXFloatRange {
    CGFloat field0;
    CGFloat field1;
} PXFloatRange;

typedef struct _LayoutContext {
    UIEdgeInsets contentInsets;
    CGSize itemSize;
    CGSize interitemSpacing;
    CGSize size;
    NSUInteger numberOfColumns;
    NSUInteger numberOfRows;
    NSInteger layoutAxis;
} _LayoutContext;

typedef struct _PXGEngineScrollState {
    CGSize referenceSize;
    UIEdgeInsets contentInsets;
    CGRect visibleRect;
    CGRect targetRect;
    CGRect constrainedVisibleRect;
    CGPoint lastScrollDirection;
    NSInteger scrollSpeedRegime;
} _PXGEngineScrollState;

typedef struct _moFactoryClassFlags {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
} _moFactoryClassFlags;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, PXGRequestDetails>, std::hash<int>, std::equal_to<int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, PXGRequestDetails>, std::hash<int>, std::equal_to<int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, PXGRequestDetails>, std::equal_to<int>, std::hash<int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, PXGRequestDetails>, std::equal_to<int>, std::hash<int>, true>>;

typedef struct __hash_table<std::__hash_value_type<int, PXGRequestDetails>, std::__unordered_map_hasher<int, std::__hash_value_type<int, PXGRequestDetails>, std::hash<int>, std::equal_to<int>, true>, std::__unordered_map_equal<int, std::__hash_value_type<int, PXGRequestDetails>, std::equal_to<int>, std::hash<int>, true>, std::allocator<std::__hash_value_type<int, PXGRequestDetails>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, PXGRequestDetails>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, PXGRequestDetails>, std::hash<int>, std::equal_to<int>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, PXGRequestDetails>, std::equal_to<int>, std::hash<int>, true>> __p3_;
} __hash_table<std::__hash_value_type<int, PXGRequestDetails>, std::__unordered_map_hasher<int, std::__hash_value_type<int, PXGRequestDetails>, std::hash<int>, std::equal_to<int>, true>, std::__unordered_map_equal<int, std::__hash_value_type<int, PXGRequestDetails>, std::equal_to<int>, std::hash<int>, true>, std::allocator<std::__hash_value_type<int, PXGRequestDetails>>>;

typedef struct unordered_map<int, PXGRequestDetails, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, PXGRequestDetails>>> {
    __hash_table<std::__hash_value_type<int, PXGRequestDetails>, std::__unordered_map_hasher<int, std::__hash_value_type<int, PXGRequestDetails>, std::hash<int>, std::equal_to<int>, true>, std::__unordered_map_equal<int, std::__hash_value_type<int, PXGRequestDetails>, std::equal_to<int>, std::hash<int>, true>, std::allocator<std::__hash_value_type<int, PXGRequestDetails>>> __table_;
} unordered_map<int, PXGRequestDetails, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, PXGRequestDetails>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, unsigned int>, std::hash<int>, std::equal_to<int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, unsigned int>, std::hash<int>, std::equal_to<int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, unsigned int>, std::equal_to<int>, std::hash<int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, unsigned int>, std::equal_to<int>, std::hash<int>, true>>;

typedef struct __hash_table<std::__hash_value_type<int, unsigned int>, std::__unordered_map_hasher<int, std::__hash_value_type<int, unsigned int>, std::hash<int>, std::equal_to<int>, true>, std::__unordered_map_equal<int, std::__hash_value_type<int, unsigned int>, std::equal_to<int>, std::hash<int>, true>, std::allocator<std::__hash_value_type<int, unsigned int>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, unsigned int>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, unsigned int>, std::hash<int>, std::equal_to<int>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, unsigned int>, std::equal_to<int>, std::hash<int>, true>> __p3_;
} __hash_table<std::__hash_value_type<int, unsigned int>, std::__unordered_map_hasher<int, std::__hash_value_type<int, unsigned int>, std::hash<int>, std::equal_to<int>, true>, std::__unordered_map_equal<int, std::__hash_value_type<int, unsigned int>, std::equal_to<int>, std::hash<int>, true>, std::allocator<std::__hash_value_type<int, unsigned int>>>;

typedef struct unordered_map<int, unsigned int, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, unsigned int>>> {
    __hash_table<std::__hash_value_type<int, unsigned int>, std::__unordered_map_hasher<int, std::__hash_value_type<int, unsigned int>, std::hash<int>, std::equal_to<int>, true>, std::__unordered_map_equal<int, std::__hash_value_type<int, unsigned int>, std::equal_to<int>, std::hash<int>, true>, std::allocator<std::__hash_value_type<int, unsigned int>>> __table_;
} unordered_map<int, unsigned int, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, unsigned int>>>;

typedef struct vector<PFStoryDurationInfo, std::allocator<PFStoryDurationInfo>> {
} // Error Processing Struct Fields

typedef struct PXAlphaLayer {
} // Error Processing Struct Fields

typedef struct PXAlphaTransitionInfo {
} // Error Processing Struct Fields

typedef struct atomic_flag {
    uint8_t _Value;
    BOOL field1;
} atomic_flag;

typedef struct PHAssetResourceTableDataSpecification {
    int width;
    int height;
    int bytesPerRow;
    int dataWidth;
    int dataHeight;
    int imageDataOffset;
    NSInteger kind;
} PHAssetResourceTableDataSpecification;

typedef struct _CAImageQueue {
} // Error Processing Struct Fields

typedef struct CGDataConsumer {
} // Error Processing Struct Fields

