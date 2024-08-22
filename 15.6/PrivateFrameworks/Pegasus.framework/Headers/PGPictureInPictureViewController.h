// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPICTUREINPICTUREVIEWCONTROLLER_H
#define PGPICTUREINPICTUREVIEWCONTROLLER_H

@class UIViewController, UIView, UITapGestureRecognizer, NSUUID, NSString, NSArray, UIPointerInteraction;
@protocol UIPointerInteractionDelegate, PGCommandHandler, PTSettingsKeyPathObserver, PGPlaybackStateDiffConsumer, PGPictureInPictureAnalyticsDelegate, PGPictureInPictureViewControllerContentContainer, PGPictureInPictureViewControllerDelegate;


#import "PGHostedWindowHostingHandle.h"
#import "PGPictureInPictureViewControllerBackgroundView.h"
#import "PGLayerHostView.h"
#import "PGPictureInPictureViewControllerClippingView.h"
#import "PGControlsContainerView.h"
#import "PGControlsViewModel.h"
#import "PGStashView.h"
#import "PGStashedMaskView.h"
#import "PGPortalView.h"
#import "PGMobilePIPSettings.h"
#import "PGPictureInPictureApplication.h"
#import "PGPictureInPictureViewController.h"

@interface PGPictureInPictureViewController : UIViewController <UIPointerInteractionDelegate, PGCommandHandler, PTSettingsKeyPathObserver, PGPlaybackStateDiffConsumer>

 {
    PGHostedWindowHostingHandle *_hostedWindowHostingHandle;
    PGPictureInPictureViewControllerBackgroundView *_backgroundView;
    UIView *_containerView;
    PGLayerHostView *_contentView;
    PGPictureInPictureViewControllerClippingView *_contentClippingView;
    PGControlsContainerView *_controlsContainerView;
    PGControlsViewModel *_viewModel;
    UIView *_shadowView;
    UIView *_tabShadowView;
    PGStashView *_stashView;
    PGStashedMaskView *_stashMaskView;
    PGPortalView *_leftSideContentPortalView;
    PGPortalView *_rightSideContentPortalView;
    BOOL _initialLayerFrameIsNull;
    BOOL _prefersIdleTimerDisabled;
    BOOL _isSuspended;
    BOOL _stashTabHidden;
    BOOL _stashTabShownLeft;
    BOOL _isShowingChrome;
    BOOL _portalsWereActive;
    BOOL _portalsWereActiveLeft;
    BOOL _isMicroPIP;
    id *_stashTabSpringBehavior;
    NSUInteger _inFlightStashTabAnimationIdentifier;
    NSUInteger _inFlightStashProgressAnimationIdentifier;
    UITapGestureRecognizer *_stashedTapGestureRecognizer;
    CGSize _preferredContentSize;
    id<PGPictureInPictureAnalyticsDelegate> *_analyticsDelegate;
    NSUUID *_analyticsSourceUUID;
    NSUUID *_analyticsSessionUUID;
    BOOL _startedAutomatically;
    ? _contentContainerRespondsTo;
    PGMobilePIPSettings *_settings;
}


@property (readonly, weak, nonatomic) PGPictureInPictureApplication *application; // ivar: _application
@property (nonatomic) BOOL canStartShowingChrome; // ivar: _canStartShowingChrome
@property (weak, nonatomic) NSObject<PGPictureInPictureViewControllerContentContainer> *contentContainer; // ivar: _contentContainer
@property (readonly, nonatomic) UIView *contentContainerView;
@property (readonly, nonatomic) NSInteger contentType;
@property (readonly, nonatomic) NSInteger controlsStyle; // ivar: _controlsStyle
@property (nonatomic) CGFloat currentContentCornerRadius; // ivar: _currentContentCornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PGPictureInPictureViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PGHostedWindowHostingHandle *hostedWindowHostingHandle;
@property (nonatomic, getter=isInteractivelyResizing) BOOL interactivelyResizing; // ivar: _interactivelyResizing
@property (nonatomic, getter=isInterrupted) BOOL interrupted;
@property (readonly, nonatomic) BOOL isStashTabHidden;
@property (copy, nonatomic) NSArray *menuItems; // ivar: _menuItems
@property (retain, nonatomic) PGHostedWindowHostingHandle *microPIPHostedWindowHostingHandle; // ivar: _microPIPHostedWindowHostingHandle
@property (nonatomic) CGSize microPIPSize; // ivar: _microPIPSize
@property (nonatomic) CGSize minimumStashTabSize; // ivar: _minimumStashTabSize
@property (weak, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (readonly, nonatomic) CGFloat preferredMinimumWidth;
@property (readonly, nonatomic) BOOL prefersHiddenFromClonedDisplay; // ivar: _prefersHiddenFromClonedDisplay
@property (readonly, nonatomic) BOOL prefersIdleTimerDisabled;
@property (nonatomic) BOOL prefersStashTabSuppressed; // ivar: _prefersStashTabSuppressed
@property (readonly, nonatomic) NSString *sourceSceneSessionPersistentIdentifier; // ivar: _sourceSceneSessionPersistentIdentifier
@property (nonatomic) BOOL stashed; // ivar: _stashed
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) PGPictureInPictureViewController *tetheredViewController; // ivar: _tetheredViewController
@property (readonly, nonatomic) NSInteger tetheringMode; // ivar: _tetheringMode
@property (readonly, weak, nonatomic) PGPictureInPictureViewController *tetheringViewController; // ivar: _tetheringViewController
@property (readonly, nonatomic) PGControlsViewModel *viewModel;
@property (copy, nonatomic) id *waitForUIFinalizationCompletionBlock; // ivar: _waitForUIFinalizationCompletionBlock
@property (readonly, nonatomic) BOOL wantsStashTabSuppression;


