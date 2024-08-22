// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIASSETSTOREOPERATOR_H
#define TRIASSETSTOREOPERATOR_H

@protocol TRIAssetStoreOperations, TRIPaths, TRIStorageManagementProtocol;

#import <Foundation/Foundation.h>

#import "TRIAssetStore.h"

@interface TRIAssetStoreOperator : NSObject <TRIAssetStoreOperations>

 {
    id<TRIPaths> *_paths;
    id<TRIStorageManagementProtocol> *_storageManagement;
    TRIAssetStore *_store;
}




+(NSUInteger)_fileSizeInBytesForPath:(id)arg0 ;
-(BOOL)_acquireLockfileAndRunBlock:(id)arg0 ;
-(BOOL)_clearUnrefAgeForAssetWithIdentifier:(id)arg0 ;
-(BOOL)_fixFileProtectionForFileURL:(id)arg0 ;
-(BOOL)_forceRemoveItemAtPath:(id)arg0 ;
-(BOOL)_incrementUnrefAgeForAssetWithIdentifier:(id)arg0 newValue:(*unsigned int)arg1 dryRun:(BOOL)arg2 ;
-(BOOL)_moveDirectoryAssetFromDirectory:(id)arg0 toLocationForAssetIdentifier:(id)arg1 ;
-(BOOL)_nonAtomicOverwriteWithSrc:(id)arg0 dest:(id)arg1 finalPermissionBits:(*unsigned short)arg2 ;
-(BOOL)_overwriteRenameAsAtomicallyAsPossibleWithSrc:(id)arg0 dest:(id)arg1 ;
-(BOOL)_removeAssetWithIdentifier:(id)arg0 flockWitness:(struct TRIFlockWitness_ *)arg1 deletedAssetSize:(*NSUInteger)arg2 dryRun:(BOOL)arg3 ;
-(BOOL)_removeDeadSymlinksWithFlockWitness:(struct TRIFlockWitness_ *)arg0 numRemoved:(*unsigned int)arg1 ;
-(BOOL)_removePaths:(id)arg0 numRemoved:(*unsigned int)arg1 ;
-(BOOL)_removeUnreferencedAssetsWithFlockWitness:(struct TRIFlockWitness_ *)arg0 olderThanAge:(unsigned int)arg1 numRemoved:(*unsigned int)arg2 deletedAssetsSize:(*NSUInteger)arg3 ignoreRecentlyCreatedAssets:(BOOL)arg4 dryRun:(BOOL)arg5 linkTargetsToIgnoreByAssetId:(id)arg6 deletedAssetIds:(*id)arg7 ;
-(BOOL)addSymlinkFromAssetWithIdentifier:(id)arg0 toPath:(id)arg1 flockWitness:(struct TRIFlockWitness_ *)arg2 ;
-(BOOL)collectGarbageOlderThanNumScans:(unsigned int)arg0 deletedAssetSize:(*NSUInteger)arg1 ignoreRecentlyCreatedAssets:(BOOL)arg2 dryRun:(BOOL)arg3 linkTargetsToIgnoreByAssetId:(id)arg4 deletedAssetIds:(*id)arg5 ;
-(BOOL)fixFileProtectionForAssetStoreFiles;
-(BOOL)referenceMAAutoAssetWithId:(id)arg0 futurePath:(id)arg1 currentPath:(id)arg2 isFileFactor:(BOOL)arg3 ;
-(BOOL)removeAssetWithIdentifier:(id)arg0 ;
-(BOOL)saveAssetWithIdentifier:(id)arg0 sourcePath:(id)arg1 flockWitness:(struct TRIFlockWitness_ *)arg2 removeSourceOnFailure:(BOOL)arg3 ;
-(id)_collectDeadSymlinks;
-(id)_collectUnreferencedAssetsIgnoringLinkTargetsByAssetId:(id)arg0 ignoreRecentlyCreatedAssets:(BOOL)arg1 ;
-(id)_creationDateForAsset:(id)arg0 ;
-(id)initWithPaths:(id)arg0 storageManagement:(id)arg1 assetStore:(id)arg2 ;
-(id)requireAssetStoreTempDir;
-(unsigned short)_hardLinkCountForAssetWithIdentifier:(id)arg0 ;
-(unsigned short)_hardLinkCountForFileWithPath:(id)arg0 ;
-(void)_fixupPermissionsOnPath:(id)arg0 permissionBits:(*unsigned short)arg1 ;


@end


#endif