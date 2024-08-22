typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ? {
    unsigned char __size_;
} ?;

typedef struct ThreadSafeReferenceBase {
} // Error Processing Struct Fields

typedef struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::default_delete<realm::ThreadSafeReferenceBase>> {
    ThreadSafeReferenceBase __value_;
} __compressed_pair<realm::ThreadSafeReferenceBase *, std::default_delete<realm::ThreadSafeReferenceBase>>;

typedef struct unique_ptr<realm::ThreadSafeReferenceBase, std::default_delete<realm::ThreadSafeReferenceBase>> {
    __compressed_pair<realm::ThreadSafeReferenceBase *, std::default_delete<realm::ThreadSafeReferenceBase>> __ptr_;
} unique_ptr<realm::ThreadSafeReferenceBase, std::default_delete<realm::ThreadSafeReferenceBase>>;

typedef struct StringIndex {
} // Error Processing Struct Fields

typedef struct __compressed_pair<realm::StringIndex *, std::default_delete<realm::StringIndex>> {
    StringIndex field0;
} __compressed_pair<realm::StringIndex *, std::default_delete<realm::StringIndex>>;

typedef struct unique_ptr<realm::StringIndex, std::default_delete<realm::StringIndex>> {
    __compressed_pair<realm::StringIndex *, std::default_delete<realm::StringIndex>> field0;
} unique_ptr<realm::StringIndex, std::default_delete<realm::StringIndex>>;

typedef struct Array {
} // Error Processing Struct Fields

typedef struct __compressed_pair<realm::Array *, std::default_delete<realm::Array>> {
    Array field0;
} __compressed_pair<realm::Array *, std::default_delete<realm::Array>>;

typedef struct unique_ptr<realm::Array, std::default_delete<realm::Array>> {
    __compressed_pair<realm::Array *, std::default_delete<realm::Array>> field0;
} unique_ptr<realm::Array, std::default_delete<realm::Array>>;

typedef struct BpTree<long long> {
    unique_ptr<realm::Array, std::default_delete<realm::Array>> field0;
} BpTree<long long>;

typedef struct Column<long long> {
    unk field0;
    NSUInteger field1;
    unique_ptr<realm::StringIndex, std::default_delete<realm::StringIndex>> field2;
    BpTree<long long> field3;
} Column<long long>;

typedef struct Table {
} // Error Processing Struct Fields

typedef struct BasicTableRef<realm::Table> {
    Table m_ptr;
} BasicTableRef<realm::Table>;

typedef struct BacklinkColumn {
} // Error Processing Struct Fields

typedef struct RowBase {
} // Error Processing Struct Fields

typedef struct BasicRow<const realm::Table> {
} // Error Processing Struct Fields

typedef struct LinkView {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<const realm::LinkView> {
    LinkView field0;
    __shared_weak_count field1;
} shared_ptr<const realm::LinkView>;

typedef struct __compressed_pair<std::unique_ptr<realm::BaseDescriptor> *, std::allocator<std::unique_ptr<realm::BaseDescriptor>>> {
    void field0;
} __compressed_pair<std::unique_ptr<realm::BaseDescriptor> *, std::allocator<std::unique_ptr<realm::BaseDescriptor>>>;

typedef struct vector<std::unique_ptr<realm::BaseDescriptor>, std::allocator<std::unique_ptr<realm::BaseDescriptor>>> {
    void field0;
    void field1;
    __compressed_pair<std::unique_ptr<realm::BaseDescriptor> *, std::allocator<std::unique_ptr<realm::BaseDescriptor>>> field2;
} vector<std::unique_ptr<realm::BaseDescriptor>, std::allocator<std::unique_ptr<realm::BaseDescriptor>>>;

typedef struct DescriptorOrdering {
    vector<std::unique_ptr<realm::BaseDescriptor>, std::allocator<std::unique_ptr<realm::BaseDescriptor>>> field0;
} DescriptorOrdering;

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

typedef struct QueryGroup {
} // Error Processing Struct Fields

typedef struct vector<realm::QueryGroup, std::allocator<realm::QueryGroup>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
    NSUInteger field0;
} __compressed_pair<unsigned long *, std::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    NSUInteger field0;
    NSUInteger field1;
    __compressed_pair<unsigned long *, std::allocator<unsigned long>> field2;
} vector<unsigned long, std::allocator<unsigned long>>;

typedef struct Descriptor {
} // Error Processing Struct Fields

typedef struct shared_ptr<const realm::Descriptor> {
} // Error Processing Struct Fields

typedef struct RowIndexes {
} // Error Processing Struct Fields

typedef struct shared_ptr<realm::LinkView> {
    LinkView field0;
    __shared_weak_count field1;
} shared_ptr<realm::LinkView>;

typedef struct TableViewBase {
} // Error Processing Struct Fields

typedef struct __compressed_pair<realm::TableViewBase *, std::default_delete<realm::TableViewBase>> {
} // Error Processing Struct Fields

typedef struct unique_ptr<realm::TableViewBase, std::default_delete<realm::TableViewBase>> {
    __compressed_pair<realm::TableViewBase *, std::default_delete<realm::TableViewBase>> field0;
} unique_ptr<realm::TableViewBase, std::default_delete<realm::TableViewBase>>;

typedef struct Query {
    basic_string<char, std::char_traits<char>, std::allocator<char>> field0;
    vector<realm::QueryGroup, std::allocator<realm::QueryGroup>> field1;
    vector<unsigned long, std::allocator<unsigned long>> field2;
    shared_ptr<const realm::Descriptor> field3;
    BasicTableRef<realm::Table> field4;
    RowIndexes field5;
    shared_ptr<realm::LinkView> field6;
    TableViewBase field7;
    unique_ptr<realm::TableViewBase, std::default_delete<realm::TableViewBase>> field8;
} Query;

typedef struct Optional<unsigned long long> {
    unk field0;
    NSUInteger field1;
    char field2;
    BOOL field3;
} Optional<unsigned long long>;

typedef struct TableView {
    unk field0;
    Column<long long> field1;
    NSUInteger field2;
    NSUInteger field3;
    BasicTableRef<realm::Table> field4;
    BacklinkColumn field5;
    BasicRow<const realm::Table> field6;
    shared_ptr<const realm::LinkView> field7;
    NSUInteger field8;
    DescriptorOrdering field9;
    Query field10;
    NSUInteger field11;
    NSUInteger field12;
    NSUInteger field13;
    Optional<unsigned long long> field14;
    NSUInteger field15;
} TableView;

typedef struct Realm {
} // Error Processing Struct Fields

typedef struct shared_ptr<realm::Realm> {
} // Error Processing Struct Fields

typedef struct ObjectSchema {
} // Error Processing Struct Fields

typedef struct CollectionNotifier {
} // Error Processing Struct Fields

typedef struct Handle<realm::_impl::CollectionNotifier> {
} // Error Processing Struct Fields

typedef struct List {
} // Error Processing Struct Fields

typedef struct RLMObservationInfo {
} // Error Processing Struct Fields

typedef struct __compressed_pair<RLMObservationInfo *, std::default_delete<RLMObservationInfo>> {
    RLMObservationInfo __value_;
} __compressed_pair<RLMObservationInfo *, std::default_delete<RLMObservationInfo>>;

typedef struct unique_ptr<RLMObservationInfo, std::default_delete<RLMObservationInfo>> {
    __compressed_pair<RLMObservationInfo *, std::default_delete<RLMObservationInfo>> __ptr_;
} unique_ptr<RLMObservationInfo, std::default_delete<RLMObservationInfo>>;

typedef struct __compressed_pair<__strong id *, std::default_delete<id []>> {
    id __value_;
} __compressed_pair<__strong id *, std::default_delete<id []>>;

typedef struct unique_ptr<id [], std::default_delete<id []>> {
    __compressed_pair<__strong id *, std::default_delete<id []>> __ptr_;
} unique_ptr<id [], std::default_delete<id []>>;

typedef struct Results {
} // Error Processing Struct Fields

typedef struct shared_ptr<realm::_impl::CollectionNotifier> {
} // Error Processing Struct Fields

typedef struct AtomicSharedPtr<realm::_impl::CollectionNotifier, true> {
} // Error Processing Struct Fields

typedef struct NotificationToken {
    AtomicSharedPtr<realm::_impl::CollectionNotifier, true> m_notifier;
    NSUInteger m_token;
} NotificationToken;

typedef struct Chunk {
} // Error Processing Struct Fields

typedef struct vector<realm::_impl::ChunkedRangeVector::Chunk, std::allocator<realm::_impl::ChunkedRangeVector::Chunk>> {
} // Error Processing Struct Fields

typedef struct IndexSet {
} // Error Processing Struct Fields

typedef struct Move {
} // Error Processing Struct Fields

typedef struct vector<realm::CollectionChangeSet::Move, std::allocator<realm::CollectionChangeSet::Move>> {
} // Error Processing Struct Fields

typedef struct vector<realm::IndexSet, std::allocator<realm::IndexSet>> {
} // Error Processing Struct Fields

typedef struct CollectionChangeSet {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, RLMClassInfo>, std::hash<NSString *>, std::equal_to<NSString *>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, RLMClassInfo>, std::hash<NSString *>, std::equal_to<NSString *>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, RLMClassInfo>, std::equal_to<NSString *>, std::hash<NSString *>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, RLMClassInfo>, std::equal_to<NSString *>, std::hash<NSString *>, true>>;

typedef struct __hash_table<std::__hash_value_type<NSString *, RLMClassInfo>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, RLMClassInfo>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, RLMClassInfo>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, RLMClassInfo>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, RLMClassInfo>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, RLMClassInfo>, std::hash<NSString *>, std::equal_to<NSString *>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, RLMClassInfo>, std::equal_to<NSString *>, std::hash<NSString *>, true>> __p3_;
} __hash_table<std::__hash_value_type<NSString *, RLMClassInfo>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, RLMClassInfo>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, RLMClassInfo>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, RLMClassInfo>>>;

typedef struct unordered_map<NSString *, RLMClassInfo, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, RLMClassInfo>>> {
    __hash_table<std::__hash_value_type<NSString *, RLMClassInfo>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, RLMClassInfo>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, RLMClassInfo>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, RLMClassInfo>>> __table_;
} unordered_map<NSString *, RLMClassInfo, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, RLMClassInfo>>>;

typedef struct RLMSchemaInfo {
    unordered_map<NSString *, RLMClassInfo, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, RLMClassInfo>>> m_objects;
} RLMSchemaInfo;

typedef struct RLMResultsSetInfo {
} // Error Processing Struct Fields

typedef struct __compressed_pair<RLMResultsSetInfo *, std::default_delete<RLMResultsSetInfo>> {
    RLMResultsSetInfo __value_;
} __compressed_pair<RLMResultsSetInfo *, std::default_delete<RLMResultsSetInfo>>;

typedef struct unique_ptr<RLMResultsSetInfo, std::default_delete<RLMResultsSetInfo>> {
    __compressed_pair<RLMResultsSetInfo *, std::default_delete<RLMResultsSetInfo>> __ptr_;
} unique_ptr<RLMResultsSetInfo, std::default_delete<RLMResultsSetInfo>>;

typedef struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *>>;

typedef struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *>> {
    __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *>> __data_;
} __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *>>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *>>> {
    void __value_;
    __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *>> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *>>>;

typedef struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *>>> {
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *>>> __ptr_;
} unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *>>>;

typedef struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> {
    void __next_;
} __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *>;

typedef struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *>>> {
    __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> __value_;
} __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *>>>;

typedef struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, realm::IndexSet>, std::hash<NSString *>, std::equal_to<NSString *>, true>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, realm::IndexSet>, std::hash<NSString *>, std::equal_to<NSString *>, true>>;

typedef struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, realm::IndexSet>, std::equal_to<NSString *>, std::hash<NSString *>, true>> {
    float __value_;
} __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, realm::IndexSet>, std::equal_to<NSString *>, std::hash<NSString *>, true>>;

typedef struct __hash_table<std::__hash_value_type<NSString *, realm::IndexSet>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, realm::IndexSet>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, realm::IndexSet>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, realm::IndexSet>>> {
    unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *> *>>> __bucket_list_;
    __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, realm::IndexSet>, void *>>> __p1_;
    __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, realm::IndexSet>, std::hash<NSString *>, std::equal_to<NSString *>, true>> __p2_;
    __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, realm::IndexSet>, std::equal_to<NSString *>, std::hash<NSString *>, true>> __p3_;
} __hash_table<std::__hash_value_type<NSString *, realm::IndexSet>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, realm::IndexSet>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, realm::IndexSet>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, realm::IndexSet>>>;

typedef struct unordered_map<NSString *, realm::IndexSet, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, realm::IndexSet>>> {
    __hash_table<std::__hash_value_type<NSString *, realm::IndexSet>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, realm::IndexSet>, std::hash<NSString *>, std::equal_to<NSString *>, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, realm::IndexSet>, std::equal_to<NSString *>, std::hash<NSString *>, true>, std::allocator<std::__hash_value_type<NSString *, realm::IndexSet>>> __table_;
} unordered_map<NSString *, realm::IndexSet, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, realm::IndexSet>>>;

typedef struct BasicRow<realm::Table> {
} // Error Processing Struct Fields

typedef struct Object {
} // Error Processing Struct Fields

typedef struct Property {
    basic_string<char, std::char_traits<char>, std::allocator<char>> field0;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field1;
    unsigned char field2;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field3;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field4;
    TaggedBool<realm::IsPrimaryTag> field5;
    TaggedBool<realm::IsIndexedTag> field6;
    NSUInteger field7;
} Property;

typedef struct vector<realm::Property, std::allocator<realm::Property>> {
} // Error Processing Struct Fields

typedef struct OptionalBase {
} // Error Processing Struct Fields

typedef struct __compressed_pair<(anonymous namespace)::OptionalBase *, std::default_delete<(anonymous namespace)::OptionalBase>> {
    OptionalBase __value_;
} __compressed_pair<(anonymous namespace)::OptionalBase *, std::default_delete<(anonymous namespace)::OptionalBase>>;

typedef struct unique_ptr<(anonymous namespace)::OptionalBase, std::default_delete<(anonymous namespace)::OptionalBase>> {
    __compressed_pair<(anonymous namespace)::OptionalBase *, std::default_delete<(anonymous namespace)::OptionalBase>> __ptr_;
} unique_ptr<(anonymous namespace)::OptionalBase, std::default_delete<(anonymous namespace)::OptionalBase>>;

typedef struct objc_ivar {
} // Error Processing Struct Fields

typedef struct objc_property {
} // Error Processing Struct Fields

typedef struct TaggedBool<realm::IsPrimaryTag> {
    BOOL field0;
} TaggedBool<realm::IsPrimaryTag>;

typedef struct TaggedBool<realm::IsIndexedTag> {
    BOOL field0;
} TaggedBool<realm::IsIndexedTag>;

typedef struct BinaryData {
    char * m_data;
    NSUInteger m_size;
} BinaryData;

typedef struct __compressed_pair<char *, std::allocator<char>> {
    char * __value_;
} __compressed_pair<char *, std::allocator<char>>;

typedef struct vector<char, std::allocator<char>> {
    char * __begin_;
    char * __end_;
    __compressed_pair<char *, std::allocator<char>> __end_cap_;
} vector<char, std::allocator<char>>;

typedef struct Schema {
} // Error Processing Struct Fields

typedef struct Optional<realm::Schema> {
    unk ;
    Schema m_value;
    char m_null_state;
    BOOL m_engaged;
} Optional<realm::Schema>;

typedef struct type {
    unsigned char __lx;
} type;

typedef struct __value_func<void (std::shared_ptr<realm::Realm>, std::shared_ptr<realm::Realm>, realm::Schema &)> {
    type __buf_;
    void __f_;
} __value_func<void (std::shared_ptr<realm::Realm>, std::shared_ptr<realm::Realm>, realm::Schema &)>;

typedef struct function<void (std::shared_ptr<realm::Realm>, std::shared_ptr<realm::Realm>, realm::Schema &)> {
    __value_func<void (std::shared_ptr<realm::Realm>, std::shared_ptr<realm::Realm>, realm::Schema &)> __f_;
} function<void (std::shared_ptr<realm::Realm>, std::shared_ptr<realm::Realm>, realm::Schema &)>;

typedef struct __value_func<void (std::shared_ptr<realm::Realm>)> {
    type __buf_;
    void __f_;
} __value_func<void (std::shared_ptr<realm::Realm>)>;

typedef struct function<void (std::shared_ptr<realm::Realm>)> {
    __value_func<void (std::shared_ptr<realm::Realm>)> __f_;
} function<void (std::shared_ptr<realm::Realm>)>;

typedef struct __value_func<bool (unsigned long long, unsigned long long)> {
    type __buf_;
    void __f_;
} __value_func<bool (unsigned long long, unsigned long long)>;

typedef struct function<bool (unsigned long long, unsigned long long)> {
    __value_func<bool (unsigned long long, unsigned long long)> __f_;
} function<bool (unsigned long long, unsigned long long)>;

typedef struct Optional<unsigned long> {
    unk ;
    NSUInteger m_value;
    char m_null_state;
    BOOL m_engaged;
} Optional<unsigned long>;

typedef struct SyncConfig {
} // Error Processing Struct Fields

typedef struct shared_ptr<realm::SyncConfig> {
} // Error Processing Struct Fields

typedef struct __value_func<std::shared_ptr<realm::AuditInterface> ()> {
    type __buf_;
    void __f_;
} __value_func<std::shared_ptr<realm::AuditInterface> ()>;

typedef struct function<std::shared_ptr<realm::AuditInterface> ()> {
    __value_func<std::shared_ptr<realm::AuditInterface> ()> __f_;
} function<std::shared_ptr<realm::AuditInterface> ()>;

typedef struct Config {
    basic_string<char, std::char_traits<char>, std::allocator<char>> path;
    BinaryData realm_data;
    vector<char, std::allocator<char>> encryption_key;
    basic_string<char, std::char_traits<char>, std::allocator<char>> fifo_files_fallback_path;
    BOOL in_memory;
    unsigned char schema_mode;
    Optional<realm::Schema> schema;
    NSUInteger schema_version;
    function<void (std::shared_ptr<realm::Realm>, std::shared_ptr<realm::Realm>, realm::Schema &)> migration_function;
    function<void (std::shared_ptr<realm::Realm>)> initialization_function;
    function<bool (unsigned long long, unsigned long long)> should_compact_on_launch_function;
    BOOL cache;
    BOOL disable_format_upgrade;
    BOOL automatic_change_notifications;
    Optional<unsigned long> execution_context;
    shared_ptr<realm::SyncConfig> sync_config;
    BOOL force_sync_history;
    function<std::shared_ptr<realm::AuditInterface> ()> audit_factory;
} Config;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CGFont {
} // Error Processing Struct Fields

typedef struct __CTFont {
} // Error Processing Struct Fields

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct __CFRunLoop {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct __SecKey {
    __CFRuntimeBase field0;
    __SecKeyDescriptor field1;
    void field2;
} __SecKey;

typedef struct _NSProgressFraction {
    NSInteger field0;
    NSInteger field1;
    BOOL field2;
} _NSProgressFraction;

typedef struct _NSProgressFractionTuple {
    _NSProgressFraction field0;
    _NSProgressFraction field1;
} _NSProgressFractionTuple;

typedef struct __SecCertificate {
} // Error Processing Struct Fields

typedef struct CGPoint {
    CGFloat field0;
    CGFloat field1;
} CGPoint;

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct WFRowTemplateValueInfo {
    Class field0;
    SEL field1;
    SEL field2;
    id field3;
    id field4;
} WFRowTemplateValueInfo;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct __CFRuntimeBase {
    NSUInteger field0;
    uint8_t field1;
    NSUInteger field2;
} __CFRuntimeBase;

typedef struct __SecKeyDescriptor {
} // Error Processing Struct Fields

typedef struct _managedObjectContextFlags {
    BOOL _registeredForCallback;
    BOOL _propagatesDeletesAtEndOfEvent;
    BOOL _exhaustiveValidation;
    BOOL _processingChanges;
    BOOL _useCommittedSnapshot;
    BOOL _registeredUndoTransactionID;
    BOOL _retainsAllRegisteredObjects;
    BOOL _savingInProgress;
    BOOL _wasDisposed;
    BOOL _unprocessedChangesPending;
    BOOL _isDirty;
    BOOL _ignoreUndoCheckpoints;
    BOOL _propagatingDeletes;
    BOOL _isNSEditorEditing;
    BOOL _isMainThreadBlessed;
    BOOL _isImportContext;
    BOOL _preflightSaveInProgress;
    BOOL _disableDiscardEditing;
    BOOL _isParentStoreContext;
    BOOL _postSaveNotifications;
    BOOL _isMerging;
    BOOL _concurrencyType;
    BOOL _deleteInaccessible;
    BOOL _priority;
    BOOL _autoMerge;
    BOOL _isXPCServerContext;
    BOOL _pushSecureDelete;
    BOOL _refreshAfterSave;
    BOOL _allowAncillary;
    BOOL _generatedMutatedIDsNotification;
    BOOL _postSavedObjectNotifications;
    BOOL _allowAdditionalUserInfoKeys;
    BOOL _reservedFlags;
} _managedObjectContextFlags;

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

