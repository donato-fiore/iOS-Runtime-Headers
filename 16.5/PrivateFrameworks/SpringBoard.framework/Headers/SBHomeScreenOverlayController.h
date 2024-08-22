// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMESCREENOVERLAYCONTROLLER_H
#define SBHOMESCREENOVERLAYCONTROLLER_H

@class NSHashTable, NSCountedSet, SBFFrameRateAssertion, UIViewController, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, UIViewController<SBHVisibleContentPresenter>, UIViewController<SBHLibraryViewControllerPresenter><SBHWidgetSheetViewControllerPresenter>, SBFWindow;
@protocol SBBarSwipeAffordanceDelegate, SBBarSwipeAffordanceObserver, SBHomeScreenOverlayViewControllerDelegate, UIGestureRecognizerDelegate, SBFOverlayControlling, SBFIdleTimerBehaviorProviding, CSExternalBehaviorProviding, CSExternalEventHandling, BSDescriptionProviding, SBFOverlayDismissalDelegate, SBHVisibleContentPresenter, SBHomeScreenOverlayControllerDelegate, BSInvalidatable, SBIconListLayoutProvider;

#import <Foundation/Foundation.h>

#import "SBBarSwipeAffordanceViewController.h"
#import "SBHomeScreenOverlayViewController.h"

@interface SBHomeScreenOverlayController : NSObject <SBBarSwipeAffordanceDelegate, SBBarSwipeAffordanceObserver, SBHomeScreenOverlayViewControllerDelegate, UIGestureRecognizerDelegate, SBFOverlayControlling, SBFIdleTimerBehaviorProviding, CSExternalBehaviorProviding, CSExternalEventHandling, BSDescriptionProviding, SBFOverlayDismissalDelegate, SBHVisibleContentPresenter>

 {
    NSHashTable *_observers;
    NSCountedSet *_reasonsToDisablePanGestureRecognizer;
    SBFFrameRateAssertion *_frameRateAssertion;
}


