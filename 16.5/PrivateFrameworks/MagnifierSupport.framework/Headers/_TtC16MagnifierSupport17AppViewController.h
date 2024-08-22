// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16MAGNIFIERSUPPORT17APPVIEWCONTROLLER_H
#define _TTC16MAGNIFIERSUPPORT17APPVIEWCONTROLLER_H

@class TtC16MagnifierSupport27LensFilteringViewController, AVCaptureDeviceInput;
@protocol ARSessionDelegate, AXUIEventHandler, CAAnimationDelegate, AVSpeechSynthesizerDelegate;



@interface _TtC16MagnifierSupport17AppViewController : TtC16MagnifierSupport27LensFilteringViewController <ARSessionDelegate, AXUIEventHandler, CAAnimationDelegate, AVSpeechSynthesizerDelegate>

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
    ? isDetectionModeTransitioning;
    ? arRecordingConfiguration;
    ? arReplayConfiguration;
    ? arIsRecording;
    ? $__lazy_storage_$_currentRecordingURL;
    ? lastRecordingURL;
    ? lastScreenRecordingURL;
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
    ? wasTooDarkToDetect;
    ? wasTooFastToDetect;
    ? tooFastLastDate;
    ? engine;
    ? detectionModeView;
    ? DOOR_UPDATE_INTERVAL;
    ? DOOR_ATTRIBUTES_UPDATE_INTERVAL;
    ? DOOR_ATTRIUBTES_CACHE_MAX_DISTANCE;
    ? DOOR_CACHE_MAX_DISTANCE;
    ? DOOR_MAX_DEPTH;
    ? DOOR_ATTRIUBTES_CACHE_TIMEOUT;
    ? lastDoorCheckTime;
    ? lastDoorAttributesCheckTime;
    ? speechPauseTime;
    ? DOOR_TEXT_UPDATE_INTERVAL;
    ? DOOR_TEXT_SMALL_BBOX_THRESHOLD;
    ? lastTextCheckTime;
    ? cachedDetectedDocument;
    ? DOOR_SIGN_UPDATE_INTERVAL;
    ? lastSignCheckTime;
    ? cachedSignDetectorResults;
    ? doorSignDetectorModel;
    ? doorDetectionDoorBoxLayers;
    ? doorAttributesCache;
    ? detector;
    ? doorDecorationsCache;
    ? captionLabel;
    ? lastImageDescriptionTextTime;
    ? useDoorSpeechFeedback;
    ? doorToneGenerator;
    ? lastDoorDetectionTextTime;
    ? languageTranslator;
    ? kAXSMagnifierLaunchedNotification;
    ? kAXSMagnifierClosedNotification;
    ? detectedPersonView;
    ? captureSession;
    ? captureDevice;
    ? controlRestorationSubscriptions;
    ? controlSubscriptions;
    ? freezeFrameModeDescriptionPublisher;
    ? activeControlDescriptionPublishers;
    ? sessionQueue;
    ? controlsQueue;
    ? dataOutputQueue;
    ? arSessionQueue;
    ? audioQueue;
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
    ? $__lazy_storage_$_detectionInformationLabel;
    ? $__lazy_storage_$_landscapeDetectionInformationLabel;
    ? dRotationSubscription;
    ? kDetectionInformationLabelPadding;
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
    ? doorDetectionSubscription;
    ? detectionModeSubscription;
    ? imageCaptionSubscription;
    ? activitiesNameController;
    ? commitActivityButton;
    ? currentQuickActivityName;
    ? modelsManager;
    ? activityZoomPercentageSubscripton;
    ? openStateConfidenceThreshold;
    ? backTapEventProcessor;
    ? inflightAnnouncement;
    ? inflightText;
    ? lastAnnouncement;
    ? passthroughView;
    ? freezeFrameScrubberTray;
}


@property (nonatomic, retain) AVCaptureDeviceInput *cameraDeviceInput; // ivar: cameraDeviceInput
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;


-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_dismissActivityCustomizationPane;
-(void)_dismissActivityCustomizationPaneWithText;
-(void)deviceOrientationDidChange:(id)arg0 ;
-(void)didActivateCardHidingGesture:(id)arg0 ;
-(void)didActivateCardVisibilityGesture:(id)arg0 ;
-(void)didLongPressToFocus:(id)arg0 ;
-(void)didPanPreviewView:(id)arg0 ;
-(void)didPinchToZoom:(id)arg0 ;
-(void)didTapToChangeFocus:(id)arg0 ;
-(void)loadView;
-(void)session:(id)arg0 didUpdateFrame:(id)arg1 ;
-(void)sessionInterruptionEnded:(id)arg0 ;
-(void)sessionWasInterrupted:(id)arg0 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeechUtterance:(id)arg1 ;
-(void)updateAppearanceForReduceTransparency:(id)arg0 ;
-(void)userDidEndMutliShotMode:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif