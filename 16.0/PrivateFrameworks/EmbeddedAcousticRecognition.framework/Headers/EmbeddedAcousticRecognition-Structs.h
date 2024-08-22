typedef struct __long {
    char * __data_;
    NSUInteger __size_;
    NSUInteger __cap_;
} __long;

typedef struct ? {
    unsigned char __size_;
} ?;

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

typedef struct optional<std::string> {
    unk field0;
    char field1;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field2;
    BOOL field3;
} optional<std::string>;

typedef struct basic_string_view<char, std::char_traits<char>> {
    char * field0;
    NSUInteger field1;
} basic_string_view<char, std::char_traits<char>>;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __tree_end_node<std::__tree_node_base<void *> *> {
    void __left_;
} __tree_end_node<std::__tree_node_base<void *> *>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, std::map<std::string, double>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, std::map<std::string, double>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, std::map<std::string, double>>, std::less<int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, std::map<std::string, double>>, std::less<int>, true>>;

typedef struct __tree<std::__value_type<int, std::map<std::string, double>>, std::__map_value_compare<int, std::__value_type<int, std::map<std::string, double>>, std::less<int>, true>, std::allocator<std::__value_type<int, std::map<std::string, double>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, std::map<std::string, double>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, std::map<std::string, double>>, std::less<int>, true>> __pair3_;
} __tree<std::__value_type<int, std::map<std::string, double>>, std::__map_value_compare<int, std::__value_type<int, std::map<std::string, double>>, std::less<int>, true>, std::allocator<std::__value_type<int, std::map<std::string, double>>>>;

typedef struct map<int, std::map<std::string, double>, std::less<int>, std::allocator<std::pair<const int, std::map<std::string, double>>>> {
    __tree<std::__value_type<int, std::map<std::string, double>>, std::__map_value_compare<int, std::__value_type<int, std::map<std::string, double>>, std::less<int>, true>, std::allocator<std::__value_type<int, std::map<std::string, double>>>> __tree_;
} map<int, std::map<std::string, double>, std::less<int>, std::allocator<std::pair<const int, std::map<std::string, double>>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, int>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, int>>>;

typedef struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> {
    __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, int>>> __tree_;
} map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>>;

typedef struct HybridClientConfigs {
    map<int, std::map<std::string, double>, std::less<int>, std::allocator<std::pair<const int, std::map<std::string, double>>>> hybridEndpointerThresholds;
    map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> hybridEndpointerExtraDelayFrequency;
} HybridClientConfigs;

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float __value_;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float __begin_;
    float __end_;
    __compressed_pair<float *, std::allocator<float>> __end_cap_;
} vector<float, std::allocator<float>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, float>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, float>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, float>, std::hash<int>, std::equal_to<int>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, float>, std::hash<int>, std::equal_to<int>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, float>, std::equal_to<int>, std::hash<int>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, float>, std::equal_to<int>, std::hash<int>, true>>;

typedef struct __hash_table<std::__hash_value_type<int, float>, std::__unordered_map_hasher<int, std::__hash_value_type<int, float>, std::hash<int>, std::equal_to<int>, true>, std::__unordered_map_equal<int, std::__hash_value_type<int, float>, std::equal_to<int>, std::hash<int>, true>, std::allocator<std::__hash_value_type<int, float>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, float>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, float>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, float>, std::hash<int>, std::equal_to<int>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, float>, std::equal_to<int>, std::hash<int>, true>> __p3_;
} __hash_table<std::__hash_value_type<int, float>, std::__unordered_map_hasher<int, std::__hash_value_type<int, float>, std::hash<int>, std::equal_to<int>, true>, std::__unordered_map_equal<int, std::__hash_value_type<int, float>, std::equal_to<int>, std::hash<int>, true>, std::allocator<std::__hash_value_type<int, float>>>;

typedef struct unordered_map<int, float, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, float>>> {
    __hash_table<std::__hash_value_type<int, float>, std::__unordered_map_hasher<int, std::__hash_value_type<int, float>, std::hash<int>, std::equal_to<int>, true>, std::__unordered_map_equal<int, std::__hash_value_type<int, float>, std::equal_to<int>, std::hash<int>, true>, std::allocator<std::__hash_value_type<int, float>>> __table_;
} unordered_map<int, float, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, float>>>;

