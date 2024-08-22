// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CFXCAMERACONTROLSVIEWCONTROLLER_H
#define CFXCAMERACONTROLSVIEWCONTROLLER_H

@class UIViewController, UIView, NSLayoutConstraint, UIColor, CAMBottomBar, CAMCreativeCameraButton, CAMFlipButton, CUShutterButton;
@protocol CFXCameraControlsViewControllerDelegate;


#import "CFXFeedbackController.h"

@interface CFXCameraControlsViewController : UIViewController

@property (weak, nonatomic) UIView *appStripBackgroundContainerView; // ivar: _appStripBackgroundContainerView
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewBottomConstraint; // ivar: _appStripBackgroundContainerViewBottomConstraint
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewHeightConstraint; // ivar: _appStripBackgroundContainerViewHeightConstraint
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewLeadingConstraint; // ivar: _appStripBackgroundContainerViewLeadingConstraint
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewTopConstraint; // ivar: _appStripBackgroundContainerViewTopConstraint
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewTrailingConstraint; // ivar: _appStripBackgroundContainerViewTrailingConstraint
@property (retain, nonatomic) UIView *appStripBackgroundView; // ivar: _appStripBackgroundView
@property (nonatomic) UIColor *backgroundColor;
@property (weak, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (weak, nonatomic) NSLayoutConstraint *backgroundViewHeightConstraint; // ivar: _backgroundViewHeightConstraint
@property (retain, nonatomic) CAMBottomBar *bottomBar; // ivar: _bottomBar
@property (weak, nonatomic) UIView *bottomBlackView; // ivar: _bottomBlackView
@property (weak, nonatomic) NSLayoutConstraint *bottomBlackViewHeightConstraint; // ivar: _bottomBlackViewHeightConstraint
@property (weak, nonatomic) NSLayoutConstraint *bottomBlackViewTopConstraint; // ivar: _bottomBlackViewTopConstraint
@property (weak, nonatomic) NSLayoutConstraint *bottomBlackViewTrailingConstraint; // ivar: _bottomBlackViewTrailingConstraint
@property (weak, nonatomic) NSLayoutConstraint *bottomBlackViewWidthConstraint; // ivar: _bottomBlackViewWidthConstraint
@property (nonatomic) NSInteger captureMode; // ivar: _captureMode
@property (weak, nonatomic) NSObject<CFXCameraControlsViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL dockIsMagnified; // ivar: _dockIsMagnified
@property (nonatomic) CGFloat dockMagnifiedHeightDelta; // ivar: _dockMagnifiedHeightDelta
@property (retain, nonatomic) CAMCreativeCameraButton *effectButton; // ivar: _effectButton
@property (weak, nonatomic) UIView *effectButtonContainerPad; // ivar: _effectButtonContainerPad
@property (retain, nonatomic) CFXFeedbackController *feedbackController; // ivar: _feedbackController
@property (retain, nonatomic) CAMFlipButton *flipButton; // ivar: _flipButton
@property (weak, nonatomic) UIView *flipButtonContainerPad; // ivar: _flipButtonContainerPad
@property (retain, nonatomic) CUShutterButton *shutterButton; // ivar: _shutterButton
@property (weak, nonatomic) UIView *shutterButtonContainerPad; // ivar: _shutterButtonContainerPad


-(CGFloat)CFX_smallPhoneDockHeightAdjustment;
-(id)init;
-(id)initWithDelegate:(id)arg0 captureMode:(NSInteger)arg1 ;
-(void)JFX_orientationMonitorInterfaceOrientationNotification:(id)arg0 ;
-(void)configureUIForOrientation;
-(void)effectsButtonTapped:(id)arg0 ;
-(void)shutterButtonTapped:(id)arg0 ;
-(void)switchCameraButtonTapped:(id)arg0 ;
-(void)updateUIForDockMagnify:(BOOL)arg0 dockHeightDelta:(CGFloat)arg1 ;
-(void)updateUIForVideoRecording:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif