// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIASSETSTORE_H
#define TRIASSETSTORE_H

@protocol TRIPaths, TRIAssetExtracting, TRIAssetPatching;

#import <Foundation/Foundation.h>


@interface TRIAssetStore : NSObject {
    id<TRIPaths> *_paths;
    id<TRIAssetExtracting> *_extractor;
    id<TRIAssetPatching> *_patcher;
}




+(NSUInteger)_fileSizeInBytesForPath:(id)arg0 ;
+(id)shortHashForAssetIdentifier:(id)arg0 ;
-(BOOL)_acquireLockfileAndRunBlock:(id)arg0 ;
-(BOOL)_addSymlinkFromAssetWithIdentifier:(id)arg0 toPath:(id)arg1 ;
-(BOOL)_clearUnrefAgeForAssetWithIdentifier:(id)arg0 ;
-(BOOL)_collectGarbageOlderThanNumScans:(unsigned int)arg0 deletedAssetSize:(*NSUInteger)arg1 dryRun:(BOOL)arg2 linkTargetsToIgnoreByAssetId:(id)arg3 deletedAssetIds:(*id)arg4 ;
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
-(BOOL)_removeUnreferencedAssetsWithFlockWitness:(struct TRIFlockWitness_ *)arg0 olderThanAge:(unsigned int)arg1 numRemoved:(*unsigned int)arg2 deletedAssetsSize:(*NSUInteger)arg3 dryRun:(BOOL)arg4 linkTargetsToIgnoreByAssetId:(id)arg5 deletedAssetIds:(*id)arg6 ;
-(BOOL)_saveDirectoryAssetWithIdentifier:(id)arg0 assetFilename:(id)arg1 metadata:(id)arg2 error:(*id)arg3 ;
-(BOOL)_saveFileAssetWithIdentifier:(id)arg0 assetFilename:(id)arg1 ;
-(BOOL)_saveFileAssetWithIdentifier:(id)arg0 assetFilename:(id)arg1 workingTempDirectory:(id)arg2 ;
-(BOOL)collectGarbageOlderThanNumScans:(unsigned int)arg0 deletedAssetSize:(*NSUInteger)arg1 ;
-(BOOL)collectGarbageOlderThanNumScans:(unsigned int)arg0 deletedAssetSize:(*NSUInteger)arg1 deletedAssetIds:(*id)arg2 ;
-(BOOL)hasAssetWithIdentifier:(id)arg0 type:(*unsigned char)arg1 ;
-(BOOL)linkAssetWithIdentifier:(id)arg0 toCurrentPath:(id)arg1 futurePath:(id)arg2 ;
-(BOOL)linkAssetWithIdentifier:(id)arg0 toPath:(id)arg1 ;
-(BOOL)removeAssetWithIdentifier:(id)arg0 ;
-(BOOL)saveAssetWithIdentifier:(id)arg0 assetData:(id)arg1 type:(unsigned char)arg2 ;
-(BOOL)saveAssetWithIdentifier:(id)arg0 assetURL:(id)arg1 metadata:(id)arg2 error:(*id)arg3 ;
-(BOOL)saveAssetWithIdentifier:(id)arg0 builtFromAssetWithIdentifier:(id)arg1 patchFilename:(id)arg2 metadata:(id)arg3 ;
-(NSUInteger)removableAssetsSizeOlderThanNumScans:(unsigned int)arg0 linkTargetsToIgnoreByAssetId:(id)arg1 ;
-(NSUInteger)removableAssetsSizeOlderThanNumScans:(unsigned int)arg0 linkTargetsToIgnoreByAssetId:(id)arg1 deleteableAssetIds:(*id)arg2 ;
-(id)_collectDeadSymlinks;
-(id)_collectUnreferencedAssetsIgnoringlinkTargetsByAssetId:(id)arg0 dryRun:(BOOL)arg1 ;
-(id)_createTempDir;
-(id)_pathForAssetContentWithIdentifier:(id)arg0 ;
-(id)_pathForAssetDirWithIdentifier:(id)arg0 ;
-(id)_pathForRefsToAssetWithIdentifier:(id)arg0 ;
-(id)_requireAssetStoreTempDir;
-(id)init;
-(id)initWithPaths:(id)arg0 ;
-(id)initWithPaths:(id)arg0 extractor:(id)arg1 patcher:(id)arg2 ;
-(unsigned short)_hardLinkCountForAssetWithIdentifier:(id)arg0 ;
-(unsigned short)_hardLinkCountForFileWithPath:(id)arg0 ;
-(void)_enumerateAssetDirsUsingBlock:(id)arg0 ;
-(void)_fixFileProtectionForFileURL:(id)arg0 ;
-(void)_fixupPermissionsOnPath:(id)arg0 permissionBits:(*unsigned short)arg1 ;
-(void)enumerateSavedAssetsUsingBlock:(id)arg0 ;
-(void)fixFileProtectionForAssetStoreFiles;


@end


#endif