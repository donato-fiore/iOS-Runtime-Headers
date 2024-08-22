// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBANNERMANAGER_H
#define SBBANNERMANAGER_H

@class BNBannerController, BNContentViewController, BNBannerSourceListener, NSMutableArray, UIPanGestureRecognizer, NSMapTable, NSHashTable, NSMutableSet, UIWindow, NSString;
@protocol BNPostingPrivate, BNPresentingDelegate, BNBannerSourceListenerDelegate, SBAssistantObserver, SBPlatterHomeGestureManagerDelegate, BNPosting, SBButtonEventsHandler, BSInvalidatable, BNLayoutManaging;

#import <Foundation/Foundation.h>

#import "SBBannerAuthority.h"
#import "SBPlatterHomeGestureManager.h"

@interface SBBannerManager : NSObject <BNPostingPrivate, BNPresentingDelegate, BNBannerSourceListenerDelegate, SBAssistantObserver, SBPlatterHomeGestureManagerDelegate, BNPosting, SBButtonEventsHandler>

 {
    SBBannerAuthority *_bannerAuthority;
    BNBannerController *_bannerController;
    BNContentViewController *_contentViewController;
    BNBannerSourceListener *_bannerSourceListener;
    NSMutableArray *_windowLevelAssertions;
    UIPanGestureRecognizer *_panGesture;
    BOOL _installedAsSystemGesture;
    NSMutableArray *_gesturePriorityAssertions;
    NSMapTable *_presentablesToGesturePriorityAssertions;
    id<BSInvalidatable> *_presenterVisibilityGestureRecognizerPriorityAssertion;
    NSHashTable *_suppressionAssertions;
    NSHashTable *_transitionObservers;
    NSMutableSet *_clientSuppressionAssertions;
    id<BSInvalidatable> *_systemStatusBarAssertion;
    id<BSInvalidatable> *_appsStatusBarAssertion;
    NSMutableSet *_statusBarAssertionReasons;
    SBPlatterHomeGestureManager *_platterHomeGestureManager;
    NSMapTable *_presentableHomeGestureParticipantsToGesturePriorityAssertions;
}


@property (readonly, nonatomic) UIWindow *bannerWindow; // ivar: _bannerWindow
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<BNLayoutManaging> *layoutManager;
@property (readonly, nonatomic, getter=isPresentingBanner) BOOL presentingBanner;
@property (readonly) Class superclass;


+(id)_defaultAuthorizedBundleIDs;
// -(BOOL)_handleButtonEventWithTest:(id)arg0 handler:(unk)arg1  ;
-(BOOL)_isPresentableHUD:(id)arg0 ;
-(BOOL)_shouldHideStatusBarForPresentable:(id)arg0 ;
-(BOOL)bannerSourceListener:(id)arg0 recommendsSuspending:(BOOL)arg1 forReason:(id)arg2 revokingCurrent:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)bannerSourceListener:(id)arg0 requestsPostingPresentable:(id)arg1 options:(NSUInteger)arg2 userInfo:(id)arg3 error:(*id)arg4 ;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVoiceCommandButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)postPresentable:(id)arg0 withOptions:(NSUInteger)arg1 userInfo:(id)arg2 error:(*id)arg3 ;
-(NSInteger)platterHomeGestureManager:(id)arg0 zStackParticipantIdentifierForParticipant:(id)arg1 ;
-(id)_acquireGestureRecognizerPriorityAssertionWithPriority:(NSInteger)arg0 reason:(id)arg1 ;
-(id)_bannerSuspensionReasonForSuppressionAssertionReason:(id)arg0 ;
-(id)_homeGestureContextForPresentable:(id)arg0 ;
-(id)_layoutDescriptionWithBounds:(struct CGRect )arg0 ;
-(id)_newBannerWindow;
-(id)_platterHomeGestureManager;
-(id)_statusBarAssertionReasonForPresentable:(id)arg0 ;
-(id)acquireBannerSuppressionAssertionForReason:(id)arg0 ;
-(id)acquireGestureRecognizerPriorityAssertionForPresentable:(id)arg0 priority:(NSInteger)arg1 reason:(id)arg2 ;
-(id)acquireWindowLevelAssertionWithPriority:(NSInteger)arg0 windowLevel:(CGFloat)arg1 reason:(id)arg2 ;
-(id)bannerSourceListener:(id)arg0 layoutDescriptionWithError:(*id)arg1 ;
-(id)bannerSourceListener:(id)arg0 newBannerSourceListenerPresentableForBannerSpecification:(id)arg1 scene:(id)arg2 readyCompletion:(id)arg3 ;
-(id)bannerSourceListener:(id)arg0 requestsRevokingPresentablesWithIdentification:(id)arg1 reason:(id)arg2 animated:(BOOL)arg3 userInfo:(id)arg4 error:(*id)arg5 ;
-(id)bannerSourceListener:(id)arg0 sceneSpecificationForBannerSceneWithIdentifier:(id)arg1 forProcess:(id)arg2 userInfo:(id)arg3 ;
-(id)init;
-(id)panGestureRecognizerForPresenter:(id)arg0 ;
-(id)platterHomeGestureManager:(id)arg0 gestureRecognizerPriorityAssertionForParticipant:(id)arg1 reason:(id)arg2 ;
-(id)platterHomeGestureManager:(id)arg0 orderedParticipants:(id)arg1 ;
-(id)platterHomeGestureManager:(id)arg0 windowForParticipant:(id)arg1 ;
-(id)revokePresentablesWithIdentification:(id)arg0 reason:(id)arg1 options:(NSUInteger)arg2 animated:(BOOL)arg3 userInfo:(id)arg4 error:(*id)arg5 ;
-(id)revokePresentablesWithIdentification:(id)arg0 reason:(id)arg1 options:(NSUInteger)arg2 userInfo:(id)arg3 error:(*id)arg4 ;
-(id)userInterfaceStyleTransitionAnimationSettingsForPresentable:(id)arg0 forTransitionToStyle:(NSInteger)arg1 ;
-(struct CGPoint )presenter:(id)arg0 gestureRecognizer:(id)arg1 locationForEvent:(id)arg2 inView:(id)arg3 ;
-(struct CGPoint )presenter:(id)arg0 gestureRecognizer:(id)arg1 locationForTouch:(id)arg2 inView:(id)arg3 ;
-(struct CGPoint )presenter:(id)arg0 gestureRecognizer:(id)arg1 translationInView:(id)arg2 ;
-(struct CGPoint )presenter:(id)arg0 gestureRecognizer:(id)arg1 velocityInView:(id)arg2 ;
-(void)_acquirePresenterVisibilityGestureRecognizerPriorityAssertion;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg0 usingBlock:(id)arg1 ;
-(void)_hideStatusBarIfNecessaryForPresentable:(id)arg0 ;
-(void)_invalidatePresenterVisibilityGestureRecognizerPriorityAssertion;
-(void)_revealStatusBarIfNecessaryForPresentable:(id)arg0 ;
-(void)_unregisterHomeGestureContextForPresentable:(id)arg0 ;
-(void)_updateGesturePriority;
-(void)_updateWindowLevel;
-(void)addTransitionObserver:(id)arg0 ;
-(void)assistantWillAppear:(id)arg0 ;
-(void)bannerSourceListener:(id)arg0 didUpdateInitialSceneSettingsWithParameters:(id)arg1 ;
-(void)bannerSourceListener:(id)arg0 presentationSize:(struct CGSize *)arg1 containerSize:(struct CGSize *)arg2 error:(*id)arg3 ;
-(void)dismissAllBannersAnimated:(BOOL)arg0 reason:(id)arg1 ;
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


@end


#endif