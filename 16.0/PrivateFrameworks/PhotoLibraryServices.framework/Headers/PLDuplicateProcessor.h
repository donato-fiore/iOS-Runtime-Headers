// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLDUPLICATEPROCESSOR_H
#define PLDUPLICATEPROCESSOR_H

@class NSMutableSet, PLLazyObject;

#import <Foundation/Foundation.h>

#import "PLLibraryServicesManager.h"

@interface PLDuplicateProcessor : NSObject {
    PLLibraryServicesManager *_lsm;
    os_unfair_lock_s _processingLock;
    NSMutableSet *_inFlightMergeAssetUuids;
    os_unfair_lock_s _inFlightMergeLock;
    PLLazyObject *_lazyAppPrivateData;
    BOOL _enableEXIFDataAccess;
}




+(BOOL)isValidDuplicateProcessorForLibraryServicesManager:(id)arg0 ;
+(void)signalBackgroundJobSeviceDuplicateProcessingWithLibrary:(id)arg0 ;
// -(BOOL)_batchEnumerateOrGenerateAssetObjectIdsFromStartingAssetOIDs:(id)arg0 library:(id)arg1 error:(*id)arg2 continuationHandler:(id)arg3 processingBatchBlock:(unk)arg4  ;
-(BOOL)_checkMergeFeatureEnabled:(*id)arg0 ;
-(BOOL)_detectDuplicatesAndInsertIntoDuplicateAlbumWithPhotoLibrary:(id)arg0 detector:(id)arg1 duplicateType:(short)arg2 error:(*id)arg3 ;
-(BOOL)_insertIntoDuplicateAlbum:(id)arg0 assets:(id)arg1 duplicateType:(short)arg2 photoLibrary:(id)arg3 error:(*id)arg4 ;
-(BOOL)_isAssetValidForMerge:(id)arg0 ;
-(BOOL)_moveDuplicateAlbumAssestFromAlbums:(id)arg0 toTargetAlbum:(id)arg1 duplicateType:(short)arg2 error:(*id)arg3 ;
-(BOOL)_processDuplicatesWithPhotoLibrary:(id)arg0 processingType:(NSUInteger)arg1 assetObjectIds:(id)arg2 error:(*id)arg3 ;
-(BOOL)_processedDuplicateAssetSubGroupWithPhotoLibrary:(id)arg0 assetObjectIDs:(id)arg1 duplicateType:(short)arg2 error:(*id)arg3 ;
-(BOOL)_processedRemoveExclusionGroupAssetsWithPhotoLibrary:(id)arg0 assetObjectIDs:(id)arg1 error:(*id)arg2 ;
-(BOOL)assetsArePendingForDuplicateMergeProcessing:(id)arg0 ;
-(BOOL)processDuplicatesOfAssetObjectIds:(id)arg0 processingType:(NSUInteger)arg1 library:(id)arg2 error:(*id)arg3 continuationHandler:(id)arg4 ;
-(id)_albumGroupingFromAssets:(id)arg0 localIdentifierToCloudIdentifiers:(id)arg1 library:(id)arg2 ;
-(id)_appPrivateData;
-(id)_buildInterruptBatchFromStartingOIDs:(id)arg0 library:(id)arg1 ;
-(id)_duplicateAlbumsFromAssets:(id)arg0 ;
-(id)_fetchAssetOIDsForPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)_fetchAssetsFromReference:(id)arg0 library:(id)arg1 error:(*id)arg2 ;
-(id)_fetchAssetsWithPhotoLibrary:(id)arg0 assetObjectIDs:(id)arg1 error:(*id)arg2 ;
-(id)_photoLibrary;
-(id)_processedDuplicateAssetsWithPhotoLibrary:(id)arg0 assetObjectIDs:(id)arg1 duplicateType:(short)arg2 associatedDuplicateAlbum:(*id)arg3 error:(*id)arg4 ;
-(id)_resumeInterruptMarker;
-(id)_sortMergeDuplicateAssets:(id)arg0 library:(id)arg1 error:(*id)arg2 ;
-(id)initWithLibraryServicesManager:(id)arg0 ;
-(void)_cloudScopedIdentifiersFromAssetUUIDS:(id)arg0 library:(id)arg1 completionHandler:(id)arg2 ;
-(void)_inFlightMergeAssetsAddUUIDs:(id)arg0 ;
-(void)_inFlightMergeAssetsRemoveUUIDs:(id)arg0 ;
-(void)_setInterruptMarker:(id)arg0 ;
-(void)mergeDuplicateAssetsWithAssetUUIDs:(id)arg0 library:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif