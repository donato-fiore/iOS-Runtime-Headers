// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CFXCAPTUREVIEWCONTROLLER_H
#define CFXCAPTUREVIEWCONTROLLER_H

@class UIViewController, UIView, NSLayoutConstraint, CAMControlStatusBar, NSString, PUReviewScreenDoneButton, CAMDynamicShutterControl, CAMElapsedTimeView, CAMFlashButton, CAMSnapshotView, CAMViewfinderReticleView, CAMTopBar, CAMZoomControl, CAMZoomSlider;
@protocol CFXEffectEditorViewDelegate, CFXFullScreenTextEditViewControllerDelegate, JFXPassThroughContainerViewDelegate, CAMControlVisibilityUpdateDelegate, CAMZoomControlDelegate, CAMZoomSliderDelegate, JFXAnimojiTrackingLossDelegate, CAMDynamicShutterControlDelegate, CAMControlStatusBarDelegate, CFXLiveCaptureViewControllerDelegate, CFXCameraControlsViewControllerDelegate, CFXCaptureViewControllerDelegate, OS_dispatch_group;


#import "CFXFaceReticleView.h"
#import "CFXControlsViewController.h"
#import "CFXLiveCaptureViewController.h"
#import "CFXEffectComposition.h"
#import "CFXEffectBrowserContentPresenterViewController.h"
#import "CFXEffectEditorView.h"
#import "JFXPassThroughContainerView.h"
#import "JFXThreadSafeArray.h"
#import "CFXViewfinderFlipTransition.h"

@interface CFXCaptureViewController : UIViewController <CFXEffectEditorViewDelegate, CFXFullScreenTextEditViewControllerDelegate, JFXPassThroughContainerViewDelegate, CAMControlVisibilityUpdateDelegate, CAMZoomControlDelegate, CAMZoomSliderDelegate, JFXAnimojiTrackingLossDelegate, CAMDynamicShutterControlDelegate, CAMControlStatusBarDelegate, CFXLiveCaptureViewControllerDelegate, CFXCameraControlsViewControllerDelegate>



@property (retain, nonatomic) UIView *animojiReticleFacePromptView; // ivar: _animojiReticleFacePromptView
@property (retain, nonatomic) CFXFaceReticleView *animojiTrackingLossReticle; // ivar: _animojiTrackingLossReticle
@property (nonatomic) NSUInteger appliedDirectOverlayEditingGestures; // ivar: _appliedDirectOverlayEditingGestures
@property (nonatomic) NSInteger aspectRatioCrop; // ivar: _aspectRatioCrop
@property (retain, nonatomic) UIView *bottomControlsContainer; // ivar: _bottomControlsContainer
@property (retain, nonatomic) CFXControlsViewController *cameraControls; // ivar: _cameraControls
@property (retain, nonatomic) UIView *cameraControlsContainerView; // ivar: _cameraControlsContainerView
@property (nonatomic) BOOL cameraIsFlipping; // ivar: _cameraIsFlipping
@property (retain, nonatomic) CFXLiveCaptureViewController *cameraViewController; // ivar: _cameraViewController
@property (nonatomic) BOOL captureContainerUncroppedFrameWasCalculatedWithContentRect; // ivar: _captureContainerUncroppedFrameWasCalculatedWithContentRect
@property (retain, nonatomic) NSLayoutConstraint *captureControlsContainerHeightConstraint; // ivar: _captureControlsContainerHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *captureControlsContainerLeadingConstraint; // ivar: _captureControlsContainerLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *captureControlsContainerTopConstraint; // ivar: _captureControlsContainerTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *captureControlsContainerTrailingConstraint; // ivar: _captureControlsContainerTrailingConstraint
@property (retain, nonatomic) NSLayoutConstraint *captureControlsContainerWidthConstraint; // ivar: _captureControlsContainerWidthConstraint
@property (nonatomic) NSInteger captureMode; // ivar: _captureMode
@property (retain, nonatomic) CFXEffectComposition *composition; // ivar: _composition
@property (nonatomic) BOOL configuredForOrientation; // ivar: _configuredForOrientation
@property (retain, nonatomic) CAMControlStatusBar *controlStatusBar; // ivar: _controlStatusBar
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CFXCaptureViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dockIsMagnified; // ivar: _dockIsMagnified
@property (nonatomic) CGFloat dockMagnifiedHeightDelta; // ivar: _dockMagnifiedHeightDelta
@property (retain, nonatomic) PUReviewScreenDoneButton *doneButton; // ivar: _doneButton
@property (retain, nonatomic) CAMDynamicShutterControl *dynamicShutterControl; // ivar: _dynamicShutterControl
@property (nonatomic) ? dynamicShutterSettings; // ivar: _dynamicShutterSettings
@property (retain, nonatomic) NSObject<OS_dispatch_group> *editingOverlayWithGestureGroup; // ivar: _editingOverlayWithGestureGroup
@property (retain, nonatomic) CFXEffectBrowserContentPresenterViewController *effectBrowserContentPresenterViewController; // ivar: _effectBrowserContentPresenterViewController
@property (retain, nonatomic) CFXEffectEditorView *effectEditor; // ivar: _effectEditor
@property (retain, nonatomic) JFXPassThroughContainerView *effectEditorContainerView; // ivar: _effectEditorContainerView
@property (retain, nonatomic) UIView *effectsPickerDrawer;
@property (retain, nonatomic) CAMElapsedTimeView *elapsedTimeView; // ivar: _elapsedTimeView
@property (nonatomic) CGRect externalUncroppedPresentationRect; // ivar: _externalUncroppedPresentationRect
@property (retain, nonatomic) NSLayoutConstraint *facePromptLabelYConstraint; // ivar: _facePromptLabelYConstraint
@property (retain, nonatomic) CAMFlashButton *flashButton; // ivar: _flashButton
@property (nonatomic) NSInteger flashMode;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRecording; // ivar: _isRecording
@property (nonatomic) BOOL isShowingAnimojiReticle; // ivar: _isShowingAnimojiReticle
@property (retain, nonatomic) UIView *liveCaptureContainer; // ivar: _liveCaptureContainer
@property (retain, nonatomic) UIView *liveCaptureContainerContainer; // ivar: _liveCaptureContainerContainer
@property (retain, nonatomic) CAMSnapshotView *liveCaptureContainerSnapshot; // ivar: _liveCaptureContainerSnapshot
@property (readonly, nonatomic) BOOL livePlayerIsSaturated;
@property (retain, nonatomic) UIView *nonTransformedContainerView; // ivar: _nonTransformedContainerView
@property (nonatomic) BOOL observingOrientationChanges; // ivar: _observingOrientationChanges
@property (nonatomic) CGRect presentationRect; // ivar: _presentationRect
@property (retain, nonatomic) UIView *presentationView; // ivar: _presentationView
@property (retain, nonatomic) CAMViewfinderReticleView *reticleView; // ivar: _reticleView
@property (retain, nonatomic) JFXThreadSafeArray *runOnceAnimatedOverlays; // ivar: _runOnceAnimatedOverlays
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) BOOL switchedToVideoMode; // ivar: _switchedToVideoMode
@property (retain, nonatomic) CAMTopBar *topBar; // ivar: _topBar
@property (retain, nonatomic) NSLayoutConstraint *topBarContaineHeightConstraint; // ivar: _topBarContaineHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *topBarTopConstraint; // ivar: _topBarTopConstraint
@property (nonatomic) BOOL useLocalCameraViewfinder;
@property (nonatomic) CGFloat userInterfaceAlpha;
@property (retain, nonatomic) CFXViewfinderFlipTransition *viewfinderFlipTransition; // ivar: _viewfinderFlipTransition
@property (retain, nonatomic) CAMZoomControl *zoomControl; // ivar: _zoomControl
@property (nonatomic) CGRect zoomControlFrame; // ivar: _zoomControlFrame
@property (nonatomic, setter=setZoomFactorAtPinchStart:) CGFloat zoomFactorAtPinchStart; // ivar: _zoomFactorAtPinchStart
@property (retain, nonatomic) CAMZoomSlider *zoomSlider; // ivar: _zoomSlider
@property (nonatomic) CGRect zoomSliderFrame; // ivar: _zoomSliderFrame


-(BOOL)CFX_canApplyFaceTracking;
-(BOOL)CFX_isRenderingAnimatedOverlaysThatDontLoop;
-(BOOL)CFX_isZoomAllowed;
-(BOOL)canToggleBetweenZoomFactorsForZoomControl:(id)arg0 ;
-(BOOL)effectEditorView:(id)arg0 isEffectAtPoint:(struct CGPoint )arg1 effect:(id)arg2 ;
-(BOOL)effectEditorView:(id)arg0 isFaceTrackingDataAvailableForEffect:(id)arg1 ;
-(BOOL)effectEditorView:(id)arg0 isFaceTrackingEffect:(id)arg1 ;
-(BOOL)effectEditorView:(id)arg0 presentCustomTextEditingUI:(id)arg1 ;
-(BOOL)effectEditorView:(id)arg0 shouldEditTextForEffect:(id)arg1 ;
-(BOOL)effectEditorViewShouldShowFaceReticle:(id)arg0 ;
-(BOOL)fullScreenTextEditViewController:(id)arg0 shouldDisableEditingAnimationForEffect:(id)arg1 ;
-(BOOL)isEditingEffect;
-(BOOL)isFaceTrackingDataAvailable;
-(BOOL)isMessagesOnPhone;
-(BOOL)needsBlackBackgroundForCTMControls;
-(BOOL)passThroughContainerView:(id)arg0 shouldHandleTouchWithinView:(id)arg1 atPoint:(struct CGPoint )arg2 ;
-(BOOL)presentFullScreenTextEditorForEffect:(id)arg0 insertingEffect:(BOOL)arg1 ;
-(BOOL)shouldPerformSegueWithIdentifier:(id)arg0 sender:(id)arg1 ;
-(BOOL)shouldShowAnimojiFaceReticle;
-(BOOL)shouldUseFaceTracking;
-(CGFloat)CFX_maxZoomForCamera;
-(NSInteger)CFX_camFlashModeForCaptureFlashMode:(NSInteger)arg0 ;
-(NSInteger)CFX_captureFlashModeForCAMFlashMode:(NSInteger)arg0 ;
-(NSInteger)CFX_captureTorchModeForCAMFlashMode:(NSInteger)arg0 ;
-(NSInteger)captureInterfaceOrientationForDisplay;
-(NSInteger)faceTrackingInterfaceOrientationForfullScreenTextEditViewController:(id)arg0 ;
-(NSUInteger)effectEditorView:(id)arg0 maximumTextLengthForEffect:(id)arg1 ;
-(id)doneButtonForCameraControlsViewController:(id)arg0 ;
-(id)effectEditorView:(id)arg0 effectAtPoint:(struct CGPoint )arg1 ;
-(id)effectEditorView:(id)arg0 overlayEffectFrameForEffect:(id)arg1 relativeToBounds:(struct CGRect )arg2 ;
-(id)effectEditorView:(id)arg0 textEditingPropertiesForEffect:(id)arg1 relativeToBounds:(struct CGRect )arg2 ;
-(id)effectEditorView:(id)arg0 textForEffect:(id)arg1 ;
-(id)flashButtonForCameraControlsViewController:(id)arg0 ;
-(id)liveCaptureSnapshot;
-(struct CGAffineTransform )overlayTransformForLocalViewfinder;
-(struct CGPoint )effectEditorView:(id)arg0 removeButtonPositionForEffect:(id)arg1 relativeToBounds:(struct CGRect )arg2 ;
-(struct CGPoint )effectEditorView:(id)arg0 spacingBetweenCenterPointOfEffect:(id)arg1 point:(struct CGPoint )arg2 relativeToBounds:(struct CGRect )arg3 ;
-(struct CGRect )CFX_cameraViewFinderUncroppedFrame;
-(struct CGRect )CFX_generateAutoRotationCorrectionFrameWithInterfaceOrientation:(NSInteger)arg0 ;
-(struct CGRect )bottomBarCTMControlsFrameForWindowOrientation:(NSInteger)arg0 bounds:(struct CGRect )arg1 ;
-(struct CGRect )effectEditorView:(id)arg0 frameForEffect:(id)arg1 relativeToBounds:(struct CGRect )arg2 ;
-(struct CGRect )effectEditorView:(id)arg0 hitAreaBoundingFrameForEffect:(id)arg1 adjustForMinimumSize:(BOOL)arg2 relativeToBounds:(struct CGRect )arg3 ;
-(void)CFX_addEffect:(id)arg0 allowImmediateTextEditing:(BOOL)arg1 ;
-(void)CFX_adjustOverlaysForCaptureOrientationChanged:(NSInteger)arg0 oldCaptureOrientation:(NSInteger)arg1 ;
-(void)CFX_applyAutoRotationCorrectionToEditorViews;
-(void)CFX_executeBlockAfterNextFrameRendered:(id)arg0 ;
-(void)CFX_getCAMCaptureForPosition:(NSInteger)arg0 type:(id)arg1 captureDevice:(*NSInteger)arg2 captureDevicePosition:(*NSInteger)arg3 captureMode:(*NSInteger)arg4 ;
-(void)CFX_getCaptureDevice:(*NSInteger)arg0 captureDevicePosition:(*NSInteger)arg1 captureMode:(*NSInteger)arg2 ;
-(void)CFX_handleZoomPinchGestureRecognizer:(id)arg0 ;
-(void)CFX_hideAppStripUpperBackgroundView:(BOOL)arg0 ;
-(void)CFX_performBackCameraZoomWithPinchGestureRecognizer:(id)arg0 ;
-(void)CFX_performFrontCameraZoomWithPinchGestureRecognizer:(id)arg0 ;
-(void)CFX_respondToShutterPress;
-(void)CFX_setFrameAndRenderSizes;
-(void)CFX_toggleCaptureUI;
-(void)JFX_capturePhoto;
-(void)JFX_orientationMonitorDeviceInterfaceOrientationNotification:(id)arg0 ;
-(void)JFX_orientationMonitorInterfaceOrientationNotification:(id)arg0 ;
-(void)addEffect:(id)arg0 ;
-(void)addEffect:(id)arg0 allowImmediateTextEditing:(BOOL)arg1 ;
-(void)addOverlayEffect:(id)arg0 atNormalizedPlanePoint:(struct CGPoint )arg1 scale:(CGFloat)arg2 rotationAngle:(CGFloat)arg3 ;
-(void)addOverlayEffect:(id)arg0 atScreenLocation:(struct CGPoint )arg1 atScreenSize:(struct CGSize )arg2 rotationAngle:(CGFloat)arg3 ;
-(void)applyAutoRotationCorrectionToEditorViewsWithTransitionCoordinator:(id)arg0 ;
-(void)applyRotationTransformForPortrait;
-(void)cameraControlsViewControllerEffectsButtonWasTapped:(id)arg0 ;
-(void)cameraControlsViewControllerShutterButtonWasTapped:(id)arg0 ;
-(void)cameraControlsViewControllerSwitchCameraButtonWasTapped:(id)arg0 ;
-(void)cameraDidStart;
-(void)cameraDidStop;
-(void)completedVideoRecordWithURL:(id)arg0 metadataURL:(id)arg1 ;
-(void)configureCTMUIForCaptureMode;
-(void)configureUIForOrientation;
-(void)configureUIForWindowOrientation:(NSInteger)arg0 bounds:(struct CGRect )arg1 ;
-(void)configureWithControlsViewController:(id)arg0 ;
-(void)configureZoomControl;
-(void)controlStatusBar:(id)arg0 didCreateIndicatorForType:(NSUInteger)arg1 ;
-(void)controlStatusBar:(id)arg0 didReceiveTapInIndicatorForType:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)displayEffectEditorForEffect:(id)arg0 forMode:(NSUInteger)arg1 ;
-(void)doneButtonTapped:(id)arg0 ;
-(void)dynamicShutterControlDidDismissCounter:(id)arg0 ;
-(void)dynamicShutterControlDidPresentCounter:(id)arg0 ;
-(void)dynamicShutterControlDidPressLockButton:(id)arg0 ;
-(void)dynamicShutterControlDidShortPress:(id)arg0 ;
-(void)dynamicShutterControlDidStart:(id)arg0 ;
-(void)dynamicShutterControlDidStop:(id)arg0 ;
-(void)dynamicShutterControlGesturesDidBegin:(id)arg0 ;
-(void)dynamicShutterControlGesturesDidCancel:(id)arg0 ;
-(void)dynamicShutterControlGesturesDidEnd:(id)arg0 ;
-(void)effectCompositionDidChange:(id)arg0 ;
-(void)effectEditorView:(id)arg0 didBeginEditingTextForEffect:(id)arg1 ;
-(void)effectEditorView:(id)arg0 didEditTextForEffect:(id)arg1 newText:(id)arg2 ;
-(void)effectEditorView:(id)arg0 didEndEditingEffect:(id)arg1 ;
-(void)effectEditorView:(id)arg0 didEndEditingTextForEffect:(id)arg1 wasCancelled:(BOOL)arg2 ;
-(void)effectEditorView:(id)arg0 didMoveEffect:(id)arg1 withTouchPoint:(struct CGPoint )arg2 ;
-(void)effectEditorView:(id)arg0 didRemoveEffect:(id)arg1 ;
-(void)effectEditorView:(id)arg0 didTransformEffect:(id)arg1 transform:(struct CGAffineTransform )arg2 relativeToBounds:(struct CGRect )arg3 ;
-(void)effectEditorViewDidBeginEditing:(id)arg0 ;
-(void)effectEditorViewDidEndEditing:(id)arg0 ;
-(void)enableAnimationForOverlayEffect:(id)arg0 ;
-(void)fadeInFaceInViewPromptLabel;
-(void)fadeOutFaceInViewPromptLabel;
-(void)flashButtonTapped:(id)arg0 ;
-(void)fullScreenTextEditViewController:(id)arg0 didBeginAnimationBeforeEditingEffect:(id)arg1 completion:(id)arg2 ;
-(void)fullScreenTextEditViewController:(id)arg0 didBeginEditingEffect:(id)arg1 ;
-(void)fullScreenTextEditViewController:(id)arg0 didFinishAnimationAfterEditingEffect:(id)arg1 completion:(id)arg2 ;
-(void)fullScreenTextEditViewController:(id)arg0 didFinishEditingByRemovingEffect:(id)arg1 ;
-(void)fullScreenTextEditViewController:(id)arg0 didFinishEditingEffect:(id)arg1 withUpdatedText:(id)arg2 ;
-(void)fullScreenTextEditViewController:(id)arg0 willBeginAnimationAfterEditingEffect:(id)arg1 updatedText:(id)arg2 ;
-(void)fullScreenTextEditViewController:(id)arg0 willBeginAnimationBeforeEditingEffect:(id)arg1 ;
-(void)handlePinchGestureRecognizer:(id)arg0 ;
-(void)hideAnimojiFaceReticleForTrackingGain;
-(void)insertCamBottomBar:(id)arg0 ;
-(void)layoutZoomControlForCTM;
-(void)layoutZoomControlRelativeToBottomBarAndPreview:(id)arg0 ;
-(void)layoutZoomSliderRelativeToBottomBarAndPreview;
-(void)layoutZoomUI;
-(void)liveCaptureViewController:(id)arg0 didRenderFrame:(id)arg1 ;
-(void)liveCaptureViewController:(id)arg0 livePreviewDoubleTappedAtNormalizedCenterPoint:(struct CGPoint )arg1 gesture:(id)arg2 ;
-(void)liveCaptureViewController:(id)arg0 livePreviewPannedAtNormalizedPoint:(struct CGPoint )arg1 gesture:(id)arg2 ;
-(void)liveCaptureViewController:(id)arg0 livePreviewPinchedAtNormalizedCenterPoint:(struct CGPoint )arg1 gesture:(id)arg2 ;
-(void)liveCaptureViewController:(id)arg0 livePreviewRotatedAtNormalizedCenterPoint:(struct CGPoint )arg1 gesture:(id)arg2 ;
-(void)liveCaptureViewController:(id)arg0 livePreviewTappedAtNormalizedPoint:(struct CGPoint )arg1 ;
-(void)prepareForSegue:(id)arg0 sender:(id)arg1 ;
-(void)removeAllEffectsAnimated:(BOOL)arg0 ;
-(void)removeAllEffectsOfType:(id)arg0 animated:(BOOL)arg1 ;
-(void)removeAnimojiTrackingReticle;
-(void)removeEffectEditorAnimated:(BOOL)arg0 ;
-(void)removeEffectsForCameraSwitch;
-(void)removeLiveCaptureSnapshot;
-(void)resign;
-(void)returnCTMUIToPhotoMode;
-(void)saveLiveCaptureSnapshotForReview;
-(void)setLiveCapturePresentationFrame:(struct CGRect )arg0 withContentRect:(struct CGRect )arg1 ;
-(void)setLiveCaptureViewController:(id)arg0 ;
-(void)setTorchModeForFlashMode:(NSInteger)arg0 ;
-(void)setupAnimojiFaceReticleForTrackingLoss;
-(void)setupFaceInViewPromptLabel;
-(void)showAnimojiFaceReticleForTrackingLoss;
-(void)showLiveCaptureSnapshotBlurred:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)shutterControlTouchAttemptedWhileDisabled:(id)arg0 ;
-(void)startVideoRecording;
-(void)stopVideoRecording:(id)arg0 ;
-(void)toggleBetweenZoomFactorsForZoomControl:(id)arg0 ;
-(void)toggleCTMFlashButton;
-(void)updateAnimojiTrackingReticleAndLabelLayout;
-(void)updateControlVisibilityAnimated:(BOOL)arg0 ;
-(void)updateEffectEditorLayout;
-(void)updateFullScreenTextEditorLayout;
-(void)updateTopBar;
-(void)updateUIForDevicePosition:(NSInteger)arg0 ;
-(void)updateUIForDockMagnify:(BOOL)arg0 dockHeightDelta:(CGFloat)arg1 ;
-(void)updateUIForVideoRecording:(BOOL)arg0 ;
-(void)updateZoomUIForCapturing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateZoomUIVisibility;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willDropCameraFrame;
-(void)zoomControl:(id)arg0 didChangeZoomFactor:(CGFloat)arg1 interactionType:(NSInteger)arg2 ;
-(void)zoomSliderDidBeginAutozooming:(id)arg0 ;
-(void)zoomSliderDidEndAutozooming:(id)arg0 ;
-(void)zoomSliderDidEndZooming:(id)arg0 ;
-(void)zoomSliderValueDidChange:(id)arg0 forEvent:(id)arg1 ;


@end


#endif