typedef struct DataFeed {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::DataFeed> {
    DataFeed __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<quasar::DataFeed>;

typedef struct TextTokenizer {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::TextTokenizer> {
} // Error Processing Struct Fields

typedef struct PMBuilder {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::PMBuilder> {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long *, std::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long *, std::allocator<unsigned long>> __end_cap_;
} vector<unsigned long, std::allocator<unsigned long>>;

typedef struct mersenne_twister_engine<unsigned int, 32UL, 624UL, 397UL, 31UL, 2567483615U, 11UL, 4294967295U, 7UL, 2636928640U, 15UL, 4022730752U, 18UL, 1812433253U> {
    unsigned int __x_;
    NSUInteger __i_;
} mersenne_twister_engine<unsigned int, 32UL, 624UL, 397UL, 31UL, 2567483615U, 11UL, 4294967295U, 7UL, 2636928640U, 15UL, 4022730752U, 18UL, 1812433253U>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>>>;

typedef struct map<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>>> {
    __tree<std::__value_type<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>>> __tree_;
} map<std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::vector<quasar::LmeDataFactoryBase::Word>>>>>;

typedef struct LmeDataFactory {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::LmeDataFactory> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<quasar::TextTokenizer *, std::default_delete<quasar::TextTokenizer>> {
} // Error Processing Struct Fields

typedef struct unique_ptr<quasar::TextTokenizer, std::default_delete<quasar::TextTokenizer>> {
    __compressed_pair<quasar::TextTokenizer *, std::default_delete<quasar::TextTokenizer>> __ptr_;
} unique_ptr<quasar::TextTokenizer, std::default_delete<quasar::TextTokenizer>>;

typedef struct G2P {
} // Error Processing Struct Fields

typedef struct __compressed_pair<quasar::G2P *, std::default_delete<quasar::G2P>> {
    G2P __value_;
} __compressed_pair<quasar::G2P *, std::default_delete<quasar::G2P>>;

typedef struct unique_ptr<quasar::G2P, std::default_delete<quasar::G2P>> {
    __compressed_pair<quasar::G2P *, std::default_delete<quasar::G2P>> __ptr_;
} unique_ptr<quasar::G2P, std::default_delete<quasar::G2P>>;

typedef struct shared_ptr<quasar::PronCache<std::string, std::vector<std::string>>> {
} // Error Processing Struct Fields

typedef struct URegularExpressionWrapper {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::URegularExpressionWrapper> {
} // Error Processing Struct Fields

typedef struct BasicTextSanitizer {
} // Error Processing Struct Fields

typedef struct PersonalizationRecipe {
} // Error Processing Struct Fields

typedef struct __compressed_pair<quasar::PersonalizationRecipe *, std::default_delete<quasar::PersonalizationRecipe>> {
    PersonalizationRecipe __value_;
} __compressed_pair<quasar::PersonalizationRecipe *, std::default_delete<quasar::PersonalizationRecipe>>;

typedef struct unique_ptr<quasar::PersonalizationRecipe, std::default_delete<quasar::PersonalizationRecipe>> {
    __compressed_pair<quasar::PersonalizationRecipe *, std::default_delete<quasar::PersonalizationRecipe>> __ptr_;
} unique_ptr<quasar::PersonalizationRecipe, std::default_delete<quasar::PersonalizationRecipe>>;

typedef struct LmeData {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::LmeData> {
} // Error Processing Struct Fields

typedef struct WordPronCache {
} // Error Processing Struct Fields

typedef struct __compressed_pair<quasar::WordPronCache *, std::default_delete<quasar::WordPronCache>> {
    WordPronCache __value_;
} __compressed_pair<quasar::WordPronCache *, std::default_delete<quasar::WordPronCache>>;

typedef struct unique_ptr<quasar::WordPronCache, std::default_delete<quasar::WordPronCache>> {
    __compressed_pair<quasar::WordPronCache *, std::default_delete<quasar::WordPronCache>> __ptr_;
} unique_ptr<quasar::WordPronCache, std::default_delete<quasar::WordPronCache>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, int>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, int>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, int>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, int>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, int>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, int>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, int>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, int>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, int>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, int>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, int>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, int>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, int>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, int>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, int>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, int>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, int>>>;

typedef struct unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, int>>> {
    __hash_table<std::__hash_value_type<std::string, int>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, int>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, int>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, int>>> __table_;
} unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, int>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, long long>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, long long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, long long>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, long long>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, long long>, std::__map_value_compare<std::string, std::__value_type<std::string, long long>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, long long>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, long long>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, long long>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, long long>, std::__map_value_compare<std::string, std::__value_type<std::string, long long>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, long long>>>;

typedef struct map<std::string, long long, std::less<std::string>, std::allocator<std::pair<const std::string, long long>>> {
    __tree<std::__value_type<std::string, long long>, std::__map_value_compare<std::string, std::__value_type<std::string, long long>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, long long>>> __tree_;
} map<std::string, long long, std::less<std::string>, std::allocator<std::pair<const std::string, long long>>>;

typedef struct LmeConfig {
} // Error Processing Struct Fields

typedef struct __compressed_pair<quasar::LmeConfig *, std::default_delete<quasar::LmeConfig>> {
    LmeConfig __value_;
} __compressed_pair<quasar::LmeConfig *, std::default_delete<quasar::LmeConfig>>;

typedef struct unique_ptr<quasar::LmeConfig, std::default_delete<quasar::LmeConfig>> {
    __compressed_pair<quasar::LmeConfig *, std::default_delete<quasar::LmeConfig>> __ptr_;
} unique_ptr<quasar::LmeConfig, std::default_delete<quasar::LmeConfig>>;

typedef struct shared_ptr<const quasar::LmeData> {
} // Error Processing Struct Fields

typedef struct LmeContainer {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::LmeContainer> {
} // Error Processing Struct Fields

typedef struct shared_ptr<std::ifstream> {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct mutex {
    _opaque_pthread_mutex_t __m_;
} mutex;

typedef struct HybridEndpointer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<quasar::HybridEndpointer *, std::default_delete<quasar::HybridEndpointer>> {
    HybridEndpointer __value_;
} __compressed_pair<quasar::HybridEndpointer *, std::default_delete<quasar::HybridEndpointer>>;

typedef struct unique_ptr<quasar::HybridEndpointer, std::default_delete<quasar::HybridEndpointer>> {
    __compressed_pair<quasar::HybridEndpointer *, std::default_delete<quasar::HybridEndpointer>> __ptr_;
} unique_ptr<quasar::HybridEndpointer, std::default_delete<quasar::HybridEndpointer>>;

typedef struct __compressed_pair<std::pair<std::string, float> *, std::allocator<std::pair<std::string, float>>> {
    void __value_;
} __compressed_pair<std::pair<std::string, float> *, std::allocator<std::pair<std::string, float>>>;

typedef struct vector<std::pair<std::string, float>, std::allocator<std::pair<std::string, float>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<std::string, float> *, std::allocator<std::pair<std::string, float>>> __end_cap_;
} vector<std::pair<std::string, float>, std::allocator<std::pair<std::string, float>>>;

typedef struct Token {
    basic_string<char, std::char_traits<char>, std::allocator<char>> tokenName;
    unsigned int startMilliseconds;
    unsigned int endMilliseconds;
    unsigned int silStartMilliSeconds;
    float confidence;
    BOOL hasSpaceAfter;
    BOOL hasSpaceBefore;
    basic_string<char, std::char_traits<char>, std::allocator<char>> phoneSeq;
    basic_string<char, std::char_traits<char>, std::allocator<char>> ipaPhoneSeq;
    vector<std::pair<std::string, float>, std::allocator<std::pair<std::string, float>>> subwordConfidence;
    basic_string<char, std::char_traits<char>, std::allocator<char>> muxId;
    BOOL appendedAutoPunctuation;
    BOOL prependedAutoPunctuation;
    basic_string<char, std::char_traits<char>, std::allocator<char>> alternateTokenName;
    BOOL isModifiedByAutoPunctuation;
} Token;

typedef struct __compressed_pair<std::vector<unsigned int> *, std::allocator<std::vector<unsigned int>>> {
    void field0;
} __compressed_pair<std::vector<unsigned int> *, std::allocator<std::vector<unsigned int>>>;

typedef struct vector<std::vector<unsigned int>, std::allocator<std::vector<unsigned int>>> {
    void field0;
    void field1;
    __compressed_pair<std::vector<unsigned int> *, std::allocator<std::vector<unsigned int>>> field2;
} vector<std::vector<unsigned int>, std::allocator<std::vector<unsigned int>>>;

typedef struct __compressed_pair<std::vector<std::vector<quasar::Token>> *, std::allocator<std::vector<std::vector<quasar::Token>>>> {
    void field0;
} __compressed_pair<std::vector<std::vector<quasar::Token>> *, std::allocator<std::vector<std::vector<quasar::Token>>>>;

typedef struct vector<std::vector<std::vector<quasar::Token>>, std::allocator<std::vector<std::vector<quasar::Token>>>> {
    void field0;
    void field1;
    __compressed_pair<std::vector<std::vector<quasar::Token>> *, std::allocator<std::vector<std::vector<quasar::Token>>>> field2;
} vector<std::vector<std::vector<quasar::Token>>, std::allocator<std::vector<std::vector<quasar::Token>>>>;

typedef struct pair<std::vector<std::vector<unsigned int>>, std::vector<std::vector<std::vector<quasar::Token>>>> {
    vector<std::vector<unsigned int>, std::allocator<std::vector<unsigned int>>> field0;
    vector<std::vector<std::vector<quasar::Token>>, std::allocator<std::vector<std::vector<quasar::Token>>>> field1;
} pair<std::vector<std::vector<unsigned int>>, std::vector<std::vector<std::vector<quasar::Token>>>>;

typedef struct vector<quasar::Token, std::allocator<quasar::Token>> {
} // Error Processing Struct Fields

typedef struct EARContinuousListeningResultHelper {
} // Error Processing Struct Fields

typedef struct shared_ptr<EARContinuousListeningResultHelper> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::vector<quasar::Token> *, std::allocator<std::vector<quasar::Token>>> {
    void __value_;
} __compressed_pair<std::vector<quasar::Token> *, std::allocator<std::vector<quasar::Token>>>;

typedef struct vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::vector<quasar::Token> *, std::allocator<std::vector<quasar::Token>>> __end_cap_;
} vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>>;

typedef struct __compressed_pair<double *, std::allocator<double>> {
    CGFloat __value_;
} __compressed_pair<double *, std::allocator<double>>;

typedef struct vector<double, std::allocator<double>> {
    CGFloat __begin_;
    CGFloat __end_;
    __compressed_pair<double *, std::allocator<double>> __end_cap_;
} vector<double, std::allocator<double>>;

typedef struct RecogAudioBufferBase {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::RecogAudioBufferBase> {
} // Error Processing Struct Fields

typedef struct RecogResultStreamBase {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::RecogResultStreamBase> {
} // Error Processing Struct Fields

typedef struct SpeechRecognizer {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::SpeechRecognizer> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::string *, std::allocator<std::string>> {
    void __value_;
} __compressed_pair<std::string *, std::allocator<std::string>>;

typedef struct vector<std::string, std::allocator<std::string>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::string *, std::allocator<std::string>> __end_cap_;
} vector<std::string, std::allocator<std::string>>;

typedef struct SpeakerCodeTraining {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::SpeakerCodeTraining> {
} // Error Processing Struct Fields

typedef struct VoiceCommandActiveSetCompilation {
} // Error Processing Struct Fields

typedef struct shared_ptr<const quasar::VoiceCommandActiveSetCompilation> {
} // Error Processing Struct Fields

typedef struct ResultStreamWrapper {
} // Error Processing Struct Fields

typedef struct weak_ptr<ResultStreamWrapper> {
} // Error Processing Struct Fields

typedef struct EARModelInitializeContext {
} // Error Processing Struct Fields

typedef struct shared_ptr<EARModelInitializeContext> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<int, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<int, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<int>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::less<int>>;

typedef struct __tree<int, std::less<int>, std::allocator<int>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<int, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::less<int>> __pair3_;
} __tree<int, std::less<int>, std::allocator<int>>;

typedef struct set<int, std::less<int>, std::allocator<int>> {
    __tree<int, std::less<int>, std::allocator<int>> __tree_;
} set<int, std::less<int>, std::allocator<int>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<std::string>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::less<std::string>>;

typedef struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::less<std::string>> __pair3_;
} __tree<std::string, std::less<std::string>, std::allocator<std::string>>;

typedef struct set<std::string, std::less<std::string>, std::allocator<std::string>> {
    __tree<std::string, std::less<std::string>, std::allocator<std::string>> __tree_;
} set<std::string, std::less<std::string>, std::allocator<std::string>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::string>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::string>>>;

typedef struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> {
    __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::string>>> __tree_;
} map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::vector<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<std::string>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, std::vector<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<std::string>>>>;

typedef struct map<std::string, std::vector<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string>>>> {
    __tree<std::__value_type<std::string, std::vector<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<std::string>>>> __tree_;
} map<std::string, std::vector<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string>>>>;

typedef struct SpeechModelInfo {
    basic_string<char, std::char_traits<char>, std::allocator<char>> version;
    set<int, std::less<int>, std::allocator<int>> samplingRates;
    set<std::string, std::less<std::string>, std::allocator<std::string>> tasks;
    set<std::string, std::less<std::string>, std::allocator<std::string>> osTypes;
    basic_string<char, std::char_traits<char>, std::allocator<char>> language;
    basic_string<char, std::char_traits<char>, std::allocator<char>> phoneSetVersion;
    basic_string<char, std::char_traits<char>, std::allocator<char>> acousticProfileVersion;
    map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> aceToQuasarTemplate;
    map<std::string, std::vector<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string>>>> quasarTemplateToAce;
    map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> quasarTemplateToEnumerationType;
    int g2pModelVersion;
    int hybridEndpointerVersion;
} SpeechModelInfo;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned int, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> field0;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned int, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<unsigned int>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::less<unsigned int>>;

typedef struct __tree<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> {
    void field0;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned int, void *>>> field1;
    __compressed_pair<unsigned long, std::less<unsigned int>> field2;
} __tree<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>>;

typedef struct set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> {
    __tree<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> field0;
} set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>>;

typedef struct optional<std::set<unsigned int>> {
    unk field0;
    char field1;
    set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> field2;
    BOOL field3;
} optional<std::set<unsigned int>>;

typedef struct optional<std::set<std::string>> {
    unk field0;
    char field1;
    set<std::string, std::less<std::string>, std::allocator<std::string>> field2;
    BOOL field3;
} optional<std::set<std::string>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<bool, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> field0;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<bool, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<bool>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::less<bool>>;

typedef struct __tree<bool, std::less<bool>, std::allocator<bool>> {
    void field0;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<bool, void *>>> field1;
    __compressed_pair<unsigned long, std::less<bool>> field2;
} __tree<bool, std::less<bool>, std::allocator<bool>>;

typedef struct set<bool, std::less<bool>, std::allocator<bool>> {
    __tree<bool, std::less<bool>, std::allocator<bool>> field0;
} set<bool, std::less<bool>, std::allocator<bool>>;

typedef struct optional<std::set<bool>> {
    unk field0;
    char field1;
    set<bool, std::less<bool>, std::allocator<bool>> field2;
    BOOL field3;
} optional<std::set<bool>>;

typedef struct SpeechRecognizerActiveConfiguration {
    optional<std::set<unsigned int>> field0;
    optional<std::set<std::string>> field1;
    optional<std::set<std::string>> field2;
    optional<std::set<bool>> field3;
    optional<std::set<std::string>> field4;
    optional<std::set<std::string>> field5;
    optional<std::set<std::string>> field6;
    optional<std::set<std::string>> field7;
} SpeechRecognizerActiveConfiguration;

typedef struct weak_ptr<quasar::SpeechRecognizer> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned long>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned long>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned long>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned long>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, unsigned long>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned long>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned long>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, unsigned long>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned long>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned long>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, unsigned long>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned long>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned long>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, unsigned long>>>;

typedef struct unordered_map<std::string, unsigned long, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned long>>> {
    __hash_table<std::__hash_value_type<std::string, unsigned long>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned long>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned long>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, unsigned long>>> __table_;
} unordered_map<std::string, unsigned long, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned long>>>;

typedef struct SyncSpeechRecognizer {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::SyncSpeechRecognizer> {
} // Error Processing Struct Fields

typedef struct ResultCombiner {
} // Error Processing Struct Fields

typedef struct __compressed_pair<quasar::ResultCombiner *, std::default_delete<quasar::ResultCombiner>> {
    ResultCombiner __value_;
} __compressed_pair<quasar::ResultCombiner *, std::default_delete<quasar::ResultCombiner>>;

typedef struct unique_ptr<quasar::ResultCombiner, std::default_delete<quasar::ResultCombiner>> {
    __compressed_pair<quasar::ResultCombiner *, std::default_delete<quasar::ResultCombiner>> __ptr_;
} unique_ptr<quasar::ResultCombiner, std::default_delete<quasar::ResultCombiner>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<quasar::language_detector::Locale, double>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> field0;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<quasar::language_detector::Locale, double>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<quasar::language_detector::Locale, std::__value_type<quasar::language_detector::Locale, double>, std::less<quasar::language_detector::Locale>, true>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::__map_value_compare<quasar::language_detector::Locale, std::__value_type<quasar::language_detector::Locale, double>, std::less<quasar::language_detector::Locale>, true>>;

typedef struct __tree<std::__value_type<quasar::language_detector::Locale, double>, std::__map_value_compare<quasar::language_detector::Locale, std::__value_type<quasar::language_detector::Locale, double>, std::less<quasar::language_detector::Locale>, true>, std::allocator<std::__value_type<quasar::language_detector::Locale, double>>> {
    void field0;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<quasar::language_detector::Locale, double>, void *>>> field1;
    __compressed_pair<unsigned long, std::__map_value_compare<quasar::language_detector::Locale, std::__value_type<quasar::language_detector::Locale, double>, std::less<quasar::language_detector::Locale>, true>> field2;
} __tree<std::__value_type<quasar::language_detector::Locale, double>, std::__map_value_compare<quasar::language_detector::Locale, std::__value_type<quasar::language_detector::Locale, double>, std::less<quasar::language_detector::Locale>, true>, std::allocator<std::__value_type<quasar::language_detector::Locale, double>>>;

typedef struct map<quasar::language_detector::Locale, double, std::less<quasar::language_detector::Locale>, std::allocator<std::pair<const quasar::language_detector::Locale, double>>> {
    __tree<std::__value_type<quasar::language_detector::Locale, double>, std::__map_value_compare<quasar::language_detector::Locale, std::__value_type<quasar::language_detector::Locale, double>, std::less<quasar::language_detector::Locale>, true>, std::allocator<std::__value_type<quasar::language_detector::Locale, double>>> field0;
} map<quasar::language_detector::Locale, double, std::less<quasar::language_detector::Locale>, std::allocator<std::pair<const quasar::language_detector::Locale, double>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<quasar::language_detector::Locale, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> field0;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<quasar::language_detector::Locale, void *>>>;

typedef struct __compressed_pair<unsigned long, std::less<quasar::language_detector::Locale>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::less<quasar::language_detector::Locale>>;

typedef struct __tree<quasar::language_detector::Locale, std::less<quasar::language_detector::Locale>, std::allocator<quasar::language_detector::Locale>> {
    void field0;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<quasar::language_detector::Locale, void *>>> field1;
    __compressed_pair<unsigned long, std::less<quasar::language_detector::Locale>> field2;
} __tree<quasar::language_detector::Locale, std::less<quasar::language_detector::Locale>, std::allocator<quasar::language_detector::Locale>>;

typedef struct set<quasar::language_detector::Locale, std::less<quasar::language_detector::Locale>, std::allocator<quasar::language_detector::Locale>> {
    __tree<quasar::language_detector::Locale, std::less<quasar::language_detector::Locale>, std::allocator<quasar::language_detector::Locale>> field0;
} set<quasar::language_detector::Locale, std::less<quasar::language_detector::Locale>, std::allocator<quasar::language_detector::Locale>>;

typedef struct optional<std::set<quasar::language_detector::Locale>> {
    unk field0;
    char field1;
    set<quasar::language_detector::Locale, std::less<quasar::language_detector::Locale>, std::allocator<quasar::language_detector::Locale>> field2;
    BOOL field3;
} optional<std::set<quasar::language_detector::Locale>>;

typedef struct Locale {
    basic_string<char, std::char_traits<char>, std::allocator<char>> field0;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field1;
} Locale;

typedef struct optional<quasar::language_detector::Locale> {
    unk field0;
    char field1;
    Locale field2;
    BOOL field3;
} optional<quasar::language_detector::Locale>;

typedef struct optional<bool> {
    unk field0;
    char field1;
    BOOL field2;
    BOOL field3;
} optional<bool>;

typedef struct vector<quasar::language_detector::Locale, std::allocator<quasar::language_detector::Locale>> {
} // Error Processing Struct Fields

typedef struct optional<std::vector<quasar::language_detector::Locale>> {
    unk field0;
    char field1;
    vector<quasar::language_detector::Locale, std::allocator<quasar::language_detector::Locale>> field2;
    BOOL field3;
} optional<std::vector<quasar::language_detector::Locale>>;

typedef struct optional<std::map<quasar::language_detector::Locale, double>> {
    unk field0;
    char field1;
    map<quasar::language_detector::Locale, double, std::less<quasar::language_detector::Locale>, std::allocator<std::pair<const quasar::language_detector::Locale, double>>> field2;
    BOOL field3;
} optional<std::map<quasar::language_detector::Locale, double>>;

typedef struct LDContext {
    map<quasar::language_detector::Locale, double, std::less<quasar::language_detector::Locale>, std::allocator<std::pair<const quasar::language_detector::Locale, double>>> field0;
    optional<std::set<quasar::language_detector::Locale>> field1;
    optional<quasar::language_detector::Locale> field2;
    optional<bool> field3;
    optional<std::vector<quasar::language_detector::Locale>> field4;
    optional<std::map<quasar::language_detector::Locale, double>> field5;
    optional<std::map<quasar::language_detector::Locale, double>> field6;
    optional<quasar::language_detector::Locale> field7;
    optional<quasar::language_detector::Locale> field8;
    optional<std::map<quasar::language_detector::Locale, double>> field9;
} LDContext;

typedef struct Munger {
} // Error Processing Struct Fields

typedef struct __compressed_pair<quasar::Munger *, std::default_delete<quasar::Munger>> {
    Munger __value_;
} __compressed_pair<quasar::Munger *, std::default_delete<quasar::Munger>>;

typedef struct unique_ptr<quasar::Munger, std::default_delete<quasar::Munger>> {
    __compressed_pair<quasar::Munger *, std::default_delete<quasar::Munger>> __ptr_;
} unique_ptr<quasar::Munger, std::default_delete<quasar::Munger>>;

typedef struct PronChoice {
} // Error Processing Struct Fields

typedef struct vector<quasar::PronChoice, std::allocator<quasar::PronChoice>> {
} // Error Processing Struct Fields

typedef struct TokenProns {
} // Error Processing Struct Fields

typedef struct KeywordFinder {
} // Error Processing Struct Fields

typedef struct __compressed_pair<quasar::KeywordFinder *, std::default_delete<quasar::KeywordFinder>> {
    KeywordFinder __value_;
} __compressed_pair<quasar::KeywordFinder *, std::default_delete<quasar::KeywordFinder>>;

typedef struct unique_ptr<quasar::KeywordFinder, std::default_delete<quasar::KeywordFinder>> {
    __compressed_pair<quasar::KeywordFinder *, std::default_delete<quasar::KeywordFinder>> __ptr_;
} unique_ptr<quasar::KeywordFinder, std::default_delete<quasar::KeywordFinder>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>> field0;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>>> {
    void field0;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>> field1;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>>> field0;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> {
    void field0;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, double>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> field0;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, double>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, double>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger field0;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, double>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, double>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float field0;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, double>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, double>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, double>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, double>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, double>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>>> field0;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, double>, void *>>> field1;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, double>, std::hash<std::string>, std::equal_to<std::string>, true>> field2;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, double>, std::equal_to<std::string>, std::hash<std::string>, true>> field3;
} __hash_table<std::__hash_value_type<std::string, double>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, double>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, double>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, double>>>;

typedef struct unordered_map<std::string, double, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, double>>> {
    __hash_table<std::__hash_value_type<std::string, double>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, double>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, double>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, double>>> field0;
} unordered_map<std::string, double, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, double>>>;

typedef struct ContextualData {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::ContextualData> {
} // Error Processing Struct Fields

typedef struct PersonalizedLmData {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::PersonalizedLmData> {
} // Error Processing Struct Fields

typedef struct LmModel2 {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::LmModel2> {
} // Error Processing Struct Fields

typedef struct LmBuildConfig {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::LmBuildConfig> {
} // Error Processing Struct Fields

typedef struct LmHandle {
} // Error Processing Struct Fields

typedef struct shared_ptr<kaldi::quasar::LmHandle> {
} // Error Processing Struct Fields

typedef struct NgramLmModel2 {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::NgramLmModel2> {
} // Error Processing Struct Fields

typedef struct NgramFstConfig {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::NgramFstConfig> {
} // Error Processing Struct Fields

typedef struct LmEvaluator {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::LmEvaluator> {
} // Error Processing Struct Fields

typedef struct LmLoader2 {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::LmLoader2> {
} // Error Processing Struct Fields

typedef struct AppLmData {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::AppLmData> {
} // Error Processing Struct Fields

typedef struct CustomLMBuilder {
} // Error Processing Struct Fields

typedef struct __compressed_pair<quasar::CustomLMBuilder *, std::default_delete<quasar::CustomLMBuilder>> {
    CustomLMBuilder __value_;
} __compressed_pair<quasar::CustomLMBuilder *, std::default_delete<quasar::CustomLMBuilder>>;

typedef struct unique_ptr<quasar::CustomLMBuilder, std::default_delete<quasar::CustomLMBuilder>> {
    __compressed_pair<quasar::CustomLMBuilder *, std::default_delete<quasar::CustomLMBuilder>> __ptr_;
} unique_ptr<quasar::CustomLMBuilder, std::default_delete<quasar::CustomLMBuilder>>;

typedef struct SdapiTokenizer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<sdapi::SdapiTokenizer *, std::default_delete<sdapi::SdapiTokenizer>> {
    SdapiTokenizer __value_;
} __compressed_pair<sdapi::SdapiTokenizer *, std::default_delete<sdapi::SdapiTokenizer>>;

typedef struct unique_ptr<sdapi::SdapiTokenizer, std::default_delete<sdapi::SdapiTokenizer>> {
    __compressed_pair<sdapi::SdapiTokenizer *, std::default_delete<sdapi::SdapiTokenizer>> __ptr_;
} unique_ptr<sdapi::SdapiTokenizer, std::default_delete<sdapi::SdapiTokenizer>>;

typedef struct PSRAudioProcessor {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::PSRAudioProcessor> {
} // Error Processing Struct Fields

typedef struct Version {
    int versionMajor;
    int versionMinor;
} Version;

typedef struct Path {
    unk _vptr$Path;
    basic_string<char, std::char_traits<char>, std::allocator<char>> str;
} Path;

typedef struct __compressed_pair<std::pair<std::string, quasar::PTree> *, std::allocator<std::pair<std::string, quasar::PTree>>> {
    void __value_;
} __compressed_pair<std::pair<std::string, quasar::PTree> *, std::allocator<std::pair<std::string, quasar::PTree>>>;

typedef struct vector<std::pair<std::string, quasar::PTree>, std::allocator<std::pair<std::string, quasar::PTree>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<std::string, quasar::PTree> *, std::allocator<std::pair<std::string, quasar::PTree>>> __end_cap_;
} vector<std::pair<std::string, quasar::PTree>, std::allocator<std::pair<std::string, quasar::PTree>>>;

typedef struct PTree {
    int dataType;
    basic_string<char, std::char_traits<char>, std::allocator<char>> dataValue;
    vector<std::pair<std::string, quasar::PTree>, std::allocator<std::pair<std::string, quasar::PTree>>> map;
    BOOL isALeaf;
} PTree;

typedef struct __compressed_pair<std::pair<std::string, std::string> *, std::allocator<std::pair<std::string, std::string>>> {
    void __value_;
} __compressed_pair<std::pair<std::string, std::string> *, std::allocator<std::pair<std::string, std::string>>>;

typedef struct vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<std::string, std::string> *, std::allocator<std::pair<std::string, std::string>>> __end_cap_;
} vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>>>;

typedef struct unordered_map<std::string, std::vector<std::pair<std::string, std::string>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::vector<std::pair<std::string, std::string>>>>> {
    __hash_table<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>>> __table_;
} unordered_map<std::string, std::vector<std::pair<std::string, std::string>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::vector<std::pair<std::string, std::string>>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, quasar::TranslationPairSetting>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, quasar::TranslationPairSetting>>>;

typedef struct unordered_map<std::string, quasar::TranslationPairSetting, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, quasar::TranslationPairSetting>>> {
    __hash_table<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, quasar::TranslationPairSetting>>> __table_;
} unordered_map<std::string, quasar::TranslationPairSetting, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, quasar::TranslationPairSetting>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>>>;

typedef struct unordered_map<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>>> {
    __hash_table<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>>> __table_;
} unordered_map<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>, true>>;

typedef struct __hash_table<std::__hash_value_type<std::string, std::string>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::string>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>, true>> __p3_;
} __hash_table<std::__hash_value_type<std::string, std::string>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::string>>>;

typedef struct unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::string>>> {
    __hash_table<std::__hash_value_type<std::string, std::string>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::string>>> __table_;
} unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::string>>>;

typedef struct TranslationModelInfo {
    basic_string<char, std::char_traits<char>, std::allocator<char>> version;
    set<std::string, std::less<std::string>, std::allocator<std::string>> tasks;
    vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> languagePairs;
    unordered_map<std::string, std::vector<std::pair<std::string, std::string>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::vector<std::pair<std::string, std::string>>>>> taskSpecificLanguagePairs;
    unordered_map<std::string, quasar::TranslationPairSetting, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, quasar::TranslationPairSetting>>> pairSpecificSettings;
    unordered_map<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>>> taskLangPairSpecificSettings;
    unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::string>>> taskAlias;
} TranslationModelInfo;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::string, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::string, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> {
    __hash_node_base<std::__hash_node<std::string, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>>;

typedef struct __compressed_pair<unsigned long, std::hash<std::string>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::hash<std::string>>;

typedef struct __compressed_pair<float, std::equal_to<std::string>> {
    float __value_;
} __compressed_pair<float, std::equal_to<std::string>>;

typedef struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> __p1_;
    __compressed_pair<unsigned long, std::hash<std::string>> __p2_;
    __compressed_pair<float, std::equal_to<std::string>> __p3_;
} __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>>;

typedef struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> {
    __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> __table_;
} unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>>;

typedef struct SystemConfigInfo {
    basic_string<char, std::char_traits<char>, std::allocator<char>> jsonConfigFilePath;
    Version configFileVersion;
    Path configPath;
    PTree pTree;
    SpeechModelInfo speechModelInfo;
    TranslationModelInfo translationModelInfo;
    HybridClientConfigs hybridClientConfigs;
    int configType;
    unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> requiredAbsolutePaths;
    unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> optionalAbsolutePaths;
} SystemConfigInfo;

typedef struct ModelLoader {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::ModelLoader> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, bool *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, bool *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, bool *>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, bool *>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, bool *>, std::__map_value_compare<std::string, std::__value_type<std::string, bool *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, bool *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, bool *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, bool *>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, bool *>, std::__map_value_compare<std::string, std::__value_type<std::string, bool *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, bool *>>>;

typedef struct map<std::string, bool *, std::less<std::string>, std::allocator<std::pair<const std::string, bool *>>> {
    __tree<std::__value_type<std::string, bool *>, std::__map_value_compare<std::string, std::__value_type<std::string, bool *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, bool *>>> __tree_;
} map<std::string, bool *, std::less<std::string>, std::allocator<std::pair<const std::string, bool *>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int *>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int *>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, int *>, std::__map_value_compare<std::string, std::__value_type<std::string, int *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, int *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int *>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, int *>, std::__map_value_compare<std::string, std::__value_type<std::string, int *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, int *>>>;

typedef struct map<std::string, int *, std::less<std::string>, std::allocator<std::pair<const std::string, int *>>> {
    __tree<std::__value_type<std::string, int *>, std::__map_value_compare<std::string, std::__value_type<std::string, int *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, int *>>> __tree_;
} map<std::string, int *, std::less<std::string>, std::allocator<std::pair<const std::string, int *>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, unsigned int *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, unsigned int *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, unsigned int *>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, unsigned int *>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, unsigned int *>, std::__map_value_compare<std::string, std::__value_type<std::string, unsigned int *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, unsigned int *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, unsigned int *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, unsigned int *>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, unsigned int *>, std::__map_value_compare<std::string, std::__value_type<std::string, unsigned int *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, unsigned int *>>>;

typedef struct map<std::string, unsigned int *, std::less<std::string>, std::allocator<std::pair<const std::string, unsigned int *>>> {
    __tree<std::__value_type<std::string, unsigned int *>, std::__map_value_compare<std::string, std::__value_type<std::string, unsigned int *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, unsigned int *>>> __tree_;
} map<std::string, unsigned int *, std::less<std::string>, std::allocator<std::pair<const std::string, unsigned int *>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, long long *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, long long *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, long long *>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, long long *>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, long long *>, std::__map_value_compare<std::string, std::__value_type<std::string, long long *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, long long *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, long long *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, long long *>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, long long *>, std::__map_value_compare<std::string, std::__value_type<std::string, long long *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, long long *>>>;

typedef struct map<std::string, long long *, std::less<std::string>, std::allocator<std::pair<const std::string, long long *>>> {
    __tree<std::__value_type<std::string, long long *>, std::__map_value_compare<std::string, std::__value_type<std::string, long long *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, long long *>>> __tree_;
} map<std::string, long long *, std::less<std::string>, std::allocator<std::pair<const std::string, long long *>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, float *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, float *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, float *>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, float *>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, float *>, std::__map_value_compare<std::string, std::__value_type<std::string, float *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, float *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, float *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, float *>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, float *>, std::__map_value_compare<std::string, std::__value_type<std::string, float *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, float *>>>;

typedef struct map<std::string, float *, std::less<std::string>, std::allocator<std::pair<const std::string, float *>>> {
    __tree<std::__value_type<std::string, float *>, std::__map_value_compare<std::string, std::__value_type<std::string, float *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, float *>>> __tree_;
} map<std::string, float *, std::less<std::string>, std::allocator<std::pair<const std::string, float *>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, double *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, double *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, double *>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, double *>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, double *>, std::__map_value_compare<std::string, std::__value_type<std::string, double *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, double *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, double *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, double *>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, double *>, std::__map_value_compare<std::string, std::__value_type<std::string, double *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, double *>>>;

typedef struct map<std::string, double *, std::less<std::string>, std::allocator<std::pair<const std::string, double *>>> {
    __tree<std::__value_type<std::string, double *>, std::__map_value_compare<std::string, std::__value_type<std::string, double *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, double *>>> __tree_;
} map<std::string, double *, std::less<std::string>, std::allocator<std::pair<const std::string, double *>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string *>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string *>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::string *>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::string *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string *>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, std::string *>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::string *>>>;

typedef struct map<std::string, std::string *, std::less<std::string>, std::allocator<std::pair<const std::string, std::string *>>> {
    __tree<std::__value_type<std::string, std::string *>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::string *>>> __tree_;
} map<std::string, std::string *, std::less<std::string>, std::allocator<std::pair<const std::string, std::string *>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string> *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string> *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string> *>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string> *>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::vector<std::string> *>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string> *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<std::string> *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string> *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string> *>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, std::vector<std::string> *>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string> *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<std::string> *>>>;

typedef struct map<std::string, std::vector<std::string> *, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string> *>>> {
    __tree<std::__value_type<std::string, std::vector<std::string> *>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string> *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<std::string> *>>> __tree_;
} map<std::string, std::vector<std::string> *, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string> *>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>>>;

typedef struct map<std::string, std::vector<std::pair<std::string, std::string>> *, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::pair<std::string, std::string>> *>>> {
    __tree<std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>>> __tree_;
} map<std::string, std::vector<std::pair<std::string, std::string>> *, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::pair<std::string, std::string>> *>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::unordered_set<std::string> *>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::unordered_set<std::string> *>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::unordered_set<std::string> *>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::unordered_set<std::string> *>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::unordered_set<std::string> *>, std::__map_value_compare<std::string, std::__value_type<std::string, std::unordered_set<std::string> *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::unordered_set<std::string> *>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::unordered_set<std::string> *>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::unordered_set<std::string> *>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, std::unordered_set<std::string> *>, std::__map_value_compare<std::string, std::__value_type<std::string, std::unordered_set<std::string> *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::unordered_set<std::string> *>>>;

typedef struct map<std::string, std::unordered_set<std::string> *, std::less<std::string>, std::allocator<std::pair<const std::string, std::unordered_set<std::string> *>>> {
    __tree<std::__value_type<std::string, std::unordered_set<std::string> *>, std::__map_value_compare<std::string, std::__value_type<std::string, std::unordered_set<std::string> *>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::unordered_set<std::string> *>>> __tree_;
} map<std::string, std::unordered_set<std::string> *, std::less<std::string>, std::allocator<std::pair<const std::string, std::unordered_set<std::string> *>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, quasar::SystemConfig::Version>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, quasar::SystemConfig::Version>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, quasar::SystemConfig::Version>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, quasar::SystemConfig::Version>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, quasar::SystemConfig::Version>, std::__map_value_compare<std::string, std::__value_type<std::string, quasar::SystemConfig::Version>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, quasar::SystemConfig::Version>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, quasar::SystemConfig::Version>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, quasar::SystemConfig::Version>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, quasar::SystemConfig::Version>, std::__map_value_compare<std::string, std::__value_type<std::string, quasar::SystemConfig::Version>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, quasar::SystemConfig::Version>>>;

typedef struct map<std::string, quasar::SystemConfig::Version, std::less<std::string>, std::allocator<std::pair<const std::string, quasar::SystemConfig::Version>>> {
    __tree<std::__value_type<std::string, quasar::SystemConfig::Version>, std::__map_value_compare<std::string, std::__value_type<std::string, quasar::SystemConfig::Version>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, quasar::SystemConfig::Version>>> __tree_;
} map<std::string, quasar::SystemConfig::Version, std::less<std::string>, std::allocator<std::pair<const std::string, quasar::SystemConfig::Version>>>;

typedef struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::set<std::string>>, void *>>> {
    __tree_end_node<std::__tree_node_base<void *> *> __value_;
} __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::set<std::string>>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::set<std::string>>, std::less<std::string>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::set<std::string>>, std::less<std::string>, true>>;

typedef struct __tree<std::__value_type<std::string, std::set<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::set<std::string>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::set<std::string>>>> {
    void __begin_node_;
    __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::set<std::string>>, void *>>> __pair1_;
    __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::set<std::string>>, std::less<std::string>, true>> __pair3_;
} __tree<std::__value_type<std::string, std::set<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::set<std::string>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::set<std::string>>>>;

typedef struct map<std::string, std::set<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::set<std::string>>>> {
    __tree<std::__value_type<std::string, std::set<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::set<std::string>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::set<std::string>>>> __tree_;
} map<std::string, std::set<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::set<std::string>>>>;

typedef struct SystemConfig {
    unk _vptr$OptionsItf;
    SystemConfigInfo info;
    basic_string<char, std::char_traits<char>, std::allocator<char>> prefix;
    shared_ptr<quasar::ModelLoader> modelLoader;
    basic_string<char, std::char_traits<char>, std::allocator<char>> mainModelVersion;
    SpeechModelInfo mainSpeechModelInfo;
    map<std::string, bool *, std::less<std::string>, std::allocator<std::pair<const std::string, bool *>>> boolMap;
    map<std::string, int *, std::less<std::string>, std::allocator<std::pair<const std::string, int *>>> intMap;
    map<std::string, unsigned int *, std::less<std::string>, std::allocator<std::pair<const std::string, unsigned int *>>> uintMap;
    map<std::string, long long *, std::less<std::string>, std::allocator<std::pair<const std::string, long long *>>> int64Map;
    map<std::string, float *, std::less<std::string>, std::allocator<std::pair<const std::string, float *>>> floatMap;
    map<std::string, double *, std::less<std::string>, std::allocator<std::pair<const std::string, double *>>> doubleMap;
    map<std::string, std::string *, std::less<std::string>, std::allocator<std::pair<const std::string, std::string *>>> stringMap;
    map<std::string, std::vector<std::string> *, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string> *>>> stringVecMap;
    map<std::string, std::vector<std::pair<std::string, std::string>> *, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::pair<std::string, std::string>> *>>> stringPairVecMap;
    map<std::string, std::unordered_set<std::string> *, std::less<std::string>, std::allocator<std::pair<const std::string, std::unordered_set<std::string> *>>> stringUnorderedSetMap;
    map<std::string, quasar::SystemConfig::Version, std::less<std::string>, std::allocator<std::pair<const std::string, quasar::SystemConfig::Version>>> paramMinVersionMap;
    map<std::string, quasar::SystemConfig::Version, std::less<std::string>, std::allocator<std::pair<const std::string, quasar::SystemConfig::Version>>> paramMaxVersionMap;
    map<std::string, std::set<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::set<std::string>>>> requiredParams;
    int state;
} SystemConfig;

typedef struct EARCSpeechRecognitionResultStream {
    void ctx;
    unk DisposeContext;
    unk DidRecognizePartialResultTokens;
    unk DidFinishRecognitionWithError;
    unk DidRecognizeFinalResults;
    unk DidProcessAudioDuration;
} EARCSpeechRecognitionResultStream;

typedef struct RecogAudioBuffer {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::RecogAudioBuffer> {
} // Error Processing Struct Fields

typedef struct Artifact {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::artifact::Artifact> {
} // Error Processing Struct Fields

typedef struct AppLmArtifact {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::artifact::AppLmArtifact> {
} // Error Processing Struct Fields

typedef struct __EmojiLocaleDataWrapper {
} // Error Processing Struct Fields

typedef struct SyncPSRAudioProcessor {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::SyncPSRAudioProcessor> {
} // Error Processing Struct Fields

typedef struct TranslatorFactory {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::TranslatorFactory> {
} // Error Processing Struct Fields

typedef struct Translator {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::Translator> {
} // Error Processing Struct Fields

typedef struct vector<quasar::SystemConfig, std::allocator<quasar::SystemConfig>> {
} // Error Processing Struct Fields

typedef struct Geography {
} // Error Processing Struct Fields

typedef struct __compressed_pair<quasar::Geography *, std::default_delete<quasar::Geography>> {
    Geography __value_;
} __compressed_pair<quasar::Geography *, std::default_delete<quasar::Geography>>;

typedef struct unique_ptr<quasar::Geography, std::default_delete<quasar::Geography>> {
    __compressed_pair<quasar::Geography *, std::default_delete<quasar::Geography>> __ptr_;
} unique_ptr<quasar::Geography, std::default_delete<quasar::Geography>>;

typedef struct __compressed_pair<std::pair<id<_EARLanguageModelDataSource>, float> *, std::allocator<std::pair<id<_EARLanguageModelDataSource>, float>>> {
    void __value_;
} __compressed_pair<std::pair<id<_EARLanguageModelDataSource>, float> *, std::allocator<std::pair<id<_EARLanguageModelDataSource>, float>>>;

typedef struct vector<std::pair<id<_EARLanguageModelDataSource>, float>, std::allocator<std::pair<id<_EARLanguageModelDataSource>, float>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<id<_EARLanguageModelDataSource>, float> *, std::allocator<std::pair<id<_EARLanguageModelDataSource>, float>>> __end_cap_;
} vector<std::pair<id<_EARLanguageModelDataSource>, float>, std::allocator<std::pair<id<_EARLanguageModelDataSource>, float>>>;

typedef struct SentencePieceProcessor {
} // Error Processing Struct Fields

typedef struct shared_ptr<sentencepiece::SentencePieceProcessor> {
} // Error Processing Struct Fields

typedef struct SpeechITN {
} // Error Processing Struct Fields

typedef struct __compressed_pair<SpeechITN *, std::default_delete<SpeechITN>> {
    SpeechITN __value_;
} __compressed_pair<SpeechITN *, std::default_delete<SpeechITN>>;

typedef struct unique_ptr<SpeechITN, std::default_delete<SpeechITN>> {
    __compressed_pair<SpeechITN *, std::default_delete<SpeechITN>> __ptr_;
} unique_ptr<SpeechITN, std::default_delete<SpeechITN>>;

typedef struct CustomPronData {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::CustomPronData> {
} // Error Processing Struct Fields

typedef struct SilencePosteriorGenerator {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::SilencePosteriorGenerator> {
} // Error Processing Struct Fields

typedef struct PhonesetMapping {
} // Error Processing Struct Fields

typedef struct shared_ptr<quasar::PhonesetMapping> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::optional<quasar::language_detector::Locale> *, std::allocator<std::optional<quasar::language_detector::Locale>>> {
    void field0;
} __compressed_pair<std::optional<quasar::language_detector::Locale> *, std::allocator<std::optional<quasar::language_detector::Locale>>>;

typedef struct vector<std::optional<quasar::language_detector::Locale>, std::allocator<std::optional<quasar::language_detector::Locale>>> {
    void field0;
    void field1;
    __compressed_pair<std::optional<quasar::language_detector::Locale> *, std::allocator<std::optional<quasar::language_detector::Locale>>> field2;
} vector<std::optional<quasar::language_detector::Locale>, std::allocator<std::optional<quasar::language_detector::Locale>>>;

typedef struct shared_ptr<const quasar::LDContext> {
} // Error Processing Struct Fields

typedef struct LanguageDetector {
} // Error Processing Struct Fields

typedef struct __compressed_pair<quasar::LanguageDetector *, std::default_delete<quasar::LanguageDetector>> {
    LanguageDetector __value_;
} __compressed_pair<quasar::LanguageDetector *, std::default_delete<quasar::LanguageDetector>>;

typedef struct unique_ptr<quasar::LanguageDetector, std::default_delete<quasar::LanguageDetector>> {
    __compressed_pair<quasar::LanguageDetector *, std::default_delete<quasar::LanguageDetector>> __ptr_;
} unique_ptr<quasar::LanguageDetector, std::default_delete<quasar::LanguageDetector>>;

typedef struct CommandTagging {
} // Error Processing Struct Fields

typedef struct __compressed_pair<quasar::CommandTagging *, std::default_delete<quasar::CommandTagging>> {
    CommandTagging __value_;
} __compressed_pair<quasar::CommandTagging *, std::default_delete<quasar::CommandTagging>>;

typedef struct unique_ptr<quasar::CommandTagging, std::default_delete<quasar::CommandTagging>> {
    __compressed_pair<quasar::CommandTagging *, std::default_delete<quasar::CommandTagging>> __ptr_;
} unique_ptr<quasar::CommandTagging, std::default_delete<quasar::CommandTagging>>;

typedef struct CommandTagger {
} // Error Processing Struct Fields

typedef struct __compressed_pair<quasar::CommandTagger *, std::default_delete<quasar::CommandTagger>> {
    CommandTagger __value_;
} __compressed_pair<quasar::CommandTagger *, std::default_delete<quasar::CommandTagger>>;

typedef struct unique_ptr<quasar::CommandTagger, std::default_delete<quasar::CommandTagger>> {
    __compressed_pair<quasar::CommandTagger *, std::default_delete<quasar::CommandTagger>> __ptr_;
} unique_ptr<quasar::CommandTagger, std::default_delete<quasar::CommandTagger>>;

typedef struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> {
    void __value_;
} __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>>;

typedef struct vector<std::vector<float>, std::allocator<std::vector<float>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> __end_cap_;
} vector<std::vector<float>, std::allocator<std::vector<float>>>;

typedef struct __compressed_pair<float *, std::default_delete<float[]>> {
    float __value_;
} __compressed_pair<float *, std::default_delete<float[]>>;

typedef struct unique_ptr<float[], std::default_delete<float[]>> {
    __compressed_pair<float *, std::default_delete<float[]>> __ptr_;
} unique_ptr<float[], std::default_delete<float[]>>;

typedef struct powerSummary {
    CGFloat total_energy;
    CGFloat ane_energy;
    CGFloat gpu_energy;
    CGFloat ecpu_energy;
    CGFloat pcpu_energy;
    CGFloat dram_energy;
    CGFloat other_energy;
    CGFloat total_power;
    CGFloat ane_power;
    CGFloat gpu_power;
    CGFloat ecpu_power;
    CGFloat pcpu_power;
    CGFloat dram_power;
    CGFloat other_power;
} powerSummary;

typedef struct __compressed_pair<void **, std::allocator<void *>> {
    void __value_;
} __compressed_pair<void **, std::allocator<void *>>;

typedef struct vector<void *, std::allocator<void *>> {
    void __begin_;
    void __end_;
    __compressed_pair<void **, std::allocator<void *>> __end_cap_;
} vector<void *, std::allocator<void *>>;

