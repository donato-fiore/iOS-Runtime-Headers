// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLMANAGEDASSETRECOVERYMANAGER_H
#define PLMANAGEDASSETRECOVERYMANAGER_H

@class PLVolumeInfo, NSMutableArray, PLLazyObject;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLLibraryServicesManager.h"

@interface PLManagedAssetRecoveryManager : NSObject {
    PLVolumeInfo *_volumeInfo;
    NSUInteger _fixedCount;
    NSUInteger _totalCount;
    NSUInteger _totalDownloadedResourceBytes;
    NSUInteger _resourceDownloadBytesLimit;
    NSMutableArray *_recoveryErrors;
    PLLibraryServicesManager *_lsm;
    PLLazyObject *_imageClient;
    PLLazyObject *_videoClient;
}


@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)_assetsWithJPGFilenameAndRawPrimaryImageResourcePredicate;
+(id)_imagesWithZeroWidthHeightPredicate;
+(id)_irisesWithZeroVideoCpDuration;
+(id)_predicateForAdjustedAssetsFailedDeferredRendering;
+(id)_predicateForAdjustedAssetsWithMissingResources;
-(BOOL)_fixIrisWithZeroVideoComplementDuration:(id)arg0 usingExistingVideoComplementAtPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)_fixRawUTIForAsset:(id)arg0 error:(*id)arg1 ;
-(id)_loadObjectWithObjectID:(id)arg0 managedObjectContext:(id)arg1 ;
-(id)_recoveryStatesToProcessForAttributes:(id)arg0 ;
-(id)initWithLibraryServicesManager:(id)arg0 ;
-(void)_downloadResources:(id)arg0 forAsset:(id)arg1 usingCloudPhotoLibraryManager:(id)arg2 completionHandler:(id)arg3 ;
-(void)_fixDimensionsForAsset:(id)arg0 cloudPhotoLibraryManager:(id)arg1 completionBlock:(id)arg2 ;
-(void)_fixIrisWithZeroVideoComplementDuration:(id)arg0 cloudPhotoLibraryManager:(id)arg1 completionBlock:(id)arg2 ;
-(void)_fixMissingFullSizeAdjustedResources:(id)arg0 cloudPhotoLibraryManager:(id)arg1 recoveryState:(NSUInteger)arg2 usingSyncableLibrary:(id)arg3 completionBlock:(id)arg4 ;
-(void)_fixOriginalAssetDimensionsForAsset:(id)arg0 cloudPhotoLibraryManager:(id)arg1 completionBlock:(id)arg2 ;
-(void)_generateMissingFullSizeAdjustedResourcesForAsset:(id)arg0 recipesToGenerate:(id)arg1 cloudPhotoLibraryManager:(id)arg2 recoveryState:(NSUInteger)arg3 usingSyncableLibrary:(id)arg4 completionBlock:(id)arg5 ;
-(void)_performAssetRecoveryTaskForInconsistentState:(id)arg0 state:(NSUInteger)arg1 cloudPhotoLibraryManager:(id)arg2 usingSyncableLibrary:(id)arg3 completionBlock:(id)arg4 ;
// -(void)_performTransactionOnLibrary:(id)arg0 withObjectID:(id)arg1 usingBlock:(id)arg2 completionBlock:(unk)arg3  ;
-(void)_recoverNextAssetWithEnumerator:(id)arg0 cloudPhotoLibraryManager:(id)arg1 transaction:(id)arg2 usingNonSyncableLibrary:(id)arg3 andSyncableLibrary:(id)arg4 ;
-(void)_recoverNextRecoveryState:(id)arg0 forAsset:(id)arg1 cloudPhotoLibraryManager:(id)arg2 usingSyncableLibrary:(id)arg3 completionBlock:(id)arg4 ;
-(void)_setCloudRecoveryState:(NSUInteger)arg0 forAssetsWithFetchRequestPredicate:(id)arg1 resultsFilterPredicate:(id)arg2 usingNonSyncableLibrary:(id)arg3 ;
-(void)_startRecoveryUsingCloudPhotoLibraryManager:(id)arg0 transaction:(id)arg1 ;
-(void)identifyAssetsWithInconsistentCloudState;
-(void)startRecoveryUsingCloudPhotoLibraryManager:(id)arg0 transaction:(id)arg1 shouldIdentifyInconsistentAssets:(BOOL)arg2 ;


@end


#endif