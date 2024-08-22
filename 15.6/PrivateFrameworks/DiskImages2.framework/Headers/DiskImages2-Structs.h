typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct Backend {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<Backend> {
    Backend __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<Backend>;

typedef struct DiskImage {
    unk field0;
} DiskImage;

typedef struct __compressed_pair<DiskImage *, std::default_delete<DiskImage>> {
    DiskImage field0;
} __compressed_pair<DiskImage *, std::default_delete<DiskImage>>;

typedef struct unique_ptr<DiskImage, std::default_delete<DiskImage>> {
    __compressed_pair<DiskImage *, std::default_delete<DiskImage>> field0;
} unique_ptr<DiskImage, std::default_delete<DiskImage>>;

typedef struct shared_ptr<DiskImage> {
} // Error Processing Struct Fields

typedef struct header {
} // Error Processing Struct Fields

typedef struct __compressed_pair<udif::header *, std::default_delete<udif::header>> {
    header __value_;
} __compressed_pair<udif::header *, std::default_delete<udif::header>>;

typedef struct unique_ptr<udif::header, std::default_delete<udif::header>> {
    __compressed_pair<udif::header *, std::default_delete<udif::header>> __ptr_;
} unique_ptr<udif::header, std::default_delete<udif::header>>;

typedef struct __compressed_pair<crypto::header *, std::default_delete<crypto::header>> {
    header __value_;
} __compressed_pair<crypto::header *, std::default_delete<crypto::header>>;

typedef struct unique_ptr<crypto::header, std::default_delete<crypto::header>> {
    __compressed_pair<crypto::header *, std::default_delete<crypto::header>> __ptr_;
} unique_ptr<crypto::header, std::default_delete<crypto::header>>;

