// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBACKGROUNDJOBSYNDICATIONSYNCWORKER_H
#define PLBACKGROUNDJOBSYNDICATIONSYNCWORKER_H

@class NSSet, NSDictionary, CSSearchQuery, NSString;
@protocol PLSyndicationSyncManagerDelegate;


#import "PLBackgroundJobWorker.h"
#import "PLSyndicationSyncManager.h"
#import "PLDatabaseContext.h"

@interface PLBackgroundJobSyndicationSyncWorker : PLBackgroundJobWorker <PLSyndicationSyncManagerDelegate>

 {
    PLSyndicationSyncManager *_syncManager;
    NSSet *_supportedQueryTypes;
    os_unfair_lock_s _lock;
    BOOL _cancelled;
    NSDictionary *_currentWorkItem;
    CSSearchQuery *_currentQuery;
    PLDatabaseContext *_databaseContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsWellKnownPhotoLibraryIdentifier:(NSInteger)arg0 ;
-(BOOL)_hasPendingAttachmentJobsInLibrary:(id)arg0 ;
-(BOOL)_hasPendingChatJobsInLibrary:(id)arg0 ;
-(BOOL)_hasPendingDeleteJobsInLibrary:(id)arg0 ;
-(BOOL)_hasPendingJobsBasedOnLastSyncDate:(id)arg0 ;
-(BOOL)_needsSyndicationFullIndexSyncInLibrary:(id)arg0 ;
-(BOOL)_shouldContinueProcessingWithError:(*id)arg0 ;
-(BOOL)_supportsSyndicationQueryType:(NSInteger)arg0 ;
-(BOOL)isInterruptible;
-(id)_syndicationStartingDateInLibrary:(id)arg0 ;
-(id)_workItemsBatchedFromDate:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithLibraryBundle:(id)arg0 ;
-(id)photoLibraryWithDatabaseContext:(id)arg0 ;
-(id)workItemsNeedingProcessingInLibrary:(id)arg0 ;
// -(void)executeQueryForSyncManager:(id)arg0 type:(NSInteger)arg1 startDate:(id)arg2 endDate:(id)arg3 batchHandler:(id)arg4 completionHandler:(unk)arg5  ;
// -(void)executeQueryForSyncManager:(id)arg0 type:(NSInteger)arg1 startDate:(id)arg2 endDate:(id)arg3 itemHandler:(id)arg4 completionHandler:(unk)arg5  ;
-(void)performWorkOnItem:(id)arg0 inLibrary:(id)arg1 completion:(id)arg2 ;
-(void)stopWorkingOnItem:(id)arg0 ;
-(void)workerDidFinishWithDatabaseContext:(id)arg0 ;


@end


#endif