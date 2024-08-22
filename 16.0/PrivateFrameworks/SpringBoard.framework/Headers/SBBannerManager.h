// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBBANNERMANAGER_H
#define SBBANNERMANAGER_H

@class NSMapTable, BNBannerSourceListener, NSMutableArray, NSHashTable, NSMutableSet, NSString;
@protocol BNPostingPrivate, BNPresentingDelegate, BNBannerSourceListenerDelegate, SBAssistantObserver, SBPlatterHomeGestureManagerDelegate, SBWindowLevelAssertionManagerDelegate, BNPosting, SBButtonEventsHandler, SBWindowLevelAssertionProviding, BSInvalidatable, SBPresentableIntercepting;

#import <Foundation/Foundation.h>

#import "SBBannerAuthority.h"
#import "SBWindowLevelAssertionManager.h"
#import "SBPlatterHomeGestureManager.h"

@interface SBBannerManager : NSObject <BNPostingPrivate, BNPresentingDelegate, BNBannerSourceListenerDelegate, SBAssistantObserver, SBPlatterHomeGestureManagerDelegate, SBWindowLevelAssertionManagerDelegate, BNPosting, SBButtonEventsHandler, SBWindowLevelAssertionProviding>

 {
    SBBannerAuthority *_bannerAuthority;
    NSMapTable *_windowScenesToBannerControllers;
    NSMapTable *_windowScenesToBannerWindows;
    BNBannerSourceListener *_bannerSourceListener;
    SBWindowLevelAssertionManager *_windowLevelAssertionManager;
    NSMapTable *_windowScenesToPanGestures;
    NSMutableArray *_gesturePriorityAssertions;
    NSMapTable *_gesturePriorityAssertionsToWindowScenes;
    NSMapTable *_presentablesToGesturePriorityAssertions;
    NSMapTable *_windowScenesToPresenterVisibilityGesturePriorityAssertions;
    NSHashTable *_suppressionAssertions;
    NSHashTable *_transitionObservers;
    NSMutableSet *_clientSuppressionAssertions;
    id<BSInvalidatable> *_systemStatusBarAssertion;
    id<BSInvalidatable> *_appsStatusBarAssertion;
    NSMutableSet *_statusBarAssertionReasons;
    UIEdgeInsets _additionalEdgeInsets;
    SBPlatterHomeGestureManager *_platterHomeGestureManager;
    NSMapTable *_presentableHomeGestureParticipantsToGesturePriorityAssertions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDisplayingBannerInAnyWindowScene) BOOL displayingBannerInAnyWindowScene;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBPresentableIntercepting> *presentableInterceptor; // ivar: _presentableInterceptor
@property (readonly) Class superclass;


