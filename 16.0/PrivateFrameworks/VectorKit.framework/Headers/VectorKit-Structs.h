typedef struct Matrix<double, 2, 1> {
    CGFloat _e;
} Matrix<double, 2, 1>;

typedef struct Box<double, 2> {
    Matrix<double, 2, 1> _minimum;
    Matrix<double, 2, 1> _maximum;
} Box<double, 2>;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct TextureManager {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::TextureManager> {
    TextureManager __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<md::TextureManager>;

typedef struct MaterialTextureManager {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::MaterialTextureManager> {
} // Error Processing Struct Fields

typedef struct StylesheetVendor {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::StylesheetVendor> {
} // Error Processing Struct Fields

typedef struct StandardCommandBufferSelector {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::StandardCommandBufferSelector> {
} // Error Processing Struct Fields

typedef struct RealisticCommandBufferSelector {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::RealisticCommandBufferSelector> {
} // Error Processing Struct Fields

typedef struct FontManager {
} // Error Processing Struct Fields

typedef struct shared_ptr<grl::FontManager> {
} // Error Processing Struct Fields

typedef struct CMPhotoDecompressionSession {
} // Error Processing Struct Fields

typedef struct _retain_objc_arc {
} // Error Processing Struct Fields

typedef struct _release_objc_arc {
} // Error Processing Struct Fields

typedef struct _retain_ptr<VKInternalIconManager *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc VKInternalIconManager;
    _release_objc_arc _retain;
} _retain_ptr<VKInternalIconManager *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct _retain_ptr<VKResourceManager *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc VKResourceManager;
    _release_objc_arc _retain;
} _retain_ptr<VKResourceManager *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct DataOverrideManager {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::DataOverrideManager> {
} // Error Processing Struct Fields

typedef struct Device {
} // Error Processing Struct Fields

typedef struct __compressed_pair<md::Device *, std::default_delete<md::Device>> {
    Device __value_;
} __compressed_pair<md::Device *, std::default_delete<md::Device>>;

typedef struct unique_ptr<md::Device, std::default_delete<md::Device>> {
    __compressed_pair<md::Device *, std::default_delete<md::Device>> __ptr_;
} unique_ptr<md::Device, std::default_delete<md::Device>>;

typedef struct AlphaAtlas {
} // Error Processing Struct Fields

typedef struct __compressed_pair<ggl::AlphaAtlas *, std::default_delete<ggl::AlphaAtlas>> {
    AlphaAtlas __value_;
} __compressed_pair<ggl::AlphaAtlas *, std::default_delete<ggl::AlphaAtlas>>;

typedef struct unique_ptr<ggl::AlphaAtlas, std::default_delete<ggl::AlphaAtlas>> {
    __compressed_pair<ggl::AlphaAtlas *, std::default_delete<ggl::AlphaAtlas>> __ptr_;
} unique_ptr<ggl::AlphaAtlas, std::default_delete<ggl::AlphaAtlas>>;

typedef struct IsoAlphaAtlas {
} // Error Processing Struct Fields

typedef struct __compressed_pair<ggl::IsoAlphaAtlas *, std::default_delete<ggl::IsoAlphaAtlas>> {
    IsoAlphaAtlas __value_;
} __compressed_pair<ggl::IsoAlphaAtlas *, std::default_delete<ggl::IsoAlphaAtlas>>;

typedef struct unique_ptr<ggl::IsoAlphaAtlas, std::default_delete<ggl::IsoAlphaAtlas>> {
    __compressed_pair<ggl::IsoAlphaAtlas *, std::default_delete<ggl::IsoAlphaAtlas>> __ptr_;
} unique_ptr<ggl::IsoAlphaAtlas, std::default_delete<ggl::IsoAlphaAtlas>>;

typedef struct DistanceAtlas {
} // Error Processing Struct Fields

typedef struct __compressed_pair<ggl::DistanceAtlas *, std::default_delete<ggl::DistanceAtlas>> {
    DistanceAtlas __value_;
} __compressed_pair<ggl::DistanceAtlas *, std::default_delete<ggl::DistanceAtlas>>;

typedef struct unique_ptr<ggl::DistanceAtlas, std::default_delete<ggl::DistanceAtlas>> {
    __compressed_pair<ggl::DistanceAtlas *, std::default_delete<ggl::DistanceAtlas>> __ptr_;
} unique_ptr<ggl::DistanceAtlas, std::default_delete<ggl::DistanceAtlas>>;

typedef struct StandardLibrary {
} // Error Processing Struct Fields

typedef struct shared_ptr<ggl::StandardLibrary> {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_rwlock_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_rwlock_t;

typedef struct read_write_lock {
    _opaque_pthread_rwlock_t _lock;
} read_write_lock;

typedef struct GeoResourceProvider {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::GeoResourceProvider> {
} // Error Processing Struct Fields

typedef struct IconManager {
} // Error Processing Struct Fields

typedef struct shared_ptr<grl::IconManager> {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct mutex {
    _opaque_pthread_mutex_t __m_;
} mutex;

typedef struct shared_ptr<gss::StylesheetManager<gss::PropertyID>> {
} // Error Processing Struct Fields

typedef struct PolylineCoordinate {
    unsigned int index;
    float offset;
} PolylineCoordinate;

typedef struct GEOPolylineCoordinateRange {
    PolylineCoordinate start;
    PolylineCoordinate end;
} GEOPolylineCoordinateRange;

typedef struct shared_ptr<gss::ClientStyleState<gss::ScenePropertyID>> {
} // Error Processing Struct Fields

typedef struct ? {
    BOOL orthographic;
    CGFloat width;
    CGFloat height;
    CGFloat near;
    CGFloat far;
    CGFloat horizontalOffset;
} ?;

typedef struct vector<GEOLocationCoordinate2D, std::allocator<GEOLocationCoordinate2D>> {
} // Error Processing Struct Fields

typedef struct DistancesRange {
    CGFloat _immediate;
    CGFloat _extremlyNear;
    CGFloat _veryNear;
    CGFloat _near;
    CGFloat _medium;
    CGFloat _far;
    CGFloat _veryFar;
} DistancesRange;

typedef struct SinuosityLevels {
    CGFloat _straight;
    CGFloat _low;
    CGFloat _medium;
    CGFloat _high;
} SinuosityLevels;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<gss::StyleAttribute, std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::hash<gss::StyleAttribute>, std::equal_to<gss::StyleAttribute>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<gss::StyleAttribute, std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::hash<gss::StyleAttribute>, std::equal_to<gss::StyleAttribute>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<gss::StyleAttribute, std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::equal_to<gss::StyleAttribute>, std::hash<gss::StyleAttribute>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<gss::StyleAttribute, std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::equal_to<gss::StyleAttribute>, std::hash<gss::StyleAttribute>, true>>;

typedef struct __hash_table<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::__unordered_map_hasher<gss::StyleAttribute, std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::hash<gss::StyleAttribute>, std::equal_to<gss::StyleAttribute>, true>, std::__unordered_map_equal<gss::StyleAttribute, std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::equal_to<gss::StyleAttribute>, std::hash<gss::StyleAttribute>, true>, std::allocator<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<gss::StyleAttribute, std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::hash<gss::StyleAttribute>, std::equal_to<gss::StyleAttribute>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<gss::StyleAttribute, std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::equal_to<gss::StyleAttribute>, std::hash<gss::StyleAttribute>, true>> __p3_;
} __hash_table<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::__unordered_map_hasher<gss::StyleAttribute, std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::hash<gss::StyleAttribute>, std::equal_to<gss::StyleAttribute>, true>, std::__unordered_map_equal<gss::StyleAttribute, std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::equal_to<gss::StyleAttribute>, std::hash<gss::StyleAttribute>, true>, std::allocator<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>>>;

typedef struct unordered_map<gss::StyleAttribute, GEOPolylineCoordinateRange, std::hash<gss::StyleAttribute>, std::equal_to<gss::StyleAttribute>, std::allocator<std::pair<const gss::StyleAttribute, GEOPolylineCoordinateRange>>> {
    __hash_table<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::__unordered_map_hasher<gss::StyleAttribute, std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::hash<gss::StyleAttribute>, std::equal_to<gss::StyleAttribute>, true>, std::__unordered_map_equal<gss::StyleAttribute, std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>, std::equal_to<gss::StyleAttribute>, std::hash<gss::StyleAttribute>, true>, std::allocator<std::__hash_value_type<gss::StyleAttribute, GEOPolylineCoordinateRange>>> __table_;
} unordered_map<gss::StyleAttribute, GEOPolylineCoordinateRange, std::hash<gss::StyleAttribute>, std::equal_to<gss::StyleAttribute>, std::allocator<std::pair<const gss::StyleAttribute, GEOPolylineCoordinateRange>>>;

typedef struct TaskContext {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::TaskContext> {
} // Error Processing Struct Fields

typedef struct optional<double> {
    BOOL _hasValue;
    long _value;
    int data;
    unsigned char type;
    CGFloat field4;
} optional<double>;

typedef struct Matrix<double, 3, 1> {
    CGFloat _e;
} Matrix<double, 3, 1>;

typedef struct Quaternion<double> {
    Matrix<double, 3, 1> _imaginary;
    CGFloat _scalar;
} Quaternion<double>;

typedef struct RigidTransform<double, double> {
    Matrix<double, 3, 1> _translation;
    Quaternion<double> _rotation;
} RigidTransform<double, double>;

typedef struct Unit<geo::RadianUnitDescription, double> {
    CGFloat _value;
} Unit<geo::RadianUnitDescription, double>;

typedef struct VKCameraState {
    RigidTransform<double, double> field0;
    CGFloat field1;
    Unit<geo::RadianUnitDescription, double> field2;
    CGFloat field3;
} VKCameraState;

typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct Unit<geo::MeterUnitDescription, double> {
    CGFloat _value;
} Unit<geo::MeterUnitDescription, double>;

typedef struct Coordinate3D<geo::Radians, double> {
    Unit<geo::RadianUnitDescription, double> latitude;
    Unit<geo::RadianUnitDescription, double> longitude;
    Unit<geo::MeterUnitDescription, double> altitude;
} Coordinate3D<geo::Radians, double>;

typedef struct CameraFrame<geo::Radians, double> {
    Coordinate3D<geo::Radians, double> _target;
    Unit<geo::MeterUnitDescription, double> _distanceFromTarget;
    Unit<geo::RadianUnitDescription, double> _pitch;
    Unit<geo::RadianUnitDescription, double> _heading;
    Unit<geo::RadianUnitDescription, double> _roll;
} CameraFrame<geo::Radians, double>;

typedef struct Matrix<double, 4, 4> {
    CGFloat _e;
} Matrix<double, 4, 4>;

typedef struct ViewSize {
    unsigned short width;
    unsigned short height;
} ViewSize;

typedef struct View<double> {
    RigidTransform<double, double> field0;
    Matrix<double, 4, 4> field1;
    Matrix<double, 4, 4> field2;
    Matrix<double, 4, 4> field3;
    CGFloat field4;
    CGFloat field5;
    ViewSize field6;
    int field7;
} View<double>;

typedef struct optional<gm::Matrix<double, 3, 1>> {
    BOOL _hasValue;
    long _value;
    int data;
    unsigned char type;
    Matrix<double, 3, 1> field4;
} optional<gm::Matrix<double, 3, 1>>;

typedef struct MapEngine {
} // Error Processing Struct Fields

typedef struct RunLoopController {
    MapEngine field0;
    NSInteger field1;
    NSInteger field2;
} RunLoopController;

typedef struct Mercator3<double> {
    CGFloat _e;
} Mercator3<double>;

typedef struct Camera {
} // Error Processing Struct Fields

typedef struct shared_ptr<gdc::Camera> {
} // Error Processing Struct Fields

typedef struct PolylineGroupChangeObserver {
    unk field0;
} PolylineGroupChangeObserver;

typedef struct __compressed_pair<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> *, std::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>> {
    void __value_;
} __compressed_pair<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> *, std::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>>;

typedef struct vector<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>> {
    void __begin_;
    void __end_;
    __compressed_pair<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> *, std::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>> __end_cap_;
} vector<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<VKPolylineGroupOverlay *, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<VKPolylineGroupOverlay *, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<VKPolylineGroupOverlay *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::less<VKPolylineGroupOverlay *>>;

typedef struct __tree<VKPolylineGroupOverlay *, std::less<VKPolylineGroupOverlay *>, std::allocator<VKPolylineGroupOverlay *>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<VKPolylineGroupOverlay *, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::less<VKPolylineGroupOverlay *>> __pair3_;
} __tree<VKPolylineGroupOverlay *, std::less<VKPolylineGroupOverlay *>, std::allocator<VKPolylineGroupOverlay *>>;

typedef struct set<VKPolylineGroupOverlay *, std::less<VKPolylineGroupOverlay *>, std::allocator<VKPolylineGroupOverlay *>> {
    __tree<VKPolylineGroupOverlay *, std::less<VKPolylineGroupOverlay *>, std::allocator<VKPolylineGroupOverlay *>> __tree_;
} set<VKPolylineGroupOverlay *, std::less<VKPolylineGroupOverlay *>, std::allocator<VKPolylineGroupOverlay *>>;

typedef struct VKFootprintConvexHull_struct {
    int edgeCount;
    Matrix<double, 3, 1> edgeOrigin;
    Matrix<double, 3, 1> edgeNormal;
} VKFootprintConvexHull_struct;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGRect {
    CGPoint origin;
    CGSize size;
} CGRect;

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

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct CGContext {
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

typedef struct VKEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
} VKEdgeInsets;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> *>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> *>> field0;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> *>>> {
    void field0;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> *>> field1;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> *>>> field0;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> {
    void field0;
} __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> field0;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long long>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long long>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long long>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> {
    float field0;
} __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long long>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>>;

typedef struct __hash_table<std::__hash_value_type<unsigned int, unsigned long long>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long long>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long long>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, unsigned long long>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *> *>>> field0;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, unsigned long long>, void *>>> field1;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long long>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>> field2;
    __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long long>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>> field3;
} __hash_table<std::__hash_value_type<unsigned int, unsigned long long>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long long>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long long>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, unsigned long long>>>;

typedef struct unordered_map<unsigned int, unsigned long long, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long long>>> {
    __hash_table<std::__hash_value_type<unsigned int, unsigned long long>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned long long>, std::hash<unsigned int>, std::equal_to<unsigned int>, true>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned long long>, std::equal_to<unsigned int>, std::hash<unsigned int>, true>, std::allocator<std::__hash_value_type<unsigned int, unsigned long long>>> field0;
} unordered_map<unsigned int, unsigned long long, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long long>>>;

typedef struct optional<VKMapType> {
    BOOL _hasValue;
    long _value;
    int data;
    unsigned char type;
    int field4;
} optional<VKMapType>;

typedef struct _retain_ptr<VKMuninCameraController *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc VKMuninCameraController;
    _release_objc_arc _retain;
} _retain_ptr<VKMuninCameraController *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct _retain_ptr<VKARWalkingCameraController *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc VKARWalkingCameraController;
    _release_objc_arc _retain;
} _retain_ptr<VKARWalkingCameraController *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct __compressed_pair<md::MapEngine *, std::default_delete<md::MapEngine>> {
} // Error Processing Struct Fields

typedef struct unique_ptr<md::MapEngine, std::default_delete<md::MapEngine>> {
    __compressed_pair<md::MapEngine *, std::default_delete<md::MapEngine>> __ptr_;
} unique_ptr<md::MapEngine, std::default_delete<md::MapEngine>>;

typedef struct _retain_ptr<VKStateCaptureHandler *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc VKStateCaptureHandler;
    _release_objc_arc _retain;
} _retain_ptr<VKStateCaptureHandler *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct _retain_ptr<VKCamera *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc VKCamera;
    _release_objc_arc _retain;
} _retain_ptr<VKCamera *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct _retain_ptr<NSSet<NSNumber *> *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc NSSet;
    _release_objc_arc _retain;
} _retain_ptr<NSSet<NSNumber *> *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct _retain_ptr<VKManifestTileGroupObserverProxy *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc VKManifestTileGroupObserverProxy;
    _release_objc_arc _retain;
} _retain_ptr<VKManifestTileGroupObserverProxy *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct AnimationRunner {
} // Error Processing Struct Fields

typedef struct PerspectiveView<double> {
    RigidTransform<double, double> _transform;
    Matrix<double, 4, 4> _projectionMatrix;
    Matrix<double, 4, 4> _inverseProjection;
    Matrix<double, 4, 4> _matrix;
    CGFloat _ndcZNear;
    CGFloat _aspectRatio;
    ViewSize _size;
    int _type;
    Unit<geo::RadianUnitDescription, double> _verticalFOV;
    CGFloat _near;
    CGFloat _far;
} PerspectiveView<double>;

typedef struct optional<float> {
    BOOL _hasValue;
    long _value;
    int data;
    unsigned char type;
    float field4;
} optional<float>;

typedef struct OverlayContainer {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::OverlayContainer> {
} // Error Processing Struct Fields

typedef struct type {
    unsigned char __lx;
} type;

typedef struct __value_func<void ()> {
    type __buf_;
    void __f_;
} __value_func<void ()>;

typedef struct function<void ()> {
    __value_func<void ()> __f_;
} function<void ()>;

typedef struct MapDataAccess {
} // Error Processing Struct Fields

typedef struct Matrix<int, 2, 1> {
    int _e;
} Matrix<int, 2, 1>;

typedef struct _retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc NSString;
    _release_objc_arc _retain;
} _retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct os_state_data_decoder_s {
    char field0;
    char field1;
} os_state_data_decoder_s;

typedef struct os_state_data_s {
    unsigned int field0;
    unk field1;
    BOOL field2;
    unsigned int field3;
    os_state_data_decoder_s field4;
    char field5;
    unsigned char field6;
} os_state_data_s;

typedef struct __value_func<NSString *()> {
    type __buf_;
    void __f_;
} __value_func<NSString *()>;

typedef struct function<NSString *()> {
    __value_func<NSString *()> __f_;
} function<NSString *()>;

typedef struct Unit<geo::DegreeUnitDescription, double> {
    CGFloat _value;
} Unit<geo::DegreeUnitDescription, double>;

typedef struct Geocentric<double> {
    CGFloat _e;
} Geocentric<double>;

typedef struct Coordinate2D<geo::Radians, double> {
    Unit<geo::RadianUnitDescription, double> latitude;
    Unit<geo::RadianUnitDescription, double> longitude;
} Coordinate2D<geo::Radians, double>;

typedef struct QuadTile {
    unsigned char _type;
    unsigned char _level;
    int _yIdx;
    int _xIdx;
} QuadTile;

typedef struct FeatureStyleAttributes {
} // Error Processing Struct Fields

typedef struct shared_ptr<FeatureStyleAttributes> {
} // Error Processing Struct Fields

typedef struct MarkerFeatureHandle {
    unsigned char featureType;
    NSInteger featureIndex;
    QuadTile key;
    int tileStyle;
    unsigned int tileVersion;
    shared_ptr<FeatureStyleAttributes> styleAttributes;
} MarkerFeatureHandle;

typedef struct Marker {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::Marker> {
} // Error Processing Struct Fields

typedef struct _retain_ptr<VKCameraController *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc VKCameraController;
    _release_objc_arc _retain;
} _retain_ptr<VKCameraController *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct LabelFeatureMarker {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::LabelFeatureMarker> {
} // Error Processing Struct Fields

typedef struct Allocator {
} // Error Processing Struct Fields

typedef struct StdAllocator<std::__tree_node<std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, void *>, mdm::Allocator> {
    Allocator _allocator;
} StdAllocator<std::__tree_node<std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, void *>, mdm::Allocator>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, geo::StdAllocator<std::__tree_node<std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, void *>, mdm::Allocator>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
    StdAllocator<std::__tree_node<std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, void *>, mdm::Allocator> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, geo::StdAllocator<std::__tree_node<std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, void *>, mdm::Allocator>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, NSStringMapComparison, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, NSStringMapComparison, true>>;

typedef struct __tree<std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, std::__map_value_compare<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, NSStringMapComparison, true>, geo::StdAllocator<std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, mdm::Allocator>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, geo::StdAllocator<std::__tree_node<std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, void *>, mdm::Allocator>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, NSStringMapComparison, true>> __pair3_;
} __tree<std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, std::__map_value_compare<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, NSStringMapComparison, true>, geo::StdAllocator<std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, mdm::Allocator>>;

typedef struct map<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>, NSStringMapComparison, geo::StdAllocator<std::pair<const geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, mdm::Allocator>> {
    __tree<std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, std::__map_value_compare<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, NSStringMapComparison, true>, geo::StdAllocator<std::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, mdm::Allocator>> __tree_;
} map<geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>, NSStringMapComparison, geo::StdAllocator<std::pair<const geo::_retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::shared_ptr<gss::StylesheetManager<gss::PropertyID>>>, mdm::Allocator>>;

typedef struct __long {
    char * __data_;
    NSUInteger __size_;
    NSUInteger __cap_;
} __long;

typedef struct __short {
    char __data_;
    ? ;
} __short;

typedef struct __raw {
    NSUInteger __words;
} __raw;

typedef struct __rep {
    unk ;
    __long __l;
    __short __s;
    __raw __r;
} __rep;

typedef struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
    __rep __value_;
} __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>;

typedef struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> __r_;
} basic_string<char, std::char_traits<char>, std::allocator<char>>;

typedef struct ValueStruct {
    NSInteger field0;
    NSUInteger field1;
    CGFloat field2;
    BOOL field3;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field4;
} ValueStruct;

typedef struct DebugTreeValue {
    ValueStruct field0;
    int field1;
} DebugTreeValue;

typedef struct optional<gdc::DebugTreeValue> {
    BOOL field0;
    long field1;
    int field2;
    unsigned char field3;
    DebugTreeValue field4;
} optional<gdc::DebugTreeValue>;

typedef struct vector<gdc::DebugTreeValue, std::allocator<gdc::DebugTreeValue>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::string *, std::allocator<std::string>> {
    void field0;
} __compressed_pair<std::string *, std::allocator<std::string>>;

typedef struct vector<std::string, std::allocator<std::string>> {
    void field0;
    void field1;
    __compressed_pair<std::string *, std::allocator<std::string>> field2;
} vector<std::string, std::allocator<std::string>>;

typedef struct DebugTreeProperty {
    basic_string<char, std::char_traits<char>, std::allocator<char>> field0;
    int field1;
    vector<gdc::DebugTreeValue, std::allocator<gdc::DebugTreeValue>> field2;
    vector<std::string, std::allocator<std::string>> field3;
} DebugTreeProperty;

typedef struct optional<gdc::DebugTreeProperty> {
    BOOL field0;
    long field1;
    int field2;
    unsigned char field3;
    DebugTreeProperty field4;
} optional<gdc::DebugTreeProperty>;

typedef struct DebugTreeNode {
} // Error Processing Struct Fields

typedef struct vector<gdc::DebugTreeNode, std::allocator<gdc::DebugTreeNode>> {
} // Error Processing Struct Fields

typedef struct vector<gdc::DebugTreeProperty, std::allocator<gdc::DebugTreeProperty>> {
} // Error Processing Struct Fields

typedef struct optional<gdc::DebugTreeNode> {
    BOOL field0;
    long field1;
    int field2;
    unsigned char field3;
    DebugTreeNode field4;
} optional<gdc::DebugTreeNode>;

typedef struct bitset<4UL> {
    NSUInteger __first_;
} bitset<4UL>;

typedef struct GradientTraffic {
    float blend;
    unsigned char start;
    unsigned char end;
} GradientTraffic;

typedef struct Matrix<float, 3, 1> {
    float _e;
} Matrix<float, 3, 1>;

typedef struct __compressed_pair<gm::Matrix<float, 3, 1> *, std::allocator<gm::Matrix<float, 3, 1>>> {
    void __value_;
} __compressed_pair<gm::Matrix<float, 3, 1> *, std::allocator<gm::Matrix<float, 3, 1>>>;

typedef struct vector<gm::Matrix<float, 3, 1>, std::allocator<gm::Matrix<float, 3, 1>>> {
    void __begin_;
    void __end_;
    __compressed_pair<gm::Matrix<float, 3, 1> *, std::allocator<gm::Matrix<float, 3, 1>>> __end_cap_;
} vector<gm::Matrix<float, 3, 1>, std::allocator<gm::Matrix<float, 3, 1>>>;

typedef struct vector<geo::PolylineCoordinate, std::allocator<geo::PolylineCoordinate>> {
} // Error Processing Struct Fields

typedef struct __CFSet {
} // Error Processing Struct Fields

typedef struct Matrix<unsigned char, 4, 1> {
    unsigned char _e;
} Matrix<unsigned char, 4, 1>;

typedef struct Color<unsigned char, 4, geo::ColorSpace::sRGB> {
    Matrix<unsigned char, 4, 1> _backing;
} Color<unsigned char, 4, geo::ColorSpace::sRGB>;

typedef struct optional<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>> {
    BOOL _hasValue;
    long _value;
    int data;
    unsigned char type;
    Color<unsigned char, 4, geo::ColorSpace::sRGB> field4;
} optional<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>>;

typedef struct optional<std::string> {
    BOOL _hasValue;
    long _value;
    int data;
    unsigned char type;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field4;
} optional<std::string>;

typedef struct StdAllocator<std::__tree_node<std::__value_type<unsigned short, std::string>, void *>, grl::Allocator> {
    Allocator _allocator;
} StdAllocator<std::__tree_node<std::__value_type<unsigned short, std::string>, void *>, grl::Allocator>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, geo::StdAllocator<std::__tree_node<std::__value_type<unsigned short, std::string>, void *>, grl::Allocator>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
    StdAllocator<std::__tree_node<std::__value_type<unsigned short, std::string>, void *>, grl::Allocator> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, geo::StdAllocator<std::__tree_node<std::__value_type<unsigned short, std::string>, void *>, grl::Allocator>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, std::string>, std::less<unsigned short>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, std::string>, std::less<unsigned short>, true>>;

typedef struct __tree<std::__value_type<unsigned short, std::string>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, std::string>, std::less<unsigned short>, true>, geo::StdAllocator<std::__value_type<unsigned short, std::string>, grl::Allocator>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, geo::StdAllocator<std::__tree_node<std::__value_type<unsigned short, std::string>, void *>, grl::Allocator>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, std::string>, std::less<unsigned short>, true>> __pair3_;
} __tree<std::__value_type<unsigned short, std::string>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, std::string>, std::less<unsigned short>, true>, geo::StdAllocator<std::__value_type<unsigned short, std::string>, grl::Allocator>>;

typedef struct map<unsigned short, std::string, std::less<unsigned short>, geo::StdAllocator<std::pair<const unsigned short, std::string>, grl::Allocator>> {
    __tree<std::__value_type<unsigned short, std::string>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, std::string>, std::less<unsigned short>, true>, geo::StdAllocator<std::__value_type<unsigned short, std::string>, grl::Allocator>> __tree_;
} map<unsigned short, std::string, std::less<unsigned short>, geo::StdAllocator<std::pair<const unsigned short, std::string>, grl::Allocator>>;

typedef struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> {
    unsigned int __value_;
} __compressed_pair<unsigned int *, std::allocator<unsigned int>>;

typedef struct vector<unsigned int, std::allocator<unsigned int>> {
    unsigned int __begin_;
    unsigned int __end_;
    __compressed_pair<unsigned int *, std::allocator<unsigned int>> __end_cap_;
} vector<unsigned int, std::allocator<unsigned int>>;

typedef struct __compressed_pair<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB> *, std::allocator<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>>> {
    void __value_;
} __compressed_pair<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB> *, std::allocator<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>>>;

typedef struct vector<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>, std::allocator<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>>> {
    void __begin_;
    void __end_;
    __compressed_pair<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB> *, std::allocator<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>>> __end_cap_;
} vector<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>, std::allocator<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>>>;

typedef struct IconModifiers {
    BOOL _isClusterIcon;
    BOOL _isGlyphHidden;
    BOOL _isGlyphOnly;
    BOOL _isInfoOnly;
    BOOL _isMirrored;
    BOOL _isLandmark;
    BOOL _isSelected;
    BOOL _useBalloonShape;
    float _opacity;
    float _scale;
    optional<float> _pathScale;
    unsigned char _component;
    optional<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>> _customColor;
    optional<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>> _shapeColor;
    optional<float> _fontSize;
    optional<float> _tailDirection;
    optional<std::string> _textLocale;
    map<unsigned short, std::string, std::less<unsigned short>, geo::StdAllocator<std::pair<const unsigned short, std::string>, grl::Allocator>> _text;
    vector<unsigned int, std::allocator<unsigned int>> _clusterIconValues;
    vector<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>, std::allocator<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>>> _clusterColors;
} IconModifiers;

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct IconImage {
} // Error Processing Struct Fields

typedef struct shared_ptr<grl::IconImage> {
} // Error Processing Struct Fields

typedef struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> {
} // Error Processing Struct Fields

typedef struct RouteContextChangeObserver {
    unk field0;
} RouteContextChangeObserver;

typedef struct StdAllocator<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, mdm::Allocator> {
    Allocator _allocator;
} StdAllocator<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, mdm::Allocator>;

typedef struct __compressed_pair<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> *, geo::StdAllocator<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, mdm::Allocator>> {
    void __value_;
    StdAllocator<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, mdm::Allocator> __value_;
} __compressed_pair<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> *, geo::StdAllocator<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, mdm::Allocator>>;

typedef struct vector<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, geo::StdAllocator<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, mdm::Allocator>> {
    void __begin_;
    void __end_;
    __compressed_pair<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> *, geo::StdAllocator<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, mdm::Allocator>> __end_cap_;
} vector<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, geo::StdAllocator<geo::_retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, mdm::Allocator>>;

typedef struct Anchor {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::Anchor> {
} // Error Processing Struct Fields

typedef struct Coordinate3D<geo::Degrees, double> {
    Unit<geo::DegreeUnitDescription, double> latitude;
    Unit<geo::DegreeUnitDescription, double> longitude;
    Unit<geo::MeterUnitDescription, double> altitude;
} Coordinate3D<geo::Degrees, double>;

typedef struct __value_func<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)> {
    type field0;
    void field1;
} __value_func<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>;

typedef struct function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)> {
    __value_func<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)> field0;
} function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>;

typedef struct pair<geo::Mercator3<double>, geo::Mercator3<double>> {
    Mercator3<double> first;
    Mercator3<double> second;
} pair<geo::Mercator3<double>, geo::Mercator3<double>>;

typedef struct optional<std::pair<geo::Mercator3<double>, geo::Mercator3<double>>> {
    unk ;
    char __null_state_;
    pair<geo::Mercator3<double>, geo::Mercator3<double>> __val_;
    BOOL __engaged_;
} optional<std::pair<geo::Mercator3<double>, geo::Mercator3<double>>>;

typedef struct RouteOverlayCache {
    unk field0;
    id field1;
} RouteOverlayCache;

typedef struct __compressed_pair<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>> *, std::allocator<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>> {
    void __value_;
} __compressed_pair<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>> *, std::allocator<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>>;

typedef struct vector<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>, std::allocator<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>> *, std::allocator<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>> __end_cap_;
} vector<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>, std::allocator<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>>;

typedef struct linear_map<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>, std::equal_to<unsigned long long>, std::allocator<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>, std::vector<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>> {
    vector<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>, std::allocator<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>> _backing;
} linear_map<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>, std::equal_to<unsigned long long>, std::allocator<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>, std::vector<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>>;

typedef struct __value_func<void (double)> {
    type __buf_;
    void __f_;
} __value_func<void (double)>;

typedef struct function<void (double)> {
    __value_func<void (double)> __f_;
} function<void (double)>;

typedef struct Monitorable<md::ConfigValue<GEOConfigKeyDouble, double>> {
    ? _key;
    CGFloat _value;
    id _listener;
    function<void (double)> _delegate;
} Monitorable<md::ConfigValue<GEOConfigKeyDouble, double>>;

