// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBAPPLICATIONPROCESSLAUNCHTRANSACTION_H
#define FBAPPLICATIONPROCESSLAUNCHTRANSACTION_H

@class RBSProcessIdentity, BSAtomicSignal;


#import "FBTransaction.h"
#import "FBProcessManager.h"
#import "FBWaitForProcessDeathTransaction.h"
#import "FBProcessExecutionContext.h"
#import "FBProcess.h"

@interface FBApplicationProcessLaunchTransaction : FBTransaction {
    FBProcessManager *_processManager;
    RBSProcessIdentity *_identity;
    id *_executionContextProvider;
    FBWaitForProcessDeathTransaction *_deathTransaction;
    FBProcessExecutionContext *_executionContext;
    BSAtomicSignal *_interruptedOrComplete;
}


@property (readonly, nonatomic) BOOL exited; // ivar: _exited
@property (readonly, nonatomic) BOOL failedLaunch; // ivar: _failedLaunch
@property (readonly, nonatomic) FBProcess *process; // ivar: _process


-(BOOL)_canBeInterrupted;
-(BOOL)_shouldFailForChildTransaction:(id)arg0 ;
-(id)_customizedDescriptionProperties;
-(id)init;
-(id)initWithApplicationBundleID:(id)arg0 executionContextProvider:(id)arg1 ;
-(id)initWithApplicationProcess:(id)arg0 ;
-(id)initWithProcessIdentity:(id)arg0 executionContextProvider:(id)arg1 ;
-(void)_begin;
-(void)_childTransactionDidComplete:(id)arg0 ;
-(void)_didComplete;
-(void)_queue_finishProcessLaunch:(BOOL)arg0 ;
-(void)_queue_launchProcess:(id)arg0 ;
-(void)_queue_noteExited;
-(void)_queue_processWillLaunch:(id)arg0 ;
-(void)_willComplete;
-(void)_willFailWithReason:(id)arg0 ;
-(void)_willInterruptWithReason:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif