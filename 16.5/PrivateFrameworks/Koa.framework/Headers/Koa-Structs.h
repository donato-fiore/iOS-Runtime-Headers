typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct ProfileInfo {
    unsigned char field0;
} ProfileInfo;

typedef struct DatasetInfo {
    unsigned char field0;
} DatasetInfo;

typedef struct Allocator {
} // Error Processing Struct Fields

typedef struct vector_downward {
    Allocator allocator_;
    BOOL own_allocator_;
    NSUInteger initial_size_;
    NSUInteger buffer_minalign_;
    NSUInteger reserved_;
    char * buf_;
    char * cur_;
    char * scratch_;
} vector_downward;

typedef struct FlatBufferBuilder {
    vector_downward buf_;
    unsigned int num_field_loc;
    unsigned short max_voffset_;
    BOOL nested;
    BOOL finished;
    NSUInteger minalign_;
    BOOL force_defaults_;
    BOOL dedup_vtables_;
    void string_pool;
} FlatBufferBuilder;

typedef struct __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>>> {
    void __value_;
} __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>>>;

typedef struct vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>>> {
    void __begin_;
    void __end_;
    __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>>> __end_cap_;
} vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>>>;

typedef struct Searcher {
    ContextV2 context;
    IndexReader index_reader;
    Alias alias;
} Searcher;

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<skitbridge::Searcher> {
    Searcher __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<skitbridge::Searcher>;

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

typedef struct path {
    basic_string<char, std::char_traits<char>, std::allocator<char>> __pn_;
} path;

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct SpanInfo {
    unsigned char field0;
} SpanInfo;

typedef struct Tokenizer {
} // Error Processing Struct Fields

typedef struct shared_ptr<skitbridge::Tokenizer> {
} // Error Processing Struct Fields

typedef struct Field {
    unsigned char field0;
} Field;

typedef struct Item {
    unsigned char field0;
} Item;

typedef struct ContextImpl {
} // Error Processing Struct Fields

typedef struct shared_ptr<skit::internal::ContextImpl> {
} // Error Processing Struct Fields

typedef struct ContextV2 {
    shared_ptr<skit::internal::ContextImpl> pimpl;
} ContextV2;

typedef struct IndexWriterImpl {
} // Error Processing Struct Fields

typedef struct __compressed_pair<skit::internal::IndexWriterImpl *, std::default_delete<skit::internal::IndexWriterImpl>> {
    IndexWriterImpl __value_;
} __compressed_pair<skit::internal::IndexWriterImpl *, std::default_delete<skit::internal::IndexWriterImpl>>;

typedef struct unique_ptr<skit::internal::IndexWriterImpl, std::default_delete<skit::internal::IndexWriterImpl>> {
    __compressed_pair<skit::internal::IndexWriterImpl *, std::default_delete<skit::internal::IndexWriterImpl>> __ptr_;
} unique_ptr<skit::internal::IndexWriterImpl, std::default_delete<skit::internal::IndexWriterImpl>>;

typedef struct IndexWriter {
    unique_ptr<skit::internal::IndexWriterImpl, std::default_delete<skit::internal::IndexWriterImpl>> pimpl;
} IndexWriter;

typedef struct __compressed_pair<std::basic_string<char16_t>::__rep, std::allocator<char16_t>> {
    __rep __value_;
} __compressed_pair<std::basic_string<char16_t>::__rep, std::allocator<char16_t>>;

typedef struct basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>> {
    __compressed_pair<std::basic_string<char16_t>::__rep, std::allocator<char16_t>> __r_;
} basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>>;

typedef struct Indexer {
} // Error Processing Struct Fields

typedef struct IndexReaderImpl {
} // Error Processing Struct Fields

typedef struct shared_ptr<skit::internal::IndexReaderImpl> {
} // Error Processing Struct Fields

typedef struct IndexReader {
    shared_ptr<skit::internal::IndexReaderImpl> pimpl;
} IndexReader;

typedef struct AliasImpl {
} // Error Processing Struct Fields

typedef struct shared_ptr<skit::internal::AliasImpl> {
} // Error Processing Struct Fields

typedef struct Alias {
    shared_ptr<skit::internal::AliasImpl> pimpl;
} Alias;

typedef struct __compressed_pair<std::pair<skitbridge::SearchGroup, std::vector<std::byte>> *, std::allocator<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>>> {
    void __value_;
} __compressed_pair<std::pair<skitbridge::SearchGroup, std::vector<std::byte>> *, std::allocator<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>>>;

typedef struct vector<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>, std::allocator<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::pair<skitbridge::SearchGroup, std::vector<std::byte>> *, std::allocator<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>>> __end_cap_;
} vector<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>, std::allocator<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>>>;

typedef struct Query {
} // Error Processing Struct Fields

typedef struct shared_ptr<skitbridge::Query> {
} // Error Processing Struct Fields

typedef struct Token {
} // Error Processing Struct Fields

typedef struct TokenStream {
} // Error Processing Struct Fields

typedef struct Dataset {
    unsigned char field0;
} Dataset;

typedef struct Profile {
    unsigned char field0;
} Profile;

typedef struct __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>>> {
    void __value_;
} __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>>>;

typedef struct vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>>> {
    void __begin_;
    void __end_;
    __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>>> __end_cap_;
} vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>>>;

typedef struct __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>>> {
    void __value_;
} __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>>>;

typedef struct vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>>> {
    void __begin_;
    void __end_;
    __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem> *, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>>> __end_cap_;
} vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>>>;

typedef struct __compressed_pair<skitbridge::Indexer *, std::default_delete<skitbridge::Indexer>> {
} // Error Processing Struct Fields

typedef struct unique_ptr<skitbridge::Indexer, std::default_delete<skitbridge::Indexer>> {
    __compressed_pair<skitbridge::Indexer *, std::default_delete<skitbridge::Indexer>> __ptr_;
} unique_ptr<skitbridge::Indexer, std::default_delete<skitbridge::Indexer>>;

