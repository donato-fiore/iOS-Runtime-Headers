typedef struct ? {
    NSInteger value;
    int timescale;
    unsigned int flags;
    NSInteger epoch;
} ?;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct PVTransformAnimationInfo {
    ? time;
    CGPoint translation;
    CGFloat scale;
    CGFloat rotation;
} PVTransformAnimationInfo;

typedef struct SCNVector3 {
    float field0;
    float field1;
    float field2;
} SCNVector3;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

typedef struct __CVBuffer {
} // Error Processing Struct Fields

typedef struct CGAffineTransform {
    CGFloat a;
    CGFloat b;
    CGFloat c;
    CGFloat d;
    CGFloat tx;
    CGFloat ty;
} CGAffineTransform;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct PVCGPointQuad {
    CGPoint field0;
    CGPoint field1;
    CGPoint field2;
    CGPoint field3;
} PVCGPointQuad;

typedef struct HGNode {
} // Error Processing Struct Fields

typedef struct HGRef<HGNode> {
    HGNode m_Obj;
} HGRef<HGNode>;

typedef struct PVInstructionGraphContext {
} // Error Processing Struct Fields

typedef struct HGRef<PVInstructionGraphContext> {
    PVInstructionGraphContext m_Obj;
} HGRef<PVInstructionGraphContext>;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct HGXForm {
} // Error Processing Struct Fields

typedef struct HGRef<HGXForm> {
    HGXForm field0;
} HGRef<HGXForm>;

typedef struct __compressed_pair<unsigned long **, std::allocator<unsigned long *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long **, std::allocator<unsigned long *>>;

typedef struct __split_buffer<unsigned long *, std::allocator<unsigned long *>> {
    NSUInteger __first_;
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long **, std::allocator<unsigned long *>> __end_cap_;
} __split_buffer<unsigned long *, std::allocator<unsigned long *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<unsigned long>>;

typedef struct deque<unsigned long, std::allocator<unsigned long>> {
    __split_buffer<unsigned long *, std::allocator<unsigned long *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<unsigned long>> __size_;
} deque<unsigned long, std::allocator<unsigned long>>;

typedef struct stack<unsigned long, std::deque<unsigned long>> {
    deque<unsigned long, std::allocator<unsigned long>> c;
} stack<unsigned long, std::deque<unsigned long>>;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct mutex {
    _opaque_pthread_mutex_t __m_;
} mutex;

typedef struct PVIGHGNodeCacheKey {
    NSUInteger field0;
    ? field1;
    id field2;
} PVIGHGNodeCacheKey;

typedef struct PCRect<double> {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
} PCRect<double>;

typedef struct PCMatrix44Tmpl<double> {
    CGFloat field0;
} PCMatrix44Tmpl<double>;

typedef struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> {
    uint8_t __a_value;
    int field1;
} __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>>;

typedef struct atomic<int> {
    __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> __a_;
} atomic<int>;

typedef struct HGRect {
    int field0;
    int field1;
    int field2;
    int field3;
} HGRect;

typedef struct PVRenderManager {
} // Error Processing Struct Fields

typedef struct HGRef<PVRenderManager> {
    PVRenderManager m_Obj;
} HGRef<PVRenderManager>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, PVInstructionGraphNode *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, PVInstructionGraphNode *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, PVInstructionGraphNode *>, std::less<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, PVInstructionGraphNode *>, std::less<unsigned int>, true>>;

typedef struct __tree<std::__value_type<unsigned int, PVInstructionGraphNode *>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, PVInstructionGraphNode *>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, PVInstructionGraphNode *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, PVInstructionGraphNode *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, PVInstructionGraphNode *>, std::less<unsigned int>, true>> __pair3_;
} __tree<std::__value_type<unsigned int, PVInstructionGraphNode *>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, PVInstructionGraphNode *>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, PVInstructionGraphNode *>>>;

typedef struct map<unsigned int, PVInstructionGraphNode *, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, PVInstructionGraphNode *>>> {
    __tree<std::__value_type<unsigned int, PVInstructionGraphNode *>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, PVInstructionGraphNode *>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, PVInstructionGraphNode *>>> __tree_;
} map<unsigned int, PVInstructionGraphNode *, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, PVInstructionGraphNode *>>>;

typedef struct opaqueCMSampleBuffer {
} // Error Processing Struct Fields

typedef struct PVTransformInfo {
    ? field0;
} PVTransformInfo;

typedef struct _opaque_pthread_t {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_cond_t {
    NSInteger field0;
    char field1;
} _opaque_pthread_cond_t;

typedef struct HGSynchronizable {
    unk field0;
    _opaque_pthread_mutex_t field1;
    _opaque_pthread_t field2;
    NSUInteger field3;
    _opaque_pthread_cond_t field4;
} HGSynchronizable;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct HGCVPixelBuffer {
} // Error Processing Struct Fields

typedef struct HGRef<HGCVPixelBuffer> {
    HGCVPixelBuffer m_Obj;
} HGRef<HGCVPixelBuffer>;

typedef struct HGBitmap {
} // Error Processing Struct Fields

typedef struct HGRef<HGBitmap> {
    HGBitmap m_Obj;
} HGRef<HGBitmap>;

typedef struct PVRenderJob {
} // Error Processing Struct Fields

typedef struct HGRef<PVRenderJob> {
    PVRenderJob field0;
} HGRef<PVRenderJob>;

typedef struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> {
    uint8_t __a_value;
    unsigned int field1;
} __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>>;

typedef struct atomic<unsigned int> {
    __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> __a_;
} atomic<unsigned int>;

typedef struct __compressed_pair<HGRef<PVRenderJob> *, std::allocator<HGRef<PVRenderJob>>> {
    void __value_;
} __compressed_pair<HGRef<PVRenderJob> *, std::allocator<HGRef<PVRenderJob>>>;

typedef struct vector<HGRef<PVRenderJob>, std::allocator<HGRef<PVRenderJob>>> {
    void __begin_;
    void __end_;
    __compressed_pair<HGRef<PVRenderJob> *, std::allocator<HGRef<PVRenderJob>>> __end_cap_;
} vector<HGRef<PVRenderJob>, std::allocator<HGRef<PVRenderJob>>>;

typedef struct __CFString {
} // Error Processing Struct Fields

typedef struct _OZXTimeMarker {
} // Error Processing Struct Fields

typedef struct _OZXTimeMarkerFigTime {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<HGRef<LoadableInstruction>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<HGRef<LoadableInstruction>, void *>>>;

typedef struct __compressed_pair<unsigned long, LoadableInstructionCompare> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, LoadableInstructionCompare>;

typedef struct __tree<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::allocator<HGRef<LoadableInstruction>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<HGRef<LoadableInstruction>, void *>>> __pair1_;
    __compressed_pair<unsigned long, LoadableInstructionCompare> __pair3_;
} __tree<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::allocator<HGRef<LoadableInstruction>>>;

typedef struct set<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::allocator<HGRef<LoadableInstruction>>> {
    __tree<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::allocator<HGRef<LoadableInstruction>>> __tree_;
} set<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::allocator<HGRef<LoadableInstruction>>>;

typedef struct __tree_const_iterator<HGRef<LoadableInstruction>, std::__tree_node<HGRef<LoadableInstruction>, void *> *, long> {
    void __ptr_;
} __tree_const_iterator<HGRef<LoadableInstruction>, std::__tree_node<HGRef<LoadableInstruction>, void *> *, long>;

typedef struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
    uint8_t __a_value;
    BOOL field1;
} __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>;

typedef struct atomic<bool> {
    __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> __a_;
} atomic<bool>;

typedef struct __compressed_pair<HGRef<HGBitmap> *, std::allocator<HGRef<HGBitmap>>> {
    void __value_;
} __compressed_pair<HGRef<HGBitmap> *, std::allocator<HGRef<HGBitmap>>>;

typedef struct vector<HGRef<HGBitmap>, std::allocator<HGRef<HGBitmap>>> {
    void __begin_;
    void __end_;
    __compressed_pair<HGRef<HGBitmap> *, std::allocator<HGRef<HGBitmap>>> __end_cap_;
} vector<HGRef<HGBitmap>, std::allocator<HGRef<HGBitmap>>>;

typedef struct CGColorSpace {
} // Error Processing Struct Fields

typedef struct PVImageProperties {
    unsigned int cvPixelFormat;
    int bitsPerPixel;
    unsigned int alphaInfo;
    CGColorSpace cgColorSpaceRef;
} PVImageProperties;

typedef struct CachedImageInfo {
} // Error Processing Struct Fields

typedef struct PerfTimer {
    CGFloat _start;
    CGFloat _end;
} PerfTimer;

typedef struct HFGrabCut {
} // Error Processing Struct Fields

typedef struct HFGrabCutInterface {
    unk field0;
    HFGrabCut field1;
} HFGrabCutInterface;

typedef struct OZChannelBool {
} // Error Processing Struct Fields

typedef struct METimeRemap {
} // Error Processing Struct Fields

typedef struct OZFactory {
} // Error Processing Struct Fields

typedef struct PCString {
} // Error Processing Struct Fields

typedef struct __compressed_pair<HGRef<PVCVPixelBufferPool> *, std::allocator<HGRef<PVCVPixelBufferPool>>> {
    void __value_;
} __compressed_pair<HGRef<PVCVPixelBufferPool> *, std::allocator<HGRef<PVCVPixelBufferPool>>>;

typedef struct vector<HGRef<PVCVPixelBufferPool>, std::allocator<HGRef<PVCVPixelBufferPool>>> {
    void __begin_;
    void __end_;
    __compressed_pair<HGRef<PVCVPixelBufferPool> *, std::allocator<HGRef<PVCVPixelBufferPool>>> __end_cap_;
} vector<HGRef<PVCVPixelBufferPool>, std::allocator<HGRef<PVCVPixelBufferPool>>>;

typedef struct HGCVPixelBufferPool {
} // Error Processing Struct Fields

typedef struct HGRef<HGCVPixelBufferPool> {
    HGCVPixelBufferPool m_Obj;
} HGRef<HGCVPixelBufferPool>;

typedef struct PVGCDLock {
} // Error Processing Struct Fields

typedef struct __compressed_pair<PVGCDLock *, std::default_delete<PVGCDLock>> {
    PVGCDLock __value_;
} __compressed_pair<PVGCDLock *, std::default_delete<PVGCDLock>>;

typedef struct unique_ptr<PVGCDLock, std::default_delete<PVGCDLock>> {
    __compressed_pair<PVGCDLock *, std::default_delete<PVGCDLock>> __ptr_;
} unique_ptr<PVGCDLock, std::default_delete<PVGCDLock>>;

typedef struct HGCVBitmap {
} // Error Processing Struct Fields

typedef struct HGRef<HGCVBitmap> {
    HGCVBitmap m_Obj;
} HGRef<HGCVBitmap>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<PVSPI_OSThermalPressureLevel, std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::less<PVSPI_OSThermalPressureLevel>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<PVSPI_OSThermalPressureLevel, std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::less<PVSPI_OSThermalPressureLevel>, true>>;

typedef struct __tree<std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::__map_value_compare<PVSPI_OSThermalPressureLevel, std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::less<PVSPI_OSThermalPressureLevel>, true>, std::allocator<std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<PVSPI_OSThermalPressureLevel, std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::less<PVSPI_OSThermalPressureLevel>, true>> __pair3_;
} __tree<std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::__map_value_compare<PVSPI_OSThermalPressureLevel, std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::less<PVSPI_OSThermalPressureLevel>, true>, std::allocator<std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>>>;

typedef struct map<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *, std::less<PVSPI_OSThermalPressureLevel>, std::allocator<std::pair<const PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>>> {
    __tree<std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::__map_value_compare<PVSPI_OSThermalPressureLevel, std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>, std::less<PVSPI_OSThermalPressureLevel>, true>, std::allocator<std::__value_type<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>>> __tree_;
} map<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *, std::less<PVSPI_OSThermalPressureLevel>, std::allocator<std::pair<const PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>>>;

typedef struct __compressed_pair<int **, std::allocator<int *>> {
    int __value_;
} __compressed_pair<int **, std::allocator<int *>>;

typedef struct __split_buffer<int *, std::allocator<int *>> {
    int __first_;
    int __begin_;
    int __end_;
    __compressed_pair<int **, std::allocator<int *>> __end_cap_;
} __split_buffer<int *, std::allocator<int *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<int>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<int>>;

typedef struct deque<int, std::allocator<int>> {
    __split_buffer<int *, std::allocator<int *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<int>> __size_;
} deque<int, std::allocator<int>>;

