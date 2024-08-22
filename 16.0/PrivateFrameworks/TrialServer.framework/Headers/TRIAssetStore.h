// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIASSETSTORE_H
#define TRIASSETSTORE_H

@protocol TRIPaths, TRIAssetExtracting, TRIAssetPatching, OS_xpc_object, TRIAssetStoreOperations;

#import <Foundation/Foundation.h>


@interface TRIAssetStore : NSObject {
    id<TRIPaths> *_paths;
    id<TRIAssetExtracting> *_extractor;
    id<TRIAssetPatching> *_patcher;
    NSObject<OS_xpc_object> *_monitoredActivity;
}


@property (retain, nonatomic) NSObject<TRIAssetStoreOperations> *assetOperator; // ivar: _assetOperator


+(id)shortHashForAssetIdentifier:(id)arg0 ;
-(BOOL)_acquireLockfileAndRunBlock:(id)arg0 ;
-(BOOL)_clearUnrefAgeForAssetWithIdentifier:(id)arg0 ;
-(BOOL)_forceRemoveItemAtPath:(id)arg0 ;
-(BOOL)_isDirectoryAtPath:(id)arg0 matchingAssetContentAtPath:(id)arg1 ;
-(BOOL)_isFileAtPath:(id)arg0 matchingAssetContentAtPath:(id)arg1 ;
-(BOOL)_linkDirectoryAssetWithIdentifier:(id)arg0 toCurrentPath:(id)arg1 futurePath:(id)arg2 flockWitness:(struct TRIFlockWitness_ *)arg3 ;
-(BOOL)_linkFileAssetWithIdentifier:(id)arg0 toCurrentPath:(id)arg1 futurePath:(id)arg2 flockWitness:(struct TRIFlockWitness_ *)arg3 ;
-(BOOL)_nonAtomicOverwriteWithSrc:(id)arg0 dest:(id)arg1 finalPermissionBits:(*unsigned short)arg2 ;
-(BOOL)_overwriteRenameAsAtomicallyAsPossibleWithSrc:(id)arg0 dest:(id)arg1 ;
-(BOOL)_saveFileAssetWithIdentifier:(id)arg0 assetFilename:(id)arg1 flockWitness:(struct TRIFlockWitness_ *)arg2 ;
-(BOOL)_saveFileAssetWithIdentifier:(id)arg0 assetFilename:(id)arg1 workingTempDirectory:(id)arg2 flockWitness:(struct TRIFlockWitness_ *)arg3 ;
-(BOOL)collectGarbageOlderThanNumScans:(unsigned int)arg0 deletedAssetSize:(*NSUInteger)arg1 ;
-(BOOL)collectGarbageOlderThanNumScans:(unsigned int)arg0 ignoreRecentlyCreatedAssets:(BOOL)arg1 deletedAssetSize:(*NSUInteger)arg2 deletedAssetIds:(*id)arg3 ;
-(BOOL)hasAssetWithIdentifier:(id)arg0 type:(*unsigned char)arg1 ;
-(BOOL)isValidTargetForSymlink:(id)arg0 assetIdentifier:(id)arg1 ;
-(BOOL)linkAssetWithIdentifier:(id)arg0 toCurrentPath:(id)arg1 futurePath:(id)arg2 ;
-(BOOL)linkAssetWithIdentifier:(id)arg0 toPath:(id)arg1 ;
-(BOOL)referenceMAAutoAssetWithId:(id)arg0 isFileFactor:(BOOL)arg1 usingCurrentPath:(id)arg2 futurePath:(id)arg3 ;
-(BOOL)removeAssetWithIdentifier:(id)arg0 ;
-(BOOL)saveAssetWithIdentifier:(id)arg0 assetData:(id)arg1 type:(unsigned char)arg2 ;
-(BOOL)saveAssetWithIdentifier:(id)arg0 builtFromAssetWithIdentifier:(id)arg1 patchFilename:(id)arg2 metadata:(id)arg3 error:(*id)arg4 ;
-(BOOL)setCreationDate:(id)arg0 forAssetIdentifier:(id)arg1 ;
-(NSUInteger)removableAssetsSizeOlderThanNumScans:(unsigned int)arg0 ignoreRecentlyCreatedAssets:(BOOL)arg1 linkTargetsToIgnoreByAssetId:(id)arg2 deleteableAssetIds:(*id)arg3 ;
-(NSUInteger)removableAssetsSizeOlderThanNumScans:(unsigned int)arg0 linkTargetsToIgnoreByAssetId:(id)arg1 ;
-(id)_createTempDir;
-(id)init;
-(id)initWithPaths:(id)arg0 ;
-(id)initWithPaths:(id)arg0 extractor:(id)arg1 patcher:(id)arg2 ;
-(id)initWithPaths:(id)arg0 extractor:(id)arg1 patcher:(id)arg2 monitoredActivity:(id)arg3 ;
-(id)initWithPaths:(id)arg0 monitoredActivity:(id)arg1 ;
-(id)pathForAssetContentWithIdentifier:(id)arg0 ;
-(id)pathForAssetDirWithIdentifier:(id)arg0 ;
-(id)pathForRefsToAssetWithIdentifier:(id)arg0 ;
-(struct ? )_saveDirectoryAssetWithIdentifier:(id)arg0 assetFilename:(id)arg1 metadata:(id)arg2 flockWitness:(struct TRIFlockWitness_ *)arg3 error:(*id)arg4 ;
-(struct ? )saveAssetWithIdentifier:(id)arg0 assetURL:(id)arg1 metadata:(id)arg2 error:(*id)arg3 ;
-(void)_fixupPermissionsOnPath:(id)arg0 permissionBits:(*unsigned short)arg1 ;
-(void)enumerateAssetDirsUsingBlock:(id)arg0 ;
-(void)enumerateSavedAssetsUsingBlock:(id)arg0 ;
-(void)fixFileProtectionForAssetStoreFiles;


@end


#endif