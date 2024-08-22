// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWORKSPACEKEYBOARDFOCUSCONTROLLER_H
#define SBWORKSPACEKEYBOARDFOCUSCONTROLLER_H

@class FBSSceneIdentityToken, FBSceneManager, BSCompoundAssertion, BKSHIDEventDeferringTarget, FBScene, UIWindow, NSString;
@protocol _UIKeyboardArbiterOmniscientDelegate, SBSceneManagerObserver, _UIEventDeferringSystemShellBehaviorDelegate, _UIKeyboardArbiterAdvisor, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "_SBKeyboardFocusPolicy.h"
#import "SBMainWorkspace.h"
#import "SBSceneManagerCoordinator.h"
#import "SBSceneManager.h"
#import "_SBRecentlyUsedSceneIdentityCache.h"

@interface SBWorkspaceKeyboardFocusController : NSObject <_UIKeyboardArbiterOmniscientDelegate, SBSceneManagerObserver, _UIEventDeferringSystemShellBehaviorDelegate>

 {
    os_unfair_lock_s _lock;
    _SBKeyboardFocusPolicy *_lock_effectivePolicy;
    FBSSceneIdentityToken *_lock_springBoardLayoutSceneIdentityToken;
    os_unfair_lock_s _arbiterLock;
    id<_UIKeyboardArbiterAdvisor> *_arbiterLock_keyboardArbiterAdvisor;
    SBMainWorkspace *_workspace;
    SBSceneManagerCoordinator *_sceneCoordinator;
    SBSceneManager *_mainDisplaySceneManager;
    FBSceneManager *_frontBoardSceneManager;
    BSCompoundAssertion *_observers;
    BSCompoundAssertion *_appFocusRedirections;
    BSCompoundAssertion *_springBoardFocusRedirections;
    BSCompoundAssertion *_springBoardFocusLockAssertions;
    BSCompoundAssertion *_preventFocusForSceneAssertion;
    id<BSInvalidatable> *_rootSceneKeyboardFocusRule;
    id<BSInvalidatable> *_localToRemoteKeyboardFocusRule;
    BKSHIDEventDeferringTarget *_keyboardFocusTarget;
    BKSHIDEventDeferringTarget *_sentKeyboardFocusTarget;
    FBScene *_targetSceneForKeyboardFocusDeferring;
    UIWindow *_sentKeyboardFocusPredicateWindow;
    _SBRecentlyUsedSceneIdentityCache *_recentlyUsedScenes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBScene *externalSceneWithFocus; // ivar: _externalSceneWithFocus
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger userFocusRequestGeneration; // ivar: _userFocusRequestGeneration


+(id)new;
-(BOOL)_setKeyboardFocusPolicy:(id)arg0 ;
-(BOOL)eventDeferringManagerSystemShellBehavior:(id)arg0 shouldSuppressRemoteRuleForOwningElement:(id)arg1 inEnvironment:(id)arg2 ;
-(BOOL)eventDeferringManagerSystemShellBehaviorWantsLocalCompatibilityRules;
-(id)_filterFocusedSceneIdentityToken:(id)arg0 focusedPID:(int)arg1 resultBlock:(id)arg2 ;
-(id)_initWithWorkspace:(id)arg0 sceneCoordinator:(id)arg1 mainDisplaySceneManager:(id)arg2 frontBoardSceneManager:(id)arg3 installUIKitDependencies:(BOOL)arg4 initializeKeyboardArbiter:(BOOL)arg5 defaultSpringBoardLayoutSceneIdentityToken:(id)arg6 ;
-(id)addKeyboardFocusObserver:(id)arg0 ;
-(id)init;
-(id)initWithWorkspace:(id)arg0 ;
-(id)keyboardArbiterAdvisor:(id)arg0 requestedSceneFocusDeliberationForFocusedPid:(int)arg1 ;
-(id)lockFocusToSpringBoardForReason:(id)arg0 ;
-(id)preventFocusForSceneWithIdentityToken:(id)arg0 reason:(id)arg1 ;
-(id)redirectFocusForReason:(id)arg0 fromProcessIdentifier:(int)arg1 fromDeferringToken:(id)arg2 toProcessidentifier:(int)arg3 toDeferringToken:(id)arg4 ;
-(id)redirectSpringBoardLockFocusForReason:(id)arg0 toProcessidentifier:(int)arg1 toDeferringToken:(id)arg2 ;
-(int)presentingKeyboardProcessIdentifier;
-(void)_reevaluatePolicyAndUpdateRulesFromKeyWindowNotification;
-(void)_updateAccessibilityDeferringRulesUnderstandingSpringBoardIsForeground:(BOOL)arg0 ;
-(void)sceneManager:(id)arg0 didAddExternalForegroundApplicationSceneHandle:(id)arg1 ;
-(void)sceneManager:(id)arg0 didRemoveExternalForegroundApplicationSceneHandle:(id)arg1 ;
-(void)updateKeyboardFocusDeferringRules;
-(void)userFocusRequestForScene:(id)arg0 reason:(id)arg1 ;


@end


#endif