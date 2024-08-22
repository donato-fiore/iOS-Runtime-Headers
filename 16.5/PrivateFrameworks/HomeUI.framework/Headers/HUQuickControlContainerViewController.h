// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLCONTAINERVIEWCONTROLLER_H
#define HUQUICKCONTROLCONTAINERVIEWCONTROLLER_H

@class UIViewController, UILayoutGuide, NSString, UITapGestureRecognizer, HMHome, HFItem, HFItem<NSCopying>, UIPanGestureRecognizer;
@protocol HUPresentationDelegate, HUQuickControlContainerViewDelegate, HUQuickControlViewControllerCoordinatorDelegate, HUQuickControlContentHosting, HUItemPresentationContainer, HUDetailsPresentationDelegateHost, HUViewControllerCustomDismissing, HUQuickControlTouchContinuing, HUQuickControlContainerViewControllerDelegate, HUOpenURLHandling;


#import "HUQuickControlViewController.h"
#import "HUQuickControlContainerView.h"
#import "HUAnimationApplier.h"
#import "HUQuickControlPresentationContext.h"
#import "HUQuickControlViewControllerCoordinator.h"

@interface HUQuickControlContainerViewController : UIViewController <HUPresentationDelegate, HUQuickControlContainerViewDelegate, HUQuickControlViewControllerCoordinatorDelegate, HUQuickControlContentHosting, HUItemPresentationContainer, HUDetailsPresentationDelegateHost, HUViewControllerCustomDismissing, HUQuickControlTouchContinuing>



@property (retain, nonatomic) HUQuickControlViewController *activeControlViewController; // ivar: _activeControlViewController
@property (retain, nonatomic) UILayoutGuide *availableContentLayoutGuide; // ivar: _availableContentLayoutGuide
@property (retain, nonatomic) HUQuickControlContainerView *controlContainerView; // ivar: _controlContainerView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUQuickControlContainerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<HUOpenURLHandling> *detailViewURLHandler; // ivar: _detailViewURLHandler
@property (retain, nonatomic) UITapGestureRecognizer *dismissGestureRecognizer; // ivar: _dismissGestureRecognizer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) HFItem *hu_presentedItem;
@property (readonly, nonatomic) HFItem<NSCopying> *item; // ivar: _item
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (retain, nonatomic) HUAnimationApplier *presentationApplier; // ivar: _presentationApplier
@property (retain, nonatomic) HUQuickControlPresentationContext *presentationContext; // ivar: _presentationContext
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: presentationDelegate
@property (nonatomic) NSUInteger presentationState; // ivar: _presentationState
@property (nonatomic) BOOL presentedDetailView; // ivar: _presentedDetailView
@property (nonatomic) BOOL requiresPresentingViewControllerDismissal; // ivar: _requiresPresentingViewControllerDismissal
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (readonly) Class superclass;
@property (retain, nonatomic) HUQuickControlViewControllerCoordinator *viewControllerCoordinator; // ivar: _viewControllerCoordinator


+(id)_blurAnimationSettingsForPresenting:(BOOL)arg0 ;
+(id)_controlAlphaAnimationSettingsForPresenting:(BOOL)arg0 ;
+(id)_controlScaleAnimationSettingsForPresenting:(BOOL)arg0 ;
+(id)_detailChromeAnimationSettings;
+(id)_easeOutTimingFunction;
+(id)_sourceViewTransitionAnimationSettingsForPresenting:(BOOL)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isConfiguredForNonHomeUser:(id)arg0 ;
-(BOOL)isControlDismissedOrDismissing;
-(BOOL)isControlPresentedOrPresenting;
-(id)_dismissDetailsViewControllerAnimated:(BOOL)arg0 dismissControl:(BOOL)arg1 ;
-(id)_prepareDetailViewController;
-(id)dismissControlAnimated:(BOOL)arg0 ;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)hu_prepareForDismissalAnimated:(BOOL)arg0 ;
-(id)initWithPresentationContext:(id)arg0 ;
-(id)presentDetailViewControllerAnimated:(BOOL)arg0 ;
-(id)viewForTouchContinuation;
-(struct CGAffineTransform )sourceViewTransformForPresentationProgress:(CGFloat)arg0 ;
-(void)_backButtonPressed:(id)arg0 ;
-(void)_controlDidDismiss;
-(void)_createControlContainerViewForMac;
-(void)_createControlContainerViewWithSourceRect:(struct CGRect )arg0 ;
-(void)_dismissQuickControls;
-(void)_performTransitionToPresentationState:(NSUInteger)arg0 animated:(BOOL)arg1 initialProgress:(CGFloat)arg2 completion:(id)arg3 ;
-(void)_settingsButtonPressed:(id)arg0 ;
-(void)_updateActiveControlViewController;
-(void)_updateControlStatusText;
-(void)_updateIconDescriptorAnimated:(BOOL)arg0 ;
-(void)_updateReachabilityStateForActiveControl;
-(void)_updateUserInteractionEnabledForActiveControl;
-(void)beginReceivingTouchesWithGestureRecognizer:(id)arg0 ;
-(void)contentDidUpdateInContainerView:(id)arg0 ;
-(void)controllerCoordinator:(id)arg0 didUpdateIconDescriptor:(id)arg1 showOffState:(BOOL)arg2 ;
-(void)controllerCoordinator:(id)arg0 didUpdateReachability:(BOOL)arg1 ;
-(void)controllerCoordinator:(id)arg0 didUpdateStatusWithPrimaryText:(id)arg1 secondaryText:(id)arg2 ;
-(void)detailsButtonPressedInContainerView:(id)arg0 ;
-(void)externalAnimationsBegan;
-(void)externalAnimationsEnded;
-(void)hideAuxiliaryViewForQuickControlContent:(id)arg0 ;
-(void)presentControlForMacAnimated:(BOOL)arg0 ;
-(void)presentControlFromSourceRect:(struct CGRect )arg0 animated:(BOOL)arg1 ;
-(void)quickControlContent:(id)arg0 requestDismissalOfType:(NSUInteger)arg1 ;
-(void)quickControlContent:(id)arg0 showAuxiliaryView:(id)arg1 ;
-(void)quickControlContentDidUpdateDesiredVisbilityState:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif