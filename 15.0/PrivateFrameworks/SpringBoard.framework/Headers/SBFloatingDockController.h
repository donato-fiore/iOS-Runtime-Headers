// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLOATINGDOCKCONTROLLER_H
#define SBFLOATINGDOCKCONTROLLER_H

@class SBFAnalyticsClient, UIApplicationSceneDeactivationAssertion, NSHashTable, SBReusableViewMap, PTToggleTestRecipe, NSString, UIHoverGestureRecognizer, SBFloatingDockViewController, _UILegibilitySettings, SBFolderController, NSSet, SBIconListView, UIViewController, SBFZStackParticipant;
@protocol SBFloatingDockRootViewControllerDelegate, SBFolderPresentationObserver, SBSystemGestureRecognizerDelegate, SBRootFolderPageStateObserver, SBAssistantObserver, BSDescriptionProviding, SBReusableViewMapDelegate, SBLayoutStateTransitionObserver, SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate, SBIdleTimerProviding, SBIconViewQuerying, SBIconLocationPresenting, SBIconViewProviding, BSInvalidatable, SBFloatingDockControllerDelegate;

#import <Foundation/Foundation.h>

#import "SBFloatingDockBehaviorAssertion.h"
#import "SBDeviceOrientationUpdateDeferralAssertion.h"
#import "SBAsynchronousRenderingAssertion.h"
#import "SBFailingSystemGestureRecognizer.h"
#import "SBMainScreenActiveInterfaceOrientationWindow.h"
#import "SBHomeGestureParticipant.h"
#import "SBIconController.h"
#import "SBIndirectPanGestureRecognizer.h"
#import "SBApplication.h"
#import "SBLayoutStateTransitionCoordinator.h"

@interface SBFloatingDockController : NSObject <SBFloatingDockRootViewControllerDelegate, SBFolderPresentationObserver, SBSystemGestureRecognizerDelegate, SBRootFolderPageStateObserver, SBAssistantObserver, BSDescriptionProviding, SBReusableViewMapDelegate, SBLayoutStateTransitionObserver, SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate, SBIdleTimerProviding, SBIconViewQuerying, SBIconLocationPresenting, SBIconViewProviding>

 {
    BOOL _homeScreenTransitioningToTodayView;
    BOOL _homeScreenTodayViewTransitioning;
    NSPointerArray" _floatingDockBehaviorAssertionsByLevel;
    NSPointerArray" _floatingDockWindowLevelAssertionsByPriority;
    SBFAnalyticsClient *_analyticsClient;
    SBFloatingDockBehaviorAssertion *_inAppFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_todayViewFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_iconPullSearchGestureShowingFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_openFolderOverHomeScreenFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_openFolderOverSceneLayoutFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_presentedLibraryFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_activeGestureFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_assistantFloatingDockBehaviorAssertion;
    SBDeviceOrientationUpdateDeferralAssertion *_deferOrientationUpdatesAssertion;
    SBAsynchronousRenderingAssertion *_libraryAsynchronousRenderingAssertion;
    UIApplicationSceneDeactivationAssertion *_libraryResignActiveAssertion;
    NSHashTable *_rootViewControllerOrderingAssertions;
    SBReusableViewMap *_iconViewMap;
    id<BSInvalidatable> *_floatingDockStateDumpHandle;
    id<BSInvalidatable> *_floatingDockRecursiveHitTestingStateDumpHandle;
    id<BSInvalidatable> *_focusAssertion;
    PTToggleTestRecipe *_testRecipe;
}


@property (weak, nonatomic) SBFloatingDockBehaviorAssertion *activeAssertion; // ivar: _activeAssertion
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFloatingDockControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIHoverGestureRecognizer *dismissFloatingDockHoverGestureRecognizer; // ivar: _dismissFloatingDockHoverGestureRecognizer
@property (readonly, nonatomic) SBFailingSystemGestureRecognizer *dismissFloatingDockSystemGestureRecognizer; // ivar: _dismissFloatingDockSystemGestureRecognizer
@property (readonly, nonatomic) CGFloat effectiveFloatingDockHeight;
@property (readonly, nonatomic, getter=isFloatingDockFullyPresented) BOOL floatingDockFullyPresented;
@property (readonly, nonatomic) CGFloat floatingDockHeight;
@property (readonly, nonatomic, getter=isFloatingDockPresented) BOOL floatingDockPresented;
@property (readonly, nonatomic) CGRect floatingDockScreenFrame;
@property (readonly, nonatomic) CGRect floatingDockScreenPresentationFrame;
@property (readonly, nonatomic) SBFloatingDockViewController *floatingDockViewController;
@property (readonly, nonatomic) CGFloat floatingDockViewTopMargin;
@property (readonly, nonatomic) SBMainScreenActiveInterfaceOrientationWindow *floatingDockWindow; // ivar: _floatingDockWindow
@property (readonly, nonatomic, getter=isGesturePossible) BOOL gesturePossible;
@property (readonly, nonatomic) BOOL hasIdleTimerBehaviors;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant; // ivar: _homeGestureParticipant
@property (readonly, nonatomic) SBIconController *iconController; // ivar: _iconController
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic, getter=isLibraryPodIconEnabled) BOOL libraryPodIconEnabled;
@property (readonly, nonatomic) CGFloat maximumDockContinuousCornerRadius;
@property (readonly, nonatomic) CGFloat maximumFloatingDockHeight;
@property (readonly, nonatomic) CGFloat preferredVerticalMargin;
@property (readonly, nonatomic) SBIndirectPanGestureRecognizer *presentFloatingDockIndirectPanGestureRecognizer; // ivar: _presentFloatingDockIndirectPanGestureRecognizer
@property (readonly, nonatomic) SBFolderController *presentedFolderController;
@property (readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property (readonly, nonatomic, getter=isPresentingFolder) BOOL presentingFolder;
@property (readonly, nonatomic, getter=isPresentingLibrary) BOOL presentingLibrary;
@property (readonly, nonatomic, getter=isPresentingLibraryInForeground) BOOL presentingLibraryInForeground;
@property (retain, nonatomic) SBApplication *requestedSuggestedApplication;
@property (readonly, nonatomic) SBIconListView *suggestionsIconListView;
@property (readonly) Class superclass;
@property (weak, nonatomic) SBLayoutStateTransitionCoordinator *transitionCoordinator; // ivar: _transitionCoordinator
@property (readonly, nonatomic) CGFloat translationFromFullyPresentedFrame;
@property (readonly, nonatomic) SBIconListView *userIconListView;
@property (readonly, nonatomic) UIViewController *viewController; // ivar: _viewController
@property (nonatomic) BOOL wasFloatingDockPresentedByPointer; // ivar: _wasFloatingDockPresentedByPointer
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant; // ivar: _zStackParticipant


+(BOOL)isFloatingDockSupported;
+(void)initialize;
-(BOOL)_allowGestureRecognizers;
-(BOOL)_canPresentFloatingDock;
-(BOOL)floatingDockRootViewControllerShouldHandlePanGestureRecognizer:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)handlePromptingUserToUninstallIcon:(id)arg0 location:(id)arg1 ;
-(BOOL)isDefaultLibraryContainerViewControllerForegroundForFloatingDockRootViewController:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocations:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 ;
-(BOOL)isDisplayingIconView:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isIconViewRecycled:(id)arg0 ;
-(BOOL)isPresentingIconLocation:(id)arg0 ;
-(BOOL)shouldShowCloseBoxForIconView:(id)arg0 proposedValue:(BOOL)arg1 ;
-(BOOL)shouldShowHideSuggestionForIconView:(id)arg0 proposedValue:(BOOL)arg1 ;
-(BOOL)viewMap:(id)arg0 shouldRecycleView:(id)arg1 ;
-(CGFloat)_dockProgressForHoverTranslation:(CGFloat)arg0 ;
-(CGFloat)minimumHomeScreenScaleForFloatingDockRootViewController:(id)arg0 ;
-(NSUInteger)_indexOfPointerArray:(id)arg0 ofObject:(*void)arg1 ;
-(NSUInteger)viewMap:(id)arg0 maxRecycledViewsOfClass:(Class)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)dequeueReusableIconViewOfClass:(Class)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 excludingLocations:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 inLocations:(id)arg1 ;
-(id)floatingDockRootViewController:(id)arg0 acquireOrderFloatingDockContainerBeforeLibraryAssertionForReason:(id)arg1 ;
-(id)foregroundLibraryContainerViewControllerForFloatingDockRootViewController:(id)arg0 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 ;
-(id)iconViewMap;
-(id)init;
-(id)initWithAnalyticsClient:(id)arg0 ;
-(id)initWithIconController:(id)arg0 ;
-(id)initWithIconController:(id)arg0 analyticsClient:(id)arg1 ;
-(id)initWithIconController:(id)arg0 applicationController:(id)arg1 recentsController:(id)arg2 recentsDataStore:(id)arg3 transitionCoordinator:(id)arg4 appSuggestionManager:(id)arg5 analyticsClient:(id)arg6 ;
-(id)libraryContainerViewControllerForFloatingDockRootViewController:(id)arg0 ;
-(id)recycledViewsContainerProviderForViewMap:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(void)_addFloatingDockBehaviorAssertion:(id)arg0 withCompletion:(id)arg1 ;
-(void)_addFloatingDockWindowLevelAssertion:(id)arg0 ;
-(void)_clearGestureAssertion;
-(void)_configureFloatingDockBehaviorAssertionForOpenFolder:(id)arg0 atLevel:(NSUInteger)arg1 ;
-(void)_configureFloatingDockBehaviorAssertionForPresentedLibrary:(BOOL)arg0 ;
-(void)_deriveActiveAssertion:(*id)arg0 dockProgress:(*CGFloat)arg1 ;
-(void)_dismissFloatingDockIfPresentedAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_evaluateAssertions:(NSUInteger)arg0 interactive:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)_evaluateAsyncRenderingAssertionForLibrary;
-(void)_evaluateResignActiveAssertionForLibrary;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_handleDismissFloatingDockHoverGesture:(id)arg0 ;
-(void)_handleSystemGestureRecognizer:(id)arg0 ;
-(void)_handleTransitionForFolder:(id)arg0 atLevel:(NSUInteger)arg1 presenting:(BOOL)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)_presentFloatingDockIfDismissedAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_recalculateWindowLevelForWindowLevelAssertions;
-(void)_removeFloatingDockBehaviorAssertion:(id)arg0 withCompletion:(id)arg1 ;
-(void)_removeFloatingDockWindowLevelAssertion:(id)arg0 ;
-(void)_setupStateDumper;
-(void)_updateFloatingDockBehaviorAssertionsInteractive:(BOOL)arg0 completion:(id)arg1 ;
-(void)_updateFocusAssertion;
-(void)assistantDidDisappear:(id)arg0 ;
-(void)assistantWillAppear:(id)arg0 ;
-(void)configureIconView:(id)arg0 forIcon:(id)arg1 ;
-(void)dealloc;
-(void)dismissFloatingDockIfPresentedAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)dismissPresentedFolderAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissPresentedFolderAnimated:(BOOL)arg0 withTransitionContext:(id)arg1 completion:(id)arg2 ;
-(void)dismissPresentedLibraryAnimated:(BOOL)arg0 withTransitionContext:(id)arg1 completion:(id)arg2 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(id)arg0 ;
-(void)floatingDockRootViewController:(id)arg0 didChangeToFrame:(struct CGRect )arg1 ;
-(void)floatingDockRootViewController:(id)arg0 didCompleteTransitionWithLibraryToPresented:(BOOL)arg1 ;
-(void)floatingDockRootViewController:(id)arg0 didUpdateContentEligibilityForAsynchronousRendering:(BOOL)arg1 ;
-(void)floatingDockRootViewController:(id)arg0 floatingDockWantsToBePresented:(BOOL)arg1 ;
-(void)floatingDockRootViewController:(id)arg0 modifyProgress:(CGFloat)arg1 interactive:(BOOL)arg2 completion:(id)arg3 ;
-(void)floatingDockRootViewController:(id)arg0 willChangeToHeight:(CGFloat)arg1 interactive:(BOOL)arg2 ;
-(void)floatingDockRootViewController:(id)arg0 willPerformTransitionWithFolder:(id)arg1 presenting:(BOOL)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)floatingDockRootViewController:(id)arg0 willPerformTransitionWithLibraryToPresented:(BOOL)arg1 ;
-(void)floatingDockRootViewControllerDidEndPresentationTransition:(id)arg0 ;
-(void)handlePresentFloatingDockHoverGesture:(id)arg0 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg0 ;
-(void)iconManager:(id)arg0 willPerformTransitionWithFolder:(id)arg1 presenting:(BOOL)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)layoutUserControlledIconListsWithAnimationType:(NSInteger)arg0 forceRelayout:(BOOL)arg1 ;
-(void)presentFloatingDockIfDismissedAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)presentFolderForIcon:(id)arg0 location:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)recycleIconView:(id)arg0 ;
-(void)registerAsSharedInstance;
-(void)rootFolderPageStateProvider:(id)arg0 didContinueTransitionToState:(NSInteger)arg1 progress:(CGFloat)arg2 ;
-(void)rootFolderPageStateProvider:(id)arg0 didEndTransitionFromState:(NSInteger)arg1 toState:(NSInteger)arg2 successfully:(BOOL)arg3 ;
-(void)rootFolderPageStateProvider:(id)arg0 willBeginTransitionToState:(NSInteger)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(void)rootFolderPageStateProvider:(id)arg0 willEndTransitionToState:(NSInteger)arg1 successfully:(BOOL)arg2 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif