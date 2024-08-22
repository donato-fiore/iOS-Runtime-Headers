// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBPROCESSMANAGER_H
#define FBPROCESSMANAGER_H

@class RBSProcessMonitor, NSMutableSet, NSMutableDictionary, NSHashTable, NSMutableOrderedSet, BKSHIDEventDeferringToken, RBSAssertion, NSString;
@protocol FBProcessDelegate, OS_dispatch_queue, FBProcessManagerKeyboardFocusDelegate, FBProcessWatchdogProviding;

#import <Foundation/Foundation.h>

#import "FBProcess.h"
#import "FBApplicationProcess.h"

@interface FBProcessManager : NSObject <FBProcessDelegate>

 {
    FBProcess *_currentProcess;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    RBSProcessMonitor *_processMonitor;
    os_unfair_lock_s _bootstrapLock;
    NSMutableSet *_bootstrap_addedProcesses;
    NSMutableSet *_bootstrap_pendingProcesses;
    os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_processesByPID;
    NSMutableDictionary *_lock_processesByVersionedPID;
    NSMutableDictionary *_lock_processesByIdentity;
    NSHashTable *_lock_observers;
    NSMutableOrderedSet *_lock_foregroundRunningProcesses;
    BKSHIDEventDeferringToken *_lock_previouslySelectedForegroundToken;
    FBProcess *_lock_previouslySelectedForegroundProcess;
    FBProcess *_lock_preferredForegroundAppProcess;
    BKSHIDEventDeferringToken *_lock_preferredForegroundToken;
    id<FBProcessManagerKeyboardFocusDelegate> *_lock_keyboardFocusDelegate;
    RBSAssertion *_lock_assertion;
    BOOL _lock_initializationComplete;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<FBProcessWatchdogProviding> *defaultWatchdogPolicy; // ivar: _noDirectAccess_defaultWatchdogPolicy
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) FBApplicationProcess *systemApplicationProcess;


+(id)_sharedInstanceCreateIfNeeded:(BOOL)arg0 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(id)_bootstrapProcessWithExecutionContext:(id)arg0 synchronously:(BOOL)arg1 error:(*id)arg2 ;
-(id)_bootstrapProcessWithHandle:(id)arg0 synchronously:(BOOL)arg1 error:(*id)arg2 ;
-(id)_createProcessFutureForProcessHandle:(id)arg0 error:(*id)arg1 ;
-(id)_createProcessFutureWithExecutionContext:(id)arg0 error:(*id)arg1 ;
-(id)_createProcessWithExecutionContext:(id)arg0 error:(*id)arg1 ;
-(id)_reallyRegisterProcessForHandle:(id)arg0 ;
-(id)allApplicationProcesses;
-(id)allProcesses;
-(id)applicationProcessForPID:(int)arg0 ;
-(id)applicationProcessesForBundleIdentifier:(id)arg0 ;
-(id)currentProcess;
-(id)init;
-(id)keyboardFocusDelegate;
-(id)processForIdentity:(id)arg0 ;
-(id)processForPID:(int)arg0 ;
-(id)processForVersionedPID:(NSInteger)arg0 ;
-(id)processesForBundleIdentifier:(id)arg0 ;
-(id)registerProcessForAuditToken:(struct ? )arg0 ;
-(id)registerProcessForHandle:(id)arg0 ;
-(id)watchdogPolicyForProcess:(id)arg0 eventContext:(id)arg1 ;
-(void)_bootstrap_addProcess:(id)arg0 ;
-(void)_bootstrap_consumeLock_addProcess:(id)arg0 synchronously:(BOOL)arg1 ;
-(void)_lock_addForegroundRunningProcess:(id)arg0 ;
-(void)_lock_evaluateForegroundEventRouting;
-(void)_lock_removeForegroundRunningProcess:(id)arg0 ;
-(void)_noteShellInitializationComplete;
// -(void)_notifyObserversUsingBlock:(id)arg0 completion:(unk)arg1  ;
-(void)_removeProcess:(id)arg0 ;
-(void)_setPreferredForegroundApplicationProcess:(id)arg0 deferringToken:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)launchProcessWithContext:(id)arg0 ;
-(void)noteProcess:(id)arg0 didUpdateState:(id)arg1 ;
-(void)noteProcessAssertionStateDidChange:(id)arg0 ;
-(void)noteProcessDidExit:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setKeyboardFocusDelegate:(id)arg0 ;


@end


#endif