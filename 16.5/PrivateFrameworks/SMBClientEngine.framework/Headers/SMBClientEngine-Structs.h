typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct timespec {
    NSInteger tv_sec;
    NSInteger tv_nsec;
} timespec;

typedef struct smbfattr {
    NSUInteger fa_valid_mask;
    unsigned int fa_attr;
    NSUInteger fa_size;
    NSUInteger fa_data_alloc;
    timespec fa_atime;
    timespec fa_chtime;
    timespec fa_mtime;
    timespec fa_crtime;
    NSUInteger fa_ino;
    timespec fa_reqtime;
    int fa_vtype;
    NSUInteger fa_uid;
    NSUInteger fa_gid;
    NSUInteger fa_permissions;
    NSUInteger fa_nlinks;
    unsigned int fa_flags_mask;
    unsigned int fa_unix;
    unsigned int fa_reparse_tag;
    unsigned short fa_fstatus;
    unsigned int fa_created_disp;
    NSUInteger fa_rsrc_size;
    NSUInteger fa_rsrc_alloc;
    unsigned char fa_finder_info;
    unsigned int fa_max_access;
} smbfattr;

typedef struct smb_dir_enum_out {
    unsigned int field0;
    unsigned int field1;
} smb_dir_enum_out;

typedef struct piston_mbuf {
} // Error Processing Struct Fields

typedef struct mdchain {
} // Error Processing Struct Fields

typedef struct smb_query_dir {
    unsigned char fileInfoClass;
    unsigned char flags;
    unsigned int fileIndex;
    unsigned int fileNameFlags;
    unsigned int ntStatus;
} smb_query_dir;

typedef struct _opaque_pthread_mutex_t {
    NSInteger __sig;
    char __opaque;
} _opaque_pthread_mutex_t;

typedef struct smb_lease_break_ack {
    unsigned int field0;
    NSUInteger field1;
    NSUInteger field2;
    unsigned int field3;
    unsigned int field4;
    NSUInteger field5;
    NSUInteger field6;
    unsigned int field7;
} smb_lease_break_ack;

typedef struct sockaddr_storage {
    unsigned char field0;
    unsigned char field1;
    char field2;
    NSInteger field3;
    char field4;
} sockaddr_storage;

typedef struct gss_ctx_id_t_desc_struct {
} // Error Processing Struct Fields

typedef struct gss_cred_id_t_desc_struct {
} // Error Processing Struct Fields

typedef struct gss_buffer_desc_struct {
    NSUInteger field0;
    void field1;
} gss_buffer_desc_struct;

typedef struct _opaque_pthread_cond_t {
    NSInteger field0;
    char field1;
} _opaque_pthread_cond_t;

typedef struct smb_session {
} // Error Processing Struct Fields

typedef struct smb_valid_neg {
    unsigned int field0;
    unsigned short field1;
    unsigned short field2;
    unsigned short field3;
    unsigned char field4;
    unsigned int field5;
    unsigned short field6;
    unsigned short field7;
    unsigned short field8;
    unsigned char field9;
} smb_valid_neg;

typedef struct smb_ioctl {
    unsigned int field0;
    unsigned int field1;
    unsigned short field2;
    unsigned int field3;
    smb_valid_neg field4;
} smb_ioctl;

typedef struct smb_login_out {
    unsigned int field0;
    NSUInteger field1;
    unsigned int field2;
    unsigned short field3;
    NSUInteger field4;
    NSUInteger field5;
} smb_login_out;

typedef struct smb_negotiate {
    unsigned int field0;
    unsigned short field1;
    unsigned short field2;
    unsigned short field3;
    unsigned short field4;
    unsigned char field5;
    unsigned int field6;
    unsigned int field7;
    unsigned int field8;
    unsigned int field9;
    unsigned int field10;
} smb_negotiate;

typedef struct smb_query_share {
    unsigned int field0;
    NSUInteger field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    NSUInteger field6;
    NSUInteger field7;
    NSUInteger field8;
    NSUInteger field9;
    NSUInteger field10;
    NSUInteger field11;
    NSUInteger field12;
} smb_query_share;

typedef struct ? {
    NSUInteger fid_persistent;
    NSUInteger fid_volatile;
} ?;

typedef struct smb_resolve_id {
    NSUInteger field0;
    unsigned int field1;
} smb_resolve_id;

typedef struct smb_dur_handle {
    NSUInteger field0;
    NSUInteger field1;
    unsigned int field2;
    NSUInteger field3;
    NSUInteger field4;
    unsigned short field5;
    unsigned int field6;
    unsigned char field7;
    ? field8;
    NSUInteger field9;
    unsigned int field10;
    unsigned int field11;
} smb_dur_handle;

typedef struct smb_create {
    NSUInteger field0;
    unsigned char field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
    unsigned int field6;
    unsigned int field7;
    void field8;
    unsigned int field9;
    unsigned int field10;
    unsigned char field11;
    unsigned char field12;
    unsigned int field13;
    NSUInteger field14;
    NSUInteger field15;
    NSUInteger field16;
    NSUInteger field17;
    NSUInteger field18;
    NSUInteger field19;
    unsigned int field20;
    unsigned int field21;
    ? field22;
    smb_resolve_id field23;
    smb_dur_handle field24;
} smb_create;

typedef struct smb_server_copy_file {
    unsigned int field0;
} smb_server_copy_file;

typedef struct smb_tree_connect_disc {
    unsigned int field0;
    unsigned char field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
} smb_tree_connect_disc;

typedef struct smb_read_write {
    NSUInteger field0;
    char * field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    unsigned int field5;
} smb_read_write;

typedef struct smb_flush {
    unsigned int field0;
    unsigned int field1;
} smb_flush;

typedef struct smb_change_notify {
    unsigned int field0;
} smb_change_notify;

typedef struct smb_close {
    unsigned int field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    NSUInteger field4;
    NSUInteger field5;
    NSUInteger field6;
    unsigned int field7;
} smb_close;

typedef struct FILE_FS_ATTRIBUTE_INFORMATION {
    unsigned int field0;
    unsigned int field1;
    unsigned int field2;
    unsigned int field3;
    unsigned char field4;
} FILE_FS_ATTRIBUTE_INFORMATION;

typedef struct FILE_FS_SIZE_INFORMATION {
    NSUInteger field0;
    NSUInteger field1;
    unsigned int field2;
    unsigned int field3;
} FILE_FS_SIZE_INFORMATION;

typedef struct FILE_STREAM_INFORMATION {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    unsigned int field3;
    unsigned int field4;
    NSUInteger field5;
    NSUInteger field6;
} FILE_STREAM_INFORMATION;

typedef struct smb_query_info {
    unsigned char field0;
    unsigned char field1;
    unsigned int field2;
    unsigned int field3;
    unsigned int field4;
    FILE_FS_ATTRIBUTE_INFORMATION field5;
    FILE_FS_SIZE_INFORMATION field6;
    FILE_STREAM_INFORMATION field7;
    NSUInteger field8;
} smb_query_info;

typedef struct smb2_file_basic_info {
    NSUInteger field0;
    NSUInteger field1;
    NSUInteger field2;
    NSUInteger field3;
    unsigned int field4;
    unsigned int field5;
} smb2_file_basic_info;

typedef struct smb_setinfo {
    unsigned int field0;
    unsigned char field1;
    unsigned char field2;
    unsigned int field3;
    ? field4;
    NSUInteger field5;
    smb2_file_basic_info field6;
    unsigned int field7;
    unsigned int field8;
} smb_setinfo;

typedef struct smb_lock {
    unsigned int field0;
    NSUInteger field1;
    NSUInteger field2;
    unsigned int field3;
} smb_lock;

typedef struct smb_lease_break {
    unsigned short newEpoch;
    unsigned int flags;
    NSUInteger leaseKeyHigh;
    NSUInteger leaseKeyLow;
    unsigned int currLeaseState;
    unsigned int newLeaseState;
} smb_lease_break;

typedef struct mbchain {
} // Error Processing Struct Fields

typedef struct smb_rq {
} // Error Processing Struct Fields

typedef struct sockaddr {
    unsigned char field0;
    unsigned char field1;
    char field2;
} sockaddr;

