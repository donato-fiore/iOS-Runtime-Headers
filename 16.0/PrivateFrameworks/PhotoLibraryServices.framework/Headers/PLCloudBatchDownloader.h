// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCLOUDBATCHDOWNLOADER_H
#define PLCLOUDBATCHDOWNLOADER_H


#import <Foundation/Foundation.h>

#import "PLCloudPhotoLibraryManager.h"
#import "PLLibraryServicesManager.h"

@interface PLCloudBatchDownloader : NSObject {
    PLCloudPhotoLibraryManager *_manager;
    PLLibraryServicesManager *_lsm;
}




+(id)_adjustmentStateDictionaryForComparingIncomingFaceRecordForAsset:(id)arg0 ;
-(BOOL)_shouldHandleNotificationChangeForMemory:(id)arg0 memoryRecord:(id)arg1 wasPersisted:(BOOL)arg2 ;
-(id)_debugPrintAlbumOrderForAssets:(id)arg0 ;
-(id)_findMaster:(id)arg0 fromAdditionalRecordInBatch:(id)arg1 inLibrary:(id)arg2 ;
-(id)_handleAssetRecords:(id)arg0 inSyncContext:(id)arg1 withChangeBatch:(id)arg2 insertedAssetUUIDs:(*id)arg3 ;
-(id)_handleMasterRecords:(id)arg0 inLibrary:(id)arg1 ;
-(id)_handleMemoryRecords:(id)arg0 inLibrary:(id)arg1 ;
-(id)_handlePersonRecords:(id)arg0 inLibrary:(id)arg1 includesTiboSchema:(*BOOL)arg2 ;
-(id)_handleSuggestionRecords:(id)arg0 inLibrary:(id)arg1 ;
-(id)_mergeTargetFromPersons:(id)arg0 ;
-(id)deletedRecordsFromBatch:(id)arg0 ;
-(id)handleIncomingBatch:(id)arg0 ;
-(id)initWithLibraryServicesManager:(id)arg0 manager:(id)arg1 ;
-(void)_assetsAndCloudMastersFromAssetRecords:(id)arg0 assetsByScopedIdentifier:(*id)arg1 mastersByScopedIdentifier:(*id)arg2 inLibrary:(id)arg3 ;
-(void)_dedupePersonsInSyncContext:(id)arg0 ;
-(void)_dropDeferredRebuildFacesInPhotoLibrary:(id)arg0 ;
-(void)_handleAlbumRecords:(id)arg0 inLibrary:(id)arg1 ;
-(void)_handleDeleteRecords:(id)arg0 inLibrary:(id)arg1 ;
-(void)_handleExpungedRecords:(id)arg0 inLibrary:(id)arg1 ;
-(void)_handleFaceCropRecords:(id)arg0 inLibrary:(id)arg1 ;
-(void)_handleRelationsForAlbumRecords:(id)arg0 inLibrary:(id)arg1 ;
-(void)_handleRelationsForAssetRecords:(id)arg0 inLibrary:(id)arg1 ;
-(void)_handleScopeChanges:(id)arg0 inLibrary:(id)arg1 ;
-(void)_mergeExistingPersonsWithPerson:(id)arg0 inPhotoLibrary:(id)arg1 ;
-(void)_mergeUpdatedPersons:(id)arg0 inLibrary:(id)arg1 ;
-(void)_processDuplicateForAssetUUIDs:(id)arg0 library:(id)arg1 ;
-(void)_processNotificationUpdatesForMemories:(id)arg0 ;
-(void)_processNotificationUpdatesForSuggestions:(id)arg0 ;
-(void)_saveIfNeeded:(id)arg0 ;
-(void)_triggerBackgroundDownloadFailureForResources:(id)arg0 ;


@end


#endif