typedef struct TSCHDurationFormatProperties {
    BOOL field0;
    unsigned char field1;
    unsigned char field2;
    unsigned char field3;
} TSCHDurationFormatProperties;

typedef struct TSCHNumericFormatProperties {
    NSUInteger field0;
    unsigned char field1;
    BOOL field2;
} TSCHNumericFormatProperties;

typedef struct TSCHCurrencyFormatProperties {
    TSCHNumericFormatProperties field0;
    BOOL field1;
    id field2;
} TSCHCurrencyFormatProperties;

typedef struct TSCHFractionFormatProperties {
    char field0;
} TSCHFractionFormatProperties;

typedef struct TSCHBaseFormatProperties {
    unsigned char field0;
    unsigned char field1;
    BOOL field2;
} TSCHBaseFormatProperties;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct ? {
    BOOL forceOmitLegend;
    BOOL forceOmitTitle;
    BOOL forceOmitAxisTitle;
    BOOL forceOmitLabelPlacement;
    BOOL forceTitleAtTop;
    BOOL forceLegendAtBottom;
    BOOL enable3DTightBounds;
    BOOL enable3DScaledDepthBounds;
    NSInteger maxDepthRatioType;
    NSUInteger max3DLimitingSeries;
} ?;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct tvec2<float> {
    unk ;
    float x;
    float r;
    float s;
    unk ;
    float y;
    float g;
    float t;
} tvec2<float>;

typedef struct tvec3<float> {
    unk ;
    float x;
    float r;
    float s;
    unk ;
    float y;
    float g;
    float t;
    unk ;
    float z;
    float b;
    float p;
} tvec3<float>;

typedef struct tvec4<float> {
    unk ;
    float x;
    float r;
    float s;
    unk ;
    float y;
    float g;
    float t;
    unk ;
    float z;
    float b;
    float p;
    unk ;
    float w;
    float a;
    float q;
} tvec4<float>;

typedef struct InternalMetadata {
    void field0;
} InternalMetadata;

typedef struct Message {
    unk field0;
    InternalMetadata field1;
} Message;

typedef struct tvec2<int> {
    unk ;
    int x;
    int r;
    int s;
    unk ;
    int y;
    int g;
    int t;
} tvec2<int>;

typedef struct tquat<float> {
    float x;
    float y;
    float z;
    float w;
} tquat<float>;

typedef struct Transform {
    tvec3<float> field0;
    tvec3<float> field1;
    tquat<float> field2;
    tvec3<float> field3;
    BOOL field4;
} Transform;

typedef struct tmat4x4<float> {
    tvec4<float> value;
} tmat4x4<float>;

typedef struct line<glm::detail::tvec3<float>> {
    tvec3<float> _position;
    tvec3<float> _direction;
} line<glm::detail::tvec3<float>>;

typedef struct pair<TSCH3DAxisLabelEnumerator *, TSCH3DAxisLabelEnumerator *> {
    id field0;
    id field1;
} pair<TSCH3DAxisLabelEnumerator *, TSCH3DAxisLabelEnumerator *>;

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

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

typedef struct CGPath {
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

typedef struct BlendState {
    BOOL _blend;
    int _blendMode;
} BlendState;

typedef struct DepthState {
    BOOL depthTest;
    BOOL depthMask;
} DepthState;

typedef struct array<bool, 8> {
    BOOL __elems_;
} array<bool, 8>;

typedef struct EnableClipDistances {
    array<bool, 8> states;
} EnableClipDistances;

typedef struct RenderState {
    BlendState blendState;
    DepthState depthState;
    BOOL culling;
    BOOL cullBack;
    BOOL polygonOffset;
    float polygonOffsetFactor;
    float polygonOffsetUnits;
    EnableClipDistances enableClipDistances;
} RenderState;

typedef struct TextureSizeHint {
    int field0;
    tvec2<int> field1;
} TextureSizeHint;

typedef struct RenderHints {
    TextureSizeHint field0;
} RenderHints;

typedef struct AttributeSpecs {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
} AttributeSpecs;

typedef struct StateStack<glm::detail::tmat4x4<float>, 8> {
    NSUInteger _index;
    tmat4x4<float> _current;
    tmat4x4<float> _stack;
} StateStack<glm::detail::tmat4x4<float>, 8>;

typedef struct ObjcSharedPtr<NSSet> {
    id mValue;
} ObjcSharedPtr<NSSet>;

typedef struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> *, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>>> {
    void __value_;
} __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> *, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>>>;

typedef struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>>> {
    void __begin_;
    void __end_;
    __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> *, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>>> __end_cap_;
} vector<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>>>;

typedef struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> *, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>>> {
    void __value_;
} __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> *, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>>>;

typedef struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>>> {
    void __begin_;
    void __end_;
    __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> *, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>>> __end_cap_;
} vector<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>>>;

typedef struct ObjectState {
    ObjcSharedPtr<NSSet> _effects;
    vector<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>>> _attributes;
    vector<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>>> _textures;
} ObjectState;

typedef struct StateStack<TSCH3D::ObjectState, 6> {
    NSUInteger _index;
    ObjectState _current;
    ObjectState _stack;
} StateStack<TSCH3D::ObjectState, 6>;

typedef struct StateStack<TSCH3D::RenderState, 10> {
    NSUInteger _index;
    RenderState _current;
    RenderState _stack;
} StateStack<TSCH3D::RenderState, 10>;

typedef struct box<glm::detail::tvec2<int>> {
    tvec2<int> _min;
    tvec2<int> _max;
} box<glm::detail::tvec2<int>>;

typedef struct box<glm::detail::tvec3<float>> {
    tvec3<float> _min;
    tvec3<float> _max;
} box<glm::detail::tvec3<float>>;

typedef struct __compressed_pair<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>> *, std::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>>> {
    void __value_;
} __compressed_pair<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>> *, std::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>>>;

typedef struct vector<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>, std::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>>> {
    void __begin_;
    void __end_;
    __compressed_pair<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>> *, std::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>>> __end_cap_;
} vector<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>, std::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>>>;

typedef struct ObjectBounds {
    box<glm::detail::tvec3<float>> _bounds;
    box<glm::detail::tvec3<float>> _projected;
    box<glm::detail::tvec3<float>> _2DProjected;
    vector<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>, std::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>>> _boxes;
} ObjectBounds;

typedef struct ElementRenderPass {
    int field0;
} ElementRenderPass;

typedef struct BarElementInfo {
    BOOL field0;
    float field1;
    BOOL field2;
    NSUInteger field3;
} BarElementInfo;

typedef struct BarExtrusionCrossSectionDetails {
    float detail;
    float tension;
    float adaptiveThreshold;
    float creaseAngle;
    int crossType;
} BarExtrusionCrossSectionDetails;

typedef struct BarExtrusionSpineDetails {
    float bevelHeight;
    NSInteger bevelSlices;
    NSInteger stride;
    float creaseAngle;
} BarExtrusionSpineDetails;

typedef struct BarExtrusionDetails {
    BarExtrusionCrossSectionDetails crossSection;
    BarExtrusionSpineDetails spine;
} BarExtrusionDetails;

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float __value_;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float __begin_;
    float __end_;
    __compressed_pair<float *, std::allocator<float>> __end_cap_;
} vector<float, std::allocator<float>>;

typedef struct vector<TSCH3D::BarElementInfo, std::allocator<TSCH3D::BarElementInfo>> {
} // Error Processing Struct Fields

typedef struct array<TSCH3D::BarExtrusionDetails, 2> {
    BarExtrusionDetails __elems_;
} array<TSCH3D::BarExtrusionDetails, 2>;

typedef struct EdgeDetectionParameters {
    BOOL detectSilhouetteEdges;
    BOOL detectSharpEdges;
    float sharpEdgeThreshold;
} EdgeDetectionParameters;

typedef struct LabelTransform {
    tvec3<float> field0;
    tvec2<float> field1;
    unsigned int field2;
    float field3;
    BOOL field4;
} LabelTransform;

typedef struct plane<glm::detail::tvec3<float>> {
    tvec3<float> _normal;
    float _distance;
} plane<glm::detail::tvec3<float>>;

typedef struct TSCH3DShaderType {
    NSUInteger _value;
} TSCH3DShaderType;

typedef struct Color {
    float field0;
    float field1;
    float field2;
    float field3;
} Color;

typedef struct Vector3 {
    float field0;
    float field1;
    float field2;
} Vector3;

typedef struct DataBufferInfo {
    int componentType;
    NSUInteger components;
    NSUInteger count;
    NSUInteger byteSize;
    NSUInteger componentByteSize;
    NSUInteger elementByteSize;
} DataBufferInfo;

typedef struct pair<const char *, const char *> {
    char * field0;
    char * field1;
} pair<const char *, const char *>;

typedef struct IteratorRange<const char *> {
    pair<const char *, const char *> field0;
} IteratorRange<const char *>;

typedef struct pair<TSCH3D::IteratorRange<const char *>, TSCH3D::IteratorRange<const char *>> {
    IteratorRange<const char *> field0;
    IteratorRange<const char *> field1;
} pair<TSCH3D::IteratorRange<const char *>, TSCH3D::IteratorRange<const char *>>;

typedef struct TSCH3DShaderVariableScopeType {
    NSUInteger _value;
} TSCH3DShaderVariableScopeType;

typedef struct vector<TSCH3DShaderVariableScopeType, std::allocator<TSCH3DShaderVariableScopeType>> {
} // Error Processing Struct Fields

typedef struct pair<bool, TSCH3DShaderVariableLinkage *> {
    BOOL field0;
    id field1;
} pair<bool, TSCH3DShaderVariableLinkage *>;

typedef struct array<TSCH3DShaderVariableScopeType, 2> {
    TSCH3DShaderVariableScopeType __elems_;
} array<TSCH3DShaderVariableScopeType, 2>;

typedef struct TSCH3DShaderVariableScopes {
    array<TSCH3DShaderVariableScopeType, 2> _scopes;
} TSCH3DShaderVariableScopes;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct array<glm::detail::tmat4x4<float>, 2> {
    tmat4x4<float> __elems_;
} array<glm::detail::tmat4x4<float>, 2>;

typedef struct LightingPackageShaderEffectState {
    array<glm::detail::tmat4x4<float>, 2> transforms;
} LightingPackageShaderEffectState;

typedef struct tvec3<int> {
    unk ;
    int x;
    int r;
    int s;
    unk ;
    int y;
    int g;
    int t;
    unk ;
    int z;
    int b;
    int p;
} tvec3<int>;

typedef struct __compressed_pair<glm::detail::tvec2<int> *, std::allocator<glm::detail::tvec2<int>>> {
    void __value_;
} __compressed_pair<glm::detail::tvec2<int> *, std::allocator<glm::detail::tvec2<int>>>;

typedef struct vector<glm::detail::tvec2<int>, std::allocator<glm::detail::tvec2<int>>> {
    void __begin_;
    void __end_;
    __compressed_pair<glm::detail::tvec2<int> *, std::allocator<glm::detail::tvec2<int>>> __end_cap_;
} vector<glm::detail::tvec2<int>, std::allocator<glm::detail::tvec2<int>>>;

typedef struct box<glm::detail::tvec2<float>> {
    tvec2<float> _min;
    tvec2<float> _max;
} box<glm::detail::tvec2<float>>;

typedef struct TextureAttributes {
    int field0;
    int field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    TextureSizeHint field5;
    BOOL field6;
} TextureAttributes;

typedef struct ResourceAttributeState {
} // Error Processing Struct Fields

typedef struct vector<TSCH3D::ResourceAttributeState, std::allocator<TSCH3D::ResourceAttributeState>> {
} // Error Processing Struct Fields

typedef struct TextureAttributeState {
} // Error Processing Struct Fields

typedef struct vector<TSCH3D::TextureAttributeState, std::allocator<TSCH3D::TextureAttributeState>> {
} // Error Processing Struct Fields

typedef struct ObjectStateMatchObject {
    ObjcSharedPtr<NSSet> _effects;
    vector<TSCH3D::ResourceAttributeState, std::allocator<TSCH3D::ResourceAttributeState>> _attributes;
    vector<TSCH3D::TextureAttributeState, std::allocator<TSCH3D::TextureAttributeState>> _textures;
} ObjectStateMatchObject;

typedef struct BarExtrusionSetting {
    float size;
    BOOL hasTopBevel;
    BOOL hasBottomBevel;
    BOOL isCylindrical;
    BOOL isStackedBar;
    BarExtrusionDetails details;
} BarExtrusionSetting;

typedef struct TextureCoordinateConverter {
    box<glm::detail::tvec2<float>> field0;
} TextureCoordinateConverter;

typedef struct DataBuffer2DDimension {
    tvec2<int> _size;
    NSUInteger _components;
    BOOL _hasLevels;
} DataBuffer2DDimension;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct ColorResult {
    BOOL field0;
    Color field1;
} ColorResult;

typedef struct TSCHLegendAnchorLine {
    CGPoint normal;
    CGFloat distance;
} TSCHLegendAnchorLine;

typedef struct TSCHChartDrawableLayoutLegendResizerFrames {
    CGRect field0;
    CGRect field1;
    CGRect field2;
} TSCHChartDrawableLayoutLegendResizerFrames;

typedef struct TSCHLegendAnchorRange {
    CGFloat field0;
    CGFloat field1;
} TSCHLegendAnchorRange;

typedef struct __compressed_pair<glm::detail::tvec2<float> *, std::allocator<glm::detail::tvec2<float>>> {
    void __value_;
} __compressed_pair<glm::detail::tvec2<float> *, std::allocator<glm::detail::tvec2<float>>>;

typedef struct vector<glm::detail::tvec2<float>, std::allocator<glm::detail::tvec2<float>>> {
    void __begin_;
    void __end_;
    __compressed_pair<glm::detail::tvec2<float> *, std::allocator<glm::detail::tvec2<float>>> __end_cap_;
} vector<glm::detail::tvec2<float>, std::allocator<glm::detail::tvec2<float>>>;

typedef struct __compressed_pair<glm::detail::tvec3<float> *, std::allocator<glm::detail::tvec3<float>>> {
    void __value_;
} __compressed_pair<glm::detail::tvec3<float> *, std::allocator<glm::detail::tvec3<float>>>;

typedef struct vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>> {
    void __begin_;
    void __end_;
    __compressed_pair<glm::detail::tvec3<float> *, std::allocator<glm::detail::tvec3<float>>> __end_cap_;
} vector<glm::detail::tvec3<float>, std::allocator<glm::detail::tvec3<float>>>;

typedef struct __compressed_pair<long *, std::allocator<long>> {
    NSInteger __value_;
} __compressed_pair<long *, std::allocator<long>>;

typedef struct vector<long, std::allocator<long>> {
    NSInteger __begin_;
    NSInteger __end_;
    __compressed_pair<long *, std::allocator<long>> __end_cap_;
} vector<long, std::allocator<long>>;

typedef struct tmat3x3<float> {
    tvec3<float> value;
} tmat3x3<float>;

typedef struct DataBufferLevelData {
    void field0;
    tvec3<int> field1;
} DataBufferLevelData;

typedef struct __compressed_pair<glm::detail::tvec1<float> *, std::allocator<glm::detail::tvec1<float>>> {
    void __value_;
} __compressed_pair<glm::detail::tvec1<float> *, std::allocator<glm::detail::tvec1<float>>>;

typedef struct vector<glm::detail::tvec1<float>, std::allocator<glm::detail::tvec1<float>>> {
    void __begin_;
    void __end_;
    __compressed_pair<glm::detail::tvec1<float> *, std::allocator<glm::detail::tvec1<float>>> __end_cap_;
} vector<glm::detail::tvec1<float>, std::allocator<glm::detail::tvec1<float>>>;

typedef struct __compressed_pair<glm::detail::tvec4<float> *, std::allocator<glm::detail::tvec4<float>>> {
    void __value_;
} __compressed_pair<glm::detail::tvec4<float> *, std::allocator<glm::detail::tvec4<float>>>;

typedef struct vector<glm::detail::tvec4<float>, std::allocator<glm::detail::tvec4<float>>> {
    void __begin_;
    void __end_;
    __compressed_pair<glm::detail::tvec4<float> *, std::allocator<glm::detail::tvec4<float>>> __end_cap_;
} vector<glm::detail::tvec4<float>, std::allocator<glm::detail::tvec4<float>>>;

typedef struct __compressed_pair<TSCH3D::PODType<unsigned char> *, std::allocator<TSCH3D::PODType<unsigned char>>> {
    void __value_;
} __compressed_pair<TSCH3D::PODType<unsigned char> *, std::allocator<TSCH3D::PODType<unsigned char>>>;

typedef struct vector<TSCH3D::PODType<unsigned char>, std::allocator<TSCH3D::PODType<unsigned char>>> {
    void __begin_;
    void __end_;
    __compressed_pair<TSCH3D::PODType<unsigned char> *, std::allocator<TSCH3D::PODType<unsigned char>>> __end_cap_;
} vector<TSCH3D::PODType<unsigned char>, std::allocator<TSCH3D::PODType<unsigned char>>>;

typedef struct __compressed_pair<TSCH3D::PODType<unsigned short> *, std::allocator<TSCH3D::PODType<unsigned short>>> {
    void __value_;
} __compressed_pair<TSCH3D::PODType<unsigned short> *, std::allocator<TSCH3D::PODType<unsigned short>>>;

typedef struct vector<TSCH3D::PODType<unsigned short>, std::allocator<TSCH3D::PODType<unsigned short>>> {
    void __begin_;
    void __end_;
    __compressed_pair<TSCH3D::PODType<unsigned short> *, std::allocator<TSCH3D::PODType<unsigned short>>> __end_cap_;
} vector<TSCH3D::PODType<unsigned short>, std::allocator<TSCH3D::PODType<unsigned short>>>;

typedef struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> {
    char * __value_;
} __compressed_pair<unsigned char *, std::allocator<unsigned char>>;

typedef struct vector<unsigned char, std::allocator<unsigned char>> {
    char * __begin_;
    char * __end_;
    __compressed_pair<unsigned char *, std::allocator<unsigned char>> __end_cap_;
} vector<unsigned char, std::allocator<unsigned char>>;

typedef struct DataBuffer3DDimension {
    tvec3<int> _size;
    NSUInteger _components;
} DataBuffer3DDimension;

typedef struct ResizingSize {
    tvec2<float> field0;
    tvec2<float> field1;
    tvec2<float> field2;
} ResizingSize;

typedef struct tvec2<bool> {
    unk ;
    BOOL x;
    BOOL r;
    BOOL s;
    unk ;
    BOOL y;
    BOOL g;
    BOOL t;
} tvec2<bool>;

typedef struct ResizeData {
    tvec2<float> size;
    tvec3<float> scale;
    tvec2<float> delta;
    tvec2<float> steps;
    tvec2<float> unrotatedSize;
    tvec2<float> chartOnlySize;
} ResizeData;

