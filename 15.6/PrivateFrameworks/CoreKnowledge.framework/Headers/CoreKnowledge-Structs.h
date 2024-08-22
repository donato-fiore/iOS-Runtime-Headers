typedef struct _NSZone {
} // Error Processing Struct Fields

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

typedef struct Indexer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<skitbridge::Indexer *, std::default_delete<skitbridge::Indexer>> {
    Indexer __value_;
} __compressed_pair<skitbridge::Indexer *, std::default_delete<skitbridge::Indexer>>;

typedef struct unique_ptr<skitbridge::Indexer, std::default_delete<skitbridge::Indexer>> {
    __compressed_pair<skitbridge::Indexer *, std::default_delete<skitbridge::Indexer>> __ptr_;
} unique_ptr<skitbridge::Indexer, std::default_delete<skitbridge::Indexer>>;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct Tokenizer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<skitbridge::Tokenizer *, std::default_delete<skitbridge::Tokenizer>> {
    Tokenizer __value_;
} __compressed_pair<skitbridge::Tokenizer *, std::default_delete<skitbridge::Tokenizer>>;

typedef struct unique_ptr<skitbridge::Tokenizer, std::default_delete<skitbridge::Tokenizer>> {
    __compressed_pair<skitbridge::Tokenizer *, std::default_delete<skitbridge::Tokenizer>> __ptr_;
} unique_ptr<skitbridge::Tokenizer, std::default_delete<skitbridge::Tokenizer>>;

typedef struct ? {
    NSUInteger field0;
    id field1;
    NSUInteger field2;
    NSUInteger field3;
} ?;

typedef struct OntologyNodeName {
} // Error Processing Struct Fields

typedef struct OntologyEdgeName {
} // Error Processing Struct Fields

typedef struct pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *> {
    OntologyNodeName field0;
    OntologyEdgeName field1;
} pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *>;

typedef struct optional<std::pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *>> {
    unk field0;
    char field1;
    pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *> field2;
    BOOL field3;
} optional<std::pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *>>;

typedef struct Searcher {
} // Error Processing Struct Fields

typedef struct __compressed_pair<skitbridge::Searcher *, std::default_delete<skitbridge::Searcher>> {
    Searcher __value_;
} __compressed_pair<skitbridge::Searcher *, std::default_delete<skitbridge::Searcher>>;

typedef struct unique_ptr<skitbridge::Searcher, std::default_delete<skitbridge::Searcher>> {
    __compressed_pair<skitbridge::Searcher *, std::default_delete<skitbridge::Searcher>> __ptr_;
} unique_ptr<skitbridge::Searcher, std::default_delete<skitbridge::Searcher>>;

typedef struct sqlite3_stmt {
} // Error Processing Struct Fields

typedef struct sqlite3 {
} // Error Processing Struct Fields