typedef struct LabelMarker {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::LabelMarker> {
} // Error Processing Struct Fields

typedef struct AdditionalPointInfo {
} // Error Processing Struct Fields

typedef struct vector<AdditionalPointInfo, std::allocator<AdditionalPointInfo>> {
} // Error Processing Struct Fields

typedef struct AdditionalRouteInfo {
} // Error Processing Struct Fields

typedef struct vector<AdditionalRouteInfo, std::allocator<AdditionalRouteInfo>> {
} // Error Processing Struct Fields

typedef struct Quaternion<float> {
    Matrix<float, 3, 1> _imaginary;
    float _scalar;
} Quaternion<float>;

typedef struct RigidTransform<double, float> {
    Matrix<double, 3, 1> _translation;
    Quaternion<float> _rotation;
} RigidTransform<double, float>;

typedef struct Unit<geo::RadianUnitDescription, float> {
    float _value;
} Unit<geo::RadianUnitDescription, float>;

typedef struct PhotoInfo {
} // Error Processing Struct Fields

typedef struct small_vector<md::mun::PhotoInfo, 6UL> {
} // Error Processing Struct Fields

typedef struct CollectionPoint {
    NSUInteger pointId;
    RigidTransform<double, float> frame;
    Unit<geo::RadianUnitDescription, float> heading;
    Mercator3<double> mercatorPosition;
    NSUInteger time;
    small_vector<md::mun::PhotoInfo, 6UL> photos;
    float heightAboveGroundMeters;
    unsigned int buildId;
    unsigned short bucketId;
    unsigned char type;
    unsigned char dataType;
    unsigned char texturedLodMask;
} CollectionPoint;

typedef struct optional<md::mun::CollectionPoint> {
    BOOL _hasValue;
    long _value;
    int data;
    unsigned char type;
    CollectionPoint field4;
} optional<md::mun::CollectionPoint>;

typedef struct TrafficSegment {
    unsigned int field0;
    unsigned char field1;
} TrafficSegment;

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float __value_;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float __begin_;
    float __end_;
    __compressed_pair<float *, std::allocator<float>> __end_cap_;
} vector<float, std::allocator<float>>;

typedef struct __compressed_pair<double *, std::allocator<double>> {
    CGFloat __value_;
} __compressed_pair<double *, std::allocator<double>>;

typedef struct vector<double, std::allocator<double>> {
    CGFloat __begin_;
    CGFloat __end_;
    __compressed_pair<double *, std::allocator<double>> __end_cap_;
} vector<double, std::allocator<double>>;

typedef struct vector<md::GradientTraffic, std::allocator<md::GradientTraffic>> {
} // Error Processing Struct Fields

typedef struct StyleQueryOverride {
    unsigned char field0;
    unsigned char field1;
} StyleQueryOverride;

typedef struct Matrix<float, 2, 1> {
    float _e;
} Matrix<float, 2, 1>;

typedef struct ResourceAccessor {
    unk field0;
} ResourceAccessor;

typedef struct __value_func<bool (unsigned long long)> {
    type field0;
    void field1;
} __value_func<bool (unsigned long long)>;

typedef struct function<bool (unsigned long long)> {
    __value_func<bool (unsigned long long)> field0;
} function<bool (unsigned long long)>;

typedef struct PolygonRouteAttributes {
    unsigned int routeSignificance;
    unsigned char routeProximity;
    BOOL hasRouteSignificance;
} PolygonRouteAttributes;

typedef struct MeshSetStorage {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::MeshSetStorage> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::pair<unsigned short, unsigned int> *, std::allocator<std::pair<unsigned short, unsigned int>>> {
    void __value_;
} __compressed_pair<std::pair<unsigned short, unsigned int> *, std::allocator<std::pair<unsigned short, unsigned int>>>;

typedef struct vector<std::pair<unsigned short, unsigned int>, std::allocator<std::pair<unsigned short, unsigned int>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<unsigned short, unsigned int> *, std::allocator<std::pair<unsigned short, unsigned int>>> __end_cap_;
} vector<std::pair<unsigned short, unsigned int>, std::allocator<std::pair<unsigned short, unsigned int>>>;

typedef struct __compressed_pair<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh> *, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>> {
    void __value_;
} __compressed_pair<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh> *, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>>;

typedef struct vector<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh> *, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>> __end_cap_;
} vector<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>>;

typedef struct BufferMemory {
} // Error Processing Struct Fields

typedef struct DataWrite<ggl::PolygonBase::CompressedVbo> {
    BufferMemory _memory;
} DataWrite<ggl::PolygonBase::CompressedVbo>;

typedef struct DataWrite<unsigned short> {
    BufferMemory _memory;
} DataWrite<unsigned short>;

typedef struct MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo> {
} // Error Processing Struct Fields

typedef struct optional<md::MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo>> {
    BOOL _hasValue;
    long _value;
    int data;
    unsigned char type;
    MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo> field4;
} optional<md::MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo>>;

typedef struct __compressed_pair<std::vector<FeatureRange> *, std::allocator<std::vector<FeatureRange>>> {
    void __value_;
} __compressed_pair<std::vector<FeatureRange> *, std::allocator<std::vector<FeatureRange>>>;

typedef struct vector<std::vector<FeatureRange>, std::allocator<std::vector<FeatureRange>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::vector<FeatureRange> *, std::allocator<std::vector<FeatureRange>>> __end_cap_;
} vector<std::vector<FeatureRange>, std::allocator<std::vector<FeatureRange>>>;

typedef struct array<std::vector<std::vector<FeatureRange>>, 16UL> {
    vector<std::vector<FeatureRange>, std::allocator<std::vector<FeatureRange>>> __elems_;
} array<std::vector<std::vector<FeatureRange>>, 16UL>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::pair<const void *, unsigned long>, std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::hash<md::SectionKey>, std::equal_to<std::pair<const void *, unsigned long>>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::pair<const void *, unsigned long>, std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::hash<md::SectionKey>, std::equal_to<std::pair<const void *, unsigned long>>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::pair<const void *, unsigned long>, std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::equal_to<std::pair<const void *, unsigned long>>, std::hash<md::SectionKey>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::pair<const void *, unsigned long>, std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::equal_to<std::pair<const void *, unsigned long>>, std::hash<md::SectionKey>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::__unordered_map_hasher<std::pair<const void *, unsigned long>, std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::hash<md::SectionKey>, std::equal_to<std::pair<const void *, unsigned long>>, true>, std::__unordered_map_equal<std::pair<const void *, unsigned long>, std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::equal_to<std::pair<const void *, unsigned long>>, std::hash<md::SectionKey>, true>, std::allocator<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::pair<const void *, unsigned long>, std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::hash<md::SectionKey>, std::equal_to<std::pair<const void *, unsigned long>>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::pair<const void *, unsigned long>, std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::equal_to<std::pair<const void *, unsigned long>>, std::hash<md::SectionKey>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::__unordered_map_hasher<std::pair<const void *, unsigned long>, std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::hash<md::SectionKey>, std::equal_to<std::pair<const void *, unsigned long>>, true>, std::__unordered_map_equal<std::pair<const void *, unsigned long>, std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::equal_to<std::pair<const void *, unsigned long>>, std::hash<md::SectionKey>, true>, std::allocator<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>>>;

typedef struct unordered_map<std::pair<const void *, unsigned long>, std::vector<md::Edge>, std::hash<md::SectionKey>, std::equal_to<std::pair<const void *, unsigned long>>, std::allocator<std::pair<const std::pair<const void *, unsigned long>, std::vector<md::Edge>>>> {
    __hash_table<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::__unordered_map_hasher<std::pair<const void *, unsigned long>, std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::hash<md::SectionKey>, std::equal_to<std::pair<const void *, unsigned long>>, true>, std::__unordered_map_equal<std::pair<const void *, unsigned long>, std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>, std::equal_to<std::pair<const void *, unsigned long>>, std::hash<md::SectionKey>, true>, std::allocator<std::__hash_value_type<std::pair<const void *, unsigned long>, std::vector<md::Edge>>>> __table_;
} unordered_map<std::pair<const void *, unsigned long>, std::vector<md::Edge>, std::hash<md::SectionKey>, std::equal_to<std::pair<const void *, unsigned long>>, std::allocator<std::pair<const std::pair<const void *, unsigned long>, std::vector<md::Edge>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<unsigned long long, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<unsigned long long, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *>, std::allocator<std::__hash_node<unsigned long long, void *>>> {
    __hash_node_base<std::__hash_node<unsigned long long, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *>, std::allocator<std::__hash_node<unsigned long long, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<unsigned long long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<unsigned long long>>;

typedef struct __compressed_pair<float, std::equal_to<unsigned long long>> {
    float __value_;
} __compressed_pair<float, std::equal_to<unsigned long long>>;

typedef struct __hash_table<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *>, std::allocator<std::__hash_node<unsigned long long, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<unsigned long long>> __p2_;
    __compressed_pair<float, std::equal_to<unsigned long long>> __p3_;
} __hash_table<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>>;

typedef struct unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> {
    __hash_table<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> __table_;
} unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>>;

typedef struct Box<float, 3> {
    Matrix<float, 3, 1> _minimum;
    Matrix<float, 3, 1> _maximum;
} Box<float, 3>;

typedef struct Batcher {
} // Error Processing Struct Fields

typedef struct vector<ggl::Batcher, std::allocator<ggl::Batcher>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::shared_ptr<FeatureStyleAttributes>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::shared_ptr<FeatureStyleAttributes>, void *>>>;

typedef struct __compressed_pair<unsigned long, FeatureStyleAttributesSet::FeatureStyleAttributesCompare> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, FeatureStyleAttributesSet::FeatureStyleAttributesCompare>;

typedef struct __tree<std::shared_ptr<FeatureStyleAttributes>, FeatureStyleAttributesSet::FeatureStyleAttributesCompare, std::allocator<std::shared_ptr<FeatureStyleAttributes>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::shared_ptr<FeatureStyleAttributes>, void *>>> __pair1_;
    __compressed_pair<unsigned long, FeatureStyleAttributesSet::FeatureStyleAttributesCompare> __pair3_;
} __tree<std::shared_ptr<FeatureStyleAttributes>, FeatureStyleAttributesSet::FeatureStyleAttributesCompare, std::allocator<std::shared_ptr<FeatureStyleAttributes>>>;

typedef struct set<std::shared_ptr<FeatureStyleAttributes>, FeatureStyleAttributesSet::FeatureStyleAttributesCompare, std::allocator<std::shared_ptr<FeatureStyleAttributes>>> {
    __tree<std::shared_ptr<FeatureStyleAttributes>, FeatureStyleAttributesSet::FeatureStyleAttributesCompare, std::allocator<std::shared_ptr<FeatureStyleAttributes>>> __tree_;
} set<std::shared_ptr<FeatureStyleAttributes>, FeatureStyleAttributesSet::FeatureStyleAttributesCompare, std::allocator<std::shared_ptr<FeatureStyleAttributes>>>;

typedef struct StdAllocator<std::shared_ptr<FeatureStyleAttributes>, geo::codec::Allocator> {
    Allocator _allocator;
} StdAllocator<std::shared_ptr<FeatureStyleAttributes>, geo::codec::Allocator>;

typedef struct __compressed_pair<std::shared_ptr<FeatureStyleAttributes> *, geo::StdAllocator<std::shared_ptr<FeatureStyleAttributes>, geo::codec::Allocator>> {
    void __value_;
    StdAllocator<std::shared_ptr<FeatureStyleAttributes>, geo::codec::Allocator> __value_;
} __compressed_pair<std::shared_ptr<FeatureStyleAttributes> *, geo::StdAllocator<std::shared_ptr<FeatureStyleAttributes>, geo::codec::Allocator>>;

typedef struct vector<std::shared_ptr<FeatureStyleAttributes>, geo::StdAllocator<std::shared_ptr<FeatureStyleAttributes>, geo::codec::Allocator>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<FeatureStyleAttributes> *, geo::StdAllocator<std::shared_ptr<FeatureStyleAttributes>, geo::codec::Allocator>> __end_cap_;
} vector<std::shared_ptr<FeatureStyleAttributes>, geo::StdAllocator<std::shared_ptr<FeatureStyleAttributes>, geo::codec::Allocator>>;

typedef struct FeatureStyleAttributesSet {
    set<std::shared_ptr<FeatureStyleAttributes>, FeatureStyleAttributesSet::FeatureStyleAttributesCompare, std::allocator<std::shared_ptr<FeatureStyleAttributes>>> _set;
    vector<std::shared_ptr<FeatureStyleAttributes>, geo::StdAllocator<std::shared_ptr<FeatureStyleAttributes>, geo::codec::Allocator>> _array;
} FeatureStyleAttributesSet;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<StyleQueryOverride, std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, (anonymous namespace)::StyleQueryOverrideHash, std::equal_to<StyleQueryOverride>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<StyleQueryOverride, std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, (anonymous namespace)::StyleQueryOverrideHash, std::equal_to<StyleQueryOverride>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<StyleQueryOverride, std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, std::equal_to<StyleQueryOverride>, (anonymous namespace)::StyleQueryOverrideHash, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<StyleQueryOverride, std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, std::equal_to<StyleQueryOverride>, (anonymous namespace)::StyleQueryOverrideHash, true>>;

typedef struct __hash_table<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, std::__unordered_map_hasher<StyleQueryOverride, std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, (anonymous namespace)::StyleQueryOverrideHash, std::equal_to<StyleQueryOverride>, true>, std::__unordered_map_equal<StyleQueryOverride, std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, std::equal_to<StyleQueryOverride>, (anonymous namespace)::StyleQueryOverrideHash, true>, std::allocator<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<StyleQueryOverride, std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, (anonymous namespace)::StyleQueryOverrideHash, std::equal_to<StyleQueryOverride>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<StyleQueryOverride, std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, std::equal_to<StyleQueryOverride>, (anonymous namespace)::StyleQueryOverrideHash, true>> __p3_;
} __hash_table<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, std::__unordered_map_hasher<StyleQueryOverride, std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, (anonymous namespace)::StyleQueryOverrideHash, std::equal_to<StyleQueryOverride>, true>, std::__unordered_map_equal<StyleQueryOverride, std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, std::equal_to<StyleQueryOverride>, (anonymous namespace)::StyleQueryOverrideHash, true>, std::allocator<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>>>;

typedef struct unordered_map<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>, (anonymous namespace)::StyleQueryOverrideHash, std::equal_to<StyleQueryOverride>, std::allocator<std::pair<const StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>>> {
    __hash_table<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, std::__unordered_map_hasher<StyleQueryOverride, std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, (anonymous namespace)::StyleQueryOverrideHash, std::equal_to<StyleQueryOverride>, true>, std::__unordered_map_equal<StyleQueryOverride, std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>, std::equal_to<StyleQueryOverride>, (anonymous namespace)::StyleQueryOverrideHash, true>, std::allocator<std::__hash_value_type<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>>> __table_;
} unordered_map<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>, (anonymous namespace)::StyleQueryOverrideHash, std::equal_to<StyleQueryOverride>, std::allocator<std::pair<const StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>>>;

typedef struct _GEOStandardTileKey {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
} _GEOStandardTileKey;

typedef struct _GEOGloriaQuadIDTileKey {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
} _GEOGloriaQuadIDTileKey;

typedef struct _GEORegionalResourceKey {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
} _GEORegionalResourceKey;

typedef struct _GEOSputnikMetadataKey {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
} _GEOSputnikMetadataKey;

typedef struct _GEOFlyoverKey {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
} _GEOFlyoverKey;

typedef struct _GEOTransitLineSelectionKey {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
} _GEOTransitLineSelectionKey;

typedef struct _GEOPolygonSelectionKey {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
} _GEOPolygonSelectionKey;

typedef struct _GEOTileOverlayKey {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
} _GEOTileOverlayKey;

typedef struct _GEOIdentifiedResourceKey {
    NSUInteger field0;
    unsigned char field1;
    unsigned char field2;
    BOOL field3;
    BOOL field4;
} _GEOIdentifiedResourceKey;

typedef struct _GEOMuninMeshKey {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
} _GEOMuninMeshKey;

typedef struct _GEOVisualLocalizationTrackKey {
    unsigned short field0;
    unsigned char field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
} _GEOVisualLocalizationTrackKey;

typedef struct _GEOVisualLocalizationMetadataKey {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
} _GEOVisualLocalizationMetadataKey;

