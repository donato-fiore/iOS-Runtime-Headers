typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct SNLPAssetLogger {
} // Error Processing Struct Fields

typedef struct __compressed_pair<snlp::common::asset_logger::SNLPAssetLogger *, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>> {
    SNLPAssetLogger __value_;
} __compressed_pair<snlp::common::asset_logger::SNLPAssetLogger *, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>>;

typedef struct unique_ptr<snlp::common::asset_logger::SNLPAssetLogger, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>> {
    __compressed_pair<snlp::common::asset_logger::SNLPAssetLogger *, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>> __ptr_;
} unique_ptr<snlp::common::asset_logger::SNLPAssetLogger, std::default_delete<snlp::common::asset_logger::SNLPAssetLogger>>;

typedef struct ITFMParserRequest {
} // Error Processing Struct Fields

typedef struct __compressed_pair<const sirinluinternalitfm::ITFMParserRequest *, std::default_delete<const sirinluinternalitfm::ITFMParserRequest>> {
    ITFMParserRequest field0;
} __compressed_pair<const sirinluinternalitfm::ITFMParserRequest *, std::default_delete<const sirinluinternalitfm::ITFMParserRequest>>;

typedef struct unique_ptr<const sirinluinternalitfm::ITFMParserRequest, std::default_delete<const sirinluinternalitfm::ITFMParserRequest>> {
    __compressed_pair<const sirinluinternalitfm::ITFMParserRequest *, std::default_delete<const sirinluinternalitfm::ITFMParserRequest>> field0;
} unique_ptr<const sirinluinternalitfm::ITFMParserRequest, std::default_delete<const sirinluinternalitfm::ITFMParserRequest>>;

typedef struct __compressed_pair<std::unique_ptr<sirinluinternalitfm::ITFMHypothesis> *, std::allocator<std::unique_ptr<sirinluinternalitfm::ITFMHypothesis>>> {
    void field0;
} __compressed_pair<std::unique_ptr<sirinluinternalitfm::ITFMHypothesis> *, std::allocator<std::unique_ptr<sirinluinternalitfm::ITFMHypothesis>>>;

typedef struct vector<std::unique_ptr<sirinluinternalitfm::ITFMHypothesis>, std::allocator<std::unique_ptr<sirinluinternalitfm::ITFMHypothesis>>> {
    void field0;
    void field1;
    __compressed_pair<std::unique_ptr<sirinluinternalitfm::ITFMHypothesis> *, std::allocator<std::unique_ptr<sirinluinternalitfm::ITFMHypothesis>>> field2;
} vector<std::unique_ptr<sirinluinternalitfm::ITFMHypothesis>, std::allocator<std::unique_ptr<sirinluinternalitfm::ITFMHypothesis>>>;

typedef struct PtrVector<sirinluinternalitfm::ITFMHypothesis> {
    vector<std::unique_ptr<sirinluinternalitfm::ITFMHypothesis>, std::allocator<std::unique_ptr<sirinluinternalitfm::ITFMHypothesis>>> field0;
} PtrVector<sirinluinternalitfm::ITFMHypothesis>;

typedef struct Parser {
} // Error Processing Struct Fields

typedef struct __compressed_pair<sirinluexternal::Parser *, std::default_delete<sirinluexternal::Parser>> {
    Parser field0;
} __compressed_pair<sirinluexternal::Parser *, std::default_delete<sirinluexternal::Parser>>;

typedef struct unique_ptr<sirinluexternal::Parser, std::default_delete<sirinluexternal::Parser>> {
    __compressed_pair<sirinluexternal::Parser *, std::default_delete<sirinluexternal::Parser>> field0;
} unique_ptr<sirinluexternal::Parser, std::default_delete<sirinluexternal::Parser>>;

typedef struct ? {
    BOOL field0;
    BOOL field1;
} ?;

typedef struct ITFMParserResponse {
    unk field0;
    PtrVector<sirinluinternalitfm::ITFMHypothesis> field1;
    unique_ptr<sirinluexternal::Parser, std::default_delete<sirinluexternal::Parser>> field2;
    float field3;
    BOOL field4;
    ? field5;
} ITFMParserResponse;

typedef struct ITFMOrchestrator {
} // Error Processing Struct Fields

typedef struct __compressed_pair<itfm_inference_orchestrator::orchestration::ITFMOrchestrator *, std::default_delete<itfm_inference_orchestrator::orchestration::ITFMOrchestrator>> {
    ITFMOrchestrator __value_;
} __compressed_pair<itfm_inference_orchestrator::orchestration::ITFMOrchestrator *, std::default_delete<itfm_inference_orchestrator::orchestration::ITFMOrchestrator>>;

typedef struct unique_ptr<itfm_inference_orchestrator::orchestration::ITFMOrchestrator, std::default_delete<itfm_inference_orchestrator::orchestration::ITFMOrchestrator>> {
    __compressed_pair<itfm_inference_orchestrator::orchestration::ITFMOrchestrator *, std::default_delete<itfm_inference_orchestrator::orchestration::ITFMOrchestrator>> __ptr_;
} unique_ptr<itfm_inference_orchestrator::orchestration::ITFMOrchestrator, std::default_delete<itfm_inference_orchestrator::orchestration::ITFMOrchestrator>>;

typedef struct _NSRange {
    NSUInteger location;
    NSUInteger length;
} _NSRange;

typedef struct __DDResult {
} // Error Processing Struct Fields

typedef struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
    NSUInteger __value_;
} __compressed_pair<unsigned long *, std::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    NSUInteger __begin_;
    NSUInteger __end_;
    __compressed_pair<unsigned long *, std::allocator<unsigned long>> __end_cap_;
} vector<unsigned long, std::allocator<unsigned long>>;

typedef struct __compressed_pair<float *, std::allocator<float>> {
    float __value_;
} __compressed_pair<float *, std::allocator<float>>;

typedef struct vector<float, std::allocator<float>> {
    float __begin_;
    float __end_;
    __compressed_pair<float *, std::allocator<float>> __end_cap_;
} vector<float, std::allocator<float>>;

typedef struct UPGenericTensor {
    vector<unsigned long, std::allocator<unsigned long>> shape;
    vector<float, std::allocator<float>> data;
} UPGenericTensor;

typedef struct UPInferenceResult {
    UPGenericTensor field0;
    UPGenericTensor field1;
    UPGenericTensor field2;
} UPInferenceResult;

typedef struct UsoGraph {
} // Error Processing Struct Fields

typedef struct UsoGraphNode {
    unk field0;
    UsoGraph field1;
    NSUInteger field2;
} UsoGraphNode;

typedef struct __compressed_pair<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>> *, std::allocator<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>>>> {
    void field0;
} __compressed_pair<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>> *, std::allocator<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>>>>;

typedef struct vector<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>>, std::allocator<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>>>> {
    void field0;
    void field1;
    __compressed_pair<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>> *, std::allocator<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>>>> field2;
} vector<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>>, std::allocator<std::pair<std::reference_wrapper<siri::ontology::UsoGraphNode>, std::reference_wrapper<const siri::ontology::UsoGraphEdge>>>>;

typedef struct UsoVocabManager {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<siri::ontology::UsoVocabManager> {
    UsoVocabManager __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<siri::ontology::UsoVocabManager>;

typedef struct Token {
} // Error Processing Struct Fields

typedef struct vector<nl_featurization::Token, std::allocator<nl_featurization::Token>> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<std::string *, std::default_delete<std::string>> {
    void field0;
} __compressed_pair<std::string *, std::default_delete<std::string>>;

typedef struct unique_ptr<std::string, std::default_delete<std::string>> {
    __compressed_pair<std::string *, std::default_delete<std::string>> field0;
} unique_ptr<std::string, std::default_delete<std::string>>;

typedef struct __compressed_pair<std::unique_ptr<sirinluinternal::SubwordToken> *, std::allocator<std::unique_ptr<sirinluinternal::SubwordToken>>> {
    void field0;
} __compressed_pair<std::unique_ptr<sirinluinternal::SubwordToken> *, std::allocator<std::unique_ptr<sirinluinternal::SubwordToken>>>;

typedef struct vector<std::unique_ptr<sirinluinternal::SubwordToken>, std::allocator<std::unique_ptr<sirinluinternal::SubwordToken>>> {
    void field0;
    void field1;
    __compressed_pair<std::unique_ptr<sirinluinternal::SubwordToken> *, std::allocator<std::unique_ptr<sirinluinternal::SubwordToken>>> field2;
} vector<std::unique_ptr<sirinluinternal::SubwordToken>, std::allocator<std::unique_ptr<sirinluinternal::SubwordToken>>>;

typedef struct PtrVector<sirinluinternal::SubwordToken> {
    vector<std::unique_ptr<sirinluinternal::SubwordToken>, std::allocator<std::unique_ptr<sirinluinternal::SubwordToken>>> field0;
} PtrVector<sirinluinternal::SubwordToken>;

typedef struct SubwordTokenChain {
    unk field0;
    unique_ptr<std::string, std::default_delete<std::string>> field1;
    PtrVector<sirinluinternal::SubwordToken> field2;
} SubwordTokenChain;

typedef struct EmbedderOrchestrator {
} // Error Processing Struct Fields

typedef struct __compressed_pair<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> {
    EmbedderOrchestrator __value_;
} __compressed_pair<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>>;

typedef struct unique_ptr<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> {
    __compressed_pair<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> __ptr_;
} unique_ptr<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>>;

typedef struct __long {
    unsigned short field0;
    NSUInteger field1;
    BOOL field2;
    BOOL field3;
} __long;

typedef struct __short {
    unsigned short field0;
    unsigned char field1;
    BOOL field2;
    BOOL field3;
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

typedef struct __compressed_pair<std::basic_string<char16_t>::__rep, std::allocator<char16_t>> {
    __rep field0;
} __compressed_pair<std::basic_string<char16_t>::__rep, std::allocator<char16_t>>;

typedef struct basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>> {
    __compressed_pair<std::basic_string<char16_t>::__rep, std::allocator<char16_t>> field0;
} basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>>;

typedef struct __CFArray {
} // Error Processing Struct Fields

typedef struct __DDScanner {
} // Error Processing Struct Fields

typedef struct UPDataDetector {
} // Error Processing Struct Fields

typedef struct EspressoModule {
    void field0;
    void field1;
    ? field2;
} EspressoModule;

typedef struct AbstractFeaturizer {
    unk field0;
} AbstractFeaturizer;

typedef struct MatchedSpan {
} // Error Processing Struct Fields

typedef struct vector<nl_featurization::span_matching::MatchedSpan, std::allocator<nl_featurization::span_matching::MatchedSpan>> {
} // Error Processing Struct Fields

typedef struct NLv4InferenceOrchestrator {
} // Error Processing Struct Fields

typedef struct __compressed_pair<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>> {
    NLv4InferenceOrchestrator __value_;
} __compressed_pair<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>>;

typedef struct unique_ptr<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>> {
    __compressed_pair<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>> __ptr_;
} unique_ptr<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::NLv4InferenceOrchestrator>>;

typedef struct SSUMatcher {
} // Error Processing Struct Fields

typedef struct __compressed_pair<snlp::ssu::matcher::SSUMatcher *, std::default_delete<snlp::ssu::matcher::SSUMatcher>> {
    SSUMatcher __value_;
} __compressed_pair<snlp::ssu::matcher::SSUMatcher *, std::default_delete<snlp::ssu::matcher::SSUMatcher>>;

typedef struct unique_ptr<snlp::ssu::matcher::SSUMatcher, std::default_delete<snlp::ssu::matcher::SSUMatcher>> {
    __compressed_pair<snlp::ssu::matcher::SSUMatcher *, std::default_delete<snlp::ssu::matcher::SSUMatcher>> __ptr_;
} unique_ptr<snlp::ssu::matcher::SSUMatcher, std::default_delete<snlp::ssu::matcher::SSUMatcher>>;

