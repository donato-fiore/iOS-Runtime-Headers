typedef struct SCNVector3 {
    float x;
    float y;
    float z;
} SCNVector3;

typedef struct SCNVector4 {
    float x;
    float y;
    float z;
    float w;
} SCNVector4;

typedef struct SCNMatrix4 {
    float m11;
    float m12;
    float m13;
    float m14;
    float m21;
    float m22;
    float m23;
    float m24;
    float m31;
    float m32;
    float m33;
    float m34;
    float m41;
    float m42;
    float m43;
    float m44;
} SCNMatrix4;

typedef struct ? {
    char * memory;
    id buffer;
    NSUInteger <MTLBuffer>;
} ?;

typedef struct C3DColor4 {
    unk ;
    float rgba;
    ? ;
} C3DColor4;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct SCNCAction {
    unk field0;
    CGFloat field1;
    id field2;
    unk field3;
    id field4;
    BOOL field5;
    CGFloat field6;
    CGFloat field7;
    CGFloat field8;
    CGFloat field9;
    CGFloat field10;
    BOOL field11;
    BOOL field12;
    id field13;
    unk field14;
    __CFString field15;
    NSInteger field16;
    CGFloat field17;
    CGFloat field18;
    CGFloat field19;
    CGFloat field20;
} SCNCAction;

typedef struct SCNCActionHide {
} // Error Processing Struct Fields

typedef struct __C3DScene {
} // Error Processing Struct Fields

typedef struct __C3DNode {
} // Error Processing Struct Fields

typedef struct __C3DImageProxy {
    __CFRuntimeBase field0;
    ? field1;
    void field2;
    unsigned char field3;
} __C3DImageProxy;

typedef struct __CFRuntimeBase {
    NSUInteger field0;
    uint8_t field1;
    NSUInteger field2;
} __CFRuntimeBase;

typedef struct __C3DTexture {
} // Error Processing Struct Fields

typedef struct __C3DStack {
} // Error Processing Struct Fields

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct __C3DRendererContext {
} // Error Processing Struct Fields

typedef struct __C3DEngineContext {
} // Error Processing Struct Fields

typedef struct __C3DTextureSampler {
    __CFRuntimeBase field0;
    int field1;
    int field2;
    int field3;
    int field4;
    int field5;
    int field6;
    C3DColor4 field7;
    float field8;
    unsigned char field9;
    int field10;
    NSUInteger field11;
} __C3DTextureSampler;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct __C3DFramebuffer {
} // Error Processing Struct Fields

typedef struct __C3DMeshSource {
    __C3DGenericSource field0;
    unsigned short field1;
    unsigned char field2;
    unsigned char field3;
} __C3DMeshSource;

typedef struct __C3DMorph {
} // Error Processing Struct Fields

typedef struct __C3DMesh {
} // Error Processing Struct Fields

typedef struct __C3DEntity {
} // Error Processing Struct Fields

typedef struct __C3DGeometry {
} // Error Processing Struct Fields

typedef struct __C3DMorpher {
} // Error Processing Struct Fields

typedef struct Target {
} // Error Processing Struct Fields

typedef struct __C3DSkinner {
} // Error Processing Struct Fields

typedef struct c3dPhysicsField {
    unk field0;
    ? field1;
    ? field2;
    float field3;
    float field4;
    float field5;
    unsigned int field6;
    BOOL field7;
    BOOL field8;
    BOOL field9;
    BOOL field10;
    float field11;
} c3dPhysicsField;

typedef struct btRigidBody {
} // Error Processing Struct Fields

typedef struct btHingeConstraint {
} // Error Processing Struct Fields

typedef struct btVector3 {
    unk field0;
    float field1;
} btVector3;

typedef struct btManifoldPoint {
    btVector3 field0;
    btVector3 field1;
    btVector3 field2;
    btVector3 field3;
    btVector3 field4;
    float field5;
    float field6;
    float field7;
    float field8;
    int field9;
    int field10;
    int field11;
    int field12;
    void field13;
    BOOL field14;
    float field15;
    float field16;
    float field17;
    float field18;
    float field19;
    float field20;
    float field21;
    int field22;
    btVector3 field23;
    btVector3 field24;
} btManifoldPoint;

typedef struct btCollisionObject {
} // Error Processing Struct Fields

