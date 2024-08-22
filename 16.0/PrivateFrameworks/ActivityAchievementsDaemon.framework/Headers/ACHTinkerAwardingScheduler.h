// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHTINKERAWARDINGSCHEDULER_H
#define ACHTINKERAWARDINGSCHEDULER_H

@class ACHDatabaseAssertionClient, NSMutableArray, NSCalendar, NSNumber, NSString, HKHealthStore, ACHAwardsKeyValueClient, NSDate, HDKeyValueDomain, HKKeyValueDomain, HDMaintenanceOperation, _HKDelayedOperation, HDProfile, HDPeriodicActivity;
@protocol HDPeriodicActivityDelegate, HDHealthDaemonReadyObserver, HDDiagnosticObject, ACHTemplateStoreObserving, ACHAwardingScheduler, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ACHEarnedInstanceAwardingEngine.h"
#import "ACHDataStore.h"
#import "ACHEarnedInstanceStore.h"
#import "ACHTemplateStore.h"
#import "ACHXPCScheduler.h"

@interface ACHTinkerAwardingScheduler : NSObject <HDPeriodicActivityDelegate, HDHealthDaemonReadyObserver, HDDiagnosticObject, ACHTemplateStoreObserving, ACHAwardingScheduler>



@property (retain, nonatomic) ACHDatabaseAssertionClient *assertionClient; // ivar: _assertionClient
@property (retain, nonatomic) NSMutableArray *awardEvaluationCompletionBlocks; // ivar: _awardEvaluationCompletionBlocks
@property (retain, nonatomic) ACHEarnedInstanceAwardingEngine *awardingEngine; // ivar: _awardingEngine
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *awardingEvaluationQueue; // ivar: _awardingEvaluationQueue
@property (retain, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (retain, nonatomic) NSNumber *coalescingDelayOverride; // ivar: _coalescingDelayOverride
@property (retain, nonatomic) ACHDataStore *dataStore; // ivar: _dataStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore; // ivar: _earnedInstanceStore
@property (retain, nonatomic) NSNumber *forceActivityAppInstalled; // ivar: _forceActivityAppInstalled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) ACHAwardsKeyValueClient *keyValueClient; // ivar: _keyValueClient
@property (retain, nonatomic) NSDate *lastSuccessfulRunDate; // ivar: _lastSuccessfulRunDate
@property (retain, nonatomic) HDKeyValueDomain *localKeyValueDomain; // ivar: _localKeyValueDomain
@property (retain, nonatomic) HKKeyValueDomain *localKeyValueHSDomain; // ivar: _localKeyValueHSDomain
@property (retain, nonatomic) HDMaintenanceOperation *maintenanceOperation; // ivar: _maintenanceOperation
@property (nonatomic) BOOL maintenanceTaskScheduled; // ivar: _maintenanceTaskScheduled
@property (retain, nonatomic) _HKDelayedOperation *operation; // ivar: _operation
@property (retain, nonatomic) HDProfile *profile; // ivar: _profile
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) HDPeriodicActivity *scheduler; // ivar: _scheduler
@property (nonatomic) BOOL shouldRetryEarnedInstanceDeletion; // ivar: _shouldRetryEarnedInstanceDeletion
@property (readonly) Class superclass;
@property (retain, nonatomic) ACHTemplateStore *templateStore; // ivar: _templateStore
@property (retain, nonatomic) ACHXPCScheduler *xpcScheduler; // ivar: _xpcScheduler


-(BOOL)_didRunToday;
-(BOOL)_shouldRunImmediatelyOnTemplateLoad;
-(BOOL)periodicActivityRequiresProtectedData:(id)arg0 ;
-(id)diagnosticDescription;
-(id)initWithHealthStore:(id)arg0 assertionClient:(id)arg1 dataStore:(id)arg2 earnedInstanceStore:(id)arg3 templateStore:(id)arg4 awardingEngine:(id)arg5 ;
-(id)initWithProfile:(id)arg0 dataStore:(id)arg1 earnedInstanceStore:(id)arg2 templateStore:(id)arg3 awardingEngine:(id)arg4 ;
-(void)_client_scheduleMaintenanceTaskForAwardingWithCompletion:(id)arg0 ;
-(void)_daemon_scheduleMaintenanceTaskForAwardingWithCompletion:(id)arg0 ;
-(void)_queue_addAwardingCompletion:(id)arg0 ;
-(void)_queue_callAwardingCompletionsWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_runXPCActivityWithCompletion:(id)arg0 ;
-(void)_startUp;
-(void)_systemTimeZoneDidChange:(id)arg0 ;
-(void)addAwardingCompletion:(id)arg0 ;
-(void)clearLastSuccessfulRunDate;
-(void)daemonReady:(id)arg0 ;
-(void)overrideCoalescingDelay:(CGFloat)arg0 ;
-(void)performPeriodicActivity:(id)arg0 completion:(id)arg1 ;
-(void)periodicActivity:(id)arg0 configureXPCActivityCriteria:(id)arg1 ;
-(void)requestAwardingEvaluationWithCompletion:(id)arg0 ;
-(void)scheduleMaintenanceTaskForAwardingWithCompletion:(id)arg0 ;
-(void)setlastSuccessfulRunDate:(id)arg0 ;
-(void)templateStore:(id)arg0 didAddNewTemplates:(id)arg1 ;
-(void)templateStore:(id)arg0 didRemoveTemplates:(id)arg1 ;
-(void)templateStoreDidFinishInitialFetch:(id)arg0 ;


@end


#endif