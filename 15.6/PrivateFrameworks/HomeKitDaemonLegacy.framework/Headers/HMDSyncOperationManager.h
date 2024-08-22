// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSYNCOPERATIONMANAGER_H
#define HMDSYNCOPERATIONMANAGER_H

@class HMFObject, NSMutableArray, NSMutableDictionary, NSArray, HMFExponentialBackoffTimer, NSString;
@protocol HMFLogging, HMFTimerDelegate, OS_os_log, OS_dispatch_queue, HMDSyncOperationManagerDataSource;


#import "HMDSyncOperationQueue.h"
#import "HMDSyncOperation.h"

@interface HMDSyncOperationManager : HMFObject <HMFLogging, HMFTimerDelegate>

 {
    os_unfair_lock_s _lock;
    NSMutableArray *_cloudVerifyAccountOperations;
    NSMutableArray *_cloudZonePushOperationQueues;
    NSMutableArray *_cloudCancelPauseOperations;
    NSMutableArray *_cloudQueryDatabaseOperations;
    NSMutableArray *_cloudPostFetchOperations;
    NSMutableDictionary *_cloudZonePushOperationQueuesMap;
    NSMutableDictionary *_cloudZoneFetchOperationQueuesMap;
    NSObject<OS_os_log> *_logger;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSArray *cloudCancelPauseOperations;
@property (readonly) HMDSyncOperationQueue *cloudFetchOperations; // ivar: _cloudFetchOperations
@property (readonly, copy) NSArray *cloudPostFetchOperations;
@property (retain, nonatomic) HMFExponentialBackoffTimer *cloudPushDelayTimer; // ivar: _cloudPushDelayTimer
@property (readonly) HMDSyncOperationQueue *cloudPushOperations; // ivar: _cloudPushOperations
@property (readonly, copy) NSArray *cloudQueryDatabaseOperations;
@property (readonly, copy) NSArray *cloudVerifyAccountOperations;
@property (readonly, copy) NSArray *cloudZoneFetchOperationQueues; // ivar: _cloudZoneFetchOperationQueues
@property (readonly, copy) NSArray *cloudZonePushOperationQueues;
@property (retain, nonatomic) HMDSyncOperation *currentOperation; // ivar: _currentOperation
@property (readonly, weak, nonatomic) NSObject<HMDSyncOperationManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger pauseCloudPushLevel; // ivar: _pauseCloudPushLevel
@property (nonatomic) BOOL pauseQueue; // ivar: _pauseQueue
@property (readonly) Class superclass;
@property (nonatomic, getter=wasSyncLoopDialogDisplayed) BOOL syncLoopDialogDisplayed; // ivar: _syncLoopDialogDisplayed
@property (readonly) id *timerFactory; // ivar: _timerFactory
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)addCloudPostFetchOperationIfNonePresent:(id)arg0 ;
-(BOOL)addCloudQueryDatabaseOperationIfNonePresent:(id)arg0 ;
-(BOOL)addCloudZoneFetchOperation:(id)arg0 delay:(CGFloat)arg1 ;
-(BOOL)addCloudZonePushOperation:(id)arg0 delay:(CGFloat)arg1 ;
-(BOOL)dropCloudPostFetchOperationsIfPresent;
-(BOOL)popCloudZoneFetchOperationAndMoveQueueToEnd:(*id)arg0 ;
-(id)_dequeueNextOperation;
-(id)cloudZoneFetchOperations;
-(id)dumpState;
-(id)initWithClientQueue:(id)arg0 dataSource:(id)arg1 ;
-(id)initWithClientQueue:(id)arg0 dataSource:(id)arg1 timerFactory:(id)arg2 ;
-(id)popCloudCancelPauseOperation;
-(id)popCloudPostFetchOperation;
-(id)popCloudQueryDatabaseOperation;
-(id)popCloudVerifyAccountOperation;
-(id)popCloudZonePushOperationAndMoveQueueToEnd;
-(void)_handleCancelledOperations:(id)arg0 ;
-(void)_handleNextOperation;
-(void)_reportPossibleSyncLoop;
-(void)addCloudCancelPauseOperation:(id)arg0 ;
-(void)addCloudVerifyAccountOperation:(id)arg0 ;
-(void)addOperation:(id)arg0 ;
-(void)addOperation:(id)arg0 withDelay:(CGFloat)arg1 ;
-(void)addOperationRespectingOptions:(id)arg0 withDelay:(CGFloat)arg1 ;
-(void)cancelOperations;
-(void)kick;
-(void)killCloudPushAndResume;
-(void)pause;
-(void)pauseAndWaitForCurrentOperationCompletion:(id)arg0 ;
-(void)pauseCloudPush;
-(void)removeCloudZoneFetchOperationQueue:(id)arg0 ;
-(void)removeCloudZonePushOperationQueue:(id)arg0 ;
-(void)resetCloudPushTimer:(id)arg0 ;
-(void)resume;
-(void)resumeCloudPush;
-(void)timerDidFire:(id)arg0 ;


@end


#endif