typedef struct _GEOVisualLocalizationDataKey {
    NSUInteger field0;
    unsigned char field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
} _GEOVisualLocalizationDataKey;

typedef struct _GEOS2TileKey {
    BOOL field0;
    BOOL field1;
    BOOL field2;
    BOOL field3;
    BOOL field4;
    BOOL field5;
    BOOL field6;
    BOOL field7;
} _GEOS2TileKey;

typedef struct _GEOTileKey {
    BOOL field0;
    BOOL field1;
    unk field2;
    _GEOStandardTileKey field3;
    _GEOGloriaQuadIDTileKey field4;
    _GEORegionalResourceKey field5;
    _GEOSputnikMetadataKey field6;
    _GEOFlyoverKey field7;
    _GEOTransitLineSelectionKey field8;
    _GEOPolygonSelectionKey field9;
    _GEOTileOverlayKey field10;
    _GEOIdentifiedResourceKey field11;
    _GEOMuninMeshKey field12;
    _GEOVisualLocalizationTrackKey field13;
    _GEOVisualLocalizationMetadataKey field14;
    _GEOVisualLocalizationDataKey field15;
    _GEOS2TileKey field16;
} _GEOTileKey;

typedef struct optional<gss::RouteLegWhen> {
    BOOL _hasValue;
    long _value;
    int data;
    unsigned char type;
    unsigned char field4;
} optional<gss::RouteLegWhen>;

typedef struct GeoCodecsFeatureStylePair {
    unsigned int field0;
    int field1;
} GeoCodecsFeatureStylePair;

typedef struct vector<GeoCodecsFeatureStylePair, geo::StdAllocator<GeoCodecsFeatureStylePair, mdm::Allocator>> {
} // Error Processing Struct Fields

typedef struct optional<gss::IncidentDataSource> {
    BOOL _hasValue;
    long _value;
    int data;
    unsigned char type;
    unsigned char field4;
} optional<gss::IncidentDataSource>;

typedef struct vector<md::mun::CollectionPoint, std::allocator<md::mun::CollectionPoint>> {
} // Error Processing Struct Fields

typedef struct PathAnimator {
} // Error Processing Struct Fields

typedef struct shared_ptr<(anonymous namespace)::PathAnimator> {
} // Error Processing Struct Fields

typedef struct PathAnimationDescription {
    vector<md::mun::CollectionPoint, std::allocator<md::mun::CollectionPoint>> field0;
    Geocentric<double> field1;
    RigidTransform<double, double> field2;
    BOOL field3;
    int field4;
    shared_ptr<(anonymous namespace)::PathAnimator> field5;
    NSUInteger field6;
} PathAnimationDescription;

typedef struct Intersection {
    Geocentric<double> field0;
    Matrix<double, 3, 1> field1;
} Intersection;

typedef struct Ray<double, 3> {
    Matrix<double, 3, 1> field0;
    Matrix<double, 3, 1> field1;
} Ray<double, 3>;

typedef struct TapDescription {
    Intersection field0;
    Ray<double, 3> field1;
    CollectionPoint field2;
    RigidTransform<double, double> field3;
    NSUInteger field4;
} TapDescription;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>> field0;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>>> {
    void field0;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>> field1;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>>> field0;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> {
    void field0;
} __hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> field0;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<gdc::LayerDataRequestKey, std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, gdc::LayerDataRequestKeyHash, std::equal_to<gdc::LayerDataRequestKey>, true>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<gdc::LayerDataRequestKey, std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, gdc::LayerDataRequestKeyHash, std::equal_to<gdc::LayerDataRequestKey>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<gdc::LayerDataRequestKey, std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, std::equal_to<gdc::LayerDataRequestKey>, gdc::LayerDataRequestKeyHash, true>> {
    float field0;
} __compressed_pair<float, std::__unordered_map_equal<gdc::LayerDataRequestKey, std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, std::equal_to<gdc::LayerDataRequestKey>, gdc::LayerDataRequestKeyHash, true>>;

typedef struct __hash_table<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, std::__unordered_map_hasher<gdc::LayerDataRequestKey, std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, gdc::LayerDataRequestKeyHash, std::equal_to<gdc::LayerDataRequestKey>, true>, std::__unordered_map_equal<gdc::LayerDataRequestKey, std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, std::equal_to<gdc::LayerDataRequestKey>, gdc::LayerDataRequestKeyHash, true>, std::allocator<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *> *>>> field0;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, void *>>> field1;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<gdc::LayerDataRequestKey, std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, gdc::LayerDataRequestKeyHash, std::equal_to<gdc::LayerDataRequestKey>, true>> field2;
    __compressed_pair<float, std::__unordered_map_equal<gdc::LayerDataRequestKey, std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, std::equal_to<gdc::LayerDataRequestKey>, gdc::LayerDataRequestKeyHash, true>> field3;
} __hash_table<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, std::__unordered_map_hasher<gdc::LayerDataRequestKey, std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, gdc::LayerDataRequestKeyHash, std::equal_to<gdc::LayerDataRequestKey>, true>, std::__unordered_map_equal<gdc::LayerDataRequestKey, std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, std::equal_to<gdc::LayerDataRequestKey>, gdc::LayerDataRequestKeyHash, true>, std::allocator<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>>>;

typedef struct unordered_map<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>, gdc::LayerDataRequestKeyHash, std::equal_to<gdc::LayerDataRequestKey>, std::allocator<std::pair<const gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>>> {
    __hash_table<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, std::__unordered_map_hasher<gdc::LayerDataRequestKey, std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, gdc::LayerDataRequestKeyHash, std::equal_to<gdc::LayerDataRequestKey>, true>, std::__unordered_map_equal<gdc::LayerDataRequestKey, std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>, std::equal_to<gdc::LayerDataRequestKey>, gdc::LayerDataRequestKeyHash, true>, std::allocator<std::__hash_value_type<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>>> field0;
} unordered_map<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>, gdc::LayerDataRequestKeyHash, std::equal_to<gdc::LayerDataRequestKey>, std::allocator<std::pair<const gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>>>;

typedef struct __compressed_pair<std::pair<md::mun::ViewId, unsigned int> *, std::allocator<std::pair<md::mun::ViewId, unsigned int>>> {
    void __value_;
} __compressed_pair<std::pair<md::mun::ViewId, unsigned int> *, std::allocator<std::pair<md::mun::ViewId, unsigned int>>>;

typedef struct vector<std::pair<md::mun::ViewId, unsigned int>, std::allocator<std::pair<md::mun::ViewId, unsigned int>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<md::mun::ViewId, unsigned int> *, std::allocator<std::pair<md::mun::ViewId, unsigned int>>> __end_cap_;
} vector<std::pair<md::mun::ViewId, unsigned int>, std::allocator<std::pair<md::mun::ViewId, unsigned int>>>;

typedef struct CameraLod {
} // Error Processing Struct Fields

typedef struct small_vector<md::mun::PointView::CameraLod, 6UL> {
} // Error Processing Struct Fields

typedef struct PointView {
    CollectionPoint _point;
    vector<std::pair<md::mun::ViewId, unsigned int>, std::allocator<std::pair<md::mun::ViewId, unsigned int>>> _requiredViews;
    vector<std::pair<md::mun::ViewId, unsigned int>, std::allocator<std::pair<md::mun::ViewId, unsigned int>>> _optionalViews;
    small_vector<md::mun::PointView::CameraLod, 6UL> _cameras;
} PointView;

typedef struct PointSegment {
    PointView _startPoint;
    PointView _endPoint;
} PointSegment;

typedef struct optional<(anonymous namespace)::PointSegment> {
    BOOL _hasValue;
    long _value;
    int data;
    unsigned char type;
    PointSegment field4;
} optional<(anonymous namespace)::PointSegment>;

typedef struct BumpAnimator {
} // Error Processing Struct Fields

typedef struct __compressed_pair<(anonymous namespace)::BumpAnimator *, std::default_delete<(anonymous namespace)::BumpAnimator>> {
    BumpAnimator __value_;
} __compressed_pair<(anonymous namespace)::BumpAnimator *, std::default_delete<(anonymous namespace)::BumpAnimator>>;

typedef struct unique_ptr<(anonymous namespace)::BumpAnimator, std::default_delete<(anonymous namespace)::BumpAnimator>> {
    __compressed_pair<(anonymous namespace)::BumpAnimator *, std::default_delete<(anonymous namespace)::BumpAnimator>> __ptr_;
} unique_ptr<(anonymous namespace)::BumpAnimator, std::default_delete<(anonymous namespace)::BumpAnimator>>;

typedef struct _retain_ptr<VKTimedAnimation *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc VKTimedAnimation;
    _release_objc_arc _retain;
} _retain_ptr<VKTimedAnimation *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct Spring<double, 1, gdc::SpringType::Angular> {
    CGFloat _position;
    CGFloat _velocity;
    CGFloat _restingPosition;
    CGFloat _kSpring;
    CGFloat _kDamper;
} Spring<double, 1, gdc::SpringType::Angular>;

typedef struct Task {
} // Error Processing Struct Fields

typedef struct shared_ptr<geo::Task> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<(anonymous namespace)::PathAnimationDescription *, std::default_delete<(anonymous namespace)::PathAnimationDescription>> {
} // Error Processing Struct Fields

typedef struct unique_ptr<(anonymous namespace)::PathAnimationDescription, std::default_delete<(anonymous namespace)::PathAnimationDescription>> {
    __compressed_pair<(anonymous namespace)::PathAnimationDescription *, std::default_delete<(anonymous namespace)::PathAnimationDescription>> __ptr_;
} unique_ptr<(anonymous namespace)::PathAnimationDescription, std::default_delete<(anonymous namespace)::PathAnimationDescription>>;

typedef struct PendingPathAnimation {
} // Error Processing Struct Fields

typedef struct __compressed_pair<(anonymous namespace)::PendingPathAnimation *, std::default_delete<(anonymous namespace)::PendingPathAnimation>> {
    PendingPathAnimation __value_;
} __compressed_pair<(anonymous namespace)::PendingPathAnimation *, std::default_delete<(anonymous namespace)::PendingPathAnimation>>;

typedef struct unique_ptr<(anonymous namespace)::PendingPathAnimation, std::default_delete<(anonymous namespace)::PendingPathAnimation>> {
    __compressed_pair<(anonymous namespace)::PendingPathAnimation *, std::default_delete<(anonymous namespace)::PendingPathAnimation>> __ptr_;
} unique_ptr<(anonymous namespace)::PendingPathAnimation, std::default_delete<(anonymous namespace)::PendingPathAnimation>>;

typedef struct _retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc VKRouteContext;
    _release_objc_arc _retain;
} _retain_ptr<VKRouteContext *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct __CTFramesetter {
} // Error Processing Struct Fields

typedef struct RoadSignMetrics {
    unsigned char _orientation;
    CGFloat _scale;
    CGFloat _contentScale;
    CGFloat _arrowWeight;
    CGFloat _arrowLength;
    CGFloat _arrowTipCornerRadius;
    CGFloat _arrowJoinCornerRadius;
    CGSize _shadowOffset;
    CGFloat _shadowRadius;
    CGFloat _strokeWeight;
    CGFloat _innerStrokeWeight;
    CGFloat _signHeight;
    CGFloat _signMargin;
    CGFloat _horizontalMargin;
    CGFloat _verticalMargin;
    CGFloat _cornerRadius;
    CGSize _glyphSize;
    CGFloat _glyphVerticalOffset;
} RoadSignMetrics;

typedef struct StdAllocator<char, mdm::Allocator> {
    Allocator _allocator;
} StdAllocator<char, mdm::Allocator>;

typedef struct __compressed_pair<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>::__rep, geo::StdAllocator<char, mdm::Allocator>> {
    __rep __value_;
    StdAllocator<char, mdm::Allocator> __value_;
} __compressed_pair<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>::__rep, geo::StdAllocator<char, mdm::Allocator>>;

typedef struct basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> {
    __compressed_pair<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>::__rep, geo::StdAllocator<char, mdm::Allocator>> __r_;
} basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>;

typedef struct RoadSignTextMetrics {
    CGFloat _scale;
    CGFloat _contentScale;
    CGFloat _horizontalMargin;
    CGFloat _verticalMargin;
    CGFloat _verticalOffset;
    CGFloat _textSize;
    CGFloat _secondaryTextSize;
    basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> _fontFamily;
    basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> _secondaryFontFamily;
    CGFloat _textDrawWidth;
    CGFloat _textWrapWidth;
    unsigned char _maxLineCount;
    BOOL _isRTL;
} RoadSignTextMetrics;

typedef struct Matrix<double, 4, 1> {
    CGFloat _e;
} Matrix<double, 4, 1>;

typedef struct Color<double, 4, geo::ColorSpace::Linear> {
    Matrix<double, 4, 1> _backing;
} Color<double, 4, geo::ColorSpace::Linear>;

typedef struct array<geo::Color<double, 4, geo::ColorSpace::Linear>, 2UL> {
    Color<double, 4, geo::ColorSpace::Linear> __elems_;
} array<geo::Color<double, 4, geo::ColorSpace::Linear>, 2UL>;

typedef struct RoadSignColoring {
    BOOL _hasFillColor;
    BOOL _hasGradientFillColors;
    BOOL _hasGradientFillAngle;
    BOOL _hasStrokeColor;
    BOOL _hasInnerStrokeColor;
    BOOL _hasShadowColor;
    BOOL _hasTextColor;
    BOOL _hasSecondaryTextColor;
    Color<double, 4, geo::ColorSpace::Linear> _fillColor;
    array<geo::Color<double, 4, geo::ColorSpace::Linear>, 2UL> _gradientFillColors;
    Color<double, 4, geo::ColorSpace::Linear> _strokeColor;
    Color<double, 4, geo::ColorSpace::Linear> _innerStrokeColor;
    Color<double, 4, geo::ColorSpace::Linear> _shadowColor;
    Color<double, 4, geo::ColorSpace::Linear> _textColor;
    Color<double, 4, geo::ColorSpace::Linear> _secondaryTextColor;
    CGFloat _gradientFillAngle;
} RoadSignColoring;

typedef struct __CTLine {
} // Error Processing Struct Fields

typedef struct Box<float, 2> {
    Matrix<float, 2, 1> _minimum;
    Matrix<float, 2, 1> _maximum;
} Box<float, 2>;

typedef struct RoadSignPartMetrics {
    unsigned char _type;
    CGSize _imageSize;
    CGRect _signBaseRect;
    CGFloat _topEmptySpaceHeight;
    CGFloat _bottomEmptySpaceHeight;
    CGFloat _leftEmptySpaceWidth;
    CGFloat _rightEmptySpaceWidth;
    CGFloat _outsideImagePathExtension;
    BOOL _hasArrows;
    CGPoint _arrowWingMin;
    CGPoint _arrowWingMax;
    CGPoint _arrowTip;
    CGPoint _arrowAnchor;
} RoadSignPartMetrics;

typedef struct RoadSignGeneratedMetrics {
    RoadSignPartMetrics _leftRoadSignPartMetrics;
    RoadSignPartMetrics _rightRoadSignPartMetrics;
    RoadSignPartMetrics _stretchedRoadSignPartMetrics;
    RoadSignPartMetrics _middleRoadSignPartMetrics;
    BOOL _hasMiddleSignPart;
    CGSize _imageSize;
    CGRect _signBaseRect;
    CGRect _glyphRect;
    CGFloat _stretchedRoadSignPartWidth;
    CGPoint _arrowTipPosition;
    CGPoint _arrowAnchorPosition;
    CGPoint _textPosition;
    CGRect _textBounds;
    CGRect _leftPartRect;
    CGRect _rightPartRect;
    CGRect _stretchedPartRect;
    CGRect _middlePartRect;
    CGRect _middleLeftStretchedPartRect;
    CGRect _middleRightStretchedPartRect;
} RoadSignGeneratedMetrics;

typedef struct Matrix<float, 4, 1> {
    float field0;
} Matrix<float, 4, 1>;

typedef struct Color<float, 4, geo::ColorSpace::Linear> {
    Matrix<float, 4, 1> field0;
} Color<float, 4, geo::ColorSpace::Linear>;

typedef struct __CTFrame {
} // Error Processing Struct Fields

