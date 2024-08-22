// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCLOUDBATCHUPLOADER_H
#define PLCLOUDBATCHUPLOADER_H

@class NSMutableArray, NSMutableSet, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "PLLibraryServicesManager.h"

@interface PLCloudBatchUploader : NSObject {
    PLLibraryServicesManager *_lsm;
    NSMutableArray *_uploadBatchArray;
    NSMutableSet *_downloadedDeleteRecords;
    NSMutableSet *_cameraAsset;
    NSMutableDictionary *_recordsToDelete;
    NSString *_recordsToDeletePlistPath;
    NSMutableSet *_momentSharesNeedingForceSync;
}


@property BOOL initialUpload; // ivar: _initialUpload
@property BOOL shouldGenerateDerivatives; // ivar: _shouldGenerateDerivatives


-(BOOL)_processRepushAlbumError:(id)arg0 inUploadBatch:(id)arg1 forRecords:(id)arg2 inLibrary:(id)arg3 ;
-(BOOL)_updateDeletionRecordListForKey:(id)arg0 removingRecordID:(id)arg1 ;
-(BOOL)_validateAdditionalAssetAttributes:(id)arg0 onRelatedObject:(id)arg1 ;
-(BOOL)_validateAsset:(id)arg0 onRelatedObject:(id)arg1 ;
-(BOOL)hasBatchesToUpload;
-(NSUInteger)numberOfBatchesToUpload;
-(id)_fetchChangesFromLocalEvent:(id)arg0 shouldTriggerPrefetch:(*BOOL)arg1 inLibrary:(id)arg2 ;
-(id)_getLocalRecordFromCPLRecord:(id)arg0 inLibrary:(id)arg1 ;
-(id)_personsToUploadIncludingReverseOrderedMergeTargetsForPersons:(id)arg0 ;
-(id)_syncDescriptionForObject:(id)arg0 ;
-(id)_validateAssets:(id)arg0 fromCloudUuidDeleteList:(id)arg1 ;
-(id)createBatchesForChanges:(id)arg0 outInsertedPhotoCount:(*NSUInteger)arg1 outInsertedVideoCount:(*NSUInteger)arg2 withUploadTracker:(id)arg3 inLibrary:(id)arg4 ;
-(id)init;
-(id)pop;
-(id)processCommitError:(id)arg0 andFinalizeError:(id)arg1 forUploadBatchContainer:(id)arg2 withUploadTracker:(id)arg3 inLibrary:(id)arg4 ;
-(void)_addAsset:(id)arg0 toAssetChanges:(id)arg1 isInsert:(BOOL)arg2 seenAssetUuid:(id)arg3 ;
-(void)_addLocalResourcesToRecord:(id)arg0 inLibrary:(id)arg1 ;
-(void)_cleanUploadedResources:(id)arg0 inLibrary:(id)arg1 ;
-(void)_clearSuccessfullyPushedDeletedRecords:(id)arg0 ;
-(void)_handleInvalidAsset:(id)arg0 ;
-(void)_incrementUploadAttemptsAndPushStateForAssets:(id)arg0 ;
-(void)_processAlbumInserts:(id)arg0 albumChanges:(id)arg1 withBatchManager:(id)arg2 inLibrary:(id)arg3 ;
-(void)_processChangeToFullRecordCommitError:(id)arg0 inUploadBatch:(id)arg1 forRecords:(id)arg2 inLibrary:(id)arg3 ;
-(void)_processGenerateDerivativesCommitError:(id)arg0 inUploadBatch:(id)arg1 forRecords:(id)arg2 inLibrary:(id)arg3 ;
-(void)_processIncludeMasterCommitError:(id)arg0 inUploadBatch:(id)arg1 forRecords:(id)arg2 inLibrary:(id)arg3 ;
-(void)_processInvalidExpungeableResourceTypesCommitError:(id)arg0 inUploadBatch:(id)arg1 forRecords:(id)arg2 inLibrary:(id)arg3 ;
-(void)_processInvalidResourceCopySourceCommitError:(id)arg0 inUploadBatch:(id)arg1 forRecords:(id)arg2 inLibrary:(id)arg3 ;
-(void)_processInvalidScopeCommitError:(id)arg0 inUploadBatch:(id)arg1 forRecords:(id)arg2 inLibrary:(id)arg3 ;
-(void)_processPendingObjects:(id)arg0 withBatchManager:(id)arg1 inLibrary:(id)arg2 ;
-(void)_processQuarantineRecordsCommitError:(id)arg0 inUploadBatch:(id)arg1 forRecords:(id)arg2 uploadTracker:(id)arg3 inLibrary:(id)arg4 ;
-(void)_promptForNilAssetUUID:(id)arg0 isInsert:(BOOL)arg1 ;
-(void)_promptToFileRadarWithTitle:(id)arg0 description:(id)arg1 ;
-(void)_push:(id)arg0 ;
-(void)_pushBatches:(id)arg0 ;
-(void)_quarantineObject:(id)arg0 uploadTracker:(id)arg1 ;
-(void)_sendAlbums:(id)arg0 toBatchManager:(id)arg1 inLibrary:(id)arg2 ;
-(void)_sendAssets:(id)arg0 toBatchManager:(id)arg1 inLibrary:(id)arg2 ;
-(void)_sendOneBatch:(id)arg0 toBatchManager:(id)arg1 inLibrary:(id)arg2 ;
-(void)_sortData:(id)arg0 isInsert:(BOOL)arg1 forUploadChanges:(id)arg2 shouldTriggerPrefetch:(*BOOL)arg3 inManagedObjectContext:(id)arg4 ;
-(void)_sortRelationshipData:(id)arg0 forUploadChanges:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)addBatches:(id)arg0 ;
-(void)clearUploadArray;
-(void)handleUploadBatchesFromLocalEvent:(id)arg0 outInsertedPhotoCount:(*NSUInteger)arg1 outInsertedVideoCount:(*NSUInteger)arg2 shouldTriggerPrefetch:(*BOOL)arg3 withUploadTracker:(id)arg4 inLibrary:(id)arg5 ;
-(void)processMomentSharesNeedingForceSyncInLibrary:(id)arg0 ;
-(void)quarantineRecord:(id)arg0 uploadTracker:(id)arg1 inLibrary:(id)arg2 ;
-(void)recordDeletions:(id)arg0 ;
-(void)recordMomentSharesNeedingForceSync:(id)arg0 inLibrary:(id)arg1 ;
-(void)tryToFixCommitError:(id)arg0 inUploadBatch:(id)arg1 forRecords:(id)arg2 uploadTracker:(id)arg3 inLibrary:(id)arg4 ;
-(void)uploadDeletedRecordsFromPlist:(id)arg0 ;
-(void)uploadFullPhotoLibraryToCloud:(id)arg0 ;


@end


#endif