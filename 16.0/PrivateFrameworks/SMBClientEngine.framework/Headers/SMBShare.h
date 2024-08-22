// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SMBSHARE_H
#define SMBSHARE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SMBShare : NSObject {
    _opaque_pthread_mutex_t statfs_lock;
}


@property NSUInteger avail_alloc_units; // ivar: _avail_alloc_units
@property unsigned int bytes_per_sector; // ivar: _bytes_per_sector
@property unsigned int file_system_attrs; // ivar: _file_system_attrs
@property (retain) NSString *file_system_name; // ivar: _file_system_name
@property unsigned int fs_block_size; // ivar: _fs_block_size
@property NSUInteger fs_blocks; // ivar: _fs_blocks
@property NSUInteger fs_blocks_avail; // ivar: _fs_blocks_avail
@property NSUInteger fs_blocks_free; // ivar: _fs_blocks_free
@property NSUInteger fs_files; // ivar: _fs_files
@property NSUInteger fs_files_free; // ivar: _fs_files_free
@property NSUInteger fs_iosize; // ivar: _fs_iosize
@property unsigned int fstype; // ivar: _fstype
@property unsigned int isEncrypted; // ivar: _isEncrypted
@property unsigned int max_component_name_len; // ivar: _max_component_name_len
@property unsigned int sectors_per_alloc_unit; // ivar: _sectors_per_alloc_unit
@property unsigned int share_capabilities; // ivar: _share_capabilities
@property unsigned int share_flags; // ivar: _share_flags
@property unsigned int share_max_access; // ivar: _share_max_access
@property unsigned int share_type; // ivar: _share_type
@property (retain) NSString *sharename; // ivar: _sharename
@property NSUInteger total_alloc_units; // ivar: _total_alloc_units
@property unsigned int tree_id; // ivar: _tree_id


-(id)init;
-(void)dealloc;
-(void)statfs_lock;
-(void)statfs_unlock;


@end


#endif