// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DATASKMANAGER_H
#define DATASKMANAGER_H

@class NSArray, NSMutableSet, NSMutableArray, NSTimer, NSString;
@protocol DATask;

#import <Foundation/Foundation.h>

#import "DATransaction.h"
#import "DAActivity.h"
#import "DAAccount.h"

@interface DATaskManager : NSObject {
    DATransaction *_transaction;
    DAActivity *_daActivity;
}


@property (weak, nonatomic) DAAccount *account; // ivar: _account
@property (retain, nonatomic) NSObject<DATask> *activeExclusiveTask; // ivar: _activeExclusiveTask
@property (retain, nonatomic) NSObject<DATask> *activeModalTask; // ivar: _activeModalTask
@property (retain, nonatomic) NSObject<DATask> *activeQueuedTask; // ivar: _activeQueuedTask
@property (readonly, nonatomic) NSArray *allTasks;
@property (nonatomic) BOOL didLogSyncStart; // ivar: _didLogSyncStart
@property (retain, nonatomic) NSMutableSet *heldIndependentTasks; // ivar: _heldIndependentTasks
@property (retain, nonatomic) NSMutableSet *independentTasks; // ivar: _independentTasks
@property (retain, nonatomic) NSMutableArray *mQueuedTasks; // ivar: _mQueuedTasks
@property (retain, nonatomic) NSTimer *managerIdleTimer; // ivar: _managerIdleTimer
@property (retain, nonatomic) NSObject<DATask> *modalHeldActiveQueuedTask; // ivar: _modalHeldActiveQueuedTask
@property (retain, nonatomic) NSMutableSet *modalHeldIndependentTasks; // ivar: _modalHeldIndependentTasks
@property (copy, nonatomic) NSString *powerAssertionGroupID; // ivar: _powerAssertionGroupID
@property (retain, nonatomic) NSTimer *powerLogIdleTimer; // ivar: _powerLogIdleTimer
@property (retain, nonatomic) NSMutableArray *queuedExclusiveTasks; // ivar: _queuedExclusiveTasks
@property (retain, nonatomic) NSMutableArray *queuedModalTasks; // ivar: _queuedModalTasks
@property (readonly, nonatomic) NSArray *queuedTasks;
@property (nonatomic) int state; // ivar: _state
@property (retain, nonatomic) NSTimer *userInitiatedSyncTimer; // ivar: _userInitiatedSyncTimer
@property (retain, nonatomic) NSTimer *xpcTransactionTimer; // ivar: _xpcTransactionTimer


-(BOOL)_hasTasksForcingNetworkConnection;
-(BOOL)_hasTasksIndicatingARunningSync;
-(BOOL)_taskForcesNetworking:(id)arg0 ;
-(BOOL)_taskInQueueForcesNetworkConnection:(id)arg0 ;
-(BOOL)_useFakeDescriptions;
-(BOOL)isShutdown;
-(BOOL)shouldCancelTaskDueToOnPowerFetchMode;
-(BOOL)taskIsModal:(id)arg0 ;
-(BOOL)useSSL;
-(NSInteger)port;
-(id)OAuth2Token;
-(id)_powerLogInfoDictionary;
-(id)_version;
-(id)deviceType;
-(id)identityPersist;
-(id)init;
-(id)initWithAccount:(id)arg0 ;
-(id)password;
-(id)server;
-(id)user;
-(id)userAgent;
-(void)_cancelTasksWithReason:(int)arg0 ;
-(void)_clearUserInitiatedSyncTimer;
-(void)_endXpcTransaction;
-(void)_logSyncEnd;
-(void)_makeStateTransition;
-(void)_performTask:(id)arg0 ;
-(void)_populateVersionDescriptions;
-(void)_reactivateHeldTasks;
-(void)_releasePowerAssertionForTask:(id)arg0 ;
-(void)_requestCancelTasksWithReason:(int)arg0 ;
-(void)_retainPowerAssertionForTask:(id)arg0 ;
-(void)_schedulePerformTask:(id)arg0 ;
-(void)_scheduleSelector:(SEL)arg0 withArgument:(id)arg1 ;
-(void)_scheduleStartModal:(id)arg0 ;
-(void)_startModal:(id)arg0 ;
-(void)_useOpportunisticSocketsAgain;
-(void)cancelAllTasks;
-(void)cancelTask:(id)arg0 ;
-(void)cancelTask:(id)arg0 withUnderlyingError:(id)arg1 ;
-(void)cancelTasksDueToOnPowerMode;
-(void)dealloc;
-(void)shutdown;
-(void)submitExclusiveTask:(id)arg0 ;
-(void)submitExclusiveTask:(id)arg0 toFrontOfQueue:(BOOL)arg1 ;
-(void)submitIndependentTask:(id)arg0 ;
-(void)submitQueuedTask:(id)arg0 ;
-(void)taskDidFinish:(id)arg0 ;
-(void)taskEndModal:(id)arg0 ;
-(void)taskManagerDidAddTask:(id)arg0 ;
-(void)taskManagerWillRemoveTask:(id)arg0 ;
-(void)taskRequestModal:(id)arg0 ;


@end


#endif