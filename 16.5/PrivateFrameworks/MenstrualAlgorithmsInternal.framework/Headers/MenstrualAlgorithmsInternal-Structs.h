typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<nlohmann::basic_json<>> {
    void __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<nlohmann::basic_json<>>;

typedef struct shared_ptr<std::ofstream> {
    void __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<std::ofstream>;

typedef struct __long {
    char * field0;
    NSUInteger field1;
    BOOL field2;
    BOOL field3;
} __long;

typedef struct __short {
    char field0;
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

typedef struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
    __rep field0;
} __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>;

typedef struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> field0;
} basic_string<char, std::char_traits<char>, std::allocator<char>>;

typedef struct MAIDayStreamProcessorOutput {
    id field0;
    id field1;
    id field2;
} MAIDayStreamProcessorOutput;

typedef struct MAIHistoricalAnalyzerOutput {
    id field0;
    id field1;
} MAIHistoricalAnalyzerOutput;

typedef struct ngt_HistoricalAnalyzer {
} // Error Processing Struct Fields

typedef struct __compressed_pair<Nightingale::ngt_HistoricalAnalyzer *, std::default_delete<Nightingale::ngt_HistoricalAnalyzer>> {
    ngt_HistoricalAnalyzer __value_;
} __compressed_pair<Nightingale::ngt_HistoricalAnalyzer *, std::default_delete<Nightingale::ngt_HistoricalAnalyzer>>;

typedef struct unique_ptr<Nightingale::ngt_HistoricalAnalyzer, std::default_delete<Nightingale::ngt_HistoricalAnalyzer>> {
    __compressed_pair<Nightingale::ngt_HistoricalAnalyzer *, std::default_delete<Nightingale::ngt_HistoricalAnalyzer>> __ptr_;
} unique_ptr<Nightingale::ngt_HistoricalAnalyzer, std::default_delete<Nightingale::ngt_HistoricalAnalyzer>>;

typedef struct optional<unsigned int> {
    unk ;
    char __null_state_;
    unsigned int __val_;
    BOOL __engaged_;
} optional<unsigned int>;

typedef struct PhaseCondenser {
} // Error Processing Struct Fields

typedef struct __compressed_pair<HealthAlgorithms::PhaseCondenser *, std::default_delete<HealthAlgorithms::PhaseCondenser>> {
    PhaseCondenser __value_;
} __compressed_pair<HealthAlgorithms::PhaseCondenser *, std::default_delete<HealthAlgorithms::PhaseCondenser>>;

typedef struct unique_ptr<HealthAlgorithms::PhaseCondenser, std::default_delete<HealthAlgorithms::PhaseCondenser>> {
    __compressed_pair<HealthAlgorithms::PhaseCondenser *, std::default_delete<HealthAlgorithms::PhaseCondenser>> __ptr_;
} unique_ptr<HealthAlgorithms::PhaseCondenser, std::default_delete<HealthAlgorithms::PhaseCondenser>>;

typedef struct ngt_DayStreamProcessor {
} // Error Processing Struct Fields

typedef struct __compressed_pair<Nightingale::ngt_DayStreamProcessor *, std::default_delete<Nightingale::ngt_DayStreamProcessor>> {
    ngt_DayStreamProcessor __value_;
} __compressed_pair<Nightingale::ngt_DayStreamProcessor *, std::default_delete<Nightingale::ngt_DayStreamProcessor>>;

typedef struct unique_ptr<Nightingale::ngt_DayStreamProcessor, std::default_delete<Nightingale::ngt_DayStreamProcessor>> {
    __compressed_pair<Nightingale::ngt_DayStreamProcessor *, std::default_delete<Nightingale::ngt_DayStreamProcessor>> __ptr_;
} unique_ptr<Nightingale::ngt_DayStreamProcessor, std::default_delete<Nightingale::ngt_DayStreamProcessor>>;

