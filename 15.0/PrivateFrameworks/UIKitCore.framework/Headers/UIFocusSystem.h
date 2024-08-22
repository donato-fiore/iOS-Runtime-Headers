// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIFOCUSSYSTEM_H
#define UIFOCUSSYSTEM_H

@class NSString, NSArray;
@protocol _UIFocusEnvironmentInternal, _UIFocusCastingControllerDelegate, _UIFocusEnvironmentPrivate, UIFocusItem, UIFocusEnvironment, _UIFocusSystemDelegate, _UIFocusBehavior, _UIFocusHapticFeedbackGenerator, UIFocusItemContainer, _UIFocusRegionContainer;

#import <Foundation/Foundation.h>

#import "_UIFocusSystemSceneComponent.h"
#import "_UIFocusUpdateRequest.h"
#import "_UIFocusEventDelivery.h"
#import "UIFocusAnimationCoordinator.h"
#import "_UIFocusAnimationCoordinatorManager.h"
#import "_UIFocusCastingController.h"
#import "_UIFocusEffectManager.h"
#import "_UIFocusGroupHistory.h"
#import "_UIFocusItemFrameReporter.h"
#import "_UIFocusSoundGenerator.h"
#import "UIView.h"
#import "UIFocusSystem.h"
#import "UIFocusMovementAction.h"
#import "UIResponder.h"
#import "_UIFocusUpdateThrottle.h"

@interface UIFocusSystem : NSObject <_UIFocusEnvironmentInternal, _UIFocusCastingControllerDelegate, _UIFocusEnvironmentPrivate>

 {
    _UIFocusSystemSceneComponent *_sceneComponent;
    _UIFocusUpdateRequest *_pendingFocusUpdateRequest;
    id<UIFocusItem> *_deferredFocusUpdateTarget;
    id<UIFocusEnvironment> *_appearingFocusEnvironment;
    id<UIFocusEnvironment> *_disappearingFocusEnvironment;
    ? _flags;
}


@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *_deepestPreferredFocusEnvironment; // ivar: _deepestPreferredFocusEnvironment
@property (readonly, nonatomic) _UIFocusEventDelivery *_eventDelivery; // ivar: _eventDelivery
@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, nonatomic, getter=_currentFocusAnimationCoordinator) UIFocusAnimationCoordinator *currentFocusAnimationCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) NSObject<_UIFocusSystemDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_disappearingFocusEnvironment) NSObject<UIFocusEnvironment> *disappearingFocusEnvironment;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_isEligibleForFocusOcclusion) BOOL eligibleForFocusOcclusion;
@property (nonatomic, getter=_isEnabled, setter=_setEnabled:) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic, getter=_focusAnimationCoordinatorManager, setter=_setFocusAnimationCoordinatorManager:) _UIFocusAnimationCoordinatorManager *focusAnimationCoordinatorManager; // ivar: _focusAnimationCoordinatorManager
@property (readonly, nonatomic, getter=_focusBehavior) NSObject<_UIFocusBehavior> *focusBehavior;
@property (retain, nonatomic, getter=_focusCastingController, setter=_setFocusCastingController:) _UIFocusCastingController *focusCastingController; // ivar: _focusCastingController
@property (readonly, nonatomic, getter=_focusEffectManager) _UIFocusEffectManager *focusEffectManager; // ivar: _focusEffectManager
@property (readonly, nonatomic, getter=_focusGroupHistory) _UIFocusGroupHistory *focusGroupHistory; // ivar: _focusGroupHistory
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (retain, nonatomic, getter=_focusHapticFeedbackGenerator, setter=_setFocusHapticFeedbackGenerator:) NSObject<_UIFocusHapticFeedbackGenerator> *focusHapticFeedbackGenerator; // ivar: _focusHapticFeedbackGenerator
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (retain, nonatomic, getter=_focusItemFrameReporter, setter=_setFocusItemFrameReporter:) _UIFocusItemFrameReporter *focusItemFrameReporter; // ivar: _focusItemFrameReporter
@property (readonly, weak, nonatomic, getter=_focusMapContainer) NSObject<_UIFocusRegionContainer> *focusMapContainer;
@property (retain, nonatomic, getter=_focusSoundGenerator, setter=_setFocusSoundGenerator:) _UIFocusSoundGenerator *focusSoundGenerator; // ivar: _focusSoundGenerator
@property (readonly, weak, nonatomic) NSObject<UIFocusItem> *focusedItem; // ivar: _focusedItem
@property (readonly, weak, nonatomic, getter=_focusedView) UIView *focusedView;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic, getter=_hostFocusSystem) UIFocusSystem *hostFocusSystem;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (retain, nonatomic) UIFocusMovementAction *pendingFocusMovementAction; // ivar: _pendingFocusMovementAction
@property (readonly, weak, nonatomic, getter=_preferredFirstResponder) UIResponder *preferredFirstResponder;
@property (readonly, weak, nonatomic, getter=_preferredFirstResponderFocusSystem) UIFocusSystem *preferredFirstResponderFocusSystem;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) NSInteger preferredFocusMovementStyle;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, weak, nonatomic, getter=_previousFocusedItem) NSObject<UIFocusItem> *previousFocusedItem; // ivar: _previousFocusedItem
@property (readonly) Class superclass;
@property (readonly, nonatomic) _UIFocusUpdateThrottle *updateThrottle; // ivar: _updateThrottle
@property (nonatomic) BOOL waitingForFocusMovementAction; // ivar: _waitingForFocusMovementAction