typedef struct ChartProjectedBoundsSpaces {
    box<glm::detail::tvec2<float>> _chart;
    box<glm::detail::tvec2<float>> _orient;
    box<glm::detail::tvec2<float>> _drawing;
    box<glm::detail::tvec2<float>> _layout;
    box<glm::detail::tvec2<float>> _layoutInPage;
    box<glm::detail::tvec2<float>> _bodyLayout;
    box<glm::detail::tvec2<float>> _bodyLayoutInPage;
    box<glm::detail::tvec2<float>> _containingViewport;
} ChartProjectedBoundsSpaces;

typedef struct TSCH3DChartSceneAreaLayoutItemCacheValues {
    tvec4<float> infoChartScale;
    tvec2<int> containingViewport;
    tvec2<float> chartBodyLayoutOffsetInChartAreaLayoutSpace;
    CGSize layoutSize;
    CGSize requestLayoutSize;
    CGSize chartBodyLayoutSize;
    CGSize requestChartBodyLayoutSize;
    tvec2<int> modelSize;
    ? layoutSettings;
    BOOL forcedValid;
} TSCH3DChartSceneAreaLayoutItemCacheValues;

typedef struct TSCHChartPieLabelGeometry {
    CGAffineTransform field0;
    CGSize field1;
    CGRect field2;
    CGRect field3;
} TSCHChartPieLabelGeometry;

typedef struct TSCHChartPieLabelGeometries {
    TSCHChartPieLabelGeometry field0;
    TSCHChartPieLabelGeometry field1;
} TSCHChartPieLabelGeometries;

typedef struct FramebufferAttributes {
    int type;
    NSInteger samples;
    int colorDataType;
    int colorFormat;
    int depthDataType;
    BOOL linearFilter;
    BOOL discardHint;
    BOOL useIOSurfaceBacking;
} FramebufferAttributes;

typedef struct LabelRenderInfo {
    tvec2<float> sampledLabelSize;
    tvec2<float> sampledLabelFullSize;
    tvec2<float> sampledLabelRenderOffset;
    tvec2<float> sampledAlignmentPadding;
} LabelRenderInfo;

typedef struct ValueEnumerator {
    BOOL _forward;
    NSUInteger _index;
    NSUInteger _max;
    CGFloat _value;
} ValueEnumerator;

typedef struct __compressed_pair<double *, std::allocator<double>> {
    CGFloat __value_;
} __compressed_pair<double *, std::allocator<double>>;

typedef struct vector<double, std::allocator<double>> {
    CGFloat __begin_;
    CGFloat __end_;
    __compressed_pair<double *, std::allocator<double>> __end_cap_;
} vector<double, std::allocator<double>>;

typedef struct FlushResult {
    BOOL field0;
    BOOL field1;
} FlushResult;

typedef struct AxisGridLocation {
    BOOL field0;
    NSUInteger field1;
    NSUInteger field2;
    tvec3<float> field3;
} AxisGridLocation;

typedef struct TSCH3DChartRotationLimit {
    float field0;
    float field1;
    float field2;
    float field3;
} TSCH3DChartRotationLimit;

typedef struct UIEdgeInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIEdgeInsets;

typedef struct CGLayer {
} // Error Processing Struct Fields

typedef struct __CTFont {
} // Error Processing Struct Fields

typedef struct __CFLocale {
} // Error Processing Struct Fields

typedef struct TSCHTextLayoutResults {
    CGRect field0;
    CGFloat field1;
    BOOL field2;
} TSCHTextLayoutResults;

typedef struct __CFAttributedString {
} // Error Processing Struct Fields

typedef struct bitset<5> {
    NSUInteger __first_;
} bitset<5>;

typedef struct TSSPropertyStore {
} // Error Processing Struct Fields

typedef struct TSCHChartPieWedgeElementLayoutSystem {
    NSInteger coordinateSpace;
    CGPoint centerPoint;
} TSCHChartPieWedgeElementLayoutSystem;

typedef struct TSCHChartPieLabelRects {
    CGRect field0;
    CGRect field1;
} TSCHChartPieLabelRects;

typedef struct range<unsigned int> {
    unsigned int field0;
    unsigned int field1;
} range<unsigned int>;

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