+(id)_defaultAuthorizedBundleIDs;
// -(BOOL)_handleButtonEventWithTest:(id)arg0 handler:(unk)arg1  ;
-(BOOL)_isPresentableHUD:(id)arg0 ;
-(BOOL)_isPresentableNotice:(id)arg0 ;
-(BOOL)_shouldHideStatusBarForPresentable:(id)arg0 ;
-(BOOL)bannerSourceListener:(id)arg0 recommendsSuspending:(BOOL)arg1 forReason:(id)arg2 revokingCurrent:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)bannerSourceListener:(id)arg0 requestsPostingPresentable:(id)arg1 options:(NSUInteger)arg2 userInfo:(id)arg3 error:(*id)arg4 ;
-(BOOL)bannerSourceListenerShouldEnablePresentableContextInterface:(id)arg0 ;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVoiceCommandButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)isDisplayingBannerInWindowScene:(id)arg0 ;
-(BOOL)postPresentable:(id)arg0 withOptions:(NSUInteger)arg1 userInfo:(id)arg2 error:(*id)arg3 ;
-(CGFloat)presenterMinimumPreferredTopEdgeInset:(id)arg0 ;
-(NSInteger)platterHomeGestureManager:(id)arg0 zStackParticipantIdentifierForParticipant:(id)arg1 ;
-(id)_acquireGestureRecognizerPriorityAssertionWithPriority:(NSInteger)arg0 windowScene:(id)arg1 reason:(id)arg2 ;
-(id)_bannerControllerForWindowScene:(id)arg0 ;
-(id)_bannerWindowForWindowScene:(id)arg0 ;
-(id)_bannerWindowForWindowScene:(id)arg0 creatingIfNecessary:(BOOL)arg1 ;
-(id)_contentViewControllerForWindowScene:(id)arg0 ;
-(id)_homeGestureContextForPresentable:(id)arg0 windowScene:(id)arg1 ;
-(id)_layoutDescriptionWithBounds:(struct CGRect )arg0 inWindowScene:(id)arg1 ;
-(id)_panGestureInWindowScene:(id)arg0 ;
-(id)_panGestureInWindowScene:(id)arg0 creatingIfNecessary:(BOOL)arg1 ;
-(id)_platterHomeGestureManager;
-(id)_presenterForPresentable:(id)arg0 ;
-(id)_presenterForWindowScene:(id)arg0 ;
-(id)_statusBarAssertionReasonForPresentable:(id)arg0 ;
-(id)_windowForPresenter:(id)arg0 ;
-(id)_windowSceneForBannerController:(id)arg0 ;
-(id)_windowSceneForPresenter:(id)arg0 ;
-(id)acquireBannerSuppressionAssertionForReason:(id)arg0 ;
-(id)acquireGestureRecognizerPriorityAssertionForPresentable:(id)arg0 priority:(NSInteger)arg1 reason:(id)arg2 ;
-(id)acquireWindowLevelAssertionWithPriority:(NSInteger)arg0 windowLevel:(CGFloat)arg1 windowScene:(id)arg2 reason:(id)arg3 ;
-(id)bannerSourceListener:(id)arg0 layoutDescriptionWithError:(*id)arg1 ;
-(id)bannerSourceListener:(id)arg0 newBannerSourceListenerPresentableForBannerSpecification:(id)arg1 serviceDomain:(id)arg2 scene:(id)arg3 readyCompletion:(id)arg4 ;
-(id)bannerSourceListener:(id)arg0 requestsRevokingPresentablesWithIdentification:(id)arg1 reason:(id)arg2 animated:(BOOL)arg3 userInfo:(id)arg4 error:(*id)arg5 ;
-(id)bannerSourceListener:(id)arg0 sceneSpecificationForBannerSceneWithIdentifier:(id)arg1 forProcess:(id)arg2 userInfo:(id)arg3 ;
-(id)bannerWindowInWindowScene:(id)arg0 ;
-(id)init;
-(id)layoutManagerInWindowScene:(id)arg0 ;
-(id)newBannerControllerForWindowScene:(id)arg0 ;
-(id)panGestureRecognizerForPresenter:(id)arg0 ;
-(id)platterHomeGestureManager:(id)arg0 gestureRecognizerPriorityAssertionForParticipant:(id)arg1 reason:(id)arg2 ;
-(id)platterHomeGestureManager:(id)arg0 orderedParticipants:(id)arg1 ;
-(id)platterHomeGestureManager:(id)arg0 windowForParticipant:(id)arg1 ;
-(id)revokePresentablesWithIdentification:(id)arg0 reason:(id)arg1 options:(NSUInteger)arg2 animated:(BOOL)arg3 userInfo:(id)arg4 error:(*id)arg5 ;
-(id)revokePresentablesWithIdentification:(id)arg0 reason:(id)arg1 options:(NSUInteger)arg2 userInfo:(id)arg3 error:(*id)arg4 ;
-(id)userInterfaceStyleTransitionAnimationSettingsForPresentable:(id)arg0 forTransitionToStyle:(NSInteger)arg1 ;
-(id)windowSceneForPresentable:(id)arg0 ;
-(struct CGPoint )presenter:(id)arg0 gestureRecognizer:(id)arg1 locationForEvent:(id)arg2 inView:(id)arg3 ;
-(struct CGPoint )presenter:(id)arg0 gestureRecognizer:(id)arg1 locationForTouch:(id)arg2 inView:(id)arg3 ;
-(struct CGPoint )presenter:(id)arg0 gestureRecognizer:(id)arg1 translationInView:(id)arg2 ;
-(struct CGPoint )presenter:(id)arg0 gestureRecognizer:(id)arg1 velocityInView:(id)arg2 ;
-(void)_acquirePresenterVisibilityGestureRecognizerPriorityAssertionForWindowScene:(id)arg0 ;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg0 usingBlock:(id)arg1 ;
-(void)_hideStatusBarIfNecessaryForPresentable:(id)arg0 ;
-(void)_invalidatePresenterVisibilityGestureRecognizerPriorityAssertionForWindowScene:(id)arg0 ;
-(void)_revealStatusBarIfNecessaryForPresentable:(id)arg0 ;
-(void)_setWindowScene:(id)arg0 forGestureRecognizerPriorityAssertion:(id)arg1 ;
-(void)_systemApertureInsetsDidChange:(id)arg0 ;
-(void)_unregisterHomeGestureContextForPresentable:(id)arg0 ;
-(void)_updateGesturePriorityForGestureRecognizerInWindowScene:(id)arg0 ;
-(void)_updateWindowLevelForScene:(id)arg0 ;
-(void)addTransitionObserver:(id)arg0 ;
-(void)assistantWillAppear:(id)arg0 windowScene:(id)arg1 ;
-(void)bannerSourceListener:(id)arg0 didUpdateInitialSceneSettingsWithParameters:(id)arg1 ;
-(void)bannerSourceListener:(id)arg0 presentationSize:(struct CGSize *)arg1 containerSize:(struct CGSize *)arg2 error:(*id)arg3 ;
-(void)dismissAllBannersInAllWindowScenesAnimated:(BOOL)arg0 reason:(id)arg1 ;
-(void)dismissAllBannersInWindowScene:(id)arg0 animated:(BOOL)arg1 reason:(id)arg2 ;
-(void)platterHomeGestureManager:(id)arg0 participantOwningHomeGestureDidChange:(id)arg1 ;
-(void)presenter:(id)arg0 presentable:(id)arg1 willTransitionToSize:(struct CGSize )arg2 withTransitionCoordinator:(id)arg3 ;
-(void)presenter:(id)arg0 willDismissPresentable:(id)arg1 withTransitionCoordinator:(id)arg2 userInfo:(id)arg3 ;
-(void)presenter:(id)arg0 willPresentPresentable:(id)arg1 withTransitionCoordinator:(id)arg2 userInfo:(id)arg3 ;
-(void)presenter:(id)arg0 willTransitionToSize:(struct CGSize )arg1 withTransitionCoordinator:(id)arg2 ;
-(void)presenterRelinquishesVisibility:(id)arg0 ;
-(void)presenterRequestsVisibility:(id)arg0 ;
-(void)registerAuthority:(id)arg0 forRequesterIdentifier:(id)arg1 ;
-(void)removeTransitionObserver:(id)arg0 ;
-(void)setSuspended:(BOOL)arg0 forReason:(id)arg1 ;
-(void)windowLevelAssertionManager:(id)arg0 didUpdateAssertionsForWindowScene:(id)arg1 ;


@end


#endif