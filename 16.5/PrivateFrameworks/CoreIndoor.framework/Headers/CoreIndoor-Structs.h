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

typedef struct optional<unsigned int> {
    BOOL m_initialized;
    unsigned int m_storage;
} optional<unsigned int>;

typedef struct optional<double> {
    BOOL m_initialized;
    CGFloat m_storage;
} optional<double>;

typedef struct optional<unsigned long> {
    BOOL m_initialized;
    NSUInteger m_storage;
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

typedef struct AvailabilityTile {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<AvailabilityTile> {
    AvailabilityTile __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<AvailabilityTile>;

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

typedef struct __compressed_pair<std::string *, std::allocator<std::string>> {
    void __value_;
} __compressed_pair<std::string *, std::allocator<std::string>>;

typedef struct vector<std::string, std::allocator<std::string>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::string *, std::allocator<std::string>> __end_cap_;
} vector<std::string, std::allocator<std::string>>;

typedef struct __long {
    char * __data_;
    NSUInteger __size_;
    BOOL __cap_;
    BOOL __is_long_;
} __long;

typedef struct __short {
    char __data_;
    unsigned char __padding_;
    BOOL __size_;
    BOOL __is_long_;
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

typedef struct __compressed_pair<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true> *, std::default_delete<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true>>> {
    void __value_;
} __compressed_pair<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true> *, std::default_delete<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true>>>;

typedef struct unique_ptr<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true>, std::default_delete<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true>>> {
    __compressed_pair<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true> *, std::default_delete<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true>>> __ptr_;
} unique_ptr<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true>, std::default_delete<boost::geometry::model::polygon<boost::geometry::model::d2::point_xy<double>, true, true>>>;

typedef struct ? {
    CGFloat latitude;
    CGFloat longitude;
} ?;

typedef struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::ratio<1, 1000000000>>> {
    duration<long long, std::ratio<1, 1000000000>> __d_;
} time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::ratio<1, 1000000000>>>;

typedef struct point_xy<double, boost::geometry::cs::cartesian> {
    CGFloat field0;
} point_xy<double, boost::geometry::cs::cartesian>;

