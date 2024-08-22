// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBWORKSPACEKEYBOARDFOCUSCONTROLLER_H
#define SBWORKSPACEKEYBOARDFOCUSCONTROLLER_H

@class FBSSceneIdentityToken, BKSHIDEventDeferringPredicate, FBSceneManager, BSCompoundAssertion, NSMutableArray, NSMutableDictionary, FBScene, BKSHIDEventDeferringTarget, FBSScene, UIWindow, NSString;
@protocol _UIKeyboardArbiterOmniscientDelegate, SBSceneManagerObserver, _UIEventDeferringSystemShellBehaviorDelegate, _UIKeyboardArbiterAdvisor, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "_SBKeyboardFocusPolicy.h"
#import "SBInputUISceneController.h"
#import "SBMainWorkspace.h"
#import "SBSceneManagerCoordinator.h"
#import "SBWindowScene.h"
#import "_SBRecentlyUsedSceneIdentityCache.h"

@interface SBWorkspaceKeyboardFocusController : NSObject <_UIKeyboardArbiterOmniscientDelegate, SBSceneManagerObserver, _UIEventDeferringSystemShellBehaviorDelegate>

 {
    os_unfair_lock_s _lock;
    _SBKeyboardFocusPolicy *_lock_effectivePolicy;
    FBSSceneIdentityToken *_lock_springBoardLayoutSceneIdentityToken;
    BKSHIDEventDeferringPredicate *_lock_rootSceneKeyboardFocusPredicate;
    SBInputUISceneController *_inputUISceneController;
    os_unfair_lock_s _arbiterLock;
    id<_UIKeyboardArbiterAdvisor> *_arbiterLock_keyboardArbiterAdvisor;
    BOOL _addingSpringBoardPreferredFocusWindowScene;
    BOOL _focusServiceEventDeferralRequestsUpdated;
    SBMainWorkspace *_workspace;
    SBSceneManagerCoordinator *_sceneCoordinator;
    FBSceneManager *_frontBoardSceneManager;
    BSCompoundAssertion *_observers;
    BSCompoundAssertion *_appFocusRedirections;
    BSCompoundAssertion *_springBoardFocusRedirections;
    BSCompoundAssertion *_springBoardFocusLockAssertions;
    BSCompoundAssertion *_springBoardWindowFocusStealingAssertions;
    SBWindowScene *_springBoardFocusLockWindowScene;
    BSCompoundAssertion *_preventFocusForSceneAssertion;
    id<BSInvalidatable> *_rootSceneKeyboardFocusRule;
    id<BSInvalidatable> *_rootSceneSystemKeyCommandOverlayFocusRule;
    id<BSInvalidatable> *_localToRemoteKeyboardFocusRule;
    NSMutableArray *_focusServiceRequestedKeyboardFocusRules;
    NSMutableDictionary *_focusServiceEventDeferralRequests;
    NSMutableArray *_userFocusRequestRuleUpdateCompletionHandlers;
    FBScene *_highPrioritySceneToFocusInNextPolicyUpdate;
    BKSHIDEventDeferringTarget *_keyboardFocusTarget;
    FBScene *_lastAcceptedArbiterSceneSuggestion;
    BKSHIDEventDeferringTarget *_sentKeyboardFocusTarget;
    FBSScene *_targetSceneForRootKeyboardFocusRule;
    FBScene *_targetSceneForKeyboardFocusDeferring;
    UIWindow *_sentKeyboardFocusPredicateWindow;
    _SBRecentlyUsedSceneIdentityCache *_recentlyUsedScenes;
    NSUInteger _eventBufferingRequestGeneration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBScene *externalSceneWithFocus; // ivar: _externalSceneWithFocus
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBInputUISceneController *inputUISceneController;
@property (readonly, nonatomic) FBScene *sceneWithFocusIncludingSpringBoard;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger userFocusRequestGeneration; // ivar: _userFocusRequestGeneration
@property (readonly, nonatomic) SBWindowScene *windowSceneWithFocus; // ivar: _windowSceneWithFocus


+(id)new;
-(BOOL)_setKeyboardFocusPolicy:(id)arg0 ;
-(BOOL)eventDeferringManagerSystemShellBehavior:(id)arg0 shouldSuppressRemoteRuleForOwningElement:(id)arg1 inEnvironment:(id)arg2 ;
-(BOOL)eventDeferringManagerSystemShellBehaviorWantsLocalCompatibilityRules;
-(BOOL)shouldAllowInteractionTrackingKeyboardFocusUpdateForWindow:(id)arg0 ;
-(id)_filterFocusedSceneIdentityToken:(id)arg0 focusedPID:(int)arg1 resultBlock:(id)arg2 ;
-(id)_initWithWorkspace:(id)arg0 sceneCoordinator:(id)arg1 frontBoardSceneManager:(id)arg2 installUIKitDependencies:(BOOL)arg3 initializeKeyboardArbiter:(BOOL)arg4 defaultSpringBoardLayoutSceneIdentityToken:(id)arg5 ;
-(id)addKeyboardFocusObserver:(id)arg0 ;
-(id)bufferEventsForSpringBoardScene:(id)arg0 reason:(id)arg1 ;
-(id)deferAdditionalEnvironments:(id)arg0 whenSceneTargetHasKeyboardFocus:(id)arg1 ;
-(id)init;
-(id)initWithWorkspace:(id)arg0 ;
-(id)keyboardArbiterAdvisor:(id)arg0 requestedSceneFocusDeliberationForFocusedPid:(int)arg1 ;
-(id)lockFocusToSpringBoardWindowScene:(id)arg0 forReason:(id)arg1 ;
-(id)preventFocusForSceneWithIdentityToken:(id)arg0 reason:(id)arg1 ;
-(id)redirectFocusForReason:(id)arg0 fromProcessIdentifier:(int)arg1 fromDeferringToken:(id)arg2 toProcessidentifier:(int)arg3 toDeferringToken:(id)arg4 ;
-(id)redirectSpringBoardLockFocusForReason:(id)arg0 toProcessidentifier:(int)arg1 toDeferringToken:(id)arg2 ;
-(id)requestFocusStealingForSpringBoardWindow:(id)arg0 forReason:(id)arg1 ;
-(int)presentingKeyboardProcessIdentifier;
-(void)_reevaluatePolicyAndUpdateRulesFromKeyWindowNotification;
-(void)_updateAccessibilityDeferringRulesUnderstandingSpringBoardIsForeground:(BOOL)arg0 ;
-(void)removeKeyboardFocusFromScene:(id)arg0 ;
-(void)sceneManager:(id)arg0 didAddExternalForegroundApplicationSceneHandle:(id)arg1 ;
-(void)sceneManager:(id)arg0 didRemoveExternalForegroundApplicationSceneHandle:(id)arg1 ;
-(void)sceneManager:(id)arg0 willRemoveExternalForegroundApplicationSceneHandle:(id)arg1 forDestroyEvent:(BOOL)arg2 ;
-(void)updateKeyboardFocusDeferringRules;
-(void)userFocusRequestForScene:(id)arg0 reason:(id)arg1 completion:(id)arg2 ;
-(void)windowSceneDidConnect:(id)arg0 ;
-(void)windowSceneDidDisconnect:(id)arg0 ;


@end


#endif