+(BOOL)environment:(id)arg0 containsEnvironment:(id)arg1 ;
+(id)_allFocusSystems;
+(id)focusSystemForEnvironment:(id)arg0 ;
+(void)registerURL:(id)arg0 forSoundIdentifier:(id)arg1 ;
-(BOOL)_debug_isEnvironmentEligibleForFocusUpdate:(id)arg0 debugReport:(id)arg1 ;
-(BOOL)_hasValidItemForCurrentDeferralState;
-(BOOL)_isEnvironmentEligibleForFocusUpdate:(id)arg0 fallbackToEnvironment:(*id)arg1 debugReport:(id)arg2 ;
-(BOOL)_performDeferredFocusUpdateIfAvailable;
-(BOOL)_postsFocusUpdateNotifications;
-(BOOL)_prefersDeferralForFocusUpdateInContext:(id)arg0 ;
-(BOOL)_prefersFocusContainment;
-(BOOL)_requiresFocusedItemToHaveContainingView;
-(BOOL)_safari_moveFocusToNextGroup;
-(BOOL)_safari_moveFocusToPreviousGroup;
-(BOOL)_shouldRestoreFocusInContext:(id)arg0 ;
-(BOOL)_uiktest_updateFocusToItem:(id)arg0 ;
-(BOOL)_updateFocusImmediatelyToEnvironment:(id)arg0 ;
-(BOOL)_updateFocusImmediatelyToEnvironment:(id)arg0 startDeferringOnLostFocus:(BOOL)arg1 suppressLostFocusUpdate:(BOOL)arg2 ;
-(BOOL)_updateFocusImmediatelyWithContext:(id)arg0 ;
-(BOOL)_updateFocusWithContext:(id)arg0 report:(id)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(id)_configureFocusDeferralIfNecessaryForContext:(id)arg0 ;
-(id)_contextForUpdateToEnvironment:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(id)_contextForUpdateToEnvironment:(id)arg0 withAnimationCoordinator:(id)arg1 allowsFocusRestoration:(BOOL)arg2 ;
-(id)_init;
-(id)_initWithFocusEnabled:(BOOL)arg0 sceneComponent:(id)arg1 ;
-(id)_preferredFirstResponderFocusSystemForFocusedItem:(id)arg0 ;
-(id)_sceneComponent;
-(id)_simulatedProgrammaticFocusUpdateToEnvironment:(id)arg0 ;
-(id)_topEnvironment;
-(id)_validatedAppearingFocusEnvironmentRequest;
-(id)_validatedPendingFocusUpdateRequest;
-(id)focusedWindowForFocusCastingController:(id)arg0 ;
-(id)init;
-(void)_cancelPendingFocusRestoration;
-(void)_didFinishUpdatingFocusInContext:(id)arg0 ;
-(void)_dropFocusAndStartDeferring:(BOOL)arg0 suppressUpdate:(BOOL)arg1 ;
-(void)_enableWithoutFocusRestoration;
-(void)_firstResponderDidUpdateFromResponder:(id)arg0 ;
-(void)_focusBehaviorDidChange:(id)arg0 ;
-(void)_focusEnvironmentDidAppear:(id)arg0 ;
-(void)_focusEnvironmentWillDisappear:(id)arg0 ;
-(void)_handleFocusMovementAction:(id)arg0 ;
-(void)_hasSeenFocusedItemDidExpire;
-(void)_performWithoutFocusUpdates:(id)arg0 ;
-(void)_reevaluateLockedEnvironments;
-(void)_requestFocusEffectUpdateToEnvironment:(id)arg0 ;
-(void)_requestFocusUpdate:(id)arg0 ;
-(void)_resetFocusDeferral;
-(void)_sendDidUpdateFocusNotificationsInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)_sendNotificationsForFocusUpdateInContext:(id)arg0 withAnimationCoordinator:(id)arg1 usingBlock:(id)arg2 ;
-(void)_sendWillUpdateFocusNotificationsInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)_setNeedsFocusRestoration;
-(void)_startDeferringFocusIfSupported;
-(void)_syncResponderWithFocusUpdateContext:(id)arg0 ;
-(void)_tickHasSeenFocusedItemTimer:(BOOL)arg0 ;
-(void)_uiktest_disableFocusDeferral;
-(void)_uiktest_disableThrottle;
-(void)_updateFocusEffectForItem:(id)arg0 ;
-(void)_updateFocusUpdateThrottle;
-(void)_updateWantsModernRing;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)requestFocusUpdateToEnvironment:(id)arg0 ;
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;


@end


#endif