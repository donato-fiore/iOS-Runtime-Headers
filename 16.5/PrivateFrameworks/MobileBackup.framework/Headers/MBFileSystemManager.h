// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MBFILESYSTEMMANAGER_H
#define MBFILESYSTEMMANAGER_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface MBFileSystemManager : NSObject {
    NSNumber *_shouldRestoreFilesSparse;
}


@property (readonly, nonatomic) NSString *currentSnapshotName; // ivar: _currentSnapshotName
@property (readonly, nonatomic) NSString *currentSnapshotPath; // ivar: _currentSnapshotPath
@property (retain, nonatomic) NSString *fileSystemType; // ivar: _fileSystemType
@property (readonly) NSString *mountPoint; // ivar: _mountPoint
@property (readonly) BOOL shouldRestoreFilesSparse;
@property (readonly, nonatomic) BOOL supportsLocalSnapshots; // ivar: _supportsLocalSnapshots
@property (readonly, nonatomic) BOOL supportsSparseFiles; // ivar: _supportsSparseFiles


+(BOOL)startFilesystemKeyRollingWithPath:(id)arg0 error:(*id)arg1 ;
+(BOOL)stopFilesystemKeyRollingWithPath:(id)arg0 error:(*id)arg1 ;
+(BOOL)unmountSnapshotFromMountPoint:(id)arg0 error:(*id)arg1 ;
+(NSUInteger)fileSystemCapacity;
+(NSUInteger)removeRestorePrefetchCacheAtPath:(id)arg0 ;
+(NSUInteger)removeRestorePrefetchCacheAtPath:(id)arg0 earliestDate:(id)arg1 ;
+(id)listAllSnapshotsAtPath:(id)arg0 error:(*id)arg1 ;
+(id)managerWithMountPoint:(id)arg0 ;
+(id)volumeMountPointForFile:(id)arg0 error:(*id)arg1 ;
+(id)volumeUUIDWithVolumeMountPoint:(id)arg0 error:(*id)arg1 ;
+(void)removeDeviceTransferDirectoryWithEarliestCreationDate:(id)arg0 ;
+(void)removeStaleCleanUpDirectory;
-(BOOL)_fileSystemSupportsSnapshots;
-(BOOL)_fileSystemSupportsSparseFiles;
-(BOOL)mountSnapshot:(id)arg0 atMountPoint:(id)arg1 withError:(*id)arg2 ;
-(BOOL)removeAllBackupSnapshots:(*id)arg0 ;
-(BOOL)removeAllBackupSnapshotsWithLatestCreationDate:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeSnapshot:(id)arg0 withError:(*id)arg1 ;
-(BOOL)snapshotFilesystemWithSnapshotID:(id)arg0 error:(*id)arg1 cancelationHandler:(id)arg2 ;
-(BOOL)snapshotFilesystemWithSnapshotName:(id)arg0 error:(*id)arg1 cancelationHandler:(id)arg2 ;
-(BOOL)unmountCurrentSnapshotAndRenameToInternalArchive:(*id)arg0 ;
-(BOOL)unmountCurrentSnapshotFromMountPoint:(id)arg0 andRemoveIt:(BOOL)arg1 withError:(*id)arg2 ;
-(id)_removeFileSystemSnapshotsWithBlock:(id)arg0 ;
-(id)_snapshotName:(id)arg0 ;
-(id)description;
-(id)initWithMountPoint:(id)arg0 ;
-(void)removeAllBackupInternalSnapshots;
-(void)removeAllBackupInternalSnapshotsCreatedBeforeDate:(id)arg0 ;
-(void)removeDriveBackupSnapshotsWithLatestCreationDate:(id)arg0 ;


@end


#endif