@property (readonly, nonatomic) UIViewController *activeSidebarViewController;
@property (nonatomic, getter=isAnimatingPresentationProgress) BOOL animatingPresentationProgress; // ivar: _animatingPresentationProgress
@property (nonatomic) NSUInteger contentVisibility;
@property (readonly, nonatomic) CGFloat contentWidth;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) CGFloat customIdleExpirationTimeout;
@property (readonly, nonatomic) CGFloat customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHomeScreenOverlayControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIPanGestureRecognizer *dismissPanGestureRecognizer; // ivar: _dismissPanGestureRecognizer
@property (readonly, nonatomic) UITapGestureRecognizer *dismissTapGestureRecognizer; // ivar: _dismissTapGestureRecognizer
@property (weak, nonatomic) NSObject<SBFOverlayDismissalDelegate> *dismissalDelegate; // ivar: _dismissalDelegate
@property (nonatomic, getter=isDismissing) BOOL dismissing; // ivar: _dismissing
@property (retain, nonatomic) NSObject<BSInvalidatable> *displayLayoutAssertion; // ivar: _displayLayoutAssertion
@property (weak, nonatomic) UIViewController *existingAvocadoVC; // ivar: _existingAvocadoVC
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBBarSwipeAffordanceViewController *homeAffordanceViewController; // ivar: _homeAffordanceViewController
@property (readonly, nonatomic) NSInteger idleTimerDuration;
@property (readonly, nonatomic) NSInteger idleTimerMode;
@property (readonly, nonatomic) NSInteger idleWarnMode;
@property (readonly, nonatomic) NSUInteger indirectScreenEdgeSystemGestureType; // ivar: _indirectScreenEdgeSystemGestureType
@property (nonatomic) CGFloat initialPresentationProgress; // ivar: _initialPresentationProgress
@property (retain, nonatomic) UIViewController<SBHVisibleContentPresenter> *leadingSidebarViewController;
@property (readonly, nonatomic) NSObject<SBIconListLayoutProvider> *listLayoutProvider; // ivar: _listLayoutProvider
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (nonatomic, getter=isOverlayAppearing) BOOL overlayAppearing; // ivar: _overlayAppearing
@property (readonly, nonatomic) SBHomeScreenOverlayViewController *overlayViewController; // ivar: _overlayViewController
@property (readonly, nonatomic) NSInteger participantState;
@property (nonatomic) CGFloat presentationProgress;
@property (readonly, nonatomic, getter=isPresented) BOOL presented;
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (readonly, nonatomic) NSUInteger screenEdgeSystemGestureType; // ivar: _screenEdgeSystemGestureType
@property (readonly, nonatomic) NSInteger scrollingStrategy;
@property (readonly, nonatomic) NSUInteger scrunchSystemGestureType; // ivar: _scrunchSystemGestureType
@property (nonatomic) BOOL shouldUseReducedMotionAnimation;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController<SBHVisibleContentPresenter> *trailingSidebarViewController;
@property (readonly, nonatomic) UIViewController<SBHLibraryViewControllerPresenter><SBHWidgetSheetViewControllerPresenter> *viewController;
@property (readonly, nonatomic) SBFWindow *window; // ivar: _window


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)interceptDismissalGestureForOverlayController:(id)arg0 ;
-(BOOL)isEditingForHomeScreenOverlayViewController:(id)arg0 ;
-(BOOL)showsAddWidgetButtonWhileEditingForHomeScreenOverlayViewController:(id)arg0 ;
-(BOOL)showsDoneButtonWhileEditingForHomeScreenOverlayViewController:(id)arg0 ;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(CGFloat)_directionCoefficient;
-(CGFloat)finalPresentationProgressForTranslation:(CGFloat)arg0 velocity:(CGFloat)arg1 initialPresentationProgress:(CGFloat)arg2 fromLeading:(BOOL)arg3 ;
-(CGFloat)layerPresentationProgress;
-(CGFloat)presentationProgressForTranslation:(CGFloat)arg0 initialPresentationProgress:(CGFloat)arg1 fromLeading:(BOOL)arg2 ;
-(NSUInteger)barSwipeAffordanceView:(id)arg0 systemGestureTypeForType:(NSInteger)arg1 ;
-(id)_rootViewController;
-(id)backgroundViewForEditingDoneButtonForHomeScreenOverlayViewController:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithListLayoutProvider:(id)arg0 ;
-(id)initWithListLayoutProvider:(id)arg0 windowLevel:(CGFloat)arg1 windowScene:(id)arg2 traitsRole:(id)arg3 zStackParticipantIdentifier:(NSInteger)arg4 screenEdgeSystemGestureType:(NSUInteger)arg5 indirectScreenEdgeSystemGestureType:(NSUInteger)arg6 scrunchSystemGestureType:(NSUInteger)arg7 secure:(BOOL)arg8 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)testScrollView;
-(void)_addSystemGestureRecognizer;
-(void)_configureDismissGestureRecognizer;
-(void)_configureOverlayViewController;
-(void)_dismissLevelAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_dismissScrollGestureBegan:(id)arg0 ;
-(void)_dismissScrollGestureChanged:(id)arg0 ;
-(void)_dismissScrollGestureEndedOrCancelled:(id)arg0 ;
-(void)_enumerateHomeScreenOverlayObserversUsingBlock:(id)arg0 ;
-(void)_removeSystemGestureRecognizer;
-(void)_setDisplayLayoutElementActive:(BOOL)arg0 ;
-(void)_setHidden:(BOOL)arg0 ;
-(void)_setHitTestingDisabled:(BOOL)arg0 ;
-(void)addHomeScreenOverlayObserver:(id)arg0 ;
-(void)addReasonToDisableDismissGestureRecognizer:(id)arg0 ;
-(void)animatePresentationProgress:(CGFloat)arg0 withGestureLiftOffVelocity:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)cleanUpAfterSettingPresentationProgress:(CGFloat)arg0 ;
-(void)conformsToCSBehaviorProviding;
-(void)conformsToCSEventHandling;
-(void)conformsToCSExternalBehaviorProviding;
-(void)dismissAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)dismissScrollGestureUpdated:(id)arg0 ;
-(void)dismissTapGestureUpdated:(id)arg0 ;
-(void)dismissUsingViewControllerTransitionCoordinator:(id)arg0 ;
-(void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg0 ;
-(void)homeScreenOverlayViewController:(id)arg0 setSuppressesEditingStateForListView:(BOOL)arg1 ;
-(void)homeScreenOverlayViewControllerRequestsDismissal:(id)arg0 ;
-(void)homeScreenOverlayViewWantsToEndEditing:(id)arg0 ;
-(void)homeScreenOverlayViewWantsWidgetEditingViewControllerPresented:(id)arg0 ;
-(void)overlayControllerRequestsDismissal:(id)arg0 ;
-(void)prepareToSetPresentationProgress:(CGFloat)arg0 fromPresentationProgress:(CGFloat)arg1 ;
-(void)presentAnimated:(BOOL)arg0 ;
-(void)presentAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)presentAnimated:(BOOL)arg0 fromLeading:(BOOL)arg1 ;
-(void)presentAnimated:(BOOL)arg0 fromLeading:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)removeHomeScreenOverlayObserver:(id)arg0 ;
-(void)removeReasonToDisableDismissGestureRecognizer:(id)arg0 ;
-(void)updateExtraButtonVisibilityAnimated:(BOOL)arg0 ;


@end


#endif