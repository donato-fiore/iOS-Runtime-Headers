// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBPROCESS_H
#define FBPROCESS_H

@class NSString, NSError, NSMutableSet, RBSAssertion, NSMutableArray, RBSProcessState, FBSProcessTerminationRequest, FBSProcessWatchdogPolicy, FBSProcessExecutionProvision, FBSApplicationInfo, BSAuditToken, BSProcessHandle, RBSProcessIdentity, RBSProcessHandle, RBSTarget, BSMachPortTaskNameRight;
@protocol FBProcessBootstrapping, FBSProcessInternal, RBSProcessMatching, FBSProcess, FBProcessWatchdogProviding, FBProcessDelegate;

#import <Foundation/Foundation.h>

#import "FBProcessState.h"
#import "FBProcessCPUStatistics.h"
#import "FBProcessWatchdogEventContext.h"
#import "FBProcessWatchdog.h"
#import "FBProcessExecutionContext.h"
#import "FBProcessExitContext.h"
#import "FBWorkspace.h"

@interface FBProcess : NSObject <FBProcessBootstrapping, FBSProcessInternal, RBSProcessMatching, FBSProcess>

 {
    os_unfair_recursive_lock_s _lock;
    os_unfair_lock_s _observerLock;
    os_unfair_lock_s _bootstrapLock;
    os_unfair_lock_s _watchdogProviderLock;
    NSString *_description;
    NSError *_bootstrapError;
    NSMutableSet *_observerLock_observers;
    RBSAssertion *_lock_gracefulExitAssertion;
    NSMutableArray *_lock_launchCompletionBlocks;
    FBProcessState *_lock_state;
    RBSProcessState *_lock_rbsState;
    unsigned char _lock_sceneState;
    FBProcessCPUStatistics *_lock_watchdogCPUStatistics;
    FBSProcessTerminationRequest *_lock_terminationRequest;
    FBProcessWatchdogEventContext *_lock_terminationWatchdogContext;
    NSInteger _terminationReason;
    NSMutableArray *_lock_terminateRequestCompletionBlocks;
    id<FBProcessWatchdogProviding> *_watchdogProvider;
    FBProcessWatchdog *_lock_watchdog;
    FBSProcessWatchdogPolicy *_sceneCreateWatchdogPolicy;
    FBSProcessExecutionProvision *_lock_latestViolatedProvision;
    BOOL _lock_pendingExit;
    BOOL _lock_invalidated;
    BOOL _lock_attemptedBootstrap;
    BOOL _lock_waitForDebugger;
    BOOL _lock_updatingState;
    BOOL _lock_didExit;
    BOOL _lock_launchFinalized;
    BOOL _lock_launchSuccess;
    NSInteger _lock_executableLivesOnSystemPartition;
    NSInteger _lock_platformBinary;
    BOOL _calloutQueue_sentWillExit;
    BOOL _calloutQueue_sentDidExit;
    BOOL _calloutQueue_sentAppWillLaunch;
    BOOL _calloutQueue_sentAppDidLaunch;
}


@property (readonly, nonatomic) FBSApplicationInfo *applicationInfo; // ivar: _lock_applicationInfo
@property (readonly, nonatomic) unsigned char assertionState;
@property (readonly, nonatomic) BSAuditToken *auditToken; // ivar: _auditToken
@property (readonly, nonatomic, getter=isBeingDebugged) BOOL beingDebugged;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic, getter=isCurrentProcess) BOOL currentProcess;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<FBProcessDelegate> *delegate; // ivar: _lock_delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat execTime; // ivar: _execTime
@property (readonly, nonatomic) BOOL executableLivesOnSystemPartition;
@property (readonly, copy, nonatomic) NSString *executablePath; // ivar: _executablePath
@property (readonly, copy, nonatomic) FBProcessExecutionContext *executionContext; // ivar: _executionContext
@property (readonly, nonatomic) FBProcessExitContext *exitContext; // ivar: _lock_exitContext
@property (readonly, nonatomic, getter=isFinishedLaunching) BOOL finishedLaunching;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;
@property (readonly, nonatomic) BSProcessHandle *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RBSProcessIdentity *identity; // ivar: _identity
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isPendingExit) BOOL pendingExit;
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic, getter=isPlatformBinary) BOOL platformBinary;
@property (readonly, nonatomic) RBSProcessHandle *rbsHandle; // ivar: _rbsHandle
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, copy, nonatomic) FBProcessState *state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) RBSTarget *target; // ivar: _target
@property (readonly, retain, nonatomic) BSMachPortTaskNameRight *taskNameRight;
@property (readonly, nonatomic) NSInteger versionedPID; // ivar: _versionedPID
@property (readonly, nonatomic) FBWorkspace *workspace; // ivar: _workspace


+(id)calloutQueue;
+(id)createCurrentProcess;
+(id)createProcessWithExecutionContext:(id)arg0 ;
+(id)createProcessWithHandle:(id)arg0 ;
-(BOOL)_shouldWatchdogWithDeclineReason:(*id)arg0 ;
-(BOOL)_startWatchdogTimerForContext:(id)arg0 ;
-(BOOL)_watchdog:(id)arg0 shouldTerminateWithDeclineReason:(*id)arg1 ;
-(BOOL)finishedLaunching;
-(BOOL)hasEntitlement:(id)arg0 ;
-(BOOL)isApplicationProcess;
-(BOOL)isExtensionProcess;
-(BOOL)isSystemApplicationProcess;
-(BOOL)matchesProcess:(id)arg0 ;
-(NSInteger)_watchdogReportType;
-(NSInteger)taskState;
-(NSInteger)visibility;
-(id)_createBootstrapContext;
-(id)_initWithIdentity:(id)arg0 handle:(id)arg1 executionContext:(id)arg2 ;
-(id)_newWatchdogForContext:(id)arg0 completion:(id)arg1 ;
-(id)_observers;
-(id)_watchdog:(id)arg0 terminationRequestForViolatedProvision:(id)arg1 error:(id)arg2 ;
-(id)_watchdogProvider;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)processPredicate;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)valueForEntitlement:(id)arg0 ;
-(void)_bootstrapAndExec;
-(void)_bootstrapDidComplete;
-(void)_configureIntrinsicsFromHandle:(id)arg0 ;
-(void)_executeBlockAfterLaunchCompletes:(id)arg0 ;
-(void)_finishInit;
-(void)_killForReason:(NSInteger)arg0 andReport:(BOOL)arg1 withDescription:(id)arg2 completion:(id)arg3 ;
-(void)_launchDidComplete:(BOOL)arg0 finalizeBlock:(id)arg1 ;
-(void)_lock_consumeLock_executeTerminationRequest;
-(void)_lock_consumeLock_performGracefulKill;
-(void)_noteAssertionStateDidChange;
-(void)_notePendingExitForReason:(id)arg0 ;
-(void)_noteProcessDidExit:(id)arg0 ;
-(void)_noteStateDidUpdate:(id)arg0 ;
-(void)_processDidExitWithContext:(id)arg0 ;
-(void)_rebuildState;
-(void)_rebuildState:(id)arg0 ;
-(void)_setSceneLifecycleState:(unsigned char)arg0 ;
-(void)_terminateWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)_terminateWithRequest:(id)arg0 forWatchdog:(id)arg1 ;
-(void)_updateStateWithBlock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)bootstrapLock:(id)arg0 ;
-(void)bootstrapWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)noteProcessPublished;
-(void)removeObserver:(id)arg0 ;
-(void)setWatchdogProvider:(id)arg0 ;


@end


#endif