// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLOATINGDOCKROOTVIEWCONTROLLER_H
#define SBFLOATINGDOCKROOTVIEWCONTROLLER_H

@class SBFTouchPassThroughViewController, _UILegibilitySettings, SBFAnalyticsClient, NSString, SBFloatingDockViewController, SBFolderController, NSSet, SBIconListView;
@protocol SBFloatingDockViewControllerDelegate, UIGestureRecognizerDelegate, SBIconViewQuerying, SBIconLocationPresenting, SBFloatingDockRootViewControllerDelegate, BSInvalidatable, SBIconViewProviding;


#import "SBAppSuggestionManager.h"
#import "SBApplicationController.h"
#import "SBWorkspaceApplicationSceneTransitionContext.h"
#import "SBIconController.h"
#import "SBLayoutStateTransitionCoordinator.h"
#import "SBRecentDisplayItemsController.h"
#import "SBRecentDisplayItemsDataStore.h"
#import "SBApplication.h"
#import "SBFloatingDockSuggestionsModel.h"

@interface SBFloatingDockRootViewController : SBFTouchPassThroughViewController <SBFloatingDockViewControllerDelegate, UIGestureRecognizerDelegate, SBIconViewQuerying, SBIconLocationPresenting>

 {
    ? _delegateRespondsTo;
    CGFloat _presentedProgress;
    BOOL _hasInitializedDockVisibility;
    _UILegibilitySettings *_legibilitySettings;
}


@property (retain, nonatomic) SBFAnalyticsClient *analyticsClient; // ivar: _analyticsClient
@property (readonly, nonatomic) SBAppSuggestionManager *appSuggestionManager; // ivar: _appSuggestionManager
@property (readonly, nonatomic) SBApplicationController *applicationController; // ivar: _applicationController
@property (retain, nonatomic) SBWorkspaceApplicationSceneTransitionContext *currentTransitionContext; // ivar: _currentTransitionContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFloatingDockRootViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BSInvalidatable> *displayLayoutAssertion; // ivar: _displayLayoutAssertion
@property (readonly, nonatomic) CGFloat effectiveFloatingDockHeight;
@property (readonly, nonatomic, getter=isFloatingDockFullyPresented) BOOL floatingDockFullyPresented;
@property (readonly, nonatomic) CGFloat floatingDockHeight;
@property (nonatomic) NSUInteger floatingDockPresentationAnimationCount; // ivar: _floatingDockPresentationAnimationCount
@property (readonly, nonatomic, getter=isFloatingDockPresented) BOOL floatingDockPresented;
@property (readonly, nonatomic) CGRect floatingDockScreenFrame;
@property (readonly, nonatomic) CGRect floatingDockScreenPresentationFrame;
@property (retain, nonatomic) SBFloatingDockViewController *floatingDockViewController; // ivar: _floatingDockViewController
@property (readonly, nonatomic) CGFloat floatingDockViewTopMargin;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) SBIconController *iconController; // ivar: _iconController
@property (readonly, weak, nonatomic) NSObject<SBIconViewProviding> *iconViewProvider; // ivar: _iconViewProvider
@property (weak, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator; // ivar: _layoutStateTransitionCoordinator
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic, getter=isLibraryPodIconEnabled) BOOL libraryPodIconEnabled;
@property (readonly, nonatomic) CGFloat maximumDockContinuousCornerRadius;
@property (readonly, nonatomic) CGFloat maximumFloatingDockHeight;
@property (readonly, nonatomic) CGFloat preferredVerticalMargin;
@property (readonly, nonatomic) SBFolderController *presentedFolderController;
@property (readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property (readonly, nonatomic) CGFloat presentedProgress;
@property (readonly, nonatomic, getter=isPresentingFolder) BOOL presentingFolder;
@property (retain, nonatomic) SBRecentDisplayItemsController *recentsController; // ivar: _recentsController
@property (retain, nonatomic) SBRecentDisplayItemsDataStore *recentsDataStore; // ivar: _recentsDataStore
@property (retain, nonatomic) SBApplication *requestedSuggestedApplication; // ivar: _requestedSuggestedApplication
@property (readonly, nonatomic) SBIconListView *suggestionsIconListView;
@property (retain, nonatomic) SBFloatingDockSuggestionsModel *suggestionsModel; // ivar: _suggestionsModel
@property (readonly) Class superclass;
@property (nonatomic, getter=isTransitioningPresentation) BOOL transitioningPresentation; // ivar: _transitioningPresentation
@property (readonly, nonatomic) CGFloat translationFromFullyPresentedFrame;
@property (nonatomic) BOOL useDismissHitTestPadding; // ivar: _useDismissHitTestPadding
@property (readonly, nonatomic) SBIconListView *userIconListView;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isDefaultLibraryContainerViewControllerForegroundForFloatingDockViewController:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocations:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 ;
-(BOOL)isDisplayingIconView:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isFloatingDockViewControllerPresentedOnExternalDisplay:(id)arg0 ;
-(BOOL)isFloatingDockViewControllerPresentedOverApplication:(id)arg0 ;
-(BOOL)isFloatingDockViewControllerPresentedOverTransitioningAppToAppContent:(id)arg0 ;
-(BOOL)isFloatingDockViewControllerPresentedOverTransitioningSwitcherContent:(id)arg0 ;
-(BOOL)isPresentingIconLocation:(id)arg0 ;
-(CGFloat)_floatingDockViewTranslation;
-(CGFloat)_floatingDockViewTranslationForHeight:(CGFloat)arg0 ;
-(CGFloat)minimumHomeScreenScaleForFloatingDockViewController:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)firstIconViewForIcon:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 excludingLocations:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 inLocations:(id)arg1 ;
-(id)floatingDockViewController:(id)arg0 acquireOrderFloatingDockContainerBeforeLibraryAssertionForReason:(id)arg1 ;
-(id)foregroundLibraryContainerViewControllerForFloatingDockViewController:(id)arg0 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 ;
-(id)initWithIconController:(id)arg0 applicationController:(id)arg1 recentsController:(id)arg2 recentsDataStore:(id)arg3 appSuggestionManager:(id)arg4 layoutStateTransitionCoordinator:(id)arg5 iconViewProvider:(id)arg6 analyticsClient:(id)arg7 ;
-(id)libraryContainerViewControllerForFloatingDockViewController:(id)arg0 ;
-(struct CGRect )_calculateStandardDockFrame;
-(void)_beginPresentationTransition;
-(void)_endPresentationTransition;
-(void)_handlePanGestureRecognizer:(id)arg0 ;
-(void)_layoutFloatingDockViewWithProgress:(CGFloat)arg0 ;
-(void)_setDisplayLayoutElementActive:(BOOL)arg0 ;
-(void)_setDisplayLayoutElementActive:(BOOL)arg0 windowLevel:(CGFloat)arg1 ;
-(void)cleanupAfterTransitionToEnvironmentMode:(NSInteger)arg0 ;
-(void)dealloc;
-(void)dismissPresentedFolderAnimated:(BOOL)arg0 withTransitionContext:(id)arg1 completion:(id)arg2 ;
-(void)dismissPresentedLibraryAnimated:(BOOL)arg0 withTransitionContext:(id)arg1 completion:(id)arg2 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(id)arg0 ;
-(void)floatingDockViewController:(id)arg0 didChangeContentFrame:(struct CGRect )arg1 ;
-(void)floatingDockViewController:(id)arg0 didChangeContentHeight:(CGFloat)arg1 ;
-(void)floatingDockViewController:(id)arg0 wantsToBePresented:(BOOL)arg1 ;
-(void)floatingDockViewController:(id)arg0 willPerformTransitionWithFolder:(id)arg1 presenting:(BOOL)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)floatingDockViewController:(id)arg0 willUseAnimator:(id)arg1 forTransitioningWithFolder:(id)arg2 presenting:(BOOL)arg3 ;
-(void)layoutUserControlledIconListsWithAnimationType:(NSInteger)arg0 forceRelayout:(BOOL)arg1 ;
-(void)prepareForTransitionToEnvironmentMode:(NSInteger)arg0 fromDockVisible:(BOOL)arg1 toDockVisible:(BOOL)arg2 ;
-(void)presentFolderForIcon:(id)arg0 location:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)setPresentationProgress:(CGFloat)arg0 animated:(BOOL)arg1 interactive:(BOOL)arg2 ;
-(void)setPresentationProgress:(CGFloat)arg0 animated:(BOOL)arg1 interactive:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)setPresentationProgress:(CGFloat)arg0 interactive:(BOOL)arg1 ;
-(void)setPresentationProgress:(CGFloat)arg0 interactive:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)setPresentationProgressInteractively:(CGFloat)arg0 ;
-(void)setPresentationProgressInteractively:(CGFloat)arg0 withCompletion:(id)arg1 ;
-(void)updateDisplayLayoutElementWindowLevel:(CGFloat)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif