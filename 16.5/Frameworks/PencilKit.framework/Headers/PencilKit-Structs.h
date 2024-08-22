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

typedef struct CGVector {
    CGFloat field0;
    CGFloat field1;
} CGVector;

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
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

typedef struct AttachmentTileInfo {
} // Error Processing Struct Fields

typedef struct vector<AttachmentTileInfo, std::allocator<AttachmentTileInfo>> {
} // Error Processing Struct Fields

typedef struct CACornerRadii {
    CGSize field0;
    CGSize field1;
    CGSize field2;
    CGSize field3;
} CACornerRadii;

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

typedef struct _UIUpdateSequenceItemInternal {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct vector<PKInputPoint, std::allocator<PKInputPoint>> {
} // Error Processing Struct Fields

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
    float field9;
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
    CGFloat radius2;
} _PKStrokePoint;

typedef struct PKStrokePathPointsShared {
} // Error Processing Struct Fields

typedef struct shared_ptr<PKStrokePathPointsShared> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> {
    char * field0;
} __compressed_pair<unsigned char *, std::allocator<unsigned char>>;

typedef struct vector<unsigned char, std::allocator<unsigned char>> {
    char * field0;
    char * field1;
    __compressed_pair<unsigned char *, std::allocator<unsigned char>> field2;
} vector<unsigned char, std::allocator<unsigned char>>;

typedef struct PKStrokePathPointsPrivate {
} // Error Processing Struct Fields

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

typedef struct PKShaderPipelineConfig {
    unsigned char framebufferPixelFormats;
} PKShaderPipelineConfig;

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

typedef struct Point {
    unk field0;
    float field1;
    float field2;
    ? field3;
} Point;

typedef struct StrokeID {
    unk field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    ? field4;
} StrokeID;

typedef struct vector<CGPoint, std::allocator<CGPoint>> {
} // Error Processing Struct Fields

typedef struct linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U> {
    unsigned int __x_;
} linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U>;

typedef struct Edge {
    CGPoint field0;
    CGPoint field1;
} Edge;

typedef struct vector<_PKFloatRange, std::allocator<_PKFloatRange>> {
} // Error Processing Struct Fields

typedef struct RendererFramebuffer {
    id framebuffer;
    BOOL PKMetalFramebuffer;
    BOOL isNonPurgeable;
} RendererFramebuffer;

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

typedef struct vector<_PKStrokePoint, std::allocator<_PKStrokePoint>> {
} // Error Processing Struct Fields

typedef struct __DDResult {
} // Error Processing Struct Fields

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

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<(anonymous namespace)::PKMetalShaderKey, std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKMetalShaderKey>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<(anonymous namespace)::PKMetalShaderKey, std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKMetalShaderKey>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<(anonymous namespace)::PKMetalShaderKey, std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, std::equal_to<(anonymous namespace)::PKMetalShaderKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<(anonymous namespace)::PKMetalShaderKey, std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, std::equal_to<(anonymous namespace)::PKMetalShaderKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>>;

typedef struct __hash_table<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, std::__unordered_map_hasher<(anonymous namespace)::PKMetalShaderKey, std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKMetalShaderKey>, true>, std::__unordered_map_equal<(anonymous namespace)::PKMetalShaderKey, std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, std::equal_to<(anonymous namespace)::PKMetalShaderKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>, std::allocator<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<(anonymous namespace)::PKMetalShaderKey, std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKMetalShaderKey>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<(anonymous namespace)::PKMetalShaderKey, std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, std::equal_to<(anonymous namespace)::PKMetalShaderKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>> __p3_;
} __hash_table<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, std::__unordered_map_hasher<(anonymous namespace)::PKMetalShaderKey, std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKMetalShaderKey>, true>, std::__unordered_map_equal<(anonymous namespace)::PKMetalShaderKey, std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, std::equal_to<(anonymous namespace)::PKMetalShaderKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>, std::allocator<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>>>;

typedef struct unordered_map<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKMetalShaderKey>, std::allocator<std::pair<const (anonymous namespace)::PKMetalShaderKey, PKMetalShader *>>> {
    __hash_table<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, std::__unordered_map_hasher<(anonymous namespace)::PKMetalShaderKey, std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKMetalShaderKey>, true>, std::__unordered_map_equal<(anonymous namespace)::PKMetalShaderKey, std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>, std::equal_to<(anonymous namespace)::PKMetalShaderKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>, std::allocator<std::__hash_value_type<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *>>> __table_;
} unordered_map<(anonymous namespace)::PKMetalShaderKey, PKMetalShader *, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKMetalShaderKey>, std::allocator<std::pair<const (anonymous namespace)::PKMetalShaderKey, PKMetalShader *>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<(anonymous namespace)::PKSixChannelShaderKey, std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKSixChannelShaderKey>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<(anonymous namespace)::PKSixChannelShaderKey, std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKSixChannelShaderKey>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<(anonymous namespace)::PKSixChannelShaderKey, std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, std::equal_to<(anonymous namespace)::PKSixChannelShaderKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<(anonymous namespace)::PKSixChannelShaderKey, std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, std::equal_to<(anonymous namespace)::PKSixChannelShaderKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>>;

typedef struct __hash_table<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, std::__unordered_map_hasher<(anonymous namespace)::PKSixChannelShaderKey, std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKSixChannelShaderKey>, true>, std::__unordered_map_equal<(anonymous namespace)::PKSixChannelShaderKey, std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, std::equal_to<(anonymous namespace)::PKSixChannelShaderKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>, std::allocator<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<(anonymous namespace)::PKSixChannelShaderKey, std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKSixChannelShaderKey>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<(anonymous namespace)::PKSixChannelShaderKey, std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, std::equal_to<(anonymous namespace)::PKSixChannelShaderKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>> __p3_;
} __hash_table<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, std::__unordered_map_hasher<(anonymous namespace)::PKSixChannelShaderKey, std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKSixChannelShaderKey>, true>, std::__unordered_map_equal<(anonymous namespace)::PKSixChannelShaderKey, std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, std::equal_to<(anonymous namespace)::PKSixChannelShaderKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>, std::allocator<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>>>;

typedef struct unordered_map<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKSixChannelShaderKey>, std::allocator<std::pair<const (anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>>> {
    __hash_table<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, std::__unordered_map_hasher<(anonymous namespace)::PKSixChannelShaderKey, std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKSixChannelShaderKey>, true>, std::__unordered_map_equal<(anonymous namespace)::PKSixChannelShaderKey, std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>, std::equal_to<(anonymous namespace)::PKSixChannelShaderKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>, std::allocator<std::__hash_value_type<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>>> __table_;
} unordered_map<(anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKSixChannelShaderKey>, std::allocator<std::pair<const (anonymous namespace)::PKSixChannelShaderKey, PKMetalShader *>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<PKNamedShaderKey, std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<PKNamedShaderKey>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<PKNamedShaderKey, std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<PKNamedShaderKey>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<PKNamedShaderKey, std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, std::equal_to<PKNamedShaderKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<PKNamedShaderKey, std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, std::equal_to<PKNamedShaderKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>>;

typedef struct __hash_table<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, std::__unordered_map_hasher<PKNamedShaderKey, std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<PKNamedShaderKey>, true>, std::__unordered_map_equal<PKNamedShaderKey, std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, std::equal_to<PKNamedShaderKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>, std::allocator<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<PKNamedShaderKey, std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<PKNamedShaderKey>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<PKNamedShaderKey, std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, std::equal_to<PKNamedShaderKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>> __p3_;
} __hash_table<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, std::__unordered_map_hasher<PKNamedShaderKey, std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<PKNamedShaderKey>, true>, std::__unordered_map_equal<PKNamedShaderKey, std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, std::equal_to<PKNamedShaderKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>, std::allocator<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>>>;

typedef struct unordered_map<PKNamedShaderKey, PKMetalShader *, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<PKNamedShaderKey>, std::allocator<std::pair<const PKNamedShaderKey, PKMetalShader *>>> {
    __hash_table<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, std::__unordered_map_hasher<PKNamedShaderKey, std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<PKNamedShaderKey>, true>, std::__unordered_map_equal<PKNamedShaderKey, std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>, std::equal_to<PKNamedShaderKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>, std::allocator<std::__hash_value_type<PKNamedShaderKey, PKMetalShader *>>> __table_;
} unordered_map<PKNamedShaderKey, PKMetalShader *, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<PKNamedShaderKey>, std::allocator<std::pair<const PKNamedShaderKey, PKMetalShader *>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<PKShaderPipelineConfig, std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<PKShaderPipelineConfig>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<PKShaderPipelineConfig, std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<PKShaderPipelineConfig>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<PKShaderPipelineConfig, std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, std::equal_to<PKShaderPipelineConfig>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<PKShaderPipelineConfig, std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, std::equal_to<PKShaderPipelineConfig>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>>;

typedef struct __hash_table<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, std::__unordered_map_hasher<PKShaderPipelineConfig, std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<PKShaderPipelineConfig>, true>, std::__unordered_map_equal<PKShaderPipelineConfig, std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, std::equal_to<PKShaderPipelineConfig>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>, std::allocator<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<PKShaderPipelineConfig, std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<PKShaderPipelineConfig>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<PKShaderPipelineConfig, std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, std::equal_to<PKShaderPipelineConfig>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>> __p3_;
} __hash_table<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, std::__unordered_map_hasher<PKShaderPipelineConfig, std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<PKShaderPipelineConfig>, true>, std::__unordered_map_equal<PKShaderPipelineConfig, std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, std::equal_to<PKShaderPipelineConfig>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>, std::allocator<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>>>;

typedef struct unordered_map<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<PKShaderPipelineConfig>, std::allocator<std::pair<const PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>>> {
    __hash_table<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, std::__unordered_map_hasher<PKShaderPipelineConfig, std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<PKShaderPipelineConfig>, true>, std::__unordered_map_equal<PKShaderPipelineConfig, std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>, std::equal_to<PKShaderPipelineConfig>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>, std::allocator<std::__hash_value_type<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>>> __table_;
} unordered_map<PKShaderPipelineConfig, MTLRenderPipelineDescriptor *, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<PKShaderPipelineConfig>, std::allocator<std::pair<const PKShaderPipelineConfig, MTLRenderPipelineDescriptor *>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<(anonymous namespace)::PKMetalKernelKey, std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKMetalKernelKey>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<(anonymous namespace)::PKMetalKernelKey, std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKMetalKernelKey>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<(anonymous namespace)::PKMetalKernelKey, std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, std::equal_to<(anonymous namespace)::PKMetalKernelKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<(anonymous namespace)::PKMetalKernelKey, std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, std::equal_to<(anonymous namespace)::PKMetalKernelKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>>;

typedef struct __hash_table<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, std::__unordered_map_hasher<(anonymous namespace)::PKMetalKernelKey, std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKMetalKernelKey>, true>, std::__unordered_map_equal<(anonymous namespace)::PKMetalKernelKey, std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, std::equal_to<(anonymous namespace)::PKMetalKernelKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>, std::allocator<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<(anonymous namespace)::PKMetalKernelKey, std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKMetalKernelKey>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<(anonymous namespace)::PKMetalKernelKey, std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, std::equal_to<(anonymous namespace)::PKMetalKernelKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>> __p3_;
} __hash_table<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, std::__unordered_map_hasher<(anonymous namespace)::PKMetalKernelKey, std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKMetalKernelKey>, true>, std::__unordered_map_equal<(anonymous namespace)::PKMetalKernelKey, std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, std::equal_to<(anonymous namespace)::PKMetalKernelKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>, std::allocator<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>>>;

typedef struct unordered_map<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKMetalKernelKey>, std::allocator<std::pair<const (anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>>> {
    __hash_table<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, std::__unordered_map_hasher<(anonymous namespace)::PKMetalKernelKey, std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKMetalKernelKey>, true>, std::__unordered_map_equal<(anonymous namespace)::PKMetalKernelKey, std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>, std::equal_to<(anonymous namespace)::PKMetalKernelKey>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, true>, std::allocator<std::__hash_value_type<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>>> __table_;
} unordered_map<(anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>, (anonymous namespace)::PKMetalResourceHandlerHashFunctions, std::equal_to<(anonymous namespace)::PKMetalKernelKey>, std::allocator<std::pair<const (anonymous namespace)::PKMetalKernelKey, id<MTLComputePipelineState>>>>;

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

typedef struct __compressed_pair<PKRunningStat *, std::default_delete<PKRunningStat>> {
} // Error Processing Struct Fields

typedef struct unique_ptr<PKRunningStat, std::default_delete<PKRunningStat>> {
    __compressed_pair<PKRunningStat *, std::default_delete<PKRunningStat>> __ptr_;
} unique_ptr<PKRunningStat, std::default_delete<PKRunningStat>>;

