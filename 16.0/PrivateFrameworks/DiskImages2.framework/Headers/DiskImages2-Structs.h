typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct __DASession {
} // Error Processing Struct Fields

typedef struct __DADisk {
} // Error Processing Struct Fields

typedef struct Backend {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<Backend> {
    Backend __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<Backend>;

typedef struct type {
    unsigned char field0;
} type;

typedef struct __value_func<void (char *)> {
    type field0;
    void field1;
} __value_func<void (char *)>;

typedef struct function<void (char *)> {
    __value_func<void (char *)> field0;
} function<void (char *)>;

typedef struct __compressed_pair<char *, std::function<void (char *)>> {
    char * field0;
    function<void (char *)> field1;
} __compressed_pair<char *, std::function<void (char *)>>;

typedef struct unique_ptr<char, std::function<void (char *)>> {
    __compressed_pair<char *, std::function<void (char *)>> field0;
} unique_ptr<char, std::function<void (char *)>>;

typedef struct DiskImage {
    unk field0;
} DiskImage;

typedef struct shared_ptr<DiskImage> {
} // Error Processing Struct Fields

typedef struct __compressed_pair<DiskImage *, std::default_delete<DiskImage>> {
} // Error Processing Struct Fields

typedef struct unique_ptr<DiskImage, std::default_delete<DiskImage>> {
    __compressed_pair<DiskImage *, std::default_delete<DiskImage>> field0;
} unique_ptr<DiskImage, std::default_delete<DiskImage>>;

typedef struct header {
} // Error Processing Struct Fields

typedef struct __compressed_pair<udif::header *, std::default_delete<udif::header>> {
    header __value_;
} __compressed_pair<udif::header *, std::default_delete<udif::header>>;

typedef struct unique_ptr<udif::header, std::default_delete<udif::header>> {
    __compressed_pair<udif::header *, std::default_delete<udif::header>> __ptr_;
} unique_ptr<udif::header, std::default_delete<udif::header>>;

typedef struct __compressed_pair<di_shadow::header *, std::default_delete<di_shadow::header>> {
    header __value_;
} __compressed_pair<di_shadow::header *, std::default_delete<di_shadow::header>>;

typedef struct unique_ptr<di_shadow::header, std::default_delete<di_shadow::header>> {
    __compressed_pair<di_shadow::header *, std::default_delete<di_shadow::header>> __ptr_;
} unique_ptr<di_shadow::header, std::default_delete<di_shadow::header>>;

typedef struct __compressed_pair<crypto::header *, std::default_delete<crypto::header>> {
    header __value_;
} __compressed_pair<crypto::header *, std::default_delete<crypto::header>>;

typedef struct unique_ptr<crypto::header, std::default_delete<crypto::header>> {
    __compressed_pair<crypto::header *, std::default_delete<crypto::header>> __ptr_;
} unique_ptr<crypto::header, std::default_delete<crypto::header>>;

typedef struct fsid {
    int field0;
} fsid;

typedef struct statfs {
    unsigned int field0;
    int field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    fsid field7;
    unsigned int field8;
    unsigned int field9;
    unsigned int field10;
    unsigned int field11;
    char field12;
    char field13;
    char field14;
    unsigned int field15;
    unsigned int field16;
} statfs;