typedef struct HGGLTexture {
} // Error Processing Struct Fields

typedef struct HGRef<HGGLTexture> {
    HGGLTexture m_Obj;
} HGRef<HGGLTexture>;

typedef struct HGGLContext {
} // Error Processing Struct Fields

typedef struct HGRef<HGGLContext> {
    HGGLContext field0;
} HGRef<HGGLContext>;

typedef struct HGRenderJob {
} // Error Processing Struct Fields

typedef struct HGRef<HGRenderJob> {
    HGRenderJob m_Obj;
} HGRef<HGRenderJob>;

typedef struct __cxx_atomic_impl<PVDocumentLoadStatus, std::__cxx_atomic_base_impl<PVDocumentLoadStatus>> {
    uint8_t __a_value;
    int field1;
} __cxx_atomic_impl<PVDocumentLoadStatus, std::__cxx_atomic_base_impl<PVDocumentLoadStatus>>;

typedef struct atomic<PVDocumentLoadStatus> {
    __cxx_atomic_impl<PVDocumentLoadStatus, std::__cxx_atomic_base_impl<PVDocumentLoadStatus>> __a_;
} atomic<PVDocumentLoadStatus>;

typedef struct BasePool {
} // Error Processing Struct Fields

typedef struct HGMetalTexturePool {
    BasePool field0;
} HGMetalTexturePool;

typedef struct PVRenderLinkJob {
} // Error Processing Struct Fields

typedef struct HGRef<PVRenderLinkJob> {
    PVRenderLinkJob field0;
} HGRef<PVRenderLinkJob>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, id<PVLivePlayerSource>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, id<PVLivePlayerSource>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, id<PVLivePlayerSource>>, std::less<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, id<PVLivePlayerSource>>, std::less<unsigned int>, true>>;

typedef struct __tree<std::__value_type<unsigned int, id<PVLivePlayerSource>>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, id<PVLivePlayerSource>>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, id<PVLivePlayerSource>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, id<PVLivePlayerSource>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, id<PVLivePlayerSource>>, std::less<unsigned int>, true>> __pair3_;
} __tree<std::__value_type<unsigned int, id<PVLivePlayerSource>>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, id<PVLivePlayerSource>>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, id<PVLivePlayerSource>>>>;

typedef struct map<unsigned int, id<PVLivePlayerSource>, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, id<PVLivePlayerSource>>>> {
    __tree<std::__value_type<unsigned int, id<PVLivePlayerSource>>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, id<PVLivePlayerSource>>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, id<PVLivePlayerSource>>>> __tree_;
} map<unsigned int, id<PVLivePlayerSource>, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, id<PVLivePlayerSource>>>>;

typedef struct HGRenderQueue {
} // Error Processing Struct Fields

typedef struct HGRef<HGRenderQueue> {
    HGRenderQueue m_Obj;
} HGRef<HGRenderQueue>;

typedef struct __compressed_pair<PerfTimer *, std::default_delete<PerfTimer>> {
} // Error Processing Struct Fields

typedef struct unique_ptr<PerfTimer, std::default_delete<PerfTimer>> {
    __compressed_pair<PerfTimer *, std::default_delete<PerfTimer>> __ptr_;
} unique_ptr<PerfTimer, std::default_delete<PerfTimer>>;

typedef struct PVPerfStats {
} // Error Processing Struct Fields

typedef struct __compressed_pair<PVPerfStats *, std::default_delete<PVPerfStats>> {
    PVPerfStats __value_;
} __compressed_pair<PVPerfStats *, std::default_delete<PVPerfStats>>;

typedef struct unique_ptr<PVPerfStats, std::default_delete<PVPerfStats>> {
    __compressed_pair<PVPerfStats *, std::default_delete<PVPerfStats>> __ptr_;
} unique_ptr<PVPerfStats, std::default_delete<PVPerfStats>>;

typedef struct PCVector2<double> {
    CGFloat field0;
    CGFloat field1;
} PCVector2<double>;

typedef struct PCRect<float> {
    float field0;
    float field1;
    float field2;
    float field3;
} PCRect<float>;

typedef struct PCVector2<float> {
    float field0;
    float field1;
} PCVector2<float>;

typedef struct TDColor3 {
    float one;
    float two;
    float three;
} TDColor3;

typedef struct HGEquirectProjectParams {
    float field0;
    float field1;
    float field2;
    float field3;
    float field4;
    BOOL field5;
    float field6;
    float field7;
    float field8;
    float field9;
    float field10;
    float field11;
    int field12;
    int field13;
    int field14;
    int field15;
    BOOL field16;
    BOOL field17;
    float field18;
    float field19;
    float field20;
    float field21;
} HGEquirectProjectParams;

typedef struct IPImage {
    CGRect fullRect;
    CGRect imageRect;
    float xScale;
    float yScale;
    unsigned int textureID;
    unsigned int textureTarget;
    unsigned int textureInternalFormat;
    unsigned int textureFormat;
    unsigned int textureType;
    unsigned int textureUnit;
    unsigned int drawFBO;
} IPImage;

typedef struct FracturedParams {
    BOOL field0;
    float field1;
    BOOL field2;
    int field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
    float field8;
    float field9;
    int field10;
    float field11;
    float field12;
    CGFloat field13;
    BOOL field14;
    CGFloat field15;
    float field16;
    float field17;
    BOOL field18;
    float field19;
    int field20;
    BOOL field21;
    float field22;
    float field23;
    BOOL field24;
    float field25;
    float field26;
    float field27;
} FracturedParams;

typedef struct FracturedFXPoolItem {
} // Error Processing Struct Fields

typedef struct vector<FracturedUtils::FracturedFXPoolItem *, std::allocator<FracturedUtils::FracturedFXPoolItem *>> {
} // Error Processing Struct Fields

typedef struct PCMutex {
    unk _vptr$PCMutex;
    _opaque_pthread_mutex_t _Mutex;
} PCMutex;

typedef struct PAEColorWheelData {
    CGFloat r;
    CGFloat t;
    CGFloat sat;
    CGFloat e;
} PAEColorWheelData;

typedef struct PAEStyleTransferResourceTestResult {
    int field0;
    id field1;
    BOOL field2;
} PAEStyleTransferResourceTestResult;

typedef struct RenderContext {
} // Error Processing Struct Fields

typedef struct HGRef<HStyleTransfer_ANE::RenderContext> {
    RenderContext m_Obj;
} HGRef<HStyleTransfer_ANE::RenderContext>;

typedef struct imageProcessingParams {
    NSInteger field0;
    NSInteger field1;
    NSInteger field2;
    NSInteger field3;
    NSInteger field4;
    NSInteger field5;
    NSInteger field6;
    NSInteger field7;
    NSInteger field8;
} imageProcessingParams;

typedef struct __CVOpenGLESTextureCache {
} // Error Processing Struct Fields

typedef struct Vec2f {
    float field0;
} Vec2f;

typedef struct Vec3f {
    float field0;
} Vec3f;

typedef struct RGBAfPixel {
    float field0;
    float field1;
    float field2;
    float field3;
} RGBAfPixel;

typedef struct PCMatrix44Tmpl<float> {
    float field0;
} PCMatrix44Tmpl<float>;

typedef struct FxHostCapabilitiesPriv {
    id field0;
    unsigned int field1;
    id field2;
    id field3;
} FxHostCapabilitiesPriv;

typedef struct FxRect {
    int field0;
    int field1;
    int field2;
    int field3;
} FxRect;

typedef struct FxImagePriv {
} // Error Processing Struct Fields

typedef struct FxBitmapPriv {
    void field0;
    NSUInteger field1;
    BOOL field2;
} FxBitmapPriv;

typedef struct FxTexturePriv {
    unsigned int field0;
    unsigned int field1;
    BOOL field2;
} FxTexturePriv;

typedef struct FxPoint3D {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
} FxPoint3D;

typedef struct CGColor {
} // Error Processing Struct Fields

typedef struct FxTransformPriv {
    CGPoint field0;
    float field1;
    CGPoint field2;
    CGPoint field3;
} FxTransformPriv;

typedef struct FxShapePriv {
    CGRect field0;
    BOOL field1;
} FxShapePriv;

typedef struct FxPlugPriv {
    id field0;
    id field1;
    id field2;
    id field3;
} FxPlugPriv;

typedef struct FxPlugDescriptorPriv {
    id field0;
    id field1;
} FxPlugDescriptorPriv;

