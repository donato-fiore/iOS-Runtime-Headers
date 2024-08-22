// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLPUSHTOTRANSPORTSCOPETASK_H
#define CPLPUSHTOTRANSPORTSCOPETASK_H

@class NSString, NSArray, NSMutableArray, NSMutableDictionary, NSDate;
@protocol CPLBeforeUploadCheckItemsProvider, OS_dispatch_queue, CPLEngineTransportCheckRecordsExistenceTask, CPLEngineTransportUploadBatchTask, CPLEngineTransportGroup;


#import "CPLEngineScopedTask.h"
#import "CPLEngineScopeStorage.h"
#import "CPLEngineTransport.h"
#import "CPLEnginePushRepository.h"
#import "CPLEngineScheduler.h"
#import "CPLBatchExtractionStrategy.h"
#import "CPLChangeBatch.h"
#import "CPLDerivativesFilter.h"
#import "CPLBeforeUploadCheckItems.h"
#import "CPLEngineStoreTransaction.h"

@interface CPLPushToTransportScopeTask : CPLEngineScopedTask <CPLBeforeUploadCheckItemsProvider>

 {
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_scopeIdentifier;
    CPLEngineScopeStorage *_scopes;
    CPLEngineTransport *_transport;
    CPLEnginePushRepository *_pushRepository;
    CPLEngineScheduler *_scheduler;
    CPLBatchExtractionStrategy *_currentStrategy;
    CPLChangeBatch *_diffedBatch;
    CPLChangeBatch *_batchToCommit;
    CPLDerivativesFilter *_derivativesFilter;
    NSArray *_uploadResourceTasks;
    NSInteger _ruleGroup;
    CPLBeforeUploadCheckItems *_checkItems;
    CPLEngineStoreTransaction *_transactionDuringItemsPreparation;
    NSMutableArray *_preparedUploadResourceTasks;
    NSMutableDictionary *_additionalTransportScopes;
    NSMutableDictionary *_invalidTransportScopes;
    id<CPLEngineTransportCheckRecordsExistenceTask> *_checkExistenceTask;
    id<CPLEngineTransportUploadBatchTask> *_uploadTask;
    NSUInteger _lastReportedProgress;
    NSUInteger _countOfPushedChanges;
    CGFloat _startOfIteration;
    CGFloat _startOfDerivativesGeneration;
    BOOL _deferredCancel;
    BOOL _hasCachedShouldCheckResourcesAhead;
    BOOL _shouldCheckResourcesAhead;
    BOOL _shouldSetupEstimatedSize;
    id<CPLEngineTransportGroup> *_transportGroup;
    NSInteger _taskItem;
    BOOL _hasPushedSomeChanges;
    BOOL _isUsingOverQuotaStrategy;
    BOOL _resetStrategy;
    CGFloat _latestApproximativeUploadRate;
    NSString *_currentTaskKey;
    NSDate *_taskStartDate;
    NSUInteger _recordCount;
    BOOL _didExtractOneBatch;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highPriority; // ivar: _highPriority
@property (readonly) Class superclass;


-(BOOL)_discardUploadedExtractedBatch:(id)arg0 error:(*id)arg1 ;
-(BOOL)_markUploadedTasksDidFinishWithError:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)_reenqueueExtractedBatchWithRejectedRecords:(id)arg0 error:(*id)arg1 ;
-(BOOL)isResourceDynamic:(id)arg0 ;
-(BOOL)willNeedToAccessScopeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)availableResourceTypesToUploadForChange:(id)arg0 ;
-(id)initWithEngineLibrary:(id)arg0 session:(id)arg1 clientCacheIdentifier:(id)arg2 scope:(id)arg3 transportScope:(id)arg4 ;
-(id)taskIdentifier;
-(id)willUploadCloudResource:(id)arg0 localResource:(id)arg1 error:(*id)arg2 ;
-(void)_checkForRecordExistence;
-(void)_clearUploadBatch;
-(void)_deleteGeneratedResourcesAfterError:(id)arg0 ;
-(void)_didFinishTaskWithKey:(id)arg0 error:(BOOL)arg1 cancelled:(BOOL)arg2 ;
-(void)_didStartTaskWithKey:(id)arg0 recordCount:(NSUInteger)arg1 ;
-(void)_doOneIteration;
-(void)_extractBatchWithTransaction:(id)arg0 andStore:(id)arg1 ;
-(void)_generateDerivativesForNextRecord:(id)arg0 usingDerivativesCache:(id)arg1 ;
-(void)_generateNeededDerivatives;
-(void)_popNextBatchAndContinue;
-(void)_prepareUploadBatch;
-(void)_pushTaskDidFinishWithError:(id)arg0 ;
-(void)_updateQuotaStrategyAfterSuccessInTransaction:(id)arg0 ;
-(void)_uploadBatch;
-(void)cancel;
-(void)cancel:(BOOL)arg0 ;
-(void)launch;


@end


#endif