// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCFSDOWNLOADER_H
#define BRCFSDOWNLOADER_H

@class NSDate, NSMutableDictionary, NSString;
@protocol BRCModule;


#import "BRCFSTransferScheduler.h"
#import "brc_task_tracker.h"
#import "BRCFairScheduler.h"
#import "BRCDeadlineScheduler.h"

@interface BRCFSDownloader : BRCFSTransferScheduler <BRCModule>

 {
    brc_task_tracker *_tracker;
    BRCFairScheduler *_fairScheduler;
    NSUInteger _activeDownloadsSize;
    NSDate *_lastDownloadRefresh;
    CGFloat _activeDownloadSizeRefreshInterval;
    NSMutableDictionary *_willRetryOperationProgress;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BRCDeadlineScheduler *downloadsDeadlineScheduler; // ivar: _downloadsDeadlineScheduler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly) Class superclass;


-(BOOL)_hasLosersToDelete:(id)arg0 serverItem:(id)arg1 ;
-(BOOL)applyLosersToItem:(id)arg0 serverItem:(id)arg1 atURL:(id)arg2 applySchedulerState:(*int)arg3 addedLosers:(id)arg4 removedLosers:(id)arg5 ;
-(BOOL)applyThumbnailToItem:(id)arg0 serverItem:(id)arg1 atURL:(id)arg2 applySchedulerState:(*int)arg3 ;
-(BOOL)hasAdditionsToApplyForItem:(id)arg0 serverItem:(id)arg1 ;
-(BOOL)hasThumbnailToApplyForItem:(id)arg0 ;
-(BOOL)isDownloadingItem:(id)arg0 ;
-(BOOL)makeContentLive:(id)arg0 ;
-(BOOL)shouldScheduleLosersEvictionForItem:(id)arg0 ;
-(NSUInteger)_bumpThrottleForDownload:(id)arg0 throttle:(id)arg1 ;
-(NSUInteger)inFlightSize;
-(NSUInteger)sizeOfActiveDownloads;
-(id)_appLibraryForDownload:(id)arg0 kind:(int)arg1 operationID:(id)arg2 ;
-(id)_sanitizeRecord:(id)arg0 ;
-(id)descriptionForItem:(id)arg0 context:(id)arg1 ;
-(id)initWithAccountSession:(id)arg0 ;
-(unsigned int)recoverAndReportMissingJobs;
-(void)_cancelJobs:(id)arg0 state:(int)arg1 ;
-(void)_clearDownloadErrorForDocument:(id)arg0 ;
-(void)_close;
-(void)_createDownloadingJobForItem:(id)arg0 state:(int)arg1 kind:(int)arg2 etag:(id)arg3 userInitiated:(BOOL)arg4 ;
-(void)_finishDownloadCleanup:(id)arg0 ;
-(void)_finishedDownload:(id)arg0 syncContext:(id)arg1 operationID:(id)arg2 error:(id)arg3 ;
-(void)_postponeLoserForWinner:(NSInteger)arg0 etag:(id)arg1 ;
-(void)_reportDownloadErrorForDocument:(id)arg0 error:(id)arg1 ;
-(void)_sendContentsBatch:(id)arg0 sizeHint:(NSInteger)arg1 maxRecordsCount:(NSUInteger)arg2 ;
-(void)_sendLosersBatch:(id)arg0 sizeHint:(NSInteger)arg1 maxRecordsCount:(NSUInteger)arg2 ;
-(void)_sendThumbnailsBatch:(id)arg0 sizeHint:(NSInteger)arg1 maxRecordsCount:(NSUInteger)arg2 ;
-(void)_transferStreamOfSyncContext:(id)arg0 didBecomeReadyWithMaxRecordsCount:(NSUInteger)arg1 sizeHint:(NSUInteger)arg2 priority:(NSInteger)arg3 ;
-(void)_willDownload:(id)arg0 operationID:(id)arg1 ;
-(void)addAliasItem:(id)arg0 toDownloadingItem:(id)arg1 ;
-(void)cancel;
-(void)cancelAndCleanupItemDownload:(id)arg0 kind:(int)arg1 ;
-(void)cancelAndCleanupItemDownload:(id)arg0 kind:(int)arg1 etag:(id)arg2 ;
-(void)cancelAndCleanupItemDownloads:(id)arg0 ;
-(void)close;
-(void)deleteDownloadingJobForItem:(id)arg0 ;
-(void)deleteJobsMatching:(id)arg0 ;
-(void)evictLosersOnItem:(id)arg0 atURL:(id)arg1 applySchedulerState:(*int)arg2 ;
-(void)performFirstSchedulingAfterStartupInDB:(id)arg0 ;
-(void)rescheduleJobsForPendingDiskSpaceWithAvailableSpace:(NSUInteger)arg0 ;
-(void)rescheduleJobsPendingInitialSyncInZone:(id)arg0 ;
-(void)rescheduleJobsPendingWinnerForItem:(id)arg0 ;
-(void)resume;
-(void)schedule;
-(void)scheduleContentDownloadForItem:(id)arg0 serverItem:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)scheduleLosersDownloadForItem:(id)arg0 serverItem:(id)arg1 purgeStaleEntries:(BOOL)arg2 applySchedulerState:(*int)arg3 ;
-(void)scheduleThumbnailDownloadForItem:(id)arg0 serverItem:(id)arg1 applySchedulerState:(*int)arg2 ;
-(void)suspend;
-(void)transferStreamOfSyncContext:(id)arg0 didBecomeReadyWithMaxRecordsCount:(NSUInteger)arg1 sizeHint:(NSUInteger)arg2 priority:(NSInteger)arg3 completionBlock:(id)arg4 ;
-(void)updateContentDownloadForMetaOnlyChange:(id)arg0 fromEtag:(id)arg1 toEtag:(id)arg2 ;


@end


#endif