typedef struct LabelIcon {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::LabelIcon> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::pair<CGPoint, geo::Color<float, 4, geo::ColorSpace::Linear>> *, std::allocator<std::pair<CGPoint, geo::Color<float, 4, geo::ColorSpace::Linear>>>> {
    void __value_;
} __compressed_pair<std::pair<CGPoint, geo::Color<float, 4, geo::ColorSpace::Linear>> *, std::allocator<std::pair<CGPoint, geo::Color<float, 4, geo::ColorSpace::Linear>>>>;

typedef struct vector<std::pair<CGPoint, geo::Color<float, 4, geo::ColorSpace::Linear>>, std::allocator<std::pair<CGPoint, geo::Color<float, 4, geo::ColorSpace::Linear>>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<CGPoint, geo::Color<float, 4, geo::ColorSpace::Linear>> *, std::allocator<std::pair<CGPoint, geo::Color<float, 4, geo::ColorSpace::Linear>>>> __end_cap_;
} vector<std::pair<CGPoint, geo::Color<float, 4, geo::ColorSpace::Linear>>, std::allocator<std::pair<CGPoint, geo::Color<float, 4, geo::ColorSpace::Linear>>>>;

typedef struct __compressed_pair<std::pair<CGRect, geo::Color<float, 4, geo::ColorSpace::Linear>> *, std::allocator<std::pair<CGRect, geo::Color<float, 4, geo::ColorSpace::Linear>>>> {
    void __value_;
} __compressed_pair<std::pair<CGRect, geo::Color<float, 4, geo::ColorSpace::Linear>> *, std::allocator<std::pair<CGRect, geo::Color<float, 4, geo::ColorSpace::Linear>>>>;

typedef struct vector<std::pair<CGRect, geo::Color<float, 4, geo::ColorSpace::Linear>>, std::allocator<std::pair<CGRect, geo::Color<float, 4, geo::ColorSpace::Linear>>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<CGRect, geo::Color<float, 4, geo::ColorSpace::Linear>> *, std::allocator<std::pair<CGRect, geo::Color<float, 4, geo::ColorSpace::Linear>>>> __end_cap_;
} vector<std::pair<CGRect, geo::Color<float, 4, geo::ColorSpace::Linear>>, std::allocator<std::pair<CGRect, geo::Color<float, 4, geo::ColorSpace::Linear>>>>;

typedef struct _retain_ptr<VKImage *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc VKImage;
    _release_objc_arc _retain;
} _retain_ptr<VKImage *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, std::vector<RouteSection>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, std::vector<RouteSection>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::vector<RouteSection>>, std::less<unsigned int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::vector<RouteSection>>, std::less<unsigned int>, true>>;

typedef struct __tree<std::__value_type<unsigned int, std::vector<RouteSection>>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::vector<RouteSection>>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, std::vector<RouteSection>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, std::vector<RouteSection>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::vector<RouteSection>>, std::less<unsigned int>, true>> __pair3_;
} __tree<std::__value_type<unsigned int, std::vector<RouteSection>>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::vector<RouteSection>>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, std::vector<RouteSection>>>>;

typedef struct multimap<unsigned int, std::vector<RouteSection>, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::vector<RouteSection>>>> {
    __tree<std::__value_type<unsigned int, std::vector<RouteSection>>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::vector<RouteSection>>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, std::vector<RouteSection>>>> __tree_;
} multimap<unsigned int, std::vector<RouteSection>, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::vector<RouteSection>>>>;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct StringWithLocale {
    basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> text;
    basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> locale;
} StringWithLocale;

typedef struct LabelExternalTextElement {
    unsigned char minZoom;
    unsigned char textType;
    StringWithLocale text;
    StringWithLocale localizedText;
} LabelExternalTextElement;

typedef struct LabelExternalIconElement {
    Matrix<float, 2, 1> size;
    Matrix<float, 2, 1> anchorPoint;
    BOOL isRound;
    unsigned char minZoom;
} LabelExternalIconElement;

typedef struct LabelExternalFeature {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::LabelExternalFeature> {
} // Error Processing Struct Fields

typedef struct _retain_ptr<GEOFeatureStyleAttributes *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc GEOFeatureStyleAttributes;
    _release_objc_arc _retain;
} _retain_ptr<GEOFeatureStyleAttributes *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct RenderTargetFormat {
    int colorFormats;
    NSUInteger colorFormatsCount;
    unsigned int samples;
    int depthStencilFormat;
} RenderTargetFormat;

typedef struct BitmapDataBase {
} // Error Processing Struct Fields

typedef struct shared_ptr<ggl::BitmapDataBase> {
} // Error Processing Struct Fields

typedef struct __IOSurface {
} // Error Processing Struct Fields

typedef struct shared_ptr<ggl::Device> {
} // Error Processing Struct Fields

typedef struct IOSurfaceTexture {
} // Error Processing Struct Fields

typedef struct __compressed_pair<ggl::IOSurfaceTexture *, std::default_delete<ggl::IOSurfaceTexture>> {
    IOSurfaceTexture __value_;
} __compressed_pair<ggl::IOSurfaceTexture *, std::default_delete<ggl::IOSurfaceTexture>>;

typedef struct unique_ptr<ggl::IOSurfaceTexture, std::default_delete<ggl::IOSurfaceTexture>> {
    __compressed_pair<ggl::IOSurfaceTexture *, std::default_delete<ggl::IOSurfaceTexture>> __ptr_;
} unique_ptr<ggl::IOSurfaceTexture, std::default_delete<ggl::IOSurfaceTexture>>;

typedef struct RenderTarget {
} // Error Processing Struct Fields

typedef struct __compressed_pair<ggl::RenderTarget *, std::default_delete<ggl::RenderTarget>> {
    RenderTarget __value_;
} __compressed_pair<ggl::RenderTarget *, std::default_delete<ggl::RenderTarget>>;

typedef struct unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>> {
    __compressed_pair<ggl::RenderTarget *, std::default_delete<ggl::RenderTarget>> __ptr_;
} unique_ptr<ggl::RenderTarget, std::default_delete<ggl::RenderTarget>>;

typedef struct YFlipPass {
} // Error Processing Struct Fields

typedef struct __compressed_pair<(anonymous namespace)::YFlipPass *, std::default_delete<(anonymous namespace)::YFlipPass>> {
    YFlipPass __value_;
} __compressed_pair<(anonymous namespace)::YFlipPass *, std::default_delete<(anonymous namespace)::YFlipPass>>;

typedef struct unique_ptr<(anonymous namespace)::YFlipPass, std::default_delete<(anonymous namespace)::YFlipPass>> {
    __compressed_pair<(anonymous namespace)::YFlipPass *, std::default_delete<(anonymous namespace)::YFlipPass>> __ptr_;
} unique_ptr<(anonymous namespace)::YFlipPass, std::default_delete<(anonymous namespace)::YFlipPass>>;

typedef struct Renderer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<ggl::Renderer *, std::default_delete<ggl::Renderer>> {
    Renderer __value_;
} __compressed_pair<ggl::Renderer *, std::default_delete<ggl::Renderer>>;

typedef struct unique_ptr<ggl::Renderer, std::default_delete<ggl::Renderer>> {
    __compressed_pair<ggl::Renderer *, std::default_delete<ggl::Renderer>> __ptr_;
} unique_ptr<ggl::Renderer, std::default_delete<ggl::Renderer>>;

typedef struct Texture2DAbstract {
} // Error Processing Struct Fields

typedef struct shared_ptr<ggl::Texture2DAbstract> {
} // Error Processing Struct Fields

typedef struct RenderBuffer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<ggl::RenderBuffer *, std::default_delete<ggl::RenderBuffer>> {
    RenderBuffer __value_;
} __compressed_pair<ggl::RenderBuffer *, std::default_delete<ggl::RenderBuffer>>;

typedef struct unique_ptr<ggl::RenderBuffer, std::default_delete<ggl::RenderBuffer>> {
    __compressed_pair<ggl::RenderBuffer *, std::default_delete<ggl::RenderBuffer>> __ptr_;
} unique_ptr<ggl::RenderBuffer, std::default_delete<ggl::RenderBuffer>>;

typedef struct shared_ptr<ggl::RenderBuffer> {
} // Error Processing Struct Fields

typedef struct array<std::shared_ptr<ggl::RenderBuffer>, 3UL> {
    shared_ptr<ggl::RenderBuffer> __elems_;
} array<std::shared_ptr<ggl::RenderBuffer>, 3UL>;

typedef struct Texture {
} // Error Processing Struct Fields

typedef struct shared_ptr<ggl::Texture> {
} // Error Processing Struct Fields

typedef struct DebugConsoleManager {
} // Error Processing Struct Fields

typedef struct __compressed_pair<md::DebugConsoleManager *, std::default_delete<md::DebugConsoleManager>> {
    DebugConsoleManager __value_;
} __compressed_pair<md::DebugConsoleManager *, std::default_delete<md::DebugConsoleManager>>;

typedef struct unique_ptr<md::DebugConsoleManager, std::default_delete<md::DebugConsoleManager>> {
    __compressed_pair<md::DebugConsoleManager *, std::default_delete<md::DebugConsoleManager>> __ptr_;
} unique_ptr<md::DebugConsoleManager, std::default_delete<md::DebugConsoleManager>>;

typedef struct MuninJunction {
} // Error Processing Struct Fields

typedef struct MuninRoadEdge {
} // Error Processing Struct Fields

typedef struct vector<CGImage *, std::allocator<CGImage *>> {
} // Error Processing Struct Fields

typedef struct vector<__IOSurface *, std::allocator<__IOSurface *>> {
} // Error Processing Struct Fields

typedef struct duration<long long, std::ratio<1, 1000000000>> {
    NSInteger __rep_;
} duration<long long, std::ratio<1, 1000000000>>;

typedef struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> {
    duration<long long, std::ratio<1, 1000000000>> __d_;
} time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>;

typedef struct Stopwatch {
    time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> _startTime;
} Stopwatch;

typedef struct _retain_ptr<NSArray<VKARWalkingFeature *> *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc NSArray;
    _release_objc_arc _retain;
} _retain_ptr<NSArray<VKARWalkingFeature *> *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct _retain_ptr<NSMutableSet<id<VKARWalkingFeatureSetObserver>> *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc NSMutableSet;
    _release_objc_arc _retain;
} _retain_ptr<NSMutableSet<id<VKARWalkingFeatureSetObserver>> *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct OrientedBox<double, 2U, double, double> {
    RigidTransform<double, double> _transform;
    Box<double, 2> _bounds;
} OrientedBox<double, 2U, double, double>;

typedef struct _retain_ptr<GEOComposedRoute *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc GEOComposedRoute;
    _release_objc_arc _retain;
} _retain_ptr<GEOComposedRoute *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct _retain_ptr<VKARWalkingFeature *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc VKARWalkingFeature;
    _release_objc_arc _retain;
} _retain_ptr<VKARWalkingFeature *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct _retain_ptr<VKARWalkingFeatureSet *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc VKARWalkingFeatureSet;
    _release_objc_arc _retain;
} _retain_ptr<VKARWalkingFeatureSet *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct Box<double, 3> {
    Matrix<double, 3, 1> _minimum;
    Matrix<double, 3, 1> _maximum;
} Box<double, 3>;

typedef struct __compressed_pair<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator> *, std::allocator<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator>>> {
    void __value_;
} __compressed_pair<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator> *, std::allocator<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator>>>;

typedef struct vector<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator>, std::allocator<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator>>> {
    void __begin_;
    void __end_;
    __compressed_pair<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator> *, std::allocator<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator>>> __end_cap_;
} vector<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator>, std::allocator<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator>>>;

typedef struct VKRouteLineSnapResult {
    Mercator3<double> field0;
    pair<geo::Mercator3<double>, geo::Mercator3<double>> field1;
} VKRouteLineSnapResult;

typedef struct optional<VKRouteLineSnapResult> {
    unk field0;
    char field1;
    VKRouteLineSnapResult field2;
    BOOL field3;
} optional<VKRouteLineSnapResult>;

typedef struct __compressed_pair<gm::Matrix<float, 2, 1> *, std::allocator<gm::Matrix<float, 2, 1>>> {
    void field0;
} __compressed_pair<gm::Matrix<float, 2, 1> *, std::allocator<gm::Matrix<float, 2, 1>>>;

typedef struct vector<gm::Matrix<float, 2, 1>, std::allocator<gm::Matrix<float, 2, 1>>> {
    void field0;
    void field1;
    __compressed_pair<gm::Matrix<float, 2, 1> *, std::allocator<gm::Matrix<float, 2, 1>>> field2;
} vector<gm::Matrix<float, 2, 1>, std::allocator<gm::Matrix<float, 2, 1>>>;

typedef struct _fast_shared_ptr_control {
} // Error Processing Struct Fields

typedef struct fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator> {
    _fast_shared_ptr_control _control;
} fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator>;

typedef struct _retain_ptr<NSUUID *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc NSUUID;
    _release_objc_arc _retain;
} _retain_ptr<NSUUID *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct ManeuverArrowInfo {
} // Error Processing Struct Fields

typedef struct vector<md::ManeuverArrowInfo, std::allocator<md::ManeuverArrowInfo>> {
} // Error Processing Struct Fields

typedef struct ManeuverArrowCoordinates {
    vector<md::ManeuverArrowInfo, std::allocator<md::ManeuverArrowInfo>> _maneuverArrows;
} ManeuverArrowCoordinates;

typedef struct TextureAtlas {
    unk field0;
} TextureAtlas;

typedef struct TextureAtlasRegion {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::TextureAtlasRegion> {
} // Error Processing Struct Fields

typedef struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
    uint8_t __a_value;
    BOOL field1;
} __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>;

typedef struct atomic<bool> {
    __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> __a_;
} atomic<bool>;

typedef struct GlobeView {
} // Error Processing Struct Fields

typedef struct GlobeOverlayContainer {
    GlobeView field0;
    id field1;
    mutex field2;
    CGFloat field3;
} GlobeOverlayContainer;

typedef struct AltitudeDebugSettings {
    BOOL altitudePauseLoading;
    BOOL altitudeFreezeViewNode;
    BOOL altitudeTexturePaging;
    BOOL altitudeShowTileBounds;
    BOOL altitudeThreadDrawing;
    BOOL altitudeMipmapSatellite;
    BOOL altitudeMipmapFlyover;
    BOOL altitudeMipmapObjectTree;
    BOOL altitudeShowNightLight;
    float lodScale;
    float tileQualityThreshold;
    float hideMeshTime;
    float fadeSpeed;
    BOOL tourSpeedup;
    float tourSpeedupFactor;
} AltitudeDebugSettings;

typedef struct GlobeAdapter {
} // Error Processing Struct Fields

typedef struct __compressed_pair<md::GlobeAdapter *, std::default_delete<md::GlobeAdapter>> {
    GlobeAdapter __value_;
} __compressed_pair<md::GlobeAdapter *, std::default_delete<md::GlobeAdapter>>;

typedef struct unique_ptr<md::GlobeAdapter, std::default_delete<md::GlobeAdapter>> {
    __compressed_pair<md::GlobeAdapter *, std::default_delete<md::GlobeAdapter>> __ptr_;
} unique_ptr<md::GlobeAdapter, std::default_delete<md::GlobeAdapter>>;

typedef struct shared_ptr<md::GlobeOverlayContainer> {
} // Error Processing Struct Fields

typedef struct FlyoverLibrary {
} // Error Processing Struct Fields

typedef struct shared_ptr<ggl::FlyoverLibrary> {
} // Error Processing Struct Fields

typedef struct shared_ptr<bool> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::shared_ptr<md::RouteLineData>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::shared_ptr<md::RouteLineData>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<std::shared_ptr<md::RouteLineData>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::less<std::shared_ptr<md::RouteLineData>>>;

typedef struct __tree<std::shared_ptr<md::RouteLineData>, std::less<std::shared_ptr<md::RouteLineData>>, std::allocator<std::shared_ptr<md::RouteLineData>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::shared_ptr<md::RouteLineData>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::less<std::shared_ptr<md::RouteLineData>>> __pair3_;
} __tree<std::shared_ptr<md::RouteLineData>, std::less<std::shared_ptr<md::RouteLineData>>, std::allocator<std::shared_ptr<md::RouteLineData>>>;

typedef struct set<std::shared_ptr<md::RouteLineData>, std::less<std::shared_ptr<md::RouteLineData>>, std::allocator<std::shared_ptr<md::RouteLineData>>> {
    __tree<std::shared_ptr<md::RouteLineData>, std::less<std::shared_ptr<md::RouteLineData>>, std::allocator<std::shared_ptr<md::RouteLineData>>> __tree_;
} set<std::shared_ptr<md::RouteLineData>, std::less<std::shared_ptr<md::RouteLineData>>, std::allocator<std::shared_ptr<md::RouteLineData>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<gm::Box<double, 2>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<gm::Box<double, 2>, void *>>>;

typedef struct __compressed_pair<unsigned long, md::MultiRectSetCompare> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, md::MultiRectSetCompare>;

typedef struct __tree<gm::Box<double, 2>, md::MultiRectSetCompare, std::allocator<gm::Box<double, 2>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<gm::Box<double, 2>, void *>>> __pair1_;
    __compressed_pair<unsigned long, md::MultiRectSetCompare> __pair3_;
} __tree<gm::Box<double, 2>, md::MultiRectSetCompare, std::allocator<gm::Box<double, 2>>>;

typedef struct set<gm::Box<double, 2>, md::MultiRectSetCompare, std::allocator<gm::Box<double, 2>>> {
    __tree<gm::Box<double, 2>, md::MultiRectSetCompare, std::allocator<gm::Box<double, 2>>> __tree_;
} set<gm::Box<double, 2>, md::MultiRectSetCompare, std::allocator<gm::Box<double, 2>>>;

typedef struct MultiRectRegion {
    set<gm::Box<double, 2>, md::MultiRectSetCompare, std::allocator<gm::Box<double, 2>>> _rects;
    Box<double, 2> _enclosingRect;
} MultiRectRegion;

typedef struct TrafficSegmentsAlongRoute {
} // Error Processing Struct Fields

typedef struct __compressed_pair<md::TrafficSegmentsAlongRoute *, std::default_delete<md::TrafficSegmentsAlongRoute>> {
    TrafficSegmentsAlongRoute __value_;
} __compressed_pair<md::TrafficSegmentsAlongRoute *, std::default_delete<md::TrafficSegmentsAlongRoute>>;

typedef struct unique_ptr<md::TrafficSegmentsAlongRoute, std::default_delete<md::TrafficSegmentsAlongRoute>> {
    __compressed_pair<md::TrafficSegmentsAlongRoute *, std::default_delete<md::TrafficSegmentsAlongRoute>> __ptr_;
} unique_ptr<md::TrafficSegmentsAlongRoute, std::default_delete<md::TrafficSegmentsAlongRoute>>;

typedef struct _retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc VKPolylineOverlay;
    _release_objc_arc _retain;
} _retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<id<VKRouteOverlay>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<id<VKRouteOverlay>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<id<VKRouteOverlay>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::less<id<VKRouteOverlay>>>;

typedef struct __tree<id<VKRouteOverlay>, std::less<id<VKRouteOverlay>>, std::allocator<id<VKRouteOverlay>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<id<VKRouteOverlay>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::less<id<VKRouteOverlay>>> __pair3_;
} __tree<id<VKRouteOverlay>, std::less<id<VKRouteOverlay>>, std::allocator<id<VKRouteOverlay>>>;

typedef struct set<id<VKRouteOverlay>, std::less<id<VKRouteOverlay>>, std::allocator<id<VKRouteOverlay>>> {
    __tree<id<VKRouteOverlay>, std::less<id<VKRouteOverlay>>, std::allocator<id<VKRouteOverlay>>> __tree_;
} set<id<VKRouteOverlay>, std::less<id<VKRouteOverlay>>, std::allocator<id<VKRouteOverlay>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<__unsafe_unretained id<VKRouteOverlay>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<__unsafe_unretained id<VKRouteOverlay>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<__unsafe_unretained id<VKRouteOverlay>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::less<__unsafe_unretained id<VKRouteOverlay>>>;

typedef struct __tree<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<__unsafe_unretained id<VKRouteOverlay>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::less<__unsafe_unretained id<VKRouteOverlay>>> __pair3_;
} __tree<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>>;

typedef struct set<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>> {
    __tree<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>> __tree_;
} set<__unsafe_unretained id<VKRouteOverlay>, std::less<__unsafe_unretained id<VKRouteOverlay>>, std::allocator<__unsafe_unretained id<VKRouteOverlay>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, std::less<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, std::less<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>, true>>;

typedef struct __tree<std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, std::__map_value_compare<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, std::less<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>, true>, std::allocator<std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, std::less<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>, true>> __pair3_;
} __tree<std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, std::__map_value_compare<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, std::less<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>, true>, std::allocator<std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>>>;

typedef struct map<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>, std::less<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>, std::allocator<std::pair<const geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>>> {
    __tree<std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, std::__map_value_compare<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>, std::less<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>, true>, std::allocator<std::__value_type<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>>> __tree_;
} map<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>, std::less<geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>>, std::allocator<std::pair<const geo::_retain_ptr<VKPolylineOverlay *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>, std::weak_ptr<altitude::RouteLineData>>>>;

typedef struct VKGlobeRouteSplit {
    unk field0;
    id field1;
} VKGlobeRouteSplit;

typedef struct GEOTileSetRegion {
    unsigned int _maxX;
    unsigned int _maxY;
    unsigned int _maxZ;
    unsigned int _minX;
    unsigned int _minY;
    unsigned int _minZ;
} GEOTileSetRegion;

typedef struct VKDebugLabelAnimationItemParameters {
    float startDelay;
    float delay;
    float duration;
    NSUInteger easing;
} VKDebugLabelAnimationItemParameters;

typedef struct VKDebugLabelAnimationParameters {
    VKDebugLabelAnimationItemParameters alpha;
    VKDebugLabelAnimationItemParameters scale;
    VKDebugLabelAnimationItemParameters translate;
    VKDebugLabelAnimationItemParameters rotate;
} VKDebugLabelAnimationParameters;

typedef struct GeoCodecsPointFeature {
} // Error Processing Struct Fields

typedef struct GeoCodecsConnectivityJunction {
    unsigned int field0;
    unsigned int field1;
    GeoCodecsPointFeature field2;
} GeoCodecsConnectivityJunction;

typedef struct LabelManager {
} // Error Processing Struct Fields

typedef struct MapNavLabeler {
} // Error Processing Struct Fields

typedef struct LabelLayoutContext {
} // Error Processing Struct Fields

typedef struct LabelNavLayoutContext {
} // Error Processing Struct Fields

typedef struct NavContext {
    unk field0;
    LabelManager field1;
    MapNavLabeler field2;
    LabelLayoutContext field3;
    LabelNavLayoutContext field4;
} NavContext;

typedef struct GeoCodecsMultiSectionFeature {
} // Error Processing Struct Fields

typedef struct GeoCodecsRoadEdge {
} // Error Processing Struct Fields

typedef struct LabelTile {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::LabelTile> {
} // Error Processing Struct Fields

typedef struct optional<gss::LineType> {
    BOOL _hasValue;
    long _value;
    int data;
    unsigned char type;
    unsigned char field4;
} optional<gss::LineType>;

typedef struct StdAllocator<gm::Matrix<double, 2, 1>, mdm::Allocator> {
    Allocator _allocator;
} StdAllocator<gm::Matrix<double, 2, 1>, mdm::Allocator>;

typedef struct __compressed_pair<gm::Matrix<double, 2, 1> *, geo::StdAllocator<gm::Matrix<double, 2, 1>, mdm::Allocator>> {
    void __value_;
    StdAllocator<gm::Matrix<double, 2, 1>, mdm::Allocator> __value_;
} __compressed_pair<gm::Matrix<double, 2, 1> *, geo::StdAllocator<gm::Matrix<double, 2, 1>, mdm::Allocator>>;

typedef struct vector<gm::Matrix<double, 2, 1>, geo::StdAllocator<gm::Matrix<double, 2, 1>, mdm::Allocator>> {
    void __begin_;
    void __end_;
    __compressed_pair<gm::Matrix<double, 2, 1> *, geo::StdAllocator<gm::Matrix<double, 2, 1>, mdm::Allocator>> __end_cap_;
} vector<gm::Matrix<double, 2, 1>, geo::StdAllocator<gm::Matrix<double, 2, 1>, mdm::Allocator>>;

typedef struct StdAllocator<float, mdm::Allocator> {
    Allocator _allocator;
} StdAllocator<float, mdm::Allocator>;

typedef struct __compressed_pair<float *, geo::StdAllocator<float, mdm::Allocator>> {
    float __value_;
    StdAllocator<float, mdm::Allocator> __value_;
} __compressed_pair<float *, geo::StdAllocator<float, mdm::Allocator>>;

typedef struct vector<float, geo::StdAllocator<float, mdm::Allocator>> {
    float __begin_;
    float __end_;
    __compressed_pair<float *, geo::StdAllocator<float, mdm::Allocator>> __end_cap_;
} vector<float, geo::StdAllocator<float, mdm::Allocator>>;

typedef struct __compressed_pair<geo::Coordinate2D<geo::Radians, double> *, std::allocator<geo::Coordinate2D<geo::Radians, double>>> {
    void field0;
} __compressed_pair<geo::Coordinate2D<geo::Radians, double> *, std::allocator<geo::Coordinate2D<geo::Radians, double>>>;

typedef struct vector<geo::Coordinate2D<geo::Radians, double>, std::allocator<geo::Coordinate2D<geo::Radians, double>>> {
    void field0;
    void field1;
    __compressed_pair<geo::Coordinate2D<geo::Radians, double> *, std::allocator<geo::Coordinate2D<geo::Radians, double>>> field2;
} vector<geo::Coordinate2D<geo::Radians, double>, std::allocator<geo::Coordinate2D<geo::Radians, double>>>;

typedef struct RoadSignOrientationResolver {
    void field0;
    Unit<geo::RadianUnitDescription, float> field1;
    unsigned char field2;
} RoadSignOrientationResolver;

typedef struct StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator> {
    Allocator _allocator;
} StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>;

typedef struct __compressed_pair<unsigned long, geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>> {
    NSUInteger __value_;
    StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator> __value_;
} __compressed_pair<unsigned long, geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>>;

typedef struct __bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>> {
    __compressed_pair<unsigned long, geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>> __data_;
} __bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> **, std::__bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>>> {
    void __value_;
    __bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> **, std::__bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *[], std::__bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> **, std::__bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *[], std::__bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>>>;

typedef struct __hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *>;

typedef struct StdAllocator<std::__hash_node<std::shared_ptr<md::LabelTile>, void *>, mdm::Allocator> {
    Allocator _allocator;
} StdAllocator<std::__hash_node<std::shared_ptr<md::LabelTile>, void *>, mdm::Allocator>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *>, geo::StdAllocator<std::__hash_node<std::shared_ptr<md::LabelTile>, void *>, mdm::Allocator>> {
    __hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> __value_;
    StdAllocator<std::__hash_node<std::shared_ptr<md::LabelTile>, void *>, mdm::Allocator> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *>, geo::StdAllocator<std::__hash_node<std::shared_ptr<md::LabelTile>, void *>, mdm::Allocator>>;

typedef struct __compressed_pair<unsigned long, std::hash<std::shared_ptr<md::LabelTile>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<std::shared_ptr<md::LabelTile>>>;

typedef struct __compressed_pair<float, std::equal_to<std::shared_ptr<md::LabelTile>>> {
    float __value_;
} __compressed_pair<float, std::equal_to<std::shared_ptr<md::LabelTile>>>;

typedef struct __hash_table<std::shared_ptr<md::LabelTile>, std::hash<std::shared_ptr<md::LabelTile>>, std::equal_to<std::shared_ptr<md::LabelTile>>, geo::StdAllocator<std::shared_ptr<md::LabelTile>, mdm::Allocator>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *[], std::__bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *> *, mdm::Allocator>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::shared_ptr<md::LabelTile>, void *> *>, geo::StdAllocator<std::__hash_node<std::shared_ptr<md::LabelTile>, void *>, mdm::Allocator>> __p1_;
    __compressed_pair<unsigned long, std::hash<std::shared_ptr<md::LabelTile>>> __p2_;
    __compressed_pair<float, std::equal_to<std::shared_ptr<md::LabelTile>>> __p3_;
} __hash_table<std::shared_ptr<md::LabelTile>, std::hash<std::shared_ptr<md::LabelTile>>, std::equal_to<std::shared_ptr<md::LabelTile>>, geo::StdAllocator<std::shared_ptr<md::LabelTile>, mdm::Allocator>>;

typedef struct unordered_set<std::shared_ptr<md::LabelTile>, std::hash<std::shared_ptr<md::LabelTile>>, std::equal_to<std::shared_ptr<md::LabelTile>>, geo::StdAllocator<std::shared_ptr<md::LabelTile>, mdm::Allocator>> {
    __hash_table<std::shared_ptr<md::LabelTile>, std::hash<std::shared_ptr<md::LabelTile>>, std::equal_to<std::shared_ptr<md::LabelTile>>, geo::StdAllocator<std::shared_ptr<md::LabelTile>, mdm::Allocator>> __table_;
} unordered_set<std::shared_ptr<md::LabelTile>, std::hash<std::shared_ptr<md::LabelTile>>, std::equal_to<std::shared_ptr<md::LabelTile>>, geo::StdAllocator<std::shared_ptr<md::LabelTile>, mdm::Allocator>>;

typedef struct StdAllocator<std::shared_ptr<md::NavLabel>, mdm::Allocator> {
    Allocator _allocator;
} StdAllocator<std::shared_ptr<md::NavLabel>, mdm::Allocator>;

typedef struct __compressed_pair<std::shared_ptr<md::NavLabel> *, geo::StdAllocator<std::shared_ptr<md::NavLabel>, mdm::Allocator>> {
    void __value_;
    StdAllocator<std::shared_ptr<md::NavLabel>, mdm::Allocator> __value_;
} __compressed_pair<std::shared_ptr<md::NavLabel> *, geo::StdAllocator<std::shared_ptr<md::NavLabel>, mdm::Allocator>>;

typedef struct vector<std::shared_ptr<md::NavLabel>, geo::StdAllocator<std::shared_ptr<md::NavLabel>, mdm::Allocator>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<md::NavLabel> *, geo::StdAllocator<std::shared_ptr<md::NavLabel>, mdm::Allocator>> __end_cap_;
} vector<std::shared_ptr<md::NavLabel>, geo::StdAllocator<std::shared_ptr<md::NavLabel>, mdm::Allocator>>;

typedef struct NavCurrentRoadSign {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::NavCurrentRoadSign> {
} // Error Processing Struct Fields

typedef struct AvoidanceRectWithPriority {
} // Error Processing Struct Fields

typedef struct vector<md::AvoidanceRectWithPriority, geo::StdAllocator<md::AvoidanceRectWithPriority, mdm::Allocator>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, geo::range_map<geo::Unit<geo::RadianUnitDescription, float>, md::OrientationAction>::RangeCompare, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, geo::range_map<geo::Unit<geo::RadianUnitDescription, float>, md::OrientationAction>::RangeCompare, true>>;

typedef struct __tree<std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, std::__map_value_compare<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, geo::range_map<geo::Unit<geo::RadianUnitDescription, float>, md::OrientationAction>::RangeCompare, true>, std::allocator<std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, geo::range_map<geo::Unit<geo::RadianUnitDescription, float>, md::OrientationAction>::RangeCompare, true>> __pair3_;
} __tree<std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, std::__map_value_compare<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, geo::range_map<geo::Unit<geo::RadianUnitDescription, float>, md::OrientationAction>::RangeCompare, true>, std::allocator<std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>>>;

typedef struct map<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction, geo::range_map<geo::Unit<geo::RadianUnitDescription, float>, md::OrientationAction>::RangeCompare, std::allocator<std::pair<const gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>>> {
    __tree<std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, std::__map_value_compare<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>, geo::range_map<geo::Unit<geo::RadianUnitDescription, float>, md::OrientationAction>::RangeCompare, true>, std::allocator<std::__value_type<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>>> __tree_;
} map<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction, geo::range_map<geo::Unit<geo::RadianUnitDescription, float>, md::OrientationAction>::RangeCompare, std::allocator<std::pair<const gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>>>;

typedef struct range_map<geo::Unit<geo::RadianUnitDescription, float>, md::OrientationAction, std::less<geo::Unit<geo::RadianUnitDescription, float>>, std::allocator<std::pair<const gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>>> {
    map<gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction, geo::range_map<geo::Unit<geo::RadianUnitDescription, float>, md::OrientationAction>::RangeCompare, std::allocator<std::pair<const gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>>> _storage;
} range_map<geo::Unit<geo::RadianUnitDescription, float>, md::OrientationAction, std::less<geo::Unit<geo::RadianUnitDescription, float>>, std::allocator<std::pair<const gm::Range<geo::Unit<geo::RadianUnitDescription, float>>, md::OrientationAction>>>;

typedef struct _retain_ptr<id<VKCustomFeatureDataSource>, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc <VKCustomFeatureDataSource>;
    _release_objc_arc _retain;
} _retain_ptr<id<VKCustomFeatureDataSource>, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct GeoServicesLoadJob {
} // Error Processing Struct Fields