+(CGFloat)defaultContentCornerRadius;
// +(void)animateViewWithAnimationType:(NSInteger)arg0 initialSpringVelocity:(CGFloat)arg1 animations:(id)arg2 completion:(unk)arg3  ;
+(void)tetherViewController:(id)arg0 toViewController:(id)arg1 mode:(NSInteger)arg2 ;
-(BOOL)shouldAutorotate;
-(BOOL)showsPictureInPictureUnavailableIndicator;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(id)_newShadowView;
-(id)initWithApplication:(id)arg0 sourceSceneSessionPersistentIdentifier:(id)arg1 controlsStyle:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)_addMaskViewSubviewIfNeeded;
-(void)_applyShadowSettingsToView:(id)arg0 ;
-(void)_handleTapWhileStashedGestureRecognizer:(id)arg0 ;
-(void)_insertContentContainerViewIfNeeded;
-(void)_layoutStashTabViewsIfNeeded;
-(void)_loadShadowViewIfNeeded;
-(void)_loadTabShadowViewIfNeeded;
-(void)_noteTetheringDidUpdate;
-(void)_performStartAnimationWithCompletionHandler:(id)arg0 ;
-(void)_performStopAnimationWithFinalInterfaceOrientation:(NSInteger)arg0 finalLayerFrame:(struct CGRect )arg1 completionHandler:(id)arg2 ;
-(void)_resetStashTabViewsIfPossible;
-(void)_setPortalActive:(BOOL)arg0 left:(BOOL)arg1 ;
-(void)_setStashMaskActive:(BOOL)arg0 ;
-(void)_updateContentCornerRadiusForMaskActive:(BOOL)arg0 ;
-(void)_updateCornerRadii;
-(void)_updatePointerEffect;
-(void)_updatePrefersIdleTimerDisabled;
-(void)_updateStashTabStateWithBehavior:(id)arg0 ;
-(void)acquireInterfaceOrientationLock;
-(void)deactivateAnalyticsSessionIfNeeded;
-(void)dealloc;
-(void)flashControls;
-(void)handleCommand:(id)arg0 ;
-(void)hostedWindowSizeChangeBegan;
-(void)hostedWindowSizeChangeEnded;
-(void)loadView;
-(void)notePictureInPictureStartedAutomatically:(BOOL)arg0 ;
-(void)notePictureInPictureWillStopForAppRequest:(BOOL)arg0 preferredFullScreenRestore:(BOOL)arg1 ;
-(void)performResumeAnimationWithCompletionHandler:(id)arg0 ;
-(void)performRotateAnimationWithRotation:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)performStartAnimated:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)performStopAnimated:(BOOL)arg0 withFinalInterfaceOrientation:(NSInteger)arg1 finalLayerFrame:(struct CGRect )arg2 completionHandler:(id)arg3 ;
-(void)performSuspendAnimationWithCompletionHandler:(id)arg0 ;
-(void)prepareStartAnimationWithInitialInterfaceOrientation:(NSInteger)arg0 initialLayerFrame:(struct CGRect )arg1 completionHandler:(id)arg2 ;
-(void)prepareStopAnimationWithCompletionHandler:(id)arg0 ;
-(void)relinquishInterfaceOrientationLock;
-(void)setAnalyticsDelegate:(id)arg0 analyticsSourceUUID:(id)arg1 ;
-(void)setContentCornerRadius:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)setContentViewHidden:(BOOL)arg0 ;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)setShowsPictureInPictureUnavailableIndicator:(BOOL)arg0 ;
-(void)setStashProgress:(CGFloat)arg0 ;
-(void)setStashTabHidden:(BOOL)arg0 left:(BOOL)arg1 withSpringBehavior:(id)arg2 ;
-(void)settings:(id)arg0 changedValueForKeyPath:(id)arg1 ;
-(void)showChrome:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateHostedWindowSize:(struct CGSize )arg0 ;
-(void)updatePlaybackStateWithDiff:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif