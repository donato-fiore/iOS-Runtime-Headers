// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16MAGNIFIERSUPPORT17APPVIEWCONTROLLER_H
#define _TTC16MAGNIFIERSUPPORT17APPVIEWCONTROLLER_H

@class TtC16MagnifierSupport27LensFilteringViewController, AVCaptureDeviceInput;
@protocol CAAnimationDelegate;



@interface _TtC16MagnifierSupport17AppViewController : TtC16MagnifierSupport27LensFilteringViewController <CAAnimationDelegate>

 {
    ? _stillImageStore;
    ? freezeFrameViewController;
    ? didSetupCardUI;
    ? isControlContainerViewLoaded;
    ? $__lazy_storage_$_controlContainer;
    ? $__lazy_storage_$_mainCardViewController;
    ? $__lazy_storage_$_cameraTrayViewController;
    ? currentLiveView;
    ? $__lazy_storage_$_cameraVideoPreviewView;
    ? cameraVideoPreviewLayer;
    ? liveLensInterruptionBlurView;
    ? $__lazy_storage_$_doubleTapGesture;
    ? kPersonLabelPoolSize;
    ? metalOverlayView;
    ? arSession;
    ? arSessionIsInterrupted;
    ? isARSessionStarted;
    ? isPeopleDetectionTransitioning;
    ? lastARFrameTimestamp;
    ? deactivationReasons;
    ? pdRecordingConfiguration;
    ? pdReplayConfiguration;
    ? pdIsRecording;
    ? $__lazy_storage_$_currentRecordingURL;
    ? lastRecordingURL;
    ? $__lazy_storage_$_personDetectionManager;
    ? rotationRateManager;
    ? luminanceManager;
    ? overlayRenderer;
    ? personsLabelPool;
    ? toneGenerator;
    ? useSpeechFeedback;
    ? speechGenerator;
    ? speechMaxFrameCount;
    ? speechDepthArray;
    ? lastSpokenDepthValue;
    ? lastSpeechDate;
    ? wasTooDarkToDetectPeople;
    ? wasTooFastToDetectPeople;
    ? tooFastLastDate;
    ? detectedPersonView;
    ? engine;
    ? captureSession;
    ? captureDevice;
    ? controlRestorationSubscriptions;
    ? controlSubscriptions;
    ? freezeFrameModeDescriptionPublisher;
    ? activeControlDescriptionPublishers;
    ? sessionQueue;
    ? controlsQueue;
    ? dataOutputQueue;
    ? cameraPhotoOutput;
    ? cameraVideoDataOutput;
    ? setupResult;
    ? _capturedPhoto;
    ? _capturedImage;
    ? captureAttemptDidSucceed;
    ? zoomPanGesture;
    ? zoomPinchGesture;
    ? previousGestureZoomFactor;
    ? didRestartZoomGestureAfterLastHaptic;
    ? zoomGestureFeedbackGenerator;
    ? panStartZoomFactor;
    ? pinchStartZoomFactor;
    ? $__lazy_storage_$_focusIndicator;
    ? focusIndicatorFadeTime;
    ? informationSubscription;
    ? coachingSubscription;
    ? isInformationLabelVisible;
    ? $__lazy_storage_$_coachingLabel;
    ? $__lazy_storage_$_landscapeCoachingLabel;
    ? $__lazy_storage_$_peopleDetectionInformationLabel;
    ? $__lazy_storage_$_landscapePeopleDetectionInformationLabel;
    ? pdRotationSubscription;
    ? kPeopleDetectionInformationLabelPadding;
    ? coachingHideAnimator;
    ? sceneEventAnimator;
    ? controlSubscriptionProvider;
    ? cancellables;
    ? liveLensDisplayAppearanceSubscription;
    ? cameraTypeSubscription;
    ? focusLockSubscriptions;
    ? capturedPhotoSubscription;
    ? sessionSubscriptions;
    ? contentSizeCategorySubscription;
    ? peopleDetectionSubscription;
    ? springBoardServer;
    ? passthroughView;
    ? freezeFrameScrubberTray;
}


@property (nonatomic, retain) AVCaptureDeviceInput *cameraDeviceInput; // ivar: cameraDeviceInput
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;


-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)deviceOrientationDidChange:(id)arg0 ;
-(void)didActivateCardHidingGesture:(id)arg0 ;
-(void)didActivateCardVisibilityGesture:(id)arg0 ;
-(void)didLongPressToFocus:(id)arg0 ;
-(void)didPanPreviewView:(id)arg0 ;
-(void)didPinchToZoom:(id)arg0 ;
-(void)didTapToChangeFocus:(id)arg0 ;
-(void)loadView;
-(void)updateAppearanceForReduceTransparency:(id)arg0 ;
-(void)userDidEndMutliShotMode:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif