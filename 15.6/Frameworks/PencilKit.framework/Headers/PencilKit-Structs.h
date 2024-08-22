typedef struct CGPath {
} // Error Processing Struct Fields

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

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct _NSZone {
} // Error Processing Struct Fields

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
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
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

typedef struct CGColor {
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

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct AttachmentTileInfo {
} // Error Processing Struct Fields

typedef struct vector<AttachmentTileInfo, std::allocator<AttachmentTileInfo>> {
} // Error Processing Struct Fields

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct _CARenderRendererInfo {
    int field0;
    unsigned int field1;
    unsigned int field2;
} _CARenderRendererInfo;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct _CAPropertyInfo {
    unsigned int field0;
    BOOL field1;
    BOOL field2;
    SEL field3;
    char * field4;
    __CFString field5;
} _CAPropertyInfo;

typedef struct _CALayerIvars {
    int refcount;
    unsigned int magic;
    void layer;
    void _objc_observation_info;
} _CALayerIvars;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct _PKStrokeID {
    unsigned int clock;
    unsigned char replicaUUID;
    unsigned int subclock;
} _PKStrokeID;

typedef struct PKProtobufUnknownFields {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<PKProtobufUnknownFields> {
    PKProtobufUnknownFields __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<PKProtobufUnknownFields>;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _PKPoint {
    float field0;
    float field1;
} _PKPoint;

typedef struct PKCompressedStrokePoint {
    _PKPoint field0;
    float field1;
    float field2;
    unsigned short field3;
    unsigned short field4;
    unsigned short field5;
    unsigned short field6;
    unsigned short field7;
    unsigned short field8;
} PKCompressedStrokePoint;

typedef struct _PKStrokePoint {
    CGFloat timestamp;
    CGPoint location;
    CGFloat radius;
    CGFloat aspectRatio;
    CGFloat edgeWidth;
    CGFloat force;
    CGFloat azimuth;
    CGFloat altitude;
    CGFloat opacity;
} _PKStrokePoint;

typedef struct PKStrokePathPointsShared {
} // Error Processing Struct Fields

typedef struct shared_ptr<PKStrokePathPointsShared> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> {
    char * __value_;
} __compressed_pair<unsigned char *, std::allocator<unsigned char>>;

typedef struct vector<unsigned char, std::allocator<unsigned char>> {
    char * __begin_;
    char * __end_;
    __compressed_pair<unsigned char *, std::allocator<unsigned char>> __end_cap_;
} vector<unsigned char, std::allocator<unsigned char>>;

typedef struct PKStrokePathPointsPrivate {
    shared_ptr<PKStrokePathPointsShared> constants;
    vector<unsigned char, std::allocator<unsigned char>> pointsData;
} PKStrokePathPointsPrivate;

typedef struct __compressed_pair<std::vector<ClipperLib::IntPoint> *, std::allocator<std::vector<ClipperLib::IntPoint>>> {
    void __value_;
} __compressed_pair<std::vector<ClipperLib::IntPoint> *, std::allocator<std::vector<ClipperLib::IntPoint>>>;

typedef struct vector<std::vector<ClipperLib::IntPoint>, std::allocator<std::vector<ClipperLib::IntPoint>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::vector<ClipperLib::IntPoint> *, std::allocator<std::vector<ClipperLib::IntPoint>>> __end_cap_;
} vector<std::vector<ClipperLib::IntPoint>, std::allocator<std::vector<ClipperLib::IntPoint>>>;

typedef struct __IOMobileFramebuffer {
} // Error Processing Struct Fields

typedef struct atomic_flag {
    uint8_t _Value;
    BOOL field1;
} atomic_flag;

typedef struct PKRunningStat {
    NSInteger numValues;
    NSInteger numValuesOverLimit;
    CGFloat oldM;
    CGFloat newM;
    CGFloat oldS;
    CGFloat newS;
    CGFloat minValue;
    CGFloat maxValue;
    CGFloat limit;
    os_unfair_lock_s lock;
} PKRunningStat;

typedef struct PKFunction {
} // Error Processing Struct Fields

typedef struct __compressed_pair<PKFunction *, std::default_delete<PKFunction>> {
    PKFunction __value_;
} __compressed_pair<PKFunction *, std::default_delete<PKFunction>>;

typedef struct unique_ptr<PKFunction, std::default_delete<PKFunction>> {
    __compressed_pair<PKFunction *, std::default_delete<PKFunction>> __ptr_;
} unique_ptr<PKFunction, std::default_delete<PKFunction>>;

typedef struct __compressed_pair<double *, std::allocator<double>> {
    CGFloat __value_;
} __compressed_pair<double *, std::allocator<double>>;

typedef struct vector<double, std::allocator<double>> {
    CGFloat __begin_;
    CGFloat __end_;
    __compressed_pair<double *, std::allocator<double>> __end_cap_;
} vector<double, std::allocator<double>>;

typedef struct PKOutputFunction {
} // Error Processing Struct Fields

typedef struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::vector<PKCompressedStrokePoint> *, std::default_delete<std::vector<PKCompressedStrokePoint>>> {
    void field0;
} __compressed_pair<std::vector<PKCompressedStrokePoint> *, std::default_delete<std::vector<PKCompressedStrokePoint>>>;

typedef struct unique_ptr<std::vector<PKCompressedStrokePoint>, std::default_delete<std::vector<PKCompressedStrokePoint>>> {
    __compressed_pair<std::vector<PKCompressedStrokePoint> *, std::default_delete<std::vector<PKCompressedStrokePoint>>> field0;
} unique_ptr<std::vector<PKCompressedStrokePoint>, std::default_delete<std::vector<PKCompressedStrokePoint>>>;

typedef struct StrokeID {
    unk field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    ? field4;
} StrokeID;

typedef struct Point {
    unk field0;
    float field1;
    float field2;
    float field3;
    float field4;
    float field5;
    float field6;
    float field7;
    ? field8;
} Point;

typedef struct vector<CGPoint, std::allocator<CGPoint>> {
} // Error Processing Struct Fields

typedef struct Edge {
    CGPoint field0;
    CGPoint field1;
} Edge;

typedef struct vector<_PKFloatRange, std::allocator<_PKFloatRange>> {
} // Error Processing Struct Fields

typedef struct PKMetalParticleStrokePoint {
} // Error Processing Struct Fields

typedef struct vector<PKMetalParticleStrokePoint, std::allocator<PKMetalParticleStrokePoint>> {
} // Error Processing Struct Fields

typedef struct PKMetalPaintStrokePoint {
} // Error Processing Struct Fields

typedef struct vector<PKMetalPaintStrokePoint, std::allocator<PKMetalPaintStrokePoint>> {
} // Error Processing Struct Fields

typedef struct PKMetalLiveStrokePaintStrokePoint {
} // Error Processing Struct Fields

typedef struct vector<PKMetalLiveStrokePaintStrokePoint, std::allocator<PKMetalLiveStrokePaintStrokePoint>> {
} // Error Processing Struct Fields

typedef struct shared_ptr<std::vector<(anonymous namespace)::StrokeVertex>> {
} // Error Processing Struct Fields

typedef struct AnimatingStroke {
} // Error Processing Struct Fields

typedef struct vector<(anonymous namespace)::AnimatingStroke, std::allocator<(anonymous namespace)::AnimatingStroke>> {
} // Error Processing Struct Fields

typedef struct __DDResult {
} // Error Processing Struct Fields

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

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long long, PKMetalShader *>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, PKMetalShader *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, PKMetalShader *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long long, PKMetalShader *>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, PKMetalShader *>>>;

typedef struct unordered_map<unsigned long long, PKMetalShader *, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, PKMetalShader *>>> {
    __hash_table<std::__hash_value_type<unsigned long long, PKMetalShader *>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, PKMetalShader *>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, PKMetalShader *>>> __table_;
} unordered_map<unsigned long long, PKMetalShader *, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, PKMetalShader *>>>;

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct IntPoint {
} // Error Processing Struct Fields

typedef struct vector<ClipperLib::IntPoint, std::allocator<ClipperLib::IntPoint>> {
} // Error Processing Struct Fields

typedef struct TimestampedPoint {
} // Error Processing Struct Fields

typedef struct vector<TimestampedPoint, std::allocator<TimestampedPoint>> {
} // Error Processing Struct Fields

typedef struct vector<PKInputPoint, std::allocator<PKInputPoint>> {
} // Error Processing Struct Fields

typedef struct vector<_PKStrokePoint, std::allocator<_PKStrokePoint>> {
} // Error Processing Struct Fields

