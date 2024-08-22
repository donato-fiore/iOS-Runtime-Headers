// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDUPLICATEPROCESSOR_H
#define PLDUPLICATEPROCESSOR_H

@class NSMutableSet, PLLazyObject;

#import <Foundation/Foundation.h>

#import "PLLibraryServicesManager.h"
#import "PLPhotoLibrary.h"

@interface PLDuplicateProcessor : NSObject {
    PLLibraryServicesManager *_lsm;
    os_unfair_lock_s _processingLock;
    NSMutableSet *_inFlightMergeAssetUuids;
    os_unfair_lock_s _inFlightMergeLock;
    PLLazyObject *_lazyAppPrivateData;
    BOOL _enableEXIFDataAccess;
}


@property (readonly) BOOL isMerging;
@property (retain) PLPhotoLibrary *unitTestLibrary; // ivar: _unitTestLibrary


+(BOOL)_removeAssetsFromDuplicateAlbumUsingFetchRequest:(id)arg0 library:(id)arg1 error:(*id)arg2 ;
+(BOOL)isExitingSharedLibraryForLibrary:(id)arg0 ;
+(BOOL)isValidDuplicateProcessorForLibraryServicesManager:(id)arg0 ;
+(BOOL)removeAllDuplicateSharedLibraryAssetFromAlbumWithPhotoLibrary:(id)arg0 error:(*id)arg1 ;
+(BOOL)sharedLibraryDedupeEnabledWithPathManager:(id)arg0 ;
+(void)signalBackgroundJobSeviceDuplicateProcessingWithLibrary:(id)arg0 ;
+(void)updateSharedLibraryIsEnabledFeatureVersionIfNeededWithPhotoLibrary:(id)arg0 cplConfiguration:(id)arg1 ;
// -(BOOL)_batchEnumerateOrGenerateAssetObjectIdsFromStartingAssetOIDs:(id)arg0 library:(id)arg1 error:(*id)arg2 continuationHandler:(id)arg3 processingBatchBlock:(unk)arg4  ;
-(BOOL)_detectDuplicatesAndInsertIntoDuplicateAlbumWithPhotoLibrary:(id)arg0 detector:(id)arg1 duplicateType:(short)arg2 error:(*id)arg3 ;
-(BOOL)_insertIntoDuplicateAlbum:(id)arg0 assets:(id)arg1 duplicateType:(short)arg2 photoLibrary:(id)arg3 error:(*id)arg4 ;
-(BOOL)_isAssetValidForMerge:(id)arg0 ;
-(BOOL)_isMergeFeatureEnabled:(*id)arg0 ;
-(BOOL)_isValidSharedLibraryStateWithLibrary:(id)arg0 error:(*id)arg1 ;
-(BOOL)_moveDuplicateAlbumAssestFromAlbums:(id)arg0 toTargetAlbum:(id)arg1 duplicateType:(short)arg2 error:(*id)arg3 ;
-(BOOL)_processDuplicatesWithPhotoLibrary:(id)arg0 processingType:(NSUInteger)arg1 assetObjectIds:(id)arg2 error:(*id)arg3 ;
-(BOOL)_processMergeAlbumAssetOIDMap:(id)arg0 localIdentifierMap:(id)arg1 library:(id)arg2 error:(*id)arg3 ;
-(BOOL)_processMergeAssets:(id)arg0 localIdentifierMap:(id)arg1 library:(id)arg2 error:(*id)arg3 ;
-(BOOL)_processMergeGroup:(id)arg0 processedAssetCount:(*NSUInteger)arg1 skippedAssetCount:(*NSUInteger)arg2 processedAssetCountAfterSave:(*NSUInteger)arg3 library:(id)arg4 error:(*id)arg5 ;
-(BOOL)_processMergeGroupContainer:(id)arg0 processedAssetCount:(*NSUInteger)arg1 skippedAssetCount:(*NSUInteger)arg2 library:(id)arg3 error:(*id)arg4 ;
-(BOOL)_processedDuplicateAssetSubGroupWithPhotoLibrary:(id)arg0 assetObjectIDs:(id)arg1 duplicateType:(short)arg2 error:(*id)arg3 ;
-(BOOL)_processedRemoveExclusionGroupAssetsWithPhotoLibrary:(id)arg0 assetObjectIDs:(id)arg1 error:(*id)arg2 ;
-(BOOL)assetsArePendingForDuplicateMergeProcessing:(id)arg0 ;
-(BOOL)processDuplicatesOfAssetObjectIds:(id)arg0 processingType:(NSUInteger)arg1 error:(*id)arg2 continuationHandler:(id)arg3 ;
-(id)_appPrivateData;
-(id)_buildInterruptBatchFromStartingOIDs:(id)arg0 library:(id)arg1 ;
-(id)_duplicateAlbumsFromAssets:(id)arg0 ;
-(id)_fetchAssetOIDsForPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)_fetchAssetsFromOIDs:(id)arg0 library:(id)arg1 error:(*id)arg2 ;
-(id)_fetchAssetsFromReference:(id)arg0 isOID:(BOOL)arg1 library:(id)arg2 error:(*id)arg3 ;
-(id)_fetchAssetsFromUUIDs:(id)arg0 library:(id)arg1 error:(*id)arg2 ;
-(id)_fetchAssetsWithPhotoLibrary:(id)arg0 assetObjectIDs:(id)arg1 error:(*id)arg2 ;
-(id)_fetchCloudIdentifiersFromAssetUUIDs:(id)arg0 library:(id)arg1 error:(*id)arg2 ;
-(id)_photoLibrary;
-(id)_processAlbumGroupingFromAssets:(id)arg0 localIdentifierToCloudIdentifiers:(id)arg1 library:(id)arg2 ;
-(id)_processContainersAssetUUIDS:(id)arg0 library:(id)arg1 ;
-(id)_processedDuplicateAssetsWithPhotoLibrary:(id)arg0 assetObjectIDs:(id)arg1 duplicateType:(short)arg2 associatedDuplicateAlbum:(*id)arg3 error:(*id)arg4 ;
-(id)_resumeInterruptMarker;
-(id)initWithLibraryServicesManager:(id)arg0 ;
-(void)_inFlightMergeAssetsAddUUIDs:(id)arg0 ;
-(void)_inFlightMergeAssetsRemoveUUIDs:(id)arg0 ;
-(void)_processCloudScopedIdentifierFromLocalIdentifiers:(id)arg0 localToCloudIdentifierMap:(id)arg1 cplManager:(id)arg2 completionHandler:(id)arg3 ;
-(void)_processCloudScopedIdentifiersFromAssetUUIDS:(id)arg0 library:(id)arg1 completionHandler:(id)arg2 ;
-(void)_setInterruptMarker:(id)arg0 ;
-(void)mergeDuplicateAssetsWithAssetUUIDs:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif