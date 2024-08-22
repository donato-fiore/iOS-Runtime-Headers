// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PNPPAIRINGVIEWCONTROLLER_H
#define PNPPAIRINGVIEWCONTROLLER_H

@class UIViewController, UIAlertController, NSTimer, UIPanGestureRecognizer, NSString;
@protocol PNPPairingViewDelegate, PNPChargingStatusViewDelegate, PNPPencilViewDelegate, PNPPlatterViewController, PNPDeviceStateConfigurable, PNPViewController, PNPViewControllerAppearanceDelegate, PNPPairingViewControllerDelegate, PNPPlatterViewControllerPlatterDelegate;


#import "PNPPlatterContainerView.h"
#import "PNPPairingView.h"
#import "PNPChargingStatusView.h"
#import "PNPPencilHorizontalPresentationContainerView.h"
#import "PNPPencilView.h"
#import "PNPPlatterTransitioningDelegate.h"
#import "PNPDeviceState.h"

@interface PNPPairingViewController : UIViewController <PNPPairingViewDelegate, PNPChargingStatusViewDelegate, PNPPencilViewDelegate, PNPPlatterViewController, PNPDeviceStateConfigurable, PNPViewController>

 {
    PNPPlatterContainerView *_wizardPlatterContainerView;
    PNPPairingView *_pairingView;
    PNPChargingStatusView *_pairingChargingStatusView;
    PNPPlatterContainerView *_horizontalPencilPlatterContainerView;
    PNPPencilHorizontalPresentationContainerView *_horizontalPresentationPencilContainerView;
    PNPPencilView *_horizontalPencilView;
    PNPChargingStatusView *_horizontalChargingStatusView;
    BOOL _showingChargingUI;
    PNPPlatterTransitioningDelegate *_platterTransitioningDelegate;
    BOOL _inWizard;
    UIAlertController *_alertVC;
    NSTimer *_initialTimer;
    CGFloat _spinnerElapsedTime;
    NSTimer *_timeoutTimer;
    PNPDeviceState *_deviceState;
    BOOL _viewDidAppearCalled;
    BOOL _viewRequestsDismissCalled;
    UIPanGestureRecognizer *_panGestureRecognizer;
    CGPoint _animationTranslation;
}


@property (weak, nonatomic) NSObject<PNPViewControllerAppearanceDelegate> *appearanceDelegate; // ivar: appearanceDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PNPPairingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) PNPDeviceState *deviceState;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger pairingViewControllerState; // ivar: _pairingViewControllerState
@property (weak, nonatomic) NSObject<PNPPlatterViewControllerPlatterDelegate> *platterDelegate; // ivar: platterDelegate
@property (readonly, nonatomic) CGFloat preferredCornerRadius;
@property (readonly, nonatomic) NSUInteger preferredEdge;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)canBecomeFirstResponder;
-(CGFloat)_translationAmountForDismiss;
-(NSInteger)_dimmingState;
-(NSUInteger)_edgeToStickToPort;
-(id)_currentPlatterContainerView;
-(id)_effectivePencilView;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)_actuallyTransitionToCharging;
-(void)_actuallyTransitionToChargingByMovingPlatter;
-(void)_actuallyTransitionToChargingBySlideOutAndPresent;
-(void)_actuallyTransitionToSpinningPlatterWithDimmingState:(NSInteger)arg0 ;
-(void)_actuallyTransitionToWizard;
-(void)_cancelTimeoutTimer;
-(void)_centerContainerViews;
-(void)_chargingStatusViewHostsLayoutIfNeeded;
-(void)_chargingStatusViewHostsSetShowsChargingStatusView:(BOOL)arg0 ;
-(void)_chargingStatusViewHostsSetupChargingViews;
-(void)_chargingStatusViewHostsTeardownChargingViews;
-(void)_chargingStatusViewLayoutIfNeeded;
-(void)_chargingStatusViewSetChargingState:(NSInteger)arg0 ;
-(void)_chargingStatusViewSetDeviceState:(id)arg0 ;
-(void)_chargingStatusViewSetIsTransitioningToBatteryUI:(BOOL)arg0 ;
-(void)_chargingStatusViewSetNeedsLayout;
-(void)_chargingStatusViewSetShowCharging:(BOOL)arg0 ;
-(void)_chargingStatusViewUpdateConstraints;
-(void)_chargingUIViewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)_dismissChargingAndPresentSpinningPencilWithDimmingState:(NSInteger)arg0 ;
-(void)_handlePanGesture:(id)arg0 ;
-(void)_hideOrShowAllContainerViewsIfNeeded;
-(void)_hideOrShowContainerViewIfNeeded:(id)arg0 ;
-(void)_morphToSpinningPencilWithDimmingState:(NSInteger)arg0 ;
-(void)_offsetContainerViewsIfNecessary;
-(void)_orientationChanged:(CGFloat)arg0 ;
// -(void)_performAnimations:(id)arg0 completion:(unk)arg1  ;
-(void)_resetTimeoutTimer;
-(void)_resetTimerForWizard;
-(void)_showConnectingAnimationUI;
-(void)_spinningPencilViewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)_startConnectingUITimer;
-(void)_transitionPairingViewToWizardByMovingPlatter;
-(void)_transitionToChargingFrom:(NSInteger)arg0 ;
-(void)_transitionToChargingFromSpinner;
-(void)_transitionToWizard;
-(void)_transitionToWizardBySlideOutAndPresent;
-(void)_updateAnimationTranslation;
-(void)_updateForSize:(struct CGSize )arg0 ;
-(void)_updatePillUIAnimated:(BOOL)arg0 ;
-(void)_updatePlatterContainerView:(id)arg0 toPreferredCornerRadius:(CGFloat)arg1 edge:(NSUInteger)arg2 ;
-(void)_updatePreferredContentSize;
-(void)_updateSubviewDeviceStateForContainerView:(id)arg0 ;
-(void)_wizardViewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)didCompleteOneRevolution;
-(void)didTapOnCancelButton;
-(void)didTapOnConnectButton;
-(void)intrinsicContentSizeDidChangeForView:(id)arg0 ;
-(void)loadView;
-(void)pairingFailed;
-(void)pairingStarted;
-(void)pairingStartedWithDimming:(BOOL)arg0 ;
-(void)pairingStartedWithDimmingState:(NSInteger)arg0 ;
-(void)pairingSucceeded;
-(void)pairingSucceededSubsequently;
-(void)pairingSucceededWithShouldShowWhatsNew:(BOOL)arg0 ;
-(void)pairingSucceededWithShouldShowWhatsNew:(BOOL)arg0 deviceType:(NSInteger)arg1 ;
-(void)showGenericBatteryUI;
-(void)showPairingPrompt;
-(void)showPairingPromptAlert;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewRequestsDismiss:(id)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif