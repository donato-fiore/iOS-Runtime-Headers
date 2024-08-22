// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCARDVIEWCONTROLLER_H
#define HUCARDVIEWCONTROLLER_H

@class UIViewController, UIColor, UIVisualEffectView, UIButton, NSMutableArray, NSSet, NSString, HMHome, UIImpactFeedbackGenerator, UIPanGestureRecognizer, UILayoutGuide, UIScrollView, HFItem, UIActivityIndicatorView, UIView, NAFuture, NAPromise;
@protocol HFItemManagerDelegate, UIGestureRecognizerDelegate, HUQuickControlViewControllerCoordinatorDelegate, HUViewControllerCustomDismissing, UIScrollViewDelegate, HUPreloadableViewController, HUCardViewControllerDelegate;


#import "HUAnimationApplier.h"
#import "HUVisualEffectContainerView.h"
#import "HUHubUnavailableView.h"
#import "HUQuickControlSummaryNavigationBarTitleView.h"
#import "HUQuickControlProxHandOffSummaryViewUpdater.h"
#import "HUQuickControlContainerViewController.h"
#import "HUQuickControlViewControllerCoordinator.h"

@interface HUCardViewController : UIViewController <HFItemManagerDelegate, UIGestureRecognizerDelegate, HUQuickControlViewControllerCoordinatorDelegate, HUViewControllerCustomDismissing, UIScrollViewDelegate, HUPreloadableViewController>



@property (retain, nonatomic) HUAnimationApplier *animationApplier; // ivar: _animationApplier
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIVisualEffectView *backgroundVisualEffectView; // ivar: _backgroundVisualEffectView
@property (retain, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (retain, nonatomic) HUVisualEffectContainerView *closeButtonEffectView; // ivar: _closeButtonEffectView
@property (retain, nonatomic) NSMutableArray *constraints; // ivar: _constraints
@property (retain, nonatomic) NSMutableArray *contentSizeKeyPathObservees; // ivar: _contentSizeKeyPathObservees
@property (retain, nonatomic) NSSet *controlItems; // ivar: _controlItems
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUCardViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablePullToUnlockSettings; // ivar: _disablePullToUnlockSettings
@property (nonatomic) BOOL hasRequestedDismissal; // ivar: _hasRequestedDismissal
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideControls; // ivar: _hideControls
@property (nonatomic) BOOL hideSettings; // ivar: _hideSettings
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HUHubUnavailableView *hubUnavailableView; // ivar: _hubUnavailableView
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // ivar: _impactFeedbackGenerator
@property (nonatomic) BOOL isConfiguredForNonHomeUser; // ivar: _isConfiguredForNonHomeUser
@property (nonatomic) BOOL isUnavailableHub; // ivar: _isUnavailableHub
@property (retain, nonatomic) HUQuickControlSummaryNavigationBarTitleView *navigationBarTitleView; // ivar: _navigationBarTitleView
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (retain, nonatomic) HUQuickControlProxHandOffSummaryViewUpdater *proxHandOffSummaryViewUpdater; // ivar: _proxHandOffSummaryViewUpdater
@property (retain, nonatomic) UILayoutGuide *quickControlLayoutGuide; // ivar: _quickControlLayoutGuide
@property (retain, nonatomic) HUQuickControlContainerViewController *quickControlViewController; // ivar: _quickControlViewController
@property (nonatomic) BOOL reachable; // ivar: _reachable
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) BOOL settingsUnlocked; // ivar: _settingsUnlocked
@property (retain, nonatomic) UIViewController *settingsViewController; // ivar: _settingsViewController
@property (retain, nonatomic) HFItem *sourceItem; // ivar: _sourceItem
@property (weak) UIActivityIndicatorView *spinnerView; // ivar: _spinnerView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *transitionBlurView; // ivar: _transitionBlurView
@property (retain, nonatomic) HUQuickControlViewControllerCoordinator *viewControllerCoordinator; // ivar: _viewControllerCoordinator
@property (readonly, nonatomic) NAFuture *viewControllerReadyFuture;
@property (retain, nonatomic) NAPromise *viewControllerReadyPromise; // ivar: _viewControllerReadyPromise


-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)isConfiguredForNonHomeUser:(id)arg0 ;
-(CGFloat)_hostViewHeight;
-(CGFloat)_quickControlScrollOffsetBoundary;
-(CGFloat)_quickControlSectionHeight;
-(id)_springAnimationSettings;
-(id)blurEffectForProxHandOff;
-(id)hu_preloadContent;
-(id)hu_prepareForDismissalAnimated:(BOOL)arg0 ;
-(id)init;
-(id)initWithControlItems:(id)arg0 ;
-(id)keyCommands;
-(id)requestDismissal;
-(struct CGSize )overridingContentSizeForPresentedViewController:(id)arg0 ;
-(void)_actuateTapticFeedback;
-(void)_checkHubAvailability;
-(void)_closeButtonPressed:(id)arg0 ;
-(void)_endUsingTapticFeedback;
-(void)_escapeKeyPressed;
-(void)_handlePanGesture:(id)arg0 ;
-(void)_nudgeScrollViewToPoint:(struct CGPoint )arg0 ;
-(void)_prepareForTapticFeedback;
-(void)_scrollToSettings;
-(void)_unlockSettings;
-(void)_updateCloseButtonVibrancyEffect;
-(void)_updateControlStatusTextWithPrimaryText:(id)arg0 secondaryText:(id)arg1 ;
-(void)_updateIconDescriptorAnimated:(BOOL)arg0 ;
-(void)_updateMaterials;
-(void)_updateReachabilityState;
-(void)_updateScrollViewAndSpinnerView;
-(void)controllerCoordinator:(id)arg0 didUpdateIconDescriptor:(id)arg1 showOffState:(BOOL)arg2 ;
-(void)controllerCoordinator:(id)arg0 didUpdateReachability:(BOOL)arg1 ;
-(void)controllerCoordinator:(id)arg0 didUpdateStatusWithPrimaryText:(id)arg1 secondaryText:(id)arg2 ;
-(void)dealloc;
-(void)dismissCardAnimated:(BOOL)arg0 ;
-(void)externalAnimationsBegan;
-(void)externalAnimationsEnded;
-(void)forceUnlockSettings;
-(void)itemManager:(id)arg0 didUpdateResultsForSourceItem:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)scrollToDetailsViewAnimated:(BOOL)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)setUpConstraints;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateWithQuickControlViewController:(id)arg0 settingsViewController:(id)arg1 presentationContext:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif