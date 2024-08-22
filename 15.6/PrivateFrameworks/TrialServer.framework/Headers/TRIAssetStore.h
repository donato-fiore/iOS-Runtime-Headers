// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIASSETSTORE_H
#define TRIASSETSTORE_H

@protocol TRIPaths, TRIAssetExtracting, TRIAssetPatching, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface TRIAssetStore : NSObject {
    id<TRIPaths> *_paths;
    id<TRIAssetExtracting> *_extractor;
    id<TRIAssetPatching> *_patcher;
    NSObject<OS_xpc_object> *_monitoredActivity;
}




+(NSUInteger)_fileSizeInBytesForPath:(id)arg0 ;
+(id)shortHashForAssetIdentifier:(id)arg0 ;
-(BOOL)_acquireLockfileAndRunBlock:(id)arg0 ;
-(BOOL)_addSymlinkFromAssetWithIdentifier:(id)arg0 toPath:(id)arg1 ;
-(BOOL)_clearUnrefAgeForAssetWithIdentifier:(id)arg0 ;
-(BOOL)_collectGarbageOlderThanNumScans:(unsigned int)arg0 deletedAssetSize:(*NSUInteger)arg1 ignoreRecentlyCreatedAssets:(BOOL)arg2 dryRun:(BOOL)arg3 linkTargetsToIgnoreByAssetId:(id)arg4 deletedAssetIds:(*id)arg5 ;
-(BOOL)_forceRemoveItemAtPath:(id)arg0 ;
-(BOOL)_incrementUnrefAgeForAssetWithIdentifier:(id)arg0 newValue:(*unsigned int)arg1 dryRun:(BOOL)arg2 ;
-(BOOL)_isDirectoryAtPath:(id)arg0 matchingAssetContentAtPath:(id)arg1 ;
-(BOOL)_isFileAtPath:(id)arg0 matchingAssetContentAtPath:(id)arg1 ;
-(BOOL)_isValidTargetForSymlink:(id)arg0 assetIdentifier:(id)arg1 ;
-(BOOL)_linkDirectoryAssetWithIdentifier:(id)arg0 toCurrentPath:(id)arg1 futurePath:(id)arg2 ;
-(BOOL)_linkFileAssetWithIdentifier:(id)arg0 toCurrentPath:(id)arg1 futurePath:(id)arg2 ;
-(BOOL)_moveDirectoryAssetFromDirectory:(id)arg0 toLocationForAssetIdentifier:(id)arg1 ;
-(BOOL)_nonAtomicOverwriteWithSrc:(id)arg0 dest:(id)arg1 finalPermissionBits:(*unsigned short)arg2 ;
-(BOOL)_overwriteRenameAsAtomicallyAsPossibleWithSrc:(id)arg0 dest:(id)arg1 ;
-(BOOL)_removeAssetWithIdentifier:(id)arg0 flockWitness:(struct TRIFlockWitness_ *)arg1 deletedAssetSize:(*NSUInteger)arg2 dryRun:(BOOL)arg3 ;
-(BOOL)_removeDeadSymlinksWithFlockWitness:(struct TRIFlockWitness_ *)arg0 numRemoved:(*unsigned int)arg1 ;
-(BOOL)_removePaths:(id)arg0 numRemoved:(*unsigned int)arg1 ;
-(BOOL)_removeUnreferencedAssetsWithFlockWitness:(struct TRIFlockWitness_ *)arg0 olderThanAge:(unsigned int)arg1 numRemoved:(*unsigned int)arg2 deletedAssetsSize:(*NSUInteger)arg3 ignoreRecentlyCreatedAssets:(BOOL)arg4 dryRun:(BOOL)arg5 linkTargetsToIgnoreByAssetId:(id)arg6 deletedAssetIds:(*id)arg7 ;
-(BOOL)_saveFileAssetWithIdentifier:(id)arg0 assetFilename:(id)arg1 ;
-(BOOL)_saveFileAssetWithIdentifier:(id)arg0 assetFilename:(id)arg1 workingTempDirectory:(id)arg2 ;
-(BOOL)collectGarbageOlderThanNumScans:(unsigned int)arg0 deletedAssetSize:(*NSUInteger)arg1 ;
-(BOOL)collectGarbageOlderThanNumScans:(unsigned int)arg0 ignoreRecentlyCreatedAssets:(BOOL)arg1 deletedAssetSize:(*NSUInteger)arg2 deletedAssetIds:(*id)arg3 ;
-(BOOL)hasAssetWithIdentifier:(id)arg0 type:(*unsigned char)arg1 ;
-(BOOL)linkAssetWithIdentifier:(id)arg0 toCurrentPath:(id)arg1 futurePath:(id)arg2 ;
-(BOOL)linkAssetWithIdentifier:(id)arg0 toPath:(id)arg1 ;
-(BOOL)removeAssetWithIdentifier:(id)arg0 ;
-(BOOL)saveAssetWithIdentifier:(id)arg0 assetData:(id)arg1 type:(unsigned char)arg2 ;
-(BOOL)saveAssetWithIdentifier:(id)arg0 builtFromAssetWithIdentifier:(id)arg1 patchFilename:(id)arg2 metadata:(id)arg3 error:(*id)arg4 ;
-(BOOL)setCreationDate:(id)arg0 forAssetIdentifier:(id)arg1 ;
-(NSUInteger)removableAssetsSizeOlderThanNumScans:(unsigned int)arg0 ignoreRecentlyCreatedAssets:(BOOL)arg1 linkTargetsToIgnoreByAssetId:(id)arg2 deleteableAssetIds:(*id)arg3 ;
-(NSUInteger)removableAssetsSizeOlderThanNumScans:(unsigned int)arg0 linkTargetsToIgnoreByAssetId:(id)arg1 ;
-(id)_collectDeadSymlinks;
-(id)_collectUnreferencedAssetsIgnoringLinkTargetsByAssetId:(id)arg0 ignoreRecentlyCreatedAssets:(BOOL)arg1 ;
-(id)_createTempDir;
-(id)_creationDateForAsset:(id)arg0 ;
-(id)_pathForAssetContentWithIdentifier:(id)arg0 ;
-(id)_pathForAssetDirWithIdentifier:(id)arg0 ;
-(id)_pathForRefsToAssetWithIdentifier:(id)arg0 ;
-(id)_requireAssetStoreTempDir;
-(id)init;
-(id)initWithPaths:(id)arg0 ;
-(id)initWithPaths:(id)arg0 extractor:(id)arg1 patcher:(id)arg2 ;
-(id)initWithPaths:(id)arg0 extractor:(id)arg1 patcher:(id)arg2 monitoredActivity:(id)arg3 ;
-(id)initWithPaths:(id)arg0 monitoredActivity:(id)arg1 ;
-(struct ? )_saveDirectoryAssetWithIdentifier:(id)arg0 assetFilename:(id)arg1 metadata:(id)arg2 error:(*id)arg3 ;
-(struct ? )saveAssetWithIdentifier:(id)arg0 assetURL:(id)arg1 metadata:(id)arg2 error:(*id)arg3 ;
-(unsigned short)_hardLinkCountForAssetWithIdentifier:(id)arg0 ;
-(unsigned short)_hardLinkCountForFileWithPath:(id)arg0 ;
-(void)_enumerateAssetDirsUsingBlock:(id)arg0 ;
-(void)_fixFileProtectionForFileURL:(id)arg0 ;
-(void)_fixupPermissionsOnPath:(id)arg0 permissionBits:(*unsigned short)arg1 ;
-(void)enumerateSavedAssetsUsingBlock:(id)arg0 ;
-(void)fixFileProtectionForAssetStoreFiles;


@end


#endif