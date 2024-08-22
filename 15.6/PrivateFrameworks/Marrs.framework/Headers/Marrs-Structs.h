typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __long {
    char * field0;
    NSUInteger field1;
    NSUInteger field2;
} __long;

typedef struct ? {
    unsigned char field0;
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

typedef struct __compressed_pair<std::string *, std::allocator<std::string>> {
    void field0;
} __compressed_pair<std::string *, std::allocator<std::string>>;

typedef struct vector<std::string, std::allocator<std::string>> {
    void field0;
    void field1;
    __compressed_pair<std::string *, std::allocator<std::string>> field2;
} vector<std::string, std::allocator<std::string>>;

typedef struct QRToken {
    basic_string<char, std::char_traits<char>, std::allocator<char>> field0;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field1;
    vector<std::string, std::allocator<std::string>> field2;
    BOOL field3;
    BOOL field4;
    NSUInteger field5;
    NSUInteger field6;
    CGFloat field7;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field8;
    BOOL field9;
} QRToken;

typedef struct Uuid {
    NSUInteger field0;
    NSUInteger field1;
} Uuid;

typedef struct vector<marrs::qr::orchestration::QRToken, std::allocator<marrs::qr::orchestration::QRToken>> {
} // Error Processing Struct Fields

typedef struct QRUtterance {
} // Error Processing Struct Fields

typedef struct vector<marrs::qr::orchestration::QRUtterance, std::allocator<marrs::qr::orchestration::QRUtterance>> {
} // Error Processing Struct Fields

typedef struct QRInteraction {
} // Error Processing Struct Fields

typedef struct QRHypothesis {
    Uuid field0;
    basic_string<char, std::char_traits<char>, std::allocator<char>> field1;
    CGFloat field2;
    int field3;
} QRHypothesis;

typedef struct QRRequest {
    int field0;
    vector<marrs::qr::orchestration::QRInteraction, std::allocator<marrs::qr::orchestration::QRInteraction>> field1;
} QRRequest;

typedef struct __compressed_pair<marrs::qr::orchestration::QRRequest *, std::default_delete<marrs::qr::orchestration::QRRequest>> {
    QRRequest field0;
} __compressed_pair<marrs::qr::orchestration::QRRequest *, std::default_delete<marrs::qr::orchestration::QRRequest>>;

typedef struct unique_ptr<marrs::qr::orchestration::QRRequest, std::default_delete<marrs::qr::orchestration::QRRequest>> {
    __compressed_pair<marrs::qr::orchestration::QRRequest *, std::default_delete<marrs::qr::orchestration::QRRequest>> field0;
} unique_ptr<marrs::qr::orchestration::QRRequest, std::default_delete<marrs::qr::orchestration::QRRequest>>;

typedef struct vector<marrs::qr::orchestration::QRInteraction, std::allocator<marrs::qr::orchestration::QRInteraction>> {
} // Error Processing Struct Fields

typedef struct exception_ptr {
    void field0;
} exception_ptr;

typedef struct MRRMentionDetectorInterface {
} // Error Processing Struct Fields

typedef struct __compressed_pair<marrs::mrr::md::MRRMentionDetectorInterface *, std::default_delete<marrs::mrr::md::MRRMentionDetectorInterface>> {
    MRRMentionDetectorInterface __value_;
} __compressed_pair<marrs::mrr::md::MRRMentionDetectorInterface *, std::default_delete<marrs::mrr::md::MRRMentionDetectorInterface>>;

typedef struct unique_ptr<marrs::mrr::md::MRRMentionDetectorInterface, std::default_delete<marrs::mrr::md::MRRMentionDetectorInterface>> {
    __compressed_pair<marrs::mrr::md::MRRMentionDetectorInterface *, std::default_delete<marrs::mrr::md::MRRMentionDetectorInterface>> __ptr_;
} unique_ptr<marrs::mrr::md::MRRMentionDetectorInterface, std::default_delete<marrs::mrr::md::MRRMentionDetectorInterface>>;

typedef struct MROrchestrator {
} // Error Processing Struct Fields

typedef struct __compressed_pair<marrs::mrr::mr::MROrchestrator *, std::default_delete<marrs::mrr::mr::MROrchestrator>> {
    MROrchestrator __value_;
} __compressed_pair<marrs::mrr::mr::MROrchestrator *, std::default_delete<marrs::mrr::mr::MROrchestrator>>;

typedef struct unique_ptr<marrs::mrr::mr::MROrchestrator, std::default_delete<marrs::mrr::mr::MROrchestrator>> {
    __compressed_pair<marrs::mrr::mr::MROrchestrator *, std::default_delete<marrs::mrr::mr::MROrchestrator>> __ptr_;
} unique_ptr<marrs::mrr::mr::MROrchestrator, std::default_delete<marrs::mrr::mr::MROrchestrator>>;

typedef struct QRPredictor {
} // Error Processing Struct Fields

typedef struct __compressed_pair<marrs::qr::orchestration::QRPredictor *, std::default_delete<marrs::qr::orchestration::QRPredictor>> {
    QRPredictor __value_;
} __compressed_pair<marrs::qr::orchestration::QRPredictor *, std::default_delete<marrs::qr::orchestration::QRPredictor>>;

typedef struct unique_ptr<marrs::qr::orchestration::QRPredictor, std::default_delete<marrs::qr::orchestration::QRPredictor>> {
    __compressed_pair<marrs::qr::orchestration::QRPredictor *, std::default_delete<marrs::qr::orchestration::QRPredictor>> __ptr_;
} unique_ptr<marrs::qr::orchestration::QRPredictor, std::default_delete<marrs::qr::orchestration::QRPredictor>>;

typedef struct vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> {
} // Error Processing Struct Fields

typedef struct QRResponse {
    vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> field0;
    int field1;
    CGFloat field2;
    CGFloat field3;
    CGFloat field4;
    int field5;
} QRResponse;

typedef struct MentionDetectorRequest {
} // Error Processing Struct Fields

typedef struct __compressed_pair<sirinluinternalmention_detector::MentionDetectorRequest *, std::default_delete<sirinluinternalmention_detector::MentionDetectorRequest>> {
    MentionDetectorRequest field0;
} __compressed_pair<sirinluinternalmention_detector::MentionDetectorRequest *, std::default_delete<sirinluinternalmention_detector::MentionDetectorRequest>>;

typedef struct unique_ptr<sirinluinternalmention_detector::MentionDetectorRequest, std::default_delete<sirinluinternalmention_detector::MentionDetectorRequest>> {
    __compressed_pair<sirinluinternalmention_detector::MentionDetectorRequest *, std::default_delete<sirinluinternalmention_detector::MentionDetectorRequest>> field0;
} unique_ptr<sirinluinternalmention_detector::MentionDetectorRequest, std::default_delete<sirinluinternalmention_detector::MentionDetectorRequest>>;

typedef struct MentionResolverRequest {
} // Error Processing Struct Fields

typedef struct __compressed_pair<sirinluinternalmention_resolver::MentionResolverRequest *, std::default_delete<sirinluinternalmention_resolver::MentionResolverRequest>> {
    MentionResolverRequest field0;
} __compressed_pair<sirinluinternalmention_resolver::MentionResolverRequest *, std::default_delete<sirinluinternalmention_resolver::MentionResolverRequest>>;

typedef struct unique_ptr<sirinluinternalmention_resolver::MentionResolverRequest, std::default_delete<sirinluinternalmention_resolver::MentionResolverRequest>> {
    __compressed_pair<sirinluinternalmention_resolver::MentionResolverRequest *, std::default_delete<sirinluinternalmention_resolver::MentionResolverRequest>> field0;
} unique_ptr<sirinluinternalmention_resolver::MentionResolverRequest, std::default_delete<sirinluinternalmention_resolver::MentionResolverRequest>>;

typedef struct Reader {
    char * field0;
    NSUInteger field1;
    NSUInteger field2;
    BOOL field3;
} Reader;