typedef struct shared_ptr<altitude::GeoServicesLoadJob> {
} // Error Processing Struct Fields

typedef struct _retain_ptr<GEOVectorTileDecoder *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc GEOVectorTileDecoder;
    _release_objc_arc _retain;
} _retain_ptr<GEOVectorTileDecoder *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct _retain_ptr<GEOApplicationAuditToken *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc GEOApplicationAuditToken;
    _release_objc_arc _retain;
} _retain_ptr<GEOApplicationAuditToken *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, GEOTileKeyHashFunc, GEOTileKeyEqualsFunc, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, GEOTileKeyHashFunc, GEOTileKeyEqualsFunc, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, GEOTileKeyEqualsFunc, GEOTileKeyHashFunc, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, GEOTileKeyEqualsFunc, GEOTileKeyHashFunc, true>>;

typedef struct __hash_table<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, GEOTileKeyHashFunc, GEOTileKeyEqualsFunc, true>, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, GEOTileKeyEqualsFunc, GEOTileKeyHashFunc, true>, std::allocator<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, GEOTileKeyHashFunc, GEOTileKeyEqualsFunc, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, GEOTileKeyEqualsFunc, GEOTileKeyHashFunc, true>> __p3_;
} __hash_table<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, GEOTileKeyHashFunc, GEOTileKeyEqualsFunc, true>, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, GEOTileKeyEqualsFunc, GEOTileKeyHashFunc, true>, std::allocator<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>>>;

typedef struct unordered_map<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>, GEOTileKeyHashFunc, GEOTileKeyEqualsFunc, std::allocator<std::pair<const _GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>>> {
    __hash_table<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, std::__unordered_map_hasher<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, GEOTileKeyHashFunc, GEOTileKeyEqualsFunc, true>, std::__unordered_map_equal<_GEOTileKey, std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>, GEOTileKeyEqualsFunc, GEOTileKeyHashFunc, true>, std::allocator<std::__hash_value_type<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>>> __table_;
} unordered_map<_GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>, GEOTileKeyHashFunc, GEOTileKeyEqualsFunc, std::allocator<std::pair<const _GEOTileKey, std::shared_ptr<altitude::GeoServicesLoadJob>>>>;

typedef struct Mutex {
    void mMutex;
} Mutex;

typedef struct CameraManager {
    unk _vptr$CameraManager;
    BOOL _panBegin;
    BOOL _panInProgress;
    BOOL _panEnd;
    Matrix<int, 2, 1> _panCurrentCursor;
    Matrix<int, 2, 1> _panPreviousCursor;
    Matrix<int, 2, 1> _panStartCursor;
    Coordinate3D<geo::Radians, double> _panStartPosition;
    CGFloat _panDistance;
    BOOL _panAtStartPosition;
    BOOL _rotateBegin;
    BOOL _rotateInProgress;
    BOOL _rotateEnd;
    Coordinate3D<geo::Radians, double> _rotateStartPosition;
    Matrix<int, 2, 1> _rotateCurrentCursor;
    CGFloat _rotateAngle;
    BOOL _tiltBegin;
    BOOL _tiltInProgress;
    BOOL _tiltEnd;
    Coordinate3D<geo::Radians, double> _tiltStartPosition;
    Matrix<int, 2, 1> _tiltCurrentCursor;
    Matrix<int, 2, 1> _tiltPreviousCursor;
    CGFloat _tiltAngle;
    BOOL _zoomBegin;
    BOOL _zoomInProgress;
    BOOL _zoomEnd;
    Coordinate3D<geo::Radians, double> _zoomStartPosition;
    Matrix<int, 2, 1> _zoomCurrentCursor;
    CGFloat _zoomFactor;
    CGFloat _zoomStartDistance;
    BOOL _zoomRotateToNorth;
    BOOL _useTiltLimit;
    int _tiltLimitMode;
    BOOL _tiltLimitPushDownEnabled;
    BOOL _tiltLimitTransferInProgress;
    BOOL _tiltLimitPushDown;
    CGFloat _startPushDownTilt;
    CGFloat _tiltLimitTransferFraction;
    CGFloat _startTiltLimitTilt;
    Geocentric<double> _startTiltLimitPosition;
    Matrix<double, 3, 1> _startTiltLimitDirection;
    CGFloat _fullZoomTiltLimitFactor;
    Box<double, 2> _singleRestriction;
    Box<double, 2> _westOfDatelineRestriction;
    Box<double, 2> _eastOfDatelineRestriction;
} CameraManager;

typedef struct __compressed_pair<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh> *, std::allocator<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>>> {
    void __value_;
} __compressed_pair<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh> *, std::allocator<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>>>;

typedef struct vector<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>, std::allocator<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh> *, std::allocator<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>>> __end_cap_;
} vector<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>, std::allocator<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>>>;

typedef struct DataWrite<ggl::BuildingFlatStroke::DefaultVbo> {
    BufferMemory _memory;
} DataWrite<ggl::BuildingFlatStroke::DefaultVbo>;

typedef struct MeshSet<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh, ggl::BuildingFlatStroke::DefaultVbo> {
} // Error Processing Struct Fields

typedef struct optional<md::MeshSet<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh, ggl::BuildingFlatStroke::DefaultVbo>> {
    BOOL _hasValue;
    long _value;
    int data;
    unsigned char type;
    MeshSet<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh, ggl::BuildingFlatStroke::DefaultVbo> field4;
} optional<md::MeshSet<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh, ggl::BuildingFlatStroke::DefaultVbo>>;

typedef struct __compressed_pair<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh> *, std::default_delete<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>>> {
    void __value_;
} __compressed_pair<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh> *, std::default_delete<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>>>;

typedef struct unique_ptr<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>, std::default_delete<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>>> {
    __compressed_pair<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh> *, std::default_delete<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>>> __ptr_;
} unique_ptr<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>, std::default_delete<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>>>;

typedef struct __compressed_pair<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> *, std::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> {
    void __value_;
} __compressed_pair<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> *, std::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>>;

typedef struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> {
    __compressed_pair<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh> *, std::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> __ptr_;
} unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>>;

typedef struct __compressed_pair<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh> *, std::default_delete<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>>> {
    void __value_;
} __compressed_pair<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh> *, std::default_delete<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>>>;

typedef struct unique_ptr<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>, std::default_delete<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>>> {
    __compressed_pair<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh> *, std::default_delete<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>>> __ptr_;
} unique_ptr<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>, std::default_delete<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>>>;

typedef struct __compressed_pair<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>> *, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> {
    void __value_;
} __compressed_pair<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>> *, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>;

typedef struct vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>> *, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> __end_cap_;
} vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>;

typedef struct VKLabelNavRouteRoadEdge {
} // Error Processing Struct Fields

typedef struct _retain_ptr<VKSharedResources *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk _vptr$_retain_ptr;
    id _obj;
    _retain_objc_arc VKSharedResources;
    _release_objc_arc _retain;
} _retain_ptr<VKSharedResources *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct __compressed_pair<std::function<void ()> **, std::allocator<std::function<void ()> *>> {
    void __value_;
} __compressed_pair<std::function<void ()> **, std::allocator<std::function<void ()> *>>;

typedef struct __split_buffer<std::function<void ()> *, std::allocator<std::function<void ()> *>> {
    void __first_;
    void __begin_;
    void __end_;
    __compressed_pair<std::function<void ()> **, std::allocator<std::function<void ()> *>> __end_cap_;
} __split_buffer<std::function<void ()> *, std::allocator<std::function<void ()> *>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::function<void ()>>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::function<void ()>>>;

typedef struct deque<std::function<void ()>, std::allocator<std::function<void ()>>> {
    __split_buffer<std::function<void ()> *, std::allocator<std::function<void ()> *>> __map_;
    NSUInteger __start_;
    __compressed_pair<unsigned long, std::allocator<std::function<void ()>>> __size_;
} deque<std::function<void ()>, std::allocator<std::function<void ()>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<md::Anchor *, float>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<md::Anchor *, float>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<md::Anchor *, std::__value_type<md::Anchor *, float>, std::less<md::Anchor *>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<md::Anchor *, std::__value_type<md::Anchor *, float>, std::less<md::Anchor *>, true>>;

typedef struct __tree<std::__value_type<md::Anchor *, float>, std::__map_value_compare<md::Anchor *, std::__value_type<md::Anchor *, float>, std::less<md::Anchor *>, true>, std::allocator<std::__value_type<md::Anchor *, float>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<md::Anchor *, float>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<md::Anchor *, std::__value_type<md::Anchor *, float>, std::less<md::Anchor *>, true>> __pair3_;
} __tree<std::__value_type<md::Anchor *, float>, std::__map_value_compare<md::Anchor *, std::__value_type<md::Anchor *, float>, std::less<md::Anchor *>, true>, std::allocator<std::__value_type<md::Anchor *, float>>>;

typedef struct map<md::Anchor *, float, std::less<md::Anchor *>, std::allocator<std::pair<md::Anchor *const, float>>> {
    __tree<std::__value_type<md::Anchor *, float>, std::__map_value_compare<md::Anchor *, std::__value_type<md::Anchor *, float>, std::less<md::Anchor *>, true>, std::allocator<std::__value_type<md::Anchor *, float>>> __tree_;
} map<md::Anchor *, float, std::less<md::Anchor *>, std::allocator<std::pair<md::Anchor *const, float>>>;

typedef struct Range<signed char> {
    char _min;
    char _max;
} Range<signed char>;

typedef struct shared_ptr<std::vector<geo::Mercator2<double>>> {
} // Error Processing Struct Fields

typedef struct shared_ptr<std::vector<double>> {
} // Error Processing Struct Fields

typedef struct PolylineWithElevation {
    shared_ptr<std::vector<geo::Mercator2<double>>> field0;
    shared_ptr<std::vector<double>> field1;
} PolylineWithElevation;

typedef struct __compressed_pair<geo::Mercator2<double> *, std::allocator<geo::Mercator2<double>>> {
    void __value_;
} __compressed_pair<geo::Mercator2<double> *, std::allocator<geo::Mercator2<double>>>;

typedef struct vector<geo::Mercator2<double>, std::allocator<geo::Mercator2<double>>> {
    void __begin_;
    void __end_;
    __compressed_pair<geo::Mercator2<double> *, std::allocator<geo::Mercator2<double>>> __end_cap_;
} vector<geo::Mercator2<double>, std::allocator<geo::Mercator2<double>>>;

typedef struct __compressed_pair<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy> *, std::default_delete<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy>>> {
    void __value_;
} __compressed_pair<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy> *, std::default_delete<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy>>>;

typedef struct unique_ptr<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy>, std::default_delete<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy>>> {
    __compressed_pair<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy> *, std::default_delete<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy>>> __ptr_;
} unique_ptr<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy>, std::default_delete<geo::Cache<unsigned char, PolylineWithElevation, std::hash<unsigned char>, geo::LRUPolicy>>>;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct unfair_lock {
    os_unfair_lock_s _lock;
} unfair_lock;

