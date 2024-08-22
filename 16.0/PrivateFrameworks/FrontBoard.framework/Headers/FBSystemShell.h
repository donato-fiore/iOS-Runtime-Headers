// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSYSTEMSHELL_H
#define FBSYSTEMSHELL_H

@class RBSAssertion, BKSSystemShellService, NSMutableSet, NSMutableArray, BSCompoundAssertion, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "FBSystemShellInitializationContext.h"

@interface FBSystemShell : NSObject <BSDescriptionProviding>

 {
    id *_observerToken;
    RBSAssertion *_runningAssertion;
    BKSSystemShellService *_systemShellService;
    os_unfair_lock_s _lock;
    RBSAssertion *_lock_preventSleepAssertion;
    NSMutableSet *_lock_preventIdleSleepReasons;
    NSMutableArray *_lock_blocksToRunWhenReady;
    BSCompoundAssertion *_lock_temporaryWatchdogAssertion;
}


@property (readonly, nonatomic) NSUInteger _state; // ivar: _state
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FBSystemShellInitializationContext *initializationContext; // ivar: _initializationContext
@property (readonly) Class superclass;


+(id)_createSingletonWithOptions:(id)arg0 ;
+(id)sharedInstance;
-(id)_initWithOptions:(id)arg0 ;
-(id)assertWatchdogEnabledForLimitedDurationForReason:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_addBlockToExecuteWhenReady:(id)arg0 ;
-(void)_informSystemShellServiceDidFinishLaunching;
-(void)_initializationComplete;
-(void)_setState:(NSUInteger)arg0 ;
-(void)_setSystemIdleSleepDisabled:(BOOL)arg0 forReason:(id)arg1 ;
-(void)_startSystemShellService;
-(void)readyForInteraction;
-(void)sendActionsToBackBoard:(id)arg0 ;


@end


#endif