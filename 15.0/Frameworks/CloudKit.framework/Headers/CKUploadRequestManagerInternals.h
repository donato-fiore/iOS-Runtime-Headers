// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKUPLOADREQUESTMANAGERINTERNALS_H
#define CKUPLOADREQUESTMANAGERINTERNALS_H

@class NSString, NSMutableDictionary;
@protocol CKAssetRepairSchedulerDelegate, CKSyncEngineDataSource, NSObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKContainer.h"
#import "CKUploadRequestPersistentStore.h"
#import "CKSchedulerActivity.h"
#import "CKUploadRequestConfiguration.h"
#import "CKAssetRepairScheduler.h"
#import "CKSyncEngine.h"
#import "CKUploadRequestManagerResponseActionThrottler.h"
#import "CKUploadRequestManagerStateMachine.h"

@interface CKUploadRequestManagerInternals : NSObject <CKAssetRepairSchedulerDelegate, CKSyncEngineDataSource>



@property (retain, nonatomic) NSObject<NSObject> *accountChangeObserver; // ivar: _accountChangeObserver
@property (readonly, nonatomic) NSString *activityIdentifierForSchedulingRepairs;
@property (copy) id *assetRequestCallback; // ivar: _assetRequestCallback
@property (retain, nonatomic) NSString *assignedMachServiceName; // ivar: _assignedMachServiceName
@property (retain, nonatomic) NSString *cachesDirectory; // ivar: _cachesDirectory
@property (retain, nonatomic) NSMutableDictionary *callbackForOverridePoint; // ivar: _callbackForOverridePoint
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) CKContainer *container; // ivar: _container
@property (retain, nonatomic) CKUploadRequestPersistentStore *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (nonatomic) int fetchAllToken; // ivar: _fetchAllToken
@property (nonatomic) BOOL hasRegisteredActivity; // ivar: _hasRegisteredActivity
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL ignoringSystemConditions; // ivar: _ignoringSystemConditions
@property (copy) NSString *machServiceName; // ivar: _machServiceName
@property (retain, nonatomic) CKSchedulerActivity *observedRepairActivity; // ivar: _observedRepairActivity
@property (copy) id *packageRequestCallback; // ivar: _packageRequestCallback
@property (nonatomic) *__SCNetworkReachability reachability; // ivar: _reachability
@property (copy, nonatomic) id *repairActivityHandler; // ivar: _repairActivityHandler
@property (retain, nonatomic) CKContainer *repairContainer; // ivar: _repairContainer
@property (retain, nonatomic) CKUploadRequestConfiguration *repairContainerOverrides; // ivar: _repairContainerOverrides
@property (retain, nonatomic) CKAssetRepairScheduler *repairProcessor; // ivar: _repairProcessor
@property (retain, nonatomic) CKSyncEngine *repairZoneSyncEngine; // ivar: _repairZoneSyncEngine
@property (retain, nonatomic) CKUploadRequestManagerResponseActionThrottler *responseActionThrottler; // ivar: _responseActionThrottler
@property (copy, nonatomic) id *scheduledAccountStatusCheck; // ivar: _scheduledAccountStatusCheck
@property (retain, nonatomic) CKUploadRequestManagerStateMachine *stateMachine; // ivar: _stateMachine
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateMachineQueue; // ivar: _stateMachineQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue
@property (readonly) Class superclass;


-(BOOL)canPerformFunction:(NSInteger)arg0 ;
-(BOOL)isRepairRecordActionable:(id)arg0 ;
-(id)createDatabase;
-(id)createStateMachine;
-(id)initWithContainer:(id)arg0 repairContainerOverrides:(id)arg1 ;
-(id)initWithContainer:(id)arg0 repairContainerOverrides:(id)arg1 ignoringSystemConditions:(BOOL)arg2 ;
-(id)nextRepairDateForDate:(id)arg0 ;
-(id)repairZoneID;
-(id)repairableAssetsForDate:(id)arg0 ;
-(id)syncEngine:(id)arg0 recordToSaveForRecordID:(id)arg1 ;
-(void)assetRepairScheduler:(id)arg0 completedRepairWithMetadata:(id)arg1 error:(id)arg2 ;
-(void)assetRepairScheduler:(id)arg0 completedRequestWithMetadata:(id)arg1 result:(NSInteger)arg2 ;
-(void)assetRepairScheduler:(id)arg0 preparingRepairWithOperation:(id)arg1 ;
-(void)assetRepairSchedulerAllRequestsComplete:(id)arg0 ;
-(void)cancelScheduledEvent;
-(void)checkAccountID;
-(void)checkAccountStatus;
-(void)checkNetworkReachability;
-(void)closeSyncEngine;
-(void)commonInitWithContainer:(id)arg0 repairContainerOverrides:(id)arg1 ;
-(void)dealloc;
-(void)dispatchEvent:(NSInteger)arg0 ;
-(void)dispatchEvent:(NSInteger)arg0 synchronously:(BOOL)arg1 ;
-(void)fetchRepairContainerMetadata;
-(void)fetchServerChanges:(id)arg0 ;
-(void)finishSchedulerCallbackWithDeferral:(BOOL)arg0 ;
-(void)invokeCallbackForOverridePoint:(NSInteger)arg0 withError:(id)arg1 onCallbackQueue:(BOOL)arg2 ;
-(void)manuallyTriggerUploadRequests;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)openSyncEngine;
-(void)performRepairs;
-(void)registerForAccountNotifications;
-(void)registerForFetchAllNotifications;
-(void)registerForNetworkReachability;
-(void)registerForRepairScheduler;
-(void)respondToStateMachineAction:(NSInteger)arg0 isRetry:(BOOL)arg1 ;
-(void)respondToStateMachineChangeState:(NSInteger)arg0 enter:(BOOL)arg1 ;
-(void)scheduleNextSync;
-(void)scheduleOrInvokeRepairsNow;
-(void)scheduleRecordRepair:(id)arg0 withDelay:(CGFloat)arg1 increasingCount:(BOOL)arg2 ;
-(void)scheduleRecurringFetch;
-(void)scheduleRepairsWithDelay:(CGFloat)arg0 ;
// -(void)setCallback:(id)arg0 forOverridePoint:(unk)arg1  ;
-(void)syncEngine:(id)arg0 didDeleteRecordWithID:(id)arg1 ;
-(void)syncEngine:(id)arg0 didFetchRecord:(id)arg1 ;
-(void)syncEngine:(id)arg0 didSaveRecord:(id)arg1 ;
-(void)syncEngine:(id)arg0 didUpdateMetadata:(id)arg1 ;
-(void)syncEngine:(id)arg0 failedToDeleteRecordWithID:(id)arg1 error:(id)arg2 ;
-(void)syncEngine:(id)arg0 failedToSaveRecord:(id)arg1 error:(id)arg2 ;
-(void)syncEngine:(id)arg0 recordWithIDWasDeleted:(id)arg1 recordType:(id)arg2 ;
-(void)syncEngine:(id)arg0 zoneWithIDChanged:(id)arg1 ;
-(void)syncEngine:(id)arg0 zoneWithIDWasDeleted:(id)arg1 ;
-(void)syncEngine:(id)arg0 zoneWithIDWasPurged:(id)arg1 ;
-(void)unregisterFromAccountNotifications;
-(void)unregisterFromFetchAllNotifications;
-(void)unregisterFromNetworkReachability;


@end


#endif