typedef struct PolylineOverlayStyle {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::PolylineOverlayStyle> {
} // Error Processing Struct Fields

typedef struct CircleOverlayRenderable {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::CircleOverlayRenderable> {
} // Error Processing Struct Fields

typedef struct Style {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::CircleOverlayRenderable::Style> {
} // Error Processing Struct Fields

typedef struct shared_ptr<geo::Polygon2<double>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<geo::Cache<unsigned char, std::shared_ptr<geo::Polygon2<double>>, std::hash<unsigned char>, geo::LRUPolicy> *, std::default_delete<geo::Cache<unsigned char, std::shared_ptr<geo::Polygon2<double>>, std::hash<unsigned char>, geo::LRUPolicy>>> {
    void __value_;
} __compressed_pair<geo::Cache<unsigned char, std::shared_ptr<geo::Polygon2<double>>, std::hash<unsigned char>, geo::LRUPolicy> *, std::default_delete<geo::Cache<unsigned char, std::shared_ptr<geo::Polygon2<double>>, std::hash<unsigned char>, geo::LRUPolicy>>>;

typedef struct unique_ptr<geo::Cache<unsigned char, std::shared_ptr<geo::Polygon2<double>>, std::hash<unsigned char>, geo::LRUPolicy>, std::default_delete<geo::Cache<unsigned char, std::shared_ptr<geo::Polygon2<double>>, std::hash<unsigned char>, geo::LRUPolicy>>> {
    __compressed_pair<geo::Cache<unsigned char, std::shared_ptr<geo::Polygon2<double>>, std::hash<unsigned char>, geo::LRUPolicy> *, std::default_delete<geo::Cache<unsigned char, std::shared_ptr<geo::Polygon2<double>>, std::hash<unsigned char>, geo::LRUPolicy>>> __ptr_;
} unique_ptr<geo::Cache<unsigned char, std::shared_ptr<geo::Polygon2<double>>, std::hash<unsigned char>, geo::LRUPolicy>, std::default_delete<geo::Cache<unsigned char, std::shared_ptr<geo::Polygon2<double>>, std::hash<unsigned char>, geo::LRUPolicy>>>;

typedef struct shared_ptr<md::PolygonOverlayRenderable::Style> {
} // Error Processing Struct Fields

typedef struct Mercator2<double> {
    CGFloat _e;
} Mercator2<double>;

typedef struct NavLabel {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::NavLabel> {
} // Error Processing Struct Fields

typedef struct LabelNavJunctionInfo {
} // Error Processing Struct Fields

typedef struct vector<LabelNavJunctionInfo, geo::StdAllocator<LabelNavJunctionInfo, mdm::Allocator>> {
} // Error Processing Struct Fields

typedef struct StdAllocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> *, mdm::Allocator> {
    Allocator _allocator;
} StdAllocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> *, mdm::Allocator>;

typedef struct __compressed_pair<unsigned long, geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> *, mdm::Allocator>> {
    NSUInteger __value_;
    StdAllocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> *, mdm::Allocator> __value_;
} __compressed_pair<unsigned long, geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> *, mdm::Allocator>>;

typedef struct __bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> *, mdm::Allocator>> {
    __compressed_pair<unsigned long, geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> *, mdm::Allocator>> __data_;
} __bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> *, mdm::Allocator>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> **, std::__bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> *, mdm::Allocator>>> {
    void __value_;
    __bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> *, mdm::Allocator>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> **, std::__bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> *, mdm::Allocator>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> *[], std::__bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> *, mdm::Allocator>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> **, std::__bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> *, mdm::Allocator>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> *[], std::__bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> *, mdm::Allocator>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *>;

typedef struct StdAllocator<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *>, mdm::Allocator> {
    Allocator _allocator;
} StdAllocator<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *>, mdm::Allocator>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *>, geo::StdAllocator<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *>, mdm::Allocator>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> __value_;
    StdAllocator<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *>, mdm::Allocator> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *>, geo::StdAllocator<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *>, mdm::Allocator>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, std::hash<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, std::equal_to<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, std::hash<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, std::equal_to<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, std::equal_to<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, std::hash<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, std::equal_to<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, std::hash<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, std::__unordered_map_hasher<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, std::hash<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, std::equal_to<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, true>, std::__unordered_map_equal<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, std::equal_to<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, std::hash<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, true>, geo::StdAllocator<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, mdm::Allocator>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> *[], std::__bucket_list_deallocator<geo::StdAllocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *> *, mdm::Allocator>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *> *>, geo::StdAllocator<std::__hash_node<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, void *>, mdm::Allocator>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, std::hash<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, std::equal_to<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, std::equal_to<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, std::hash<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, std::__unordered_map_hasher<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, std::hash<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, std::equal_to<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, true>, std::__unordered_map_equal<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, std::equal_to<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, std::hash<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, true>, geo::StdAllocator<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, mdm::Allocator>>;

typedef struct unordered_map<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>, std::hash<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, std::equal_to<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, geo::StdAllocator<std::pair<const std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, mdm::Allocator>> {
    __hash_table<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, std::__unordered_map_hasher<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, std::hash<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, std::equal_to<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, true>, std::__unordered_map_equal<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, std::equal_to<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, std::hash<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, true>, geo::StdAllocator<std::__hash_value_type<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, mdm::Allocator>> __table_;
} unordered_map<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>, std::hash<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, std::equal_to<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, geo::StdAllocator<std::pair<const std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, mdm::Allocator>>;

typedef struct LabelPoint {
} // Error Processing Struct Fields

typedef struct vector<md::LabelPoint, geo::StdAllocator<md::LabelPoint, mdm::Allocator>> {
} // Error Processing Struct Fields

typedef struct RouteSegment {
} // Error Processing Struct Fields

typedef struct vector<RouteSegment, geo::StdAllocator<RouteSegment, mdm::Allocator>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::allocator<gm::Matrix<double, 2, 1>>> {
    void __value_;
} __compressed_pair<gm::Matrix<double, 2, 1> *, std::allocator<gm::Matrix<double, 2, 1>>>;

typedef struct vector<gm::Matrix<double, 2, 1>, std::allocator<gm::Matrix<double, 2, 1>>> {
    void __begin_;
    void __end_;
    __compressed_pair<gm::Matrix<double, 2, 1> *, std::allocator<gm::Matrix<double, 2, 1>>> __end_cap_;
} vector<gm::Matrix<double, 2, 1>, std::allocator<gm::Matrix<double, 2, 1>>>;

typedef struct FeatureAttributePair {
} // Error Processing Struct Fields

typedef struct vector<gss::FeatureAttributePair, geo::StdAllocator<gss::FeatureAttributePair, gss::Allocator>> {
} // Error Processing Struct Fields

typedef struct FeatureAttributeSet {
    vector<gss::FeatureAttributePair, geo::StdAllocator<gss::FeatureAttributePair, gss::Allocator>> field0;
} FeatureAttributeSet;

typedef struct PolygonRound {
    float field0;
    float field1;
    float field2;
    float field3;
    float field4;
} PolygonRound;

typedef struct pair<const void *, unsigned long> {
    void field0;
    NSUInteger field1;
} pair<const void *, unsigned long>;

typedef struct Texture2D {
} // Error Processing Struct Fields

typedef struct shared_ptr<ggl::Texture2D> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh> *, std::allocator<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>>> {
    void __value_;
} __compressed_pair<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh> *, std::allocator<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>>>;

typedef struct vector<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh> *, std::allocator<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>>> __end_cap_;
} vector<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonCommonStroke::MeshMesh>>>;

typedef struct DataWrite<ggl::PolygonCommonStroke::DefaultVbo> {
    BufferMemory _memory;
} DataWrite<ggl::PolygonCommonStroke::DefaultVbo>;

typedef struct MeshSet<ggl::PolygonCommonStroke::MeshMesh, ggl::PolygonCommonStroke::DefaultVbo> {
} // Error Processing Struct Fields

typedef struct optional<md::MeshSet<ggl::PolygonCommonStroke::MeshMesh, ggl::PolygonCommonStroke::DefaultVbo>> {
    BOOL _hasValue;
    long _value;
    int data;
    unsigned char type;
    MeshSet<ggl::PolygonCommonStroke::MeshMesh, ggl::PolygonCommonStroke::DefaultVbo> field4;
} optional<md::MeshSet<ggl::PolygonCommonStroke::MeshMesh, ggl::PolygonCommonStroke::DefaultVbo>>;

typedef struct StrokeBufferSizing {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
} StrokeBufferSizing;

typedef struct __compressed_pair<std::shared_ptr<ggl::VenueWall::MeshMesh> *, std::allocator<std::shared_ptr<ggl::VenueWall::MeshMesh>>> {
    void __value_;
} __compressed_pair<std::shared_ptr<ggl::VenueWall::MeshMesh> *, std::allocator<std::shared_ptr<ggl::VenueWall::MeshMesh>>>;

typedef struct vector<std::shared_ptr<ggl::VenueWall::MeshMesh>, std::allocator<std::shared_ptr<ggl::VenueWall::MeshMesh>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<ggl::VenueWall::MeshMesh> *, std::allocator<std::shared_ptr<ggl::VenueWall::MeshMesh>>> __end_cap_;
} vector<std::shared_ptr<ggl::VenueWall::MeshMesh>, std::allocator<std::shared_ptr<ggl::VenueWall::MeshMesh>>>;

typedef struct DataWrite<ggl::VenueWall::DefaultVbo> {
    BufferMemory _memory;
} DataWrite<ggl::VenueWall::DefaultVbo>;

typedef struct MeshSet<ggl::VenueWall::MeshMesh, ggl::VenueWall::DefaultVbo> {
} // Error Processing Struct Fields

typedef struct optional<md::MeshSet<ggl::VenueWall::MeshMesh, ggl::VenueWall::DefaultVbo>> {
    BOOL _hasValue;
    long _value;
    int data;
    unsigned char type;
    MeshSet<ggl::VenueWall::MeshMesh, ggl::VenueWall::DefaultVbo> field4;
} optional<md::MeshSet<ggl::VenueWall::MeshMesh, ggl::VenueWall::DefaultVbo>>;

typedef struct __compressed_pair<std::shared_ptr<ggl::VenueWall::EndCapMesh> *, std::allocator<std::shared_ptr<ggl::VenueWall::EndCapMesh>>> {
    void __value_;
} __compressed_pair<std::shared_ptr<ggl::VenueWall::EndCapMesh> *, std::allocator<std::shared_ptr<ggl::VenueWall::EndCapMesh>>>;

typedef struct vector<std::shared_ptr<ggl::VenueWall::EndCapMesh>, std::allocator<std::shared_ptr<ggl::VenueWall::EndCapMesh>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<ggl::VenueWall::EndCapMesh> *, std::allocator<std::shared_ptr<ggl::VenueWall::EndCapMesh>>> __end_cap_;
} vector<std::shared_ptr<ggl::VenueWall::EndCapMesh>, std::allocator<std::shared_ptr<ggl::VenueWall::EndCapMesh>>>;

typedef struct DataWrite<ggl::VenueWall::EndCapVbo> {
    BufferMemory _memory;
} DataWrite<ggl::VenueWall::EndCapVbo>;

typedef struct MeshSet<ggl::VenueWall::EndCapMesh, ggl::VenueWall::EndCapVbo> {
} // Error Processing Struct Fields

typedef struct optional<md::MeshSet<ggl::VenueWall::EndCapMesh, ggl::VenueWall::EndCapVbo>> {
    BOOL _hasValue;
    long _value;
    int data;
    unsigned char type;
    MeshSet<ggl::VenueWall::EndCapMesh, ggl::VenueWall::EndCapVbo> field4;
} optional<md::MeshSet<ggl::VenueWall::EndCapMesh, ggl::VenueWall::EndCapVbo>>;

typedef struct __compressed_pair<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> *, std::allocator<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>>> {
    void __value_;
} __compressed_pair<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> *, std::allocator<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>>>;

typedef struct vector<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>, std::allocator<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh> *, std::allocator<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>>> __end_cap_;
} vector<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>, std::allocator<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>>>;

typedef struct DataWrite<ggl::Venue3DStroke::HorizontalDefaultVbo> {
    BufferMemory _memory;
} DataWrite<ggl::Venue3DStroke::HorizontalDefaultVbo>;

typedef struct MeshSet<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh, ggl::Venue3DStroke::HorizontalDefaultVbo> {
} // Error Processing Struct Fields

typedef struct optional<md::MeshSet<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh, ggl::Venue3DStroke::HorizontalDefaultVbo>> {
    BOOL _hasValue;
    long _value;
    int data;
    unsigned char type;
    MeshSet<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh, ggl::Venue3DStroke::HorizontalDefaultVbo> field4;
} optional<md::MeshSet<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh, ggl::Venue3DStroke::HorizontalDefaultVbo>>;

typedef struct __compressed_pair<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> *, std::allocator<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>>> {
    void __value_;
} __compressed_pair<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> *, std::allocator<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>>>;

typedef struct vector<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>, std::allocator<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh> *, std::allocator<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>>> __end_cap_;
} vector<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>, std::allocator<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>>>;

typedef struct DataWrite<ggl::Venue3DStroke::VerticalDefaultVbo> {
    BufferMemory _memory;
} DataWrite<ggl::Venue3DStroke::VerticalDefaultVbo>;

typedef struct MeshSet<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh, ggl::Venue3DStroke::VerticalDefaultVbo> {
} // Error Processing Struct Fields

typedef struct optional<md::MeshSet<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh, ggl::Venue3DStroke::VerticalDefaultVbo>> {
    BOOL _hasValue;
    long _value;
    int data;
    unsigned char type;
    MeshSet<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh, ggl::Venue3DStroke::VerticalDefaultVbo> field4;
} optional<md::MeshSet<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh, ggl::Venue3DStroke::VerticalDefaultVbo>>;

typedef struct __value_func<void (GEOResourceManifestManager *)> {
    type __buf_;
    void __f_;
} __value_func<void (GEOResourceManifestManager *)>;

typedef struct function<void (GEOResourceManifestManager *)> {
    __value_func<void (GEOResourceManifestManager *)> __f_;
} function<void (GEOResourceManifestManager *)>;

typedef struct __value_func<void (GEOExperimentConfiguration *)> {
    type __buf_;
    void __f_;
} __value_func<void (GEOExperimentConfiguration *)>;

typedef struct function<void (GEOExperimentConfiguration *)> {
    __value_func<void (GEOExperimentConfiguration *)> __f_;
} function<void (GEOExperimentConfiguration *)>;

typedef struct __value_func<void (GEOResourceManifestManager *, GEOActiveTileGroup *, GEOActiveTileGroup *)> {
    type __buf_;
    void __f_;
} __value_func<void (GEOResourceManifestManager *, GEOActiveTileGroup *, GEOActiveTileGroup *)>;

typedef struct function<void (GEOResourceManifestManager *, GEOActiveTileGroup *, GEOActiveTileGroup *)> {
    __value_func<void (GEOResourceManifestManager *, GEOActiveTileGroup *, GEOActiveTileGroup *)> __f_;
} function<void (GEOResourceManifestManager *, GEOActiveTileGroup *, GEOActiveTileGroup *)>;

typedef struct shared_ptr<gss::StylesheetManager<gss::ScenePropertyID>> {
} // Error Processing Struct Fields

typedef struct Spring<double, 1, gdc::SpringType::Linear> {
    CGFloat _position;
    CGFloat _velocity;
    CGFloat _restingPosition;
    CGFloat _kSpring;
    CGFloat _kDamper;
} Spring<double, 1, gdc::SpringType::Linear>;

typedef struct Spring<double, 2, gdc::SpringType::Linear> {
    Matrix<double, 2, 1> _position;
    Matrix<double, 2, 1> _velocity;
    Matrix<double, 2, 1> _restingPosition;
    CGFloat _kSpring;
    CGFloat _kDamper;
} Spring<double, 2, gdc::SpringType::Linear>;

typedef struct __compressed_pair<geo::Coordinate3D<geo::Radians, double> *, std::allocator<geo::Coordinate3D<geo::Radians, double>>> {
    void __value_;
} __compressed_pair<geo::Coordinate3D<geo::Radians, double> *, std::allocator<geo::Coordinate3D<geo::Radians, double>>>;

typedef struct vector<geo::Coordinate3D<geo::Radians, double>, std::allocator<geo::Coordinate3D<geo::Radians, double>>> {
    void __begin_;
    void __end_;
    __compressed_pair<geo::Coordinate3D<geo::Radians, double> *, std::allocator<geo::Coordinate3D<geo::Radians, double>>> __end_cap_;
} vector<geo::Coordinate3D<geo::Radians, double>, std::allocator<geo::Coordinate3D<geo::Radians, double>>>;

typedef struct optional<unsigned long> {
    BOOL _hasValue;
    long _value;
    int data;
    unsigned char type;
    NSUInteger field4;
} optional<unsigned long>;

typedef struct array<double, 60UL> {
    CGFloat __elems_;
} array<double, 60UL>;

typedef struct WindowedSampler<60UL> {
    CGFloat _min;
    CGFloat _max;
    CGFloat _avg;
    CGFloat _sum;
    optional<unsigned long> _idx;
    array<double, 60UL> _samples;
} WindowedSampler<60UL>;

typedef struct Sampler {
    CGFloat _min;
    CGFloat _max;
    CGFloat _avg;
    CGFloat _sum;
    NSUInteger _count;
} Sampler;

typedef struct NavCameraPixelFrameRate {
} // Error Processing Struct Fields

typedef struct vector<NavCameraPixelFrameRate, std::allocator<NavCameraPixelFrameRate>> {
} // Error Processing Struct Fields

typedef struct shared_ptr<gss::StylesheetQuery<gss::ScenePropertyID>> {
} // Error Processing Struct Fields

typedef struct weak_ptr<md::StylesheetVendor> {
} // Error Processing Struct Fields

typedef struct Color<unsigned char, 4, geo::ColorSpace::Linear> {
    Matrix<unsigned char, 4, 1> _backing;
} Color<unsigned char, 4, geo::ColorSpace::Linear>;

typedef struct IconVariant {
    unsigned int primary;
    unsigned int secondary;
} IconVariant;

typedef struct ARSessionObserver {
    unk field0;
} ARSessionObserver;

typedef struct Range<double> {
    CGFloat field0;
    CGFloat field1;
} Range<double>;

typedef struct EulerAngles {
    Unit<geo::RadianUnitDescription, double> pitch;
    Unit<geo::RadianUnitDescription, double> yaw;
    Unit<geo::RadianUnitDescription, double> roll;
} EulerAngles;

typedef struct __compressed_pair<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent> *, std::allocator<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>>> {
    void __value_;
} __compressed_pair<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent> *, std::allocator<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>>>;

typedef struct vector<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>, std::allocator<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent> *, std::allocator<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>>> __end_cap_;
} vector<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>, std::allocator<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>>>;

typedef struct RasterTileOverlayStyle {
} // Error Processing Struct Fields

typedef struct shared_ptr<md::RasterTileOverlayStyle> {
} // Error Processing Struct Fields

typedef struct weak_ptr<md::GlobeOverlayContainer> {
} // Error Processing Struct Fields

typedef struct weak_ptr<md::OverlayContainer> {
} // Error Processing Struct Fields

typedef struct optional<gss::When> {
    unk ;
    char __null_state_;
    unsigned char __val_;
    BOOL __engaged_;
} optional<gss::When>;

typedef struct _retain_ptr<VKLabelNavRoadLabel *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> {
    unk field0;
    id field1;
    _retain_objc_arc field2;
    _release_objc_arc field3;
} _retain_ptr<VKLabelNavRoadLabel *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc>;

typedef struct shared_ptr<gss::StylesheetQuery<gss::PropertyID>> {
} // Error Processing Struct Fields

typedef struct RoadSignStyleGroup {
} // Error Processing Struct Fields

typedef struct _RunLoopCallbacker {
} // Error Processing Struct Fields

typedef struct weak_ptr<ggl::RunLoop::_RunLoopCallbacker> {
} // Error Processing Struct Fields

typedef struct MetalDevice {
} // Error Processing Struct Fields

typedef struct shared_ptr<ggl::MetalDevice> {
} // Error Processing Struct Fields

typedef struct SamplerState {
} // Error Processing Struct Fields

typedef struct shared_ptr<ggl::SamplerState> {
} // Error Processing Struct Fields

