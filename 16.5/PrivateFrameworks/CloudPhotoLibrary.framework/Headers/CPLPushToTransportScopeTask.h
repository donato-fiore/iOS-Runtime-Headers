// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLPUSHTOTRANSPORTSCOPETASK_H
#define CPLPUSHTOTRANSPORTSCOPETASK_H

@class NSString, NSDate;
@protocol CPLUploadPushedChangesTaskDelegate, OS_dispatch_queue, CPLEngineTransportUpdateContributorsTask, CPLEngineTransportGroup;


#import "CPLEngineScopedTask.h"
#import "CPLEngineScopeStorage.h"
#import "CPLEngineTransport.h"
#import "CPLEnginePushRepository.h"
#import "CPLEngineScheduler.h"
#import "CPLEngineScope.h"
#import "CPLTransportScopeMapping.h"
#import "CPLUploadPushedChangesTask.h"

@interface CPLPushToTransportScopeTask : CPLEngineScopedTask <CPLUploadPushedChangesTaskDelegate>

 {
    NSObject<OS_dispatch_queue> *_lock;
    os_unfair_lock_s _currentSubtaskLock;
    NSString *_scopeIdentifier;
    CPLEngineScopeStorage *_scopes;
    CPLEngineTransport *_transport;
    CPLEnginePushRepository *_pushRepository;
    CPLEngineScheduler *_scheduler;
    CPLEngineScope *_sharedScope;
    NSInteger _ruleGroup;
    CPLTransportScopeMapping *_transportScopeMapping;
    id<CPLEngineTransportUpdateContributorsTask> *_updateContributorsTask;
    id<CPLEngineTransportGroup> *_storedTransportGroup;
    id<CPLEngineTransportGroup> *_transportGroup;
    NSInteger _taskItem;
    NSString *_currentTaskKey;
    NSDate *_taskStartDate;
    NSUInteger _recordCount;
    BOOL _didExtractOneBatch;
    BOOL _wasBusy;
    BOOL _hasUploadedOneBatch;
    BOOL _retryImmediately;
    BOOL _contributorsUpdateIsDisabled;
}


@property (readonly) CPLUploadPushedChangesTask *currentSubtask; // ivar: _currentSubtask
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highPriority; // ivar: _highPriority
@property (readonly) Class superclass;


-(BOOL)_shouldNotTrustCloudCacheAfterError:(id)arg0 ;
-(BOOL)_shouldUploadBatchesWithDropReason:(*id)arg0 shouldQuarantineRecords:(*BOOL)arg1 inTransaction:(id)arg2 ;
-(BOOL)checkScopeIsValidInTransaction:(id)arg0 ;
-(BOOL)task:(id)arg0 checkScopeIsValidInTransaction:(id)arg1 ;
-(BOOL)task:(id)arg0 shouldRetryImmediatelyInTransaction:(id)arg1 ;
-(BOOL)task:(id)arg0 shouldUploadBatchesWithDropReason:(*id)arg1 shouldQuarantineRecords:(*BOOL)arg2 inTransaction:(id)arg3 ;
-(id)_contributorsUpdatesInTransaction:(id)arg0 ;
-(id)initWithEngineLibrary:(id)arg0 session:(id)arg1 clientCacheIdentifier:(id)arg2 scope:(id)arg3 transportScope:(id)arg4 ;
-(id)phaseDescription;
-(id)scopesForTask;
-(id)taskIdentifier;
-(void)_acknowledgeContributorUpdatesAndContinue:(id)arg0 ;
-(void)_didFinishTaskWithKey:(id)arg0 error:(BOOL)arg1 cancelled:(BOOL)arg2 ;
-(void)_didStartTaskWithKey:(id)arg0 recordCount:(NSUInteger)arg1 ;
-(void)_discardCurrentSubtask;
-(void)_excludeScopeFromMingling;
-(void)_includeScopeInMingling;
-(void)_launch;
-(void)_launchSubTask:(id)arg0 ;
-(void)_noteSuccessfulUpdateInTransaction:(id)arg0 ;
-(void)_prepareTransportGroupForOneBatch;
-(void)_pushTaskDidFinishWithError:(id)arg0 ;
-(void)_updateContributors:(id)arg0 ;
-(void)_updateQuotaStrategyAfterSuccessInTransaction:(id)arg0 ;
-(void)_uploadChangesWithPriority:(NSUInteger)arg0 maxBatchSize:(NSUInteger)arg1 ;
-(void)_uploadTask:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)cancel;
-(void)cancel:(BOOL)arg0 ;
-(void)launch;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)task:(id)arg0 didProgress:(float)arg1 userInfo:(id)arg2 ;
-(void)task:(id)arg0 noteSuccessfulUpdateInTransaction:(id)arg1 ;


@end


#endif