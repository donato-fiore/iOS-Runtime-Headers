typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct Database {
} // Error Processing Struct Fields

typedef struct vector<SafeBrowsing::DatabaseStatus::Database, std::allocator<SafeBrowsing::DatabaseStatus::Database>> {
} // Error Processing Struct Fields

typedef struct DatabaseStatus {
} // Error Processing Struct Fields

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

typedef struct __compressed_pair<std::string *, std::allocator<std::string>> {
    void __value_;
} __compressed_pair<std::string *, std::allocator<std::string>>;

typedef struct vector<std::string, std::allocator<std::string>> {
    void __begin_;
    void __end_;
    __compressed_pair<std::string *, std::allocator<std::string>> __end_cap_;
} vector<std::string, std::allocator<std::string>>;

typedef struct Connection {
} // Error Processing Struct Fields

typedef struct vector<SafeBrowsing::ServiceStatus::Connection, std::allocator<SafeBrowsing::ServiceStatus::Connection>> {
} // Error Processing Struct Fields

typedef struct DatabaseUpdaterStatus {
    int state;
    int provider;
} DatabaseUpdaterStatus;

typedef struct vector<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus, std::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> {
} // Error Processing Struct Fields

typedef struct ServiceStatus {
} // Error Processing Struct Fields

typedef struct LookupContext {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<SafeBrowsing::LookupContext> {
    LookupContext __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<SafeBrowsing::LookupContext>;

typedef struct OptionSet<Backend::LookupResult::Type> {
    unsigned int m_storage;
} OptionSet<Backend::LookupResult::Type>;

typedef struct LookupResult {
    OptionSet<Backend::LookupResult::Type> type;
    int provider;
} LookupResult;

