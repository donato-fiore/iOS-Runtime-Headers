// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAJOBCOORDINATOR_H
#define PHAJOBCOORDINATOR_H

@class NSDictionary, NSString, NSMutableArray, NSMutableSet;
@protocol PHAJobCoalescerDelegate, PHAJobConstraintsObserverDelegate, PHAWorkerJobDelegate, PHADirtyChangeCoalescerDelegate, PHAActivityGovernorDelegate, PHAServiceOperationHandling, PHAJobCoordinatorDelegate, OS_os_transaction, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PHAActivityGovernor.h"
#import "PHAJobConstraintsObserver.h"
#import "PHAWorkerJob.h"
#import "PHAJobConstraints.h"
#import "PHADirtyChangeCoalescer.h"
#import "PHAWorkerHealthMonitor.h"
#import "PHAJobCoalescer.h"
#import "PHAJobGenerator.h"
#import "PHAManager.h"
#import "PHAWorkerWarmer.h"

@interface PHAJobCoordinator : NSObject <PHAJobCoalescerDelegate, PHAJobConstraintsObserverDelegate, PHAWorkerJobDelegate, PHADirtyChangeCoalescerDelegate, PHAActivityGovernorDelegate, PHAServiceOperationHandling>

 {
    uint8_t _pendingAsyncTasksCount;
    uint8_t _processingQOS;
    NSDictionary *_cachedWorkersByType;
    os_unfair_lock_s _workersByTypeLock;
}


@property (readonly, nonatomic) PHAActivityGovernor *activityGovernor; // ivar: _activityGovernor
@property (nonatomic) BOOL activityGovernorOverride;
@property (readonly, nonatomic) PHAJobConstraintsObserver *constraintsObserver; // ivar: _constraintsObserver
@property (retain, nonatomic) PHAWorkerJob *currentBackgroundJob; // ivar: _currentBackgroundJob
@property (readonly, copy) PHAJobConstraints *currentConstraints; // ivar: _currentConstraints
@property (retain, nonatomic) PHAWorkerJob *currentForegroundJob; // ivar: _currentForegroundJob
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PHAJobCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PHADirtyChangeCoalescer *dirtyCoalescer; // ivar: _dirtyCoalescer
@property (retain, nonatomic) NSObject<OS_os_transaction> *foregroundTransaction; // ivar: _foregroundTransaction
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHAWorkerHealthMonitor *healthMonitor; // ivar: _healthMonitor
@property (readonly, nonatomic) PHAJobCoalescer *jobCoalescer; // ivar: _jobCoalescer
@property (readonly, nonatomic) PHAJobGenerator *jobGenerator; // ivar: _jobGenerator
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *maintenanceTimer; // ivar: _maintenanceTimer
@property (weak, nonatomic) PHAManager *manager; // ivar: _manager
@property (nonatomic) CGFloat maxIntervalSinceLastJobReport; // ivar: _maxIntervalSinceLastJobReport
@property (nonatomic) BOOL newConstraintsPending; // ivar: _newConstraintsPending
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic, getter=isQuiescent) BOOL quiescent;
@property (retain, nonatomic) NSObject<OS_os_transaction> *runningJobTransaction; // ivar: _runningJobTransaction
@property (nonatomic) BOOL shouldIgnoreConstraintChanges; // ivar: _shouldIgnoreConstraintChanges
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableArray *waitingForegroundJobs; // ivar: _waitingForegroundJobs
@property (readonly, nonatomic) PHAWorkerWarmer *warmer; // ivar: _warmer
@property (retain, nonatomic) NSMutableSet *workerTypesServicedForUserFG; // ivar: _workerTypesServicedForUserFG
@property (readonly, nonatomic) NSDictionary *workersByType;


-(id)_defaultWorkersByType;
-(id)_inq_nextForegroundJobCanRunAutomatic:(BOOL)arg0 canRunUserFG:(BOOL)arg1 canRunImmediate:(BOOL)arg2 ;
-(id)_inq_runningJobs;
-(id)_nextAdditionalJobForWorkerTypeObj:(id)arg0 scenario:(NSUInteger)arg1 ;
-(id)_workerForJob:(id)arg0 ;
-(id)initWithManager:(id)arg0 ;
-(id)initWithManager:(id)arg0 initialConstraints:(id)arg1 additionalWorkersByType:(id)arg2 ;
-(id)photoLibrary;
-(id)setJobProcessingConstraintsWithValues:(id)arg0 mask:(id)arg1 ;
-(id)statusAsDictionary;
-(void)_dispatchTransactionAsyncWithName:(char *)arg0 block:(id)arg1 ;
-(void)_inq_enforceTimeoutForJob:(id)arg0 ;
-(void)_inq_enqueueForegroundJob:(id)arg0 ;
-(void)_inq_handleJobFinished:(id)arg0 ;
-(void)_inq_handleNoMoreJobsExpected;
-(void)_inq_launchJob:(id)arg0 ;
-(void)_inq_reconsiderWantsFGActivityBasedOnConstraints:(id)arg0 ;
-(void)_inq_stopJobDueToConstraintOrActivityChange:(id)arg0 ;
-(void)_inq_stopJobsAfterConstraintOrActivityChange;
-(void)_inq_timeoutJob:(id)arg0 ;
-(void)_installMaintenanceTimer;
-(void)_scheduleNextJob;
-(void)addWorker:(id)arg0 ;
-(void)coalescer:(id)arg0 didCoalesce:(id)arg1 ;
-(void)dealloc;
-(void)didFinishJob:(id)arg0 ;
-(void)enforceTimeouts;
-(void)enqueueForegroundJob:(id)arg0 ;
-(void)governorDidGrantBackgroundAccess:(id)arg0 ;
-(void)governorDidGrantForegroundAccess:(id)arg0 ;
-(void)governorDidRevokeBackgroundAccess:(id)arg0 ;
-(void)governorDidRevokeForegroundAccess:(id)arg0 ;
-(void)handleOperation:(id)arg0 ;
-(void)jobCoalescer:(id)arg0 didProduceJob:(id)arg1 ;
-(void)jobConstraintsObserver:(id)arg0 constraintsDidChange:(id)arg1 mask:(id)arg2 completion:(id)arg3 ;
-(void)operationDidFinish:(id)arg0 ;
-(void)processJobs;
-(void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg0 workerType:(short)arg1 workerFlags:(int)arg2 context:(id)arg3 reply:(id)arg4 ;
-(void)shutdown;


@end


#endif