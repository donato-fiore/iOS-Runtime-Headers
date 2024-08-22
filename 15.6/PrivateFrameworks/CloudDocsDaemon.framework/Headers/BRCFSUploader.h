// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCFSUPLOADER_H
#define BRCFSUPLOADER_H

@class NSMutableSet, NSMutableDictionary, br_pacer, NSString, NSDictionary;
@protocol BRCModule, OS_dispatch_queue;


#import "BRCFSTransferScheduler.h"
#import "BRCFairScheduler.h"
#import "BRCDeadlineSource.h"
#import "BRCDeadlineScheduler.h"

@interface BRCFSUploader : BRCFSTransferScheduler <BRCModule>

 {
    NSMutableSet *_boostedDocIDs;
    NSMutableDictionary *_stampForDocID;
    BRCFairScheduler *_fairScheduler;
    BRCDeadlineSource *_retryQueueSource;
    NSObject<OS_dispatch_queue> *_thumbnailQueue;
    br_pacer *_quotaPacer;
    br_pacer *_globalQuotaStateUpdatePacer;
    BOOL _prepareReachedMax;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL isDefaultOwnerOutOfQuota; // ivar: _isDefaultOwnerOutOfQuota
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *thumbnailsOperationsByID; // ivar: _thumbnailsOperations
@property (readonly, nonatomic) BRCDeadlineScheduler *uploadsDeadlineScheduler; // ivar: _uploadsDeadlineScheduler


-(BOOL)_finishPackageUploadWithRecord:(id)arg0 item:(id)arg1 stageID:(id)arg2 error:(*id)arg3 ;
-(BOOL)_updatePackageRecord:(id)arg0 item:(id)arg1 stageID:(id)arg2 error:(*id)arg3 ;
-(BOOL)canScheduleMoreJobs;
-(BOOL)hasItemsOverQuotaForOwner:(id)arg0 ;
-(BOOL)hasItemsOverQuotaInZone:(id)arg0 ;
-(BOOL)isUploadingItem:(id)arg0 ;
-(NSUInteger)_minBatchSize;
-(NSUInteger)_thumbnailOperationsMax;
-(id)_buildItemTooLargeErrorIfNeeded:(id)arg0 syncContext:(id)arg1 ;
-(id)_documentItemForJobID:(id)arg0 operationID:(id)arg1 ;
-(id)_documentItemForJobID:(id)arg0 stageID:(id)arg1 ;
-(id)_duplicatePackage:(id)arg0 stageID:(id)arg1 stageName:(id)arg2 error:(*id)arg3 ;
-(id)_thumbnailOperationForItemRowID:(id)arg0 ;
-(id)descriptionForItem:(id)arg0 context:(id)arg1 ;
-(id)descriptionForJobID:(id)arg0 context:(id)arg1 ;
-(id)initWithAccountSession:(id)arg0 ;
-(id)quotaAvailableForOwner:(id)arg0 ;
-(unsigned int)recoverAndReportMissingJobs;
-(void)_cancelJobs:(id)arg0 state:(int)arg1 ;
-(void)_cancelJobsMatching:(id)arg0 ;
-(void)_clearUploadErrorForDocument:(id)arg0 ;
-(void)_computeRecordForJobID:(id)arg0 item:(id)arg1 syncContext:(id)arg2 ;
-(void)_doneFetchingThumbnailForJobID:(id)arg0 ;
-(void)_finishedUploadingItem:(id)arg0 record:(id)arg1 jobID:(id)arg2 stageID:(id)arg3 syncContext:(id)arg4 error:(id)arg5 ;
-(void)_globalQuotaStateUpdateForDefaultOwner;
-(void)_handleFileModifiedError:(id)arg0 forItem:(id)arg1 ;
-(void)_performServerSideAssetCopyForItem:(id)arg0 transferSize:(NSUInteger)arg1 ;
-(void)_reportUploadErrorForDocument:(id)arg0 error:(id)arg1 ;
-(void)_rescheduleJobsOutOfQuotaForDefaultOwnerWithAvailableSize:(NSInteger)arg0 ;
-(void)_scheduleQuotaFetchForDefaultOwner;
-(void)_scheduleRetries;
-(void)_setQuotaAvailableForDefaultOwner:(NSUInteger)arg0 ;
-(void)_startFetchThumbnail:(id)arg0 jobID:(id)arg1 ;
-(void)_transferStreamOfSyncContext:(id)arg0 didBecomeReadyWithMaxRecordsCount:(NSUInteger)arg1 sizeHint:(NSUInteger)arg2 priority:(NSInteger)arg3 ;
-(void)_updateJobID:(id)arg0 setStageID:(id)arg1 operationID:(id)arg2 ;
-(void)_updateRecord:(id)arg0 item:(id)arg1 syncContext:(id)arg2 thumbnailOperation:(id)arg3 stageID:(id)arg4 ;
-(void)_updateRecord:(id)arg0 jobID:(id)arg1 syncContext:(id)arg2 thumbnailOperation:(id)arg3 stageID:(id)arg4 ;
-(void)_updateRecordInDB:(id)arg0 item:(id)arg1 syncContext:(id)arg2 transferSize:(NSUInteger)arg3 stageID:(id)arg4 ;
-(void)_willAttemptJobID:(id)arg0 throttle:(id)arg1 operationID:(id)arg2 ;
-(void)addAliasItem:(id)arg0 toUploadingItem:(id)arg1 ;
-(void)boostDocID:(id)arg0 item:(id)arg1 ;
-(void)cancel;
-(void)cancelAndCleanupItemUpload:(id)arg0 ;
-(void)close;
-(void)deleteJobsForZone:(id)arg0 ;
-(void)deleteJobsMatching:(id)arg0 ;
-(void)deleteUploadingJobForItem:(id)arg0 ;
-(void)finishedSyncingUpItem:(id)arg0 withOutOfQuotaError:(id)arg1 ;
-(void)forceScheduleQuotaFetchForOwner:(id)arg0 ;
-(void)ownerDidReceiveOutOfQuotaError:(id)arg0 ;
-(void)performFirstSchedulingAfterStartupInDB:(id)arg0 ;
-(void)removeBoostedDocID:(id)arg0 ;
-(void)rescheduleJobsPendingFavoritesFetchInZone:(id)arg0 ;
-(void)resume;
-(void)schedule;
-(void)scheduleQuotaFetchIfNeededForOwner:(id)arg0 ;
-(void)scheduleQuotaStateUpdateForOwner:(id)arg0 ;
-(void)setState:(int)arg0 forItem:(id)arg1 ;
-(void)setState:(int)arg0 forJobID:(id)arg1 zone:(id)arg2 ;
-(void)setState:(int)arg0 forUploadJobID:(id)arg1 zone:(id)arg2 ;
-(void)suspend;
-(void)transferStreamOfSyncContext:(id)arg0 didBecomeReadyWithMaxRecordsCount:(NSUInteger)arg1 sizeHint:(NSUInteger)arg2 priority:(NSInteger)arg3 completionBlock:(id)arg4 ;
-(void)uploadItem:(id)arg0 ;


@end


#endif