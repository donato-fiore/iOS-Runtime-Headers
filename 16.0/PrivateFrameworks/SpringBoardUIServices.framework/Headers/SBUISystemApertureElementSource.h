// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUISYSTEMAPERTUREELEMENTSOURCE_H
#define SBUISYSTEMAPERTUREELEMENTSOURCE_H

@class NSMutableDictionary, NSArray, UIViewController<SBUISystemApertureElement>, NSLayoutConstraint, NSHashTable, NSMutableArray, UIScene, NSString, UIView, UIWindow, BSSettings, UIWindowScene;
@protocol _UISceneComponentProviding, _UISceneSettingsDiffAction, UIGestureRecognizerDelegate, SBUISystemApertureHostedElementContext, SBUISystemApertureElementProviding;

#import <Foundation/Foundation.h>

#import "_SBUISystemApertureAlertingAssertion.h"
#import "SBUIDependencyGestureRecognizer.h"
#import "SBUISystemApertureElementConfiguration.h"
#import "SBUISystemApertureElementTransitionContext.h"

@interface SBUISystemApertureElementSource : NSObject <_UISceneComponentProviding, _UISceneSettingsDiffAction, UIGestureRecognizerDelegate, SBUISystemApertureHostedElementContext>

 {
    NSMutableDictionary *_constraintsByLayoutMode;
}


@property (copy, nonatomic) NSArray *_activeConstraintsForLayoutMode; // ivar: __activeConstraintsForLayoutMode
@property (weak, nonatomic) UIViewController<SBUISystemApertureElement> *_elementViewController; // ivar: __elementViewController
@property (copy, nonatomic) NSLayoutConstraint *_maximumLeadingViewWidthConstraint; // ivar: __maximumLeadingViewWidthConstraint
@property (copy, nonatomic) NSLayoutConstraint *_maximumTrailingViewWidthConstraint; // ivar: __maximumTrailingViewWidthConstraint
@property (retain, nonatomic) NSHashTable *_observers; // ivar: __observers
@property (copy, nonatomic) NSMutableArray *_pendingCoordinatedAnimations; // ivar: __pendingCoordinatedAnimations
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (retain, nonatomic, getter=_alertingAssertion, setter=_setAlertingAssertion:) _SBUISystemApertureAlertingAssertion *alertingAssertion; // ivar: _alertingAssertion
@property (readonly, nonatomic) NSString *associatedScenePersistenceIdentifier;
@property (weak, nonatomic) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SBUIDependencyGestureRecognizer *dependencyGestureRecognizer; // ivar: _dependencyGestureRecognizer
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL elementCanRequestAlertingAssertion; // ivar: _elementCanRequestAlertingAssertion
@property (nonatomic) BOOL elementHasMenuPresentation; // ivar: _elementHasMenuPresentation
@property (retain, nonatomic) UIWindow *elementViewControllerWindow; // ivar: _elementViewControllerWindow
@property (readonly, nonatomic, getter=isFallbackContext) BOOL fallbackContext;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) BSSettings *lastKnownOtherSettings; // ivar: _lastKnownOtherSettings
@property (readonly, weak, nonatomic) UIView *layoutGuideRootView;
@property (readonly, nonatomic) NSInteger layoutMode;
@property (nonatomic) NSInteger layoutModeAsFarAsClientsAreConcerned; // ivar: _layoutModeAsFarAsClientsAreConcerned
@property (readonly, nonatomic) SBUISystemApertureElementConfiguration *mutableConfiguration; // ivar: _mutableConfiguration
@property (readonly, nonatomic, getter=isPresentationPossible) BOOL presentationPossible; // ivar: _presentationPossible
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController<SBUISystemApertureElement> *systemApertureElement;
@property (weak, nonatomic) NSObject<SBUISystemApertureElementProviding> *systemApertureElementProvider;
@property (weak, nonatomic) NSObject<SBUISystemApertureElementProviding> *systemApertureElementViewControllerProvider; // ivar: _systemApertureElementViewControllerProvider
@property (retain, nonatomic) SBUISystemApertureElementTransitionContext *transitionContext; // ivar: _transitionContext
@property (weak, nonatomic) UIWindowScene *windowScene; // ivar: _windowScene


+(id)openSources;
+(id)unassociatedContext;
+(void)_addSource:(id)arg0 ;
+(void)_removeSource:(id)arg0 ;
-(BOOL)_elementIsInAWindow;
-(BOOL)_elementRequiresConstraintBasedLayout;
-(BOOL)_elementSupportsDynamicResizing;
-(BOOL)_wantsCenteredCustomLayout;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)_FBSScene;
-(id)_constraintsForLayoutMode:(NSInteger)arg0 ;
-(id)_settingsDiffActionsForScene:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithScene:(id)arg0 ;
-(id)requestAlertingAssertion;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGRect )anchorFrameForLeadingView;
-(struct CGRect )anchorFrameForMinimalView;
-(struct CGRect )anchorFrameForTrailingView;
-(void)_activateConstraintsForActiveLayoutModeIfNeeded:(NSInteger)arg0 ;
-(void)_activateConstraintsForLayoutMode:(NSInteger)arg0 ;
-(void)_conformsToSystemApertureElementContextPrivate;
-(void)_conformsToSystemApertureHostedElementContext;
-(void)_contentSizeCategoryDidChange;
-(void)_ensureAccessoryView:(id)arg0 hasLayoutFrame:(struct CGRect )arg1 ;
-(void)_ensureAccessoryViewLayoutForTransitionWithAnimator:(id)arg0 ;
-(void)_ensureElementViewControllerIsInAWindow;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg0 usingBlock:(id)arg1 ;
-(void)_handleAlertingAction:(id)arg0 ;
-(void)_handleGestureDependencyChange:(id)arg0 ;
-(void)_handleResizeSceneAction:(id)arg0 ;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;
-(void)_performElementUpdate;
-(void)_performElementUpdateWithActions:(id)arg0 ;
-(void)_performElementUpdateWithActionsIfPossible:(id)arg0 ;
-(void)_sceneWillInvalidate:(id)arg0 ;
-(void)_sendActionForCommand:(NSInteger)arg0 ;
-(void)_sendActions:(id)arg0 ;
-(void)_updateElementCanRequestAlertingAssertion;
-(void)_updateTraitCollectionForElementIfNeeded;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)elementDidDismissMenu;
-(void)elementWillPresentMenu;
-(void)registerWithScene:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)requestNegativeResponseAnimation;
-(void)requestTransitionToMaximumSupportedLayoutMode;
-(void)requestTransitionToPreferredLayoutMode;
-(void)setElementNeedsUpdate;
-(void)setElementNeedsUpdateWithCoordinatedAnimations:(id)arg0 ;
-(void)unregisterFromScene;
-(void)validateConfiguration;


@end


#endif