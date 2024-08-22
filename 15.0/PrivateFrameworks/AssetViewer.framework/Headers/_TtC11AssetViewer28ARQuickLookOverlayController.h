// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC11ASSETVIEWER28ARQUICKLOOKOVERLAYCONTROLLER_H
#define _TTC11ASSETVIEWER28ARQUICKLOOKOVERLAYCONTROLLER_H

@class UIViewController, UIButton;


#import "ASVControlsView.h"
#import "ASVRoundedButton.h"
#import "ASVTrackingStateStatusLabel.h"

@interface _TtC11AssetViewer28ARQuickLookOverlayController : UIViewController {
    ? wantsStatusPillHidden;
    ? arTrackingState;
    ? currentTriggerAffordance;
    ? trackedRaycastState;
    ? lastResultType;
    ? sessionIsInterrupted;
    ? isInFullscreen;
    ? cancellables;
    ? $__lazy_storage_$_longPressGesture;
    ? delegate;
    ? currentTrackingState;
    ? trackingStateStatus;
    ? sharingEnabled;
    ? allowOverlayToBeHidden;
    ? touchesOnScreenGestureRecognizer;
    ? displayCornerRadiusPortraitSidePadding;
    ? displayCornerRadiusDefaultPadding;
    ? displayCornerRadiusPortraitShutterButtonPadding;
    ? defaultPortraitShutterButtonPadding;
    ? defaultControlPadding;
    ? controlsViewToStatusBarVerticalPadding;
    ? topControlsHeight;
    ? topControlsButtonWidth;
    ? topControlsSegmentedControlWidth;
    ? trackingLabelMinimumBottomPadding;
    ? portraitConstraints;
    ? portraitUpsideDownConstraints;
    ? landscapeLeftConstraints;
    ? landscapeRightConstraints;
    ? currentConstraints;
    ? autoHideControlsTimer;
    ? $__lazy_storage_$_controlsViewStack;
    ? $__lazy_storage_$_shutterButtonContainer;
    ? $__lazy_storage_$_dismissButton;
    ? $__lazy_storage_$_displayModeControlView;
    ? $__lazy_storage_$_shareButton;
    ? checkoutPlatter;
    ? $__lazy_storage_$_debugActionsButtonContainer;
    ? $__lazy_storage_$_debugActionsButton;
    ? $__lazy_storage_$_fileARadarButton;
    ? $__lazy_storage_$_shutterButton;
    ? animationView;
    ? coachingOverlayView;
    ? $__lazy_storage_$_statusPill;
    ? $__lazy_storage_$_assetLoadingView;
    ? backgroundDimmingView;
    ? displayMode;
    ? bottomControlCapabilities;
    ? operationMode;
    ? currentAppearance;
}


@property (nonatomic, retain) ASVControlsView *controlsViewStack;
@property (nonatomic, retain) UIButton *debugActionsButton;
@property (nonatomic, retain) ASVRoundedButton *dismissButton;
@property (nonatomic, retain) UIButton *fileARadarButton;
@property (nonatomic, retain) ASVRoundedButton *shareButton;
@property (nonatomic, retain) ASVTrackingStateStatusLabel *statusPill;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)autoHide2DControls;
-(void)dealloc;
-(void)displayModeChanged;
-(void)enableWorldModeControl:(BOOL)arg0 ;
-(void)handleLongPressGesture:(id)arg0 ;
-(void)loadView;
-(void)startAutoHideControlsTimer;
-(void)stopAutoHideControlsTimerWithShouldRestart:(BOOL)arg0 ;
-(void)takePicture;
-(void)trackedRaycastStateDidChange:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateStatusPill;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif