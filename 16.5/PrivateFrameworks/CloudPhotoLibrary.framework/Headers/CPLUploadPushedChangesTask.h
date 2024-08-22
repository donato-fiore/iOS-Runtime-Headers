// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLUPLOADPUSHEDCHANGESTASK_H
#define CPLUPLOADPUSHEDCHANGESTASK_H

@class NSString, NSArray, NSMutableArray, NSMutableDictionary, NSDate;
@protocol CPLBeforeUploadCheckItemsProvider, OS_dispatch_queue, CPLBatchExtractionStrategyStorage, CPLEngineTransportFetchRecordsTask, CPLEngineTransportUploadBatchTask, CPLEngineTransportGroup, CPLUploadPushedChangesTaskDelegate;


#import "CPLEngineScopedTask.h"
#import "CPLEngineScopeStorage.h"
#import "CPLEngineTransport.h"
#import "CPLEngineScheduler.h"
#import "CPLBatchExtractionStrategy.h"
#import "CPLChangeBatch.h"
#import "CPLDerivativesFilter.h"
#import "CPLBeforeUploadCheckItems.h"
#import "CPLEngineStoreTransaction.h"
#import "CPLRecordTargetMapping.h"
#import "CPLEnginePushRepository.h"
#import "CPLEngineScope.h"
#import "CPLTransportScopeMapping.h"

@interface CPLUploadPushedChangesTask : CPLEngineScopedTask <CPLBeforeUploadCheckItemsProvider>

 {
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_scopeIdentifier;
    CPLEngineScopeStorage *_scopes;
    CPLEngineTransport *_transport;
    CPLEngineScheduler *_scheduler;
    id<CPLBatchExtractionStrategyStorage> *_batchStorage;
    CPLBatchExtractionStrategy *_currentStrategy;
    CPLChangeBatch *_diffedBatch;
    CPLChangeBatch *_batchToCommit;
    CPLDerivativesFilter *_derivativesFilter;
    NSArray *_uploadResourceTasks;
    CPLBeforeUploadCheckItems *_checkItems;
    CPLEngineStoreTransaction *_transactionDuringItemsPreparation;
    NSMutableArray *_preparedUploadResourceTasks;
    CPLRecordTargetMapping *_targetMapping;
    NSMutableDictionary *_invalidTransportScopes;
    id<CPLEngineTransportFetchRecordsTask> *_fetchRecordsTask;
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
    BOOL _wasBusy;
    BOOL _hasUploadedOneBatch;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<CPLUploadPushedChangesTaskDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didUseOverQuotaStrategy;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL highPriority; // ivar: _highPriority
@property (readonly, nonatomic) NSUInteger maxBatchSize; // ivar: _maxBatchSize
@property (readonly, nonatomic) CPLEnginePushRepository *pushRepository; // ivar: _pushRepository
@property (readonly, nonatomic) NSUInteger pushRepositoryPriority; // ivar: _pushRepositoryPriority
@property (readonly, nonatomic) NSInteger ruleGroup; // ivar: _ruleGroup
@property (readonly, nonatomic) CPLEngineScope *sharedScope; // ivar: _sharedScope
@property (readonly, nonatomic) NSObject<CPLEngineTransportGroup> *storedTransportGroup; // ivar: _storedTransportGroup
@property (readonly) Class superclass;
@property (readonly, nonatomic) CPLTransportScopeMapping *transportScopeMapping; // ivar: _transportScopeMapping


-(BOOL)_discardUploadedExtractedBatch:(id)arg0 error:(*id)arg1 ;
-(BOOL)_markUploadedTasksDidFinishWithError:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(BOOL)_reenqueueExtractedBatchWithRejectedRecords:(id)arg0 extractedBatch:(id)arg1 error:(*id)arg2 ;
-(BOOL)_shouldNotTrustCloudCacheAfterError:(id)arg0 ;
-(BOOL)_shouldUploadBatchesWithDropReason:(*id)arg0 shouldQuarantineRecords:(*BOOL)arg1 inTransaction:(id)arg2 ;
-(BOOL)_willNeedToAccessScopeWithIdentifier:(id)arg0 primaryScope:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)checkScopeIsValidInTransaction:(id)arg0 ;
-(BOOL)isCloudRecordWithScopedIdentifierShared:(id)arg0 ;
-(BOOL)isResourceDynamic:(id)arg0 ;
-(BOOL)willNeedToAccessRecordWithScopedIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)availableResourceTypesToUploadForChange:(id)arg0 ;
-(id)initWithEngineLibrary:(id)arg0 session:(id)arg1 clientCacheIdentifier:(id)arg2 scope:(id)arg3 transportScope:(id)arg4 storedTransportGroup:(id)arg5 sharedScope:(id)arg6 transportScopeMapping:(id)arg7 ruleGroup:(NSInteger)arg8 highPriority:(BOOL)arg9 maxBatchSize:(NSUInteger)arg10 pushRepositoryPriority:(NSUInteger)arg11 pushRepository:(id)arg12 ;
-(id)knownCloudRecordWithScopedIdentifier:(id)arg0 ;
-(id)taskIdentifier;
-(id)willUploadCloudResource:(id)arg0 localResource:(id)arg1 error:(*id)arg2 ;
-(void)_checkForRecordExistence;
-(void)_clearUploadBatch;
-(void)_deleteGeneratedResourcesAfterError:(id)arg0 ;
-(void)_didFinishTaskWithKey:(id)arg0 error:(BOOL)arg1 cancelled:(BOOL)arg2 ;
-(void)_didStartTaskWithKey:(id)arg0 recordCount:(NSUInteger)arg1 ;
-(void)_excludeScopeFromMingling;
-(void)_extractAndUploadOneBatch;
-(void)_extractBatchWithTransaction:(id)arg0 andStore:(id)arg1 ;
-(void)_generateDerivativesForNextRecord:(id)arg0 usingDerivativesCache:(id)arg1 fetchCache:(id)arg2 ;
-(void)_generateNeededDerivativesWithFetchCache:(id)arg0 ;
-(void)_noteSuccessfulUpdateInTransaction:(id)arg0 ;
-(void)_popNextBatchAndContinue;
-(void)_prepareTransportGroupForOneBatch;
-(void)_prepareUploadBatch;
-(void)_updateQuotaStrategyAfterSuccessInTransaction:(id)arg0 ;
-(void)_uploadBatchWithFetchCache:(id)arg0 ;
-(void)_uploadTaskDidFinishWithError:(id)arg0 ;
-(void)cancel;
-(void)cancel:(BOOL)arg0 ;
-(void)launch;


@end


#endif