typedef struct FxPlugGroupPriv {
    id field0;
    id field1;
} FxPlugGroupPriv;

typedef struct FxPlugGroupDescriptorPriv {
    id field0;
} FxPlugGroupDescriptorPriv;

typedef struct FxStreamPriv {
    id field0;
} FxStreamPriv;

typedef struct FxSamplePriv {
    CGFloat field0;
    id field1;
    id field2;
    id field3;
} FxSamplePriv;

typedef struct FxPinPriv {
    id field0;
    id field1;
    id field2;
    id field3;
    id field4;
    id field5;
    int field6;
    Class field7;
} FxPinPriv;

typedef struct FxPinParameterPriv {
} // Error Processing Struct Fields

typedef struct FxParameterAffineTransformPriv {
} // Error Processing Struct Fields

typedef struct FxParameterAnglePriv {
    BOOL field0;
    CGFloat field1;
    CGFloat field2;
} FxParameterAnglePriv;

typedef struct FxParameterBooleanPriv {
} // Error Processing Struct Fields

typedef struct FxParameterColorPriv {
    BOOL field0;
} FxParameterColorPriv;

typedef struct FxParameterCustomPriv {
} // Error Processing Struct Fields

typedef struct FxParameterGroupPriv {
    id field0;
} FxParameterGroupPriv;

typedef struct FxParameterImagePriv {
} // Error Processing Struct Fields

typedef struct FxParameterListSelectionPriv {
    int field0;
    id field1;
} FxParameterListSelectionPriv;

typedef struct FxParameterPoint2dPriv {
    BOOL field0;
    BOOL field1;
} FxParameterPoint2dPriv;

typedef struct FxParameterPoint3dPriv {
    id field0;
} FxParameterPoint3dPriv;

typedef struct FxParameterPushButtonPriv {
} // Error Processing Struct Fields

typedef struct FxParameterRectPriv {
} // Error Processing Struct Fields

typedef struct FxParameterSliderPriv {
    CGFloat field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    BOOL field5;
} FxParameterSliderPriv;

typedef struct FxParameterTextPriv {
    BOOL field0;
} FxParameterTextPriv;

typedef struct CGContext {
} // Error Processing Struct Fields

typedef struct FxBitmapImagePriv {
} // Error Processing Struct Fields

typedef struct FxContextPriv {
    int field0;
    id field1;
    unk field2;
    ? field3;
    ? field4;
    ? field5;
    ? field6;
    ? field7;
    ? field8;
} FxContextPriv;

typedef struct FxMetaPlugPriv {
    id field0;
    id field1;
} FxMetaPlugPriv;

typedef struct FxHostPriv {
    id field0;
    id field1;
    id field2;
    id field3;
    id field4;
    id field5;
    id field6;
    id field7;
} FxHostPriv;

typedef struct PersonDepthUniforms {
    float field0;
    float field1;
    float field2;
    int field3;
} PersonDepthUniforms;

typedef struct SCNVector4 {
    float field0;
    float field1;
    float field2;
    float field3;
} SCNVector4;

typedef struct GLRenderer {
} // Error Processing Struct Fields

typedef struct OZChannelBase {
} // Error Processing Struct Fields

typedef struct OZChannelPercent {
} // Error Processing Struct Fields

typedef struct ColorComponents {
    int field0;
    CGFloat field1;
} ColorComponents;

typedef struct PCColorSpaceHandle {
} // Error Processing Struct Fields

typedef struct PCColor {
    ColorComponents field0;
    PCColorSpaceHandle field1;
} PCColor;

typedef struct LiImageSource {
} // Error Processing Struct Fields

typedef struct PC_Sp_counted_base {
} // Error Processing Struct Fields

typedef struct PCSharedCount {
    PC_Sp_counted_base field0;
} PCSharedCount;

typedef struct PCPtr<LiImageSource> {
    LiImageSource field0;
    PCSharedCount field1;
} PCPtr<LiImageSource>;

typedef struct PCRect<int> {
    int field0;
    int field1;
    int field2;
    int field3;
} PCRect<int>;

typedef struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> {
    unsigned int __value_;
} __compressed_pair<unsigned int *, std::allocator<unsigned int>>;

typedef struct vector<unsigned int, std::allocator<unsigned int>> {
    unsigned int __begin_;
    unsigned int __end_;
    __compressed_pair<unsigned int *, std::allocator<unsigned int>> __end_cap_;
} vector<unsigned int, std::allocator<unsigned int>>;

typedef struct OZTransformNode {
} // Error Processing Struct Fields

typedef struct OZRenderNode {
} // Error Processing Struct Fields

typedef struct OZElement {
} // Error Processing Struct Fields

typedef struct TransformSet {
    NSUInteger field0;
} TransformSet;

typedef struct OZRenderState {
    ? field0;
    CGFloat field1;
    CGFloat field2;
    CGFloat field3;
    unsigned int field4;
    OZTransformNode field5;
    BOOL field6;
    PCMatrix44Tmpl<double> field7;
    BOOL field8;
    BOOL field9;
    BOOL field10;
    BOOL field11;
    BOOL field12;
    BOOL field13;
    OZRenderNode field14;
    int field15;
    BOOL field16;
    OZElement field17;
    BOOL field18;
    BOOL field19;
    BOOL field20;
    BOOL field21;
    BOOL field22;
    BOOL field23;
    BOOL field24;
    BOOL field25;
    BOOL field26;
    BOOL field27;
    BOOL field28;
    int field29;
    TransformSet field30;
    void field31;
} OZRenderState;

typedef struct OZChannel {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, ParameterTransactionHelpers>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, ParameterTransactionHelpers>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, ParameterTransactionHelpers>, std::less<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, ParameterTransactionHelpers>, std::less<unsigned int>, true>>;

typedef struct __tree<std::__value_type<unsigned int, ParameterTransactionHelpers>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, ParameterTransactionHelpers>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, ParameterTransactionHelpers>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, ParameterTransactionHelpers>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, ParameterTransactionHelpers>, std::less<unsigned int>, true>> __pair3_;
} __tree<std::__value_type<unsigned int, ParameterTransactionHelpers>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, ParameterTransactionHelpers>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, ParameterTransactionHelpers>>>;

typedef struct map<unsigned int, ParameterTransactionHelpers, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, ParameterTransactionHelpers>>> {
    __tree<std::__value_type<unsigned int, ParameterTransactionHelpers>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, ParameterTransactionHelpers>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, ParameterTransactionHelpers>>> __tree_;
} map<unsigned int, ParameterTransactionHelpers, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, ParameterTransactionHelpers>>>;

typedef struct OZChannelBlindData {
} // Error Processing Struct Fields

typedef struct vector<OZChannelBlindData *, std::allocator<OZChannelBlindData *>> {
} // Error Processing Struct Fields

typedef struct OZFxPlugRenderContextManager {
} // Error Processing Struct Fields

typedef struct OZSceneSettings {
} // Error Processing Struct Fields

typedef struct PCRecursiveMutex {
    unk _vptr$PCMutex;
    _opaque_pthread_mutex_t _Mutex;
} PCRecursiveMutex;

typedef struct SCNMatrix4 {
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
} SCNMatrix4;

typedef struct SCNMatrix4Pair {
    SCNMatrix4 field0;
    SCNMatrix4 field1;
} SCNMatrix4Pair;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, SCNNode *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, SCNNode *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, SCNNode *>, std::less<unsigned long>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, SCNNode *>, std::less<unsigned long>, true>>;

typedef struct __tree<std::__value_type<unsigned long, SCNNode *>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, SCNNode *>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, SCNNode *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, SCNNode *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, SCNNode *>, std::less<unsigned long>, true>> __pair3_;
} __tree<std::__value_type<unsigned long, SCNNode *>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, SCNNode *>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, SCNNode *>>>;

typedef struct map<unsigned long, SCNNode *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, SCNNode *>>> {
    __tree<std::__value_type<unsigned long, SCNNode *>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, SCNNode *>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, SCNNode *>>> __tree_;
} map<unsigned long, SCNNode *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, SCNNode *>>>;

typedef struct __CFUUID {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_rwlock_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_rwlock_t;

typedef struct __CFDictionary {
} // Error Processing Struct Fields

typedef struct PC_CMTimePair {
    ? first;
    ? second;
} PC_CMTimePair;

typedef struct PCBitmap {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<PCBitmap> {
    PCBitmap field0;
    __shared_weak_count field1;
} shared_ptr<PCBitmap>;

