typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct _NSRange {
    NSUInteger field0;
    NSUInteger field1;
} _NSRange;

typedef struct CGSize {
    CGFloat field0;
    CGFloat field1;
} CGSize;

typedef struct NSFileProviderTypeAndCreator {
    unsigned int field0;
    unsigned int field1;
} NSFileProviderTypeAndCreator;

typedef struct timespec {
    NSInteger tv_sec;
    NSInteger tv_nsec;
} timespec;

typedef struct _LIFileAttributes {
    NSUInteger __fa_rsvd0;
    NSUInteger fa_validmask;
    NSUInteger fa_seqno;
    unsigned int fa_type;
    unsigned int fa_mode;
    unsigned int fa_nlink;
    unsigned int fa_uid;
    unsigned int fa_gid;
    unsigned int fa_bsd_flags;
    NSUInteger fa_size;
    NSUInteger fa_allocsize;
    NSUInteger fa_fileid;
    NSUInteger fa_parentid;
    timespec fa_atime;
    timespec fa_mtime;
    timespec fa_ctime;
    timespec fa_birthtime;
    timespec fa_backuptime;
    timespec fa_addedtime;
    unsigned int fa_int_flags;
    unsigned int _pad0;
} _LIFileAttributes;

