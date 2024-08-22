typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct duration<long long, std::ratio<1, 1000000000>> {
    NSInteger __rep_;
} duration<long long, std::ratio<1, 1000000000>>;

typedef struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> {
    duration<long long, std::ratio<1, 1000000000>> field0;
} time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>;

typedef struct a8 {
} // Error Processing Struct Fields

typedef struct aligned_storage<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> {
    CGFloat dummy_;
    char data;
    a8 aligner_;
} aligned_storage<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>;

typedef struct optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> {
    BOOL m_initialized;
    aligned_storage<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> m_storage;
} optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>;

typedef struct a4 {
} // Error Processing Struct Fields

typedef struct aligned_storage<unsigned int> {
    CGFloat dummy_;
    char data;
    a4 aligner_;
} aligned_storage<unsigned int>;

typedef struct optional<unsigned int> {
    BOOL m_initialized;
    aligned_storage<unsigned int> m_storage;
} optional<unsigned int>;

typedef struct aligned_storage<double> {
    CGFloat dummy_;
    char data;
    a8 aligner_;
} aligned_storage<double>;

typedef struct optional<double> {
    BOOL m_initialized;
    aligned_storage<double> m_storage;
} optional<double>;

typedef struct aligned_storage<unsigned long> {
    CGFloat dummy_;
    char data;
    a8 aligner_;
} aligned_storage<unsigned long>;

typedef struct optional<unsigned long> {
    BOOL m_initialized;
    aligned_storage<unsigned long> m_storage;
} optional<unsigned long>;

typedef struct duration<long long, std::ratio<1, 1>> {
    NSInteger __rep_;
} duration<long long, std::ratio<1, 1>>;

typedef struct duration<long double, std::ratio<1, 1>> {
} // Error Processing Struct Fields

typedef struct NearestVenueSettings {
    id field0;
    CGFloat field1;
    id field2;
    BOOL field3;
} NearestVenueSettings;

typedef struct aligned_storage<proto::params::LocalizerParameters> {
    CGFloat dummy_;
    char data;
    a8 aligner_;
} aligned_storage<proto::params::LocalizerParameters>;

typedef struct optional<proto::params::LocalizerParameters> {
    BOOL m_initialized;
    aligned_storage<proto::params::LocalizerParameters> m_storage;
} optional<proto::params::LocalizerParameters>;

typedef struct MotionTruthParameters {
} // Error Processing Struct Fields

typedef struct MultiphoneDbmParameters {
} // Error Processing Struct Fields

typedef struct PedometryCompassMotionParameters {
} // Error Processing Struct Fields

typedef struct InjectionParameters {
} // Error Processing Struct Fields

typedef struct PdrParameters {
} // Error Processing Struct Fields

typedef struct WifiParameters {
} // Error Processing Struct Fields

typedef struct BodyFixedDetectorParameters {
} // Error Processing Struct Fields

typedef struct BeaconParameters {
} // Error Processing Struct Fields

typedef struct WallBehaviorParamaters {
} // Error Processing Struct Fields

typedef struct DynamicUniverseParameters {
} // Error Processing Struct Fields

typedef struct AltitudeParameters {
} // Error Processing Struct Fields

typedef struct GpsFusionGlobalParameters {
} // Error Processing Struct Fields

typedef struct DeadReckoningParameters {
} // Error Processing Struct Fields

typedef struct ClientCoarseIndoorParameters {
} // Error Processing Struct Fields

typedef struct LocalizerParameters {
} // Error Processing Struct Fields

typedef struct AvailabilityTile {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<AvailabilityTile> {
    AvailabilityTile __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<AvailabilityTile>;

typedef struct __compressed_pair<std::string *, std::allocator<std::string>> {
    void __value_;
} __compressed_pair<std::string *, std::allocator<std::string>>;

typedef struct vector<std::string, std::allocator<std::string>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::string *, std::allocator<std::string>> __end_cap_;
} vector<std::string, std::allocator<std::string>>;

typedef struct __long {
    char * field0;
    NSUInteger field1;
    NSUInteger field2;
} __long;

typedef struct ? {
    CGFloat latitude;
    CGFloat longitude;
} ?;

typedef struct __short {
    char field0;
    ? field1;
} __short;

typedef struct __raw {
    NSUInteger field0;
} __raw;

typedef struct __rep {
    unk field0;
    __long field1;
    __short field2;
    __raw field3;
} __rep;

typedef struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
    __rep field0;
} __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>;

typedef struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> field0;
} basic_string<char, std::char_traits<char>, std::allocator<char>>;

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::less<unsigned long>>;

typedef struct __tree<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned long, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::less<unsigned long>> __pair3_;
} __tree<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>>;

typedef struct set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> {
    __tree<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> __tree_;
} set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>>;

typedef struct __compressed_pair<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true> *, std::default_delete<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true>>> {
    void __value_;
} __compressed_pair<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true> *, std::default_delete<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true>>>;

typedef struct unique_ptr<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true>, std::default_delete<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true>>> {
    __compressed_pair<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true> *, std::default_delete<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true>>> __ptr_;
} unique_ptr<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true>, std::default_delete<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true>>>;

typedef struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::ratio<1, 1000000000>>> {
    duration<long long, std::ratio<1, 1000000000>> __d_;
} time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::ratio<1, 1000000000>>>;

typedef struct point_xy<double, boost::geometry::cs::cartesian> {
    CGFloat field0;
} point_xy<double, boost::geometry::cs::cartesian>;

