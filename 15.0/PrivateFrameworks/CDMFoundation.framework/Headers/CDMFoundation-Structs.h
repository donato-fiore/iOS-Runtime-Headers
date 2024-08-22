typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct _opaque_pthread_cond_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_cond_t;

typedef struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct ? {
    id __prevOp;
    id NSOperation;
    id __nextOp;
    id NSOperation;
    id __nextPriOp;
    id NSOperation;
    NSInteger __queue;
    id NSOperationQueue;
    unk __dependencies;
    void NSMutableArray;
    void __down_dependencies;
    CGFloat NSHashTable;
    char * __unfinished_deps;
    id __completion;
    id __obsInfo;
    unk __implicitObsInfo;
    _opaque_pthread_mutex_t __thread_prio;
    _opaque_pthread_cond_t __nameBuffer;
    os_unfair_lock_s _voucher;
    BOOL NSObject<OS_voucher>;
    uint8_t __schedule;
    unsigned char __wait_mutex;
    char __wait_cond;
    uint8_t __lock;
    BOOL _shouldRemoveDependenciesAfterFinish;
    uint8_t __state;
    BOOL __prio;
    uint8_t __cached_isReady;
    unsigned char __isCancelled;
    uint8_t __propertyQoS;
    unsigned char __isExecutingObserverCount;
    uint8_t __isFinishedObserverCount;
    unsigned char __isReadyObserverCount;
    uint8_t __isCancelledObserverCount;
    unsigned char field34;
    uint8_t field35;
    unsigned char field36;
} ?;

typedef struct EmbedderOrchestrator {
} // Error Processing Struct Fields

typedef struct __compressed_pair<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> {
    EmbedderOrchestrator __value_;
} __compressed_pair<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>>;

typedef struct unique_ptr<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> {
    __compressed_pair<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> __ptr_;
} unique_ptr<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>>;

typedef struct __long {
    char * field0;
    NSUInteger field1;
    NSUInteger field2;
} __long;

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

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float field0;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float field0;
    float field1;
    __compressed_pair<float *, std::allocator<float>> field2;
} vector<float, std::allocator<float>>;

typedef struct EmbeddingTensor {
    vector<float, std::allocator<float>> field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field4;
} EmbeddingTensor;

typedef struct Token {
} // Error Processing Struct Fields

typedef struct vector<nlv4_inference_orchestrator::orchestration::Token, std::allocator<nlv4_inference_orchestrator::orchestration::Token>> {
} // Error Processing Struct Fields

typedef struct Tokenisation {
    basic_string<char, std::char_traits<char>, std::allocator<char>> field0;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field1;
    vector<nlv4_inference_orchestrator::orchestration::Token, std::allocator<nlv4_inference_orchestrator::orchestration::Token>> field2;
} Tokenisation;

typedef struct EmbedderResponse {
    EmbeddingTensor field0;
    Tokenisation field1;
} EmbedderResponse;

typedef struct EmbedderRequest {
    Tokenisation field0;
} EmbedderRequest;

typedef struct NLv4ParserRequest {
} // Error Processing Struct Fields

typedef struct __compressed_pair<sirinluinternalnlv4_parser::NLv4ParserRequest *, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> {
    NLv4ParserRequest field0;
} __compressed_pair<sirinluinternalnlv4_parser::NLv4ParserRequest *, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>>;

typedef struct unique_ptr<sirinluinternalnlv4_parser::NLv4ParserRequest, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> {
    __compressed_pair<sirinluinternalnlv4_parser::NLv4ParserRequest *, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>> field0;
} unique_ptr<sirinluinternalnlv4_parser::NLv4ParserRequest, std::default_delete<sirinluinternalnlv4_parser::NLv4ParserRequest>>;

typedef struct __compressed_pair<float (*)[193], std::default_delete<float [][193]>> {
    float __value_;
} __compressed_pair<float (*)[193], std::default_delete<float [][193]>>;

typedef struct unique_ptr<float [][193], std::default_delete<float [][193]>> {
    __compressed_pair<float (*)[193], std::default_delete<float [][193]>> __ptr_;
} unique_ptr<float [][193], std::default_delete<float [][193]>>;

typedef struct LoudsTrie {
} // Error Processing Struct Fields

typedef struct scoped_ptr<marisa::grimoire::trie::LoudsTrie> {
    LoudsTrie ptr_;
} scoped_ptr<marisa::grimoire::trie::LoudsTrie>;

typedef struct Trie {
    scoped_ptr<marisa::grimoire::trie::LoudsTrie> trie_;
} Trie;

typedef struct scoped_array<marisa::scoped_array<char>> {
    void array_;
} scoped_array<marisa::scoped_array<char>>;

typedef struct scoped_array<marisa::scoped_array<marisa::Key>> {
    void array_;
} scoped_array<marisa::scoped_array<marisa::Key>>;

typedef struct Keyset {
    scoped_array<marisa::scoped_array<char>> base_blocks_;
    NSUInteger base_blocks_size_;
    NSUInteger base_blocks_capacity_;
    scoped_array<marisa::scoped_array<char>> extra_blocks_;
    NSUInteger extra_blocks_size_;
    NSUInteger extra_blocks_capacity_;
    scoped_array<marisa::scoped_array<marisa::Key>> key_blocks_;
    NSUInteger key_blocks_size_;
    NSUInteger key_blocks_capacity_;
    char * ptr_;
    NSUInteger avail_;
    NSUInteger size_;
    NSUInteger total_length_;
} Keyset;

typedef struct __compressed_pair<marisa::Trie *, std::default_delete<marisa::Trie>> {
} // Error Processing Struct Fields

typedef struct unique_ptr<marisa::Trie, std::default_delete<marisa::Trie>> {
    __compressed_pair<marisa::Trie *, std::default_delete<marisa::Trie>> __ptr_;
} unique_ptr<marisa::Trie, std::default_delete<marisa::Trie>>;

typedef struct DefaultAnalyzerFactory {
} // Error Processing Struct Fields

typedef struct __compressed_pair<morphun::analysis::DefaultAnalyzerFactory *, std::default_delete<morphun::analysis::DefaultAnalyzerFactory>> {
    DefaultAnalyzerFactory __value_;
} __compressed_pair<morphun::analysis::DefaultAnalyzerFactory *, std::default_delete<morphun::analysis::DefaultAnalyzerFactory>>;

typedef struct unique_ptr<morphun::analysis::DefaultAnalyzerFactory, std::default_delete<morphun::analysis::DefaultAnalyzerFactory>> {
    __compressed_pair<morphun::analysis::DefaultAnalyzerFactory *, std::default_delete<morphun::analysis::DefaultAnalyzerFactory>> __ptr_;
} unique_ptr<morphun::analysis::DefaultAnalyzerFactory, std::default_delete<morphun::analysis::DefaultAnalyzerFactory>>;

typedef struct Tokenizer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<morphun::Tokenizer *, std::default_delete<morphun::Tokenizer>> {
    Tokenizer __value_;
} __compressed_pair<morphun::Tokenizer *, std::default_delete<morphun::Tokenizer>>;

typedef struct unique_ptr<morphun::Tokenizer, std::default_delete<morphun::Tokenizer>> {
    __compressed_pair<morphun::Tokenizer *, std::default_delete<morphun::Tokenizer>> __ptr_;
} unique_ptr<morphun::Tokenizer, std::default_delete<morphun::Tokenizer>>;

typedef struct ULocale {
} // Error Processing Struct Fields

typedef struct __compressed_pair<morphun::util::ULocale *, std::default_delete<morphun::util::ULocale>> {
    ULocale __value_;
} __compressed_pair<morphun::util::ULocale *, std::default_delete<morphun::util::ULocale>>;

typedef struct unique_ptr<morphun::util::ULocale, std::default_delete<morphun::util::ULocale>> {
    __compressed_pair<morphun::util::ULocale *, std::default_delete<morphun::util::ULocale>> __ptr_;
} unique_ptr<morphun::util::ULocale, std::default_delete<morphun::util::ULocale>>;

typedef struct UsoIdentifier {
} // Error Processing Struct Fields

typedef struct __compressed_pair<siri::ontology::UsoIdentifier *, std::default_delete<siri::ontology::UsoIdentifier>> {
    UsoIdentifier field0;
} __compressed_pair<siri::ontology::UsoIdentifier *, std::default_delete<siri::ontology::UsoIdentifier>>;

typedef struct unique_ptr<siri::ontology::UsoIdentifier, std::default_delete<siri::ontology::UsoIdentifier>> {
    __compressed_pair<siri::ontology::UsoIdentifier *, std::default_delete<siri::ontology::UsoIdentifier>> field0;
} unique_ptr<siri::ontology::UsoIdentifier, std::default_delete<siri::ontology::UsoIdentifier>>;