typedef struct btPersistentManifold {
} // Error Processing Struct Fields

typedef struct __C3DModelTarget {
    __CFRuntimeBase field0;
    void field1;
    void field2;
    short field3;
    char field4;
    unsigned char field5;
    unsigned char field6;
    BOOL field7;
    unk field8;
    unk field9;
} __C3DModelTarget;

typedef struct __C3DMaterial {
} // Error Processing Struct Fields

typedef struct __C3DEngineStats {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    unsigned int field10;
    unsigned int field11;
    unsigned int field12;
    unsigned int field13;
    unsigned int field14;
    unsigned int field15;
    unsigned int field16;
    unsigned int field17;
    unsigned int field18;
    unsigned int field19;
    unsigned int field20;
    unsigned int field21;
    unsigned int field22;
    unsigned int field23;
    CGFloat field24;
    CGFloat field25;
    CGFloat field26;
    CGFloat field27;
    CGFloat field28;
    CGFloat field29;
    CGFloat field30;
    CGFloat field31;
    CGFloat field32;
    CGFloat field33;
    CGFloat field34;
    CGFloat field35;
    CGFloat field36;
    CGFloat field37;
    CGFloat field38;
    unsigned int field39;
    unsigned int field40;
    unsigned int field41;
    unsigned int field42;
    unsigned int field43;
    unsigned int field44;
    unsigned int field45;
    unsigned int field46;
    unsigned int field47;
    unsigned int field48;
    unsigned int field49;
    unsigned int field50;
    unsigned int field51;
    unsigned int field52;
    unsigned int field53;
    unsigned int field54;
    unsigned int field55;
    CGFloat field56;
    unsigned int field57;
    CGFloat field58;
    unsigned int field59;
    CGFloat field60;
    CGFloat field61;
    CGFloat field62;
    CGFloat field63;
    CGFloat field64;
    unsigned int field65;
    CGFloat field66;
    CGFloat field67;
} __C3DEngineStats;

typedef struct __C3DFXProgram {
} // Error Processing Struct Fields

typedef struct __C3DFXMetalProgram {
} // Error Processing Struct Fields

typedef struct __C3DFXPass {
} // Error Processing Struct Fields

typedef struct __C3DRasterizerStates {
} // Error Processing Struct Fields

typedef struct __CFData {
} // Error Processing Struct Fields

typedef struct __C3DGenericSource {
} // Error Processing Struct Fields

typedef struct __C3DMeshElement {
} // Error Processing Struct Fields

typedef struct __C3DRendererElement {
} // Error Processing Struct Fields

typedef struct __C3DFXPassInstance {
} // Error Processing Struct Fields

typedef struct SCNMTLBlitCommandEncoder {
    id _encoder;
    id <MTLBlitCommandEncoder>;
} SCNMTLBlitCommandEncoder;

typedef struct __C3DImage {
} // Error Processing Struct Fields

typedef struct __C3DEffectSlot {
} // Error Processing Struct Fields

typedef struct __C3DBlendStates {
} // Error Processing Struct Fields

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct SCNCPlaySound {
} // Error Processing Struct Fields

typedef struct __C3DAnimationManager {
} // Error Processing Struct Fields

typedef struct __C3DFXTechnique {
} // Error Processing Struct Fields

typedef struct btCollisionShape {
    unk field0;
    int field1;
    void field2;
} btCollisionShape;

typedef struct SCNCActionWait {
    unk field0;
    CGFloat field1;
    id field2;
    unk field3;
    id field4;
    BOOL field5;
    CGFloat field6;
    CGFloat field7;
    CGFloat field8;
    CGFloat field9;
    CGFloat field10;
    BOOL field11;
    BOOL field12;
    id field13;
    unk field14;
    __CFString field15;
    NSInteger field16;
    CGFloat field17;
    CGFloat field18;
    CGFloat field19;
    CGFloat field20;
} SCNCActionWait;

typedef struct btCharacterControllerInterface {
    unk field0;
} btCharacterControllerInterface;

typedef struct btOverlapFilterCallback {
    unk field0;
} btOverlapFilterCallback;

typedef struct btCapsuleShape {
    unk field0;
    int field1;
    void field2;
    btVector3 field3;
    btVector3 field4;
    float field5;
    float field6;
    int field7;
} btCapsuleShape;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct __C3DParticleSystem {
} // Error Processing Struct Fields

typedef struct CAFrameRateRange {
    float field0;
    float field1;
    float field2;
} CAFrameRateRange;

typedef struct Atomic {
    ? field0;
} Atomic;

typedef struct Object {
    unk field0;
    Atomic field1;
    BOOL field2;
    BOOL field3;
} Object;

typedef struct _CAPropertyInfo {
} // Error Processing Struct Fields

typedef struct SCNMTLBufferPool {
} // Error Processing Struct Fields

typedef struct SCNMTLComputeCommandEncoder {
    id _buffers;
    NSUInteger <MTLBuffer>;
    id _offsets;
    id _textures;
    id <MTLTexture>;
    id _samplers;
    id <MTLSamplerState>;
    SCNMTLBufferPool _computePipelineState;
    unsigned int <MTLComputePipelineState>;
    NSUInteger _encoder;
    NSUInteger <MTLComputeCommandEncoder>;
} SCNMTLComputeCommandEncoder;

typedef struct __C3DEnginePipeline {
} // Error Processing Struct Fields

typedef struct __C3DRendererElementStore {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> {
    uint8_t __a_value;
    int field1;
} __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>>;

typedef struct atomic<int> {
    __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> __a_;
} atomic<int>;

typedef struct SCNMTLRenderCommandEncoder {
} // Error Processing Struct Fields

typedef struct float4x4 {
} // Error Processing Struct Fields

typedef struct SCNSceneBuffer {
    float4x4 viewTransform;
    float4x4 inverseViewTransform;
    float4x4 projectionTransform;
    float4x4 viewProjectionTransform;
    float4x4 viewToCubeTransform;
    float4x4 lastFrameViewProjectionTransform;
    float ambientLightingColor;
    float fogColor;
    float fogParameters;
    float inverseResolution;
    float time;
    float sinTime;
    float4x4 cosTime;
    float4x4 random01;
    float4x4 motionBlurIntensity;
} SCNSceneBuffer;

typedef struct float2x3 {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>> __p3_;
} __hash_table<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>>>;

typedef struct unordered_map<unsigned long long, SCNMTLLightSetData, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, SCNMTLLightSetData>>> {
    __hash_table<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, true>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::equal_to<unsigned long long>, std::hash<unsigned long long>, true>, std::allocator<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>>> __table_;
} unordered_map<unsigned long long, SCNMTLLightSetData, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, SCNMTLLightSetData>>>;

typedef struct __C3DLight {
} // Error Processing Struct Fields

typedef struct __C3DLightRuntimeData {
} // Error Processing Struct Fields

typedef struct SCNMTLClusterSystem {
} // Error Processing Struct Fields

typedef struct Info {
    ? clusterBuffer;
    id clusterTexture;
    id <MTLTexture>;
    ? lightIndicesTexture;
    unsigned int <MTLTexture>;
    id cellSize;
    id clusterScale;
    id cellPixelSize;
    id omniLightsRange;
    NSUInteger spotLightsRange;
    NSUInteger probeLightsRange;
} Info;

typedef struct Cache {
} // Error Processing Struct Fields

typedef struct __C3DFXPassInput {
} // Error Processing Struct Fields

typedef struct SCNCActionFade {
} // Error Processing Struct Fields

typedef struct btVehicleRaycaster {
    unk field0;
} btVehicleRaycaster;

typedef struct btOverlappingPairCallback {
    unk field0;
} btOverlappingPairCallback;

typedef struct btC3DDebugDraw {
    unk field0;
    int field1;
    float field2;
    void field3;
} btC3DDebugDraw;

typedef struct vector<c3dPhysicsField *, std::allocator<c3dPhysicsField *>> {
} // Error Processing Struct Fields

typedef struct c3dAether {
} // Error Processing Struct Fields

typedef struct __C3DEffectCommonProfile {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct __C3DKeyframedAnimation {
} // Error Processing Struct Fields

typedef struct __C3DTimingFunction {
} // Error Processing Struct Fields

typedef struct __C3DAnimation {
} // Error Processing Struct Fields

typedef struct __C3DAnimationPlayer {
} // Error Processing Struct Fields

typedef struct __C3DLibrary {
} // Error Processing Struct Fields

typedef struct __C3DSceneSource {
} // Error Processing Struct Fields

typedef struct __C3DHitTestResult {
} // Error Processing Struct Fields

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct __C3DFloor {
} // Error Processing Struct Fields

typedef struct __C3DCamera {
} // Error Processing Struct Fields

typedef struct CGAffineTransform {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    CGFloat field5;
} CGAffineTransform;

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct CACornerRadii {
    CGSize field0;
    CGSize field1;
    CGSize field2;
    CGSize field3;
} CACornerRadii;

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

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct _CARenderRendererInfo {
    int field0;
    unsigned int field1;
    unsigned int field2;
} _CARenderRendererInfo;

typedef struct _CALayerIvars {
    int refcount;
    unsigned int magic;
    void layer;
    void _objc_observation_info;
} _CALayerIvars;

typedef struct __zFlags {
    BOOL providerSuppliesContents;
    BOOL providerSuppliesStreams;
    BOOL providerSuppliesProperties;
    BOOL noContentsCaching;
    BOOL fileOpen;
    BOOL reserved;
} __zFlags;

typedef struct btPoint2PointConstraint {
} // Error Processing Struct Fields

typedef struct __C3DParametricGeometry {
} // Error Processing Struct Fields

typedef struct btConeTwistConstraint {
} // Error Processing Struct Fields

typedef struct __C3DEngineNotificationQueue {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct __GSEvent {
} // Error Processing Struct Fields

typedef struct CGVector {
    CGFloat field0;
    CGFloat field1;
} CGVector;

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

typedef struct UIRectCornerRadii {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} UIRectCornerRadii;

typedef struct __CFSet {
} // Error Processing Struct Fields

typedef struct UIOffset {
    CGFloat field0;
    CGFloat field1;
} UIOffset;

typedef struct SCNCActionMove {
} // Error Processing Struct Fields

typedef struct __CFReadStream {
} // Error Processing Struct Fields

typedef struct __CFKeyedArchiverUID {
} // Error Processing Struct Fields

typedef struct C3DSphere {
} // Error Processing Struct Fields

typedef struct SCNCActionRotate {
} // Error Processing Struct Fields

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned short, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned short, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<unsigned short>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::less<unsigned short>>;

typedef struct __tree<unsigned short, std::less<unsigned short>, std::allocator<unsigned short>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned short, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::less<unsigned short>> __pair3_;
} __tree<unsigned short, std::less<unsigned short>, std::allocator<unsigned short>>;

typedef struct set<unsigned short, std::less<unsigned short>, std::allocator<unsigned short>> {
    __tree<unsigned short, std::less<unsigned short>, std::allocator<unsigned short>> __tree_;
} set<unsigned short, std::less<unsigned short>, std::allocator<unsigned short>>;

typedef struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> {
    unsigned short __value_;
} __compressed_pair<unsigned short *, std::allocator<unsigned short>>;

typedef struct vector<unsigned short, std::allocator<unsigned short>> {
    unsigned short __begin_;
    unsigned short __end_;
    __compressed_pair<unsigned short *, std::allocator<unsigned short>> __end_cap_;
} vector<unsigned short, std::allocator<unsigned short>>;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct __CVMetalTextureCache {
} // Error Processing Struct Fields

typedef struct btSliderConstraint {
} // Error Processing Struct Fields

typedef struct SCNCActionScale {
} // Error Processing Struct Fields

typedef struct CGPDFPage {
} // Error Processing Struct Fields

typedef struct CGSVGDocument {
} // Error Processing Struct Fields

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct NSEdgeInsets {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} NSEdgeInsets;

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct opaqueCMSampleBuffer {
} // Error Processing Struct Fields

typedef struct __C3DConstraint {
} // Error Processing Struct Fields

typedef struct __C3DVFX {
} // Error Processing Struct Fields

typedef struct SCNCActionRepeat {
} // Error Processing Struct Fields

typedef struct __C3DFXGLSLProgram {
} // Error Processing Struct Fields

typedef struct __C3DShapeGeometry {
} // Error Processing Struct Fields

typedef struct __CTFrame {
} // Error Processing Struct Fields

typedef struct __C3DTextGeometry {
    __C3DShapeGeometry field0;
    ? field1;
} __C3DTextGeometry;

typedef struct __C3DLOD {
} // Error Processing Struct Fields

