// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDOCCAMVIEWCONTROLLER_H
#define ICDOCCAMVIEWCONTROLLER_H

@class UIViewController, BKSAccelerometer, UIButton, NSLayoutConstraint, UILabel, UIView, UIColor, NSData, NSString, NSMutableArray, NSArray, UIScrollView, UIImage, NSMutableDictionary, NSIndexPath, NSDate, VNRectangleObservation, AVCapturePhotoOutput, AVCapturePhotoSettings, AVCaptureSession, CIContext, UITapGestureRecognizer, AVCaptureConnection, AVCaptureVideoDataOutput, AVCaptureDeviceInput, AVCaptureVideoPreviewLayer;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate, ICDocCamThumbnailViewDelegate, ICDocCamExtractedDocumentControllerDelegate, ICDocCamProcessingBlockerDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, CAAnimationDelegate, UINavigationControllerDelegate, DCUnsavedDataDelegate, ICDocCamDebugMovieControllerDelegate, ICDocCamPhysicalCaptureNotifierDelegate, ICDocCamViewControllerDelegate, OS_dispatch_semaphore, OS_dispatch_queue;


#import "ICDocCamImageQuad.h"
#import "ICDocCamDocumentInfoCollection.h"
#import "ICDocCamImageCache.h"
#import "ICDocCamDocumentInfo.h"
#import "ICDocCamDebugMovieController.h"
#import "ICDocCamOverlayView.h"
#import "ICDocCamPhysicalCaptureNotifier.h"
#import "ICDocCamPhysicalCaptureRecognizer.h"
#import "ICDocCamPreviewView.h"
#import "ICDocCamProcessingBlocker.h"
#import "ICDocCamRectangleResultsQueue.h"
#import "ICDocCamSaveButton.h"
#import "ICDocCamShutterButton.h"
#import "ICDocCamSpinner.h"
#import "ICDocCamThumbnailContainerView.h"
#import "ICDocCamThumbnailCollectionViewController.h"
#import "ICDocCamImageSequenceAnalyzer.h"

@interface ICDocCamViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate, ICDocCamThumbnailViewDelegate, ICDocCamExtractedDocumentControllerDelegate, ICDocCamProcessingBlockerDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, CAAnimationDelegate, UINavigationControllerDelegate, DCUnsavedDataDelegate, ICDocCamDebugMovieControllerDelegate, ICDocCamPhysicalCaptureNotifierDelegate>

 {
    CGFloat _requestTime;
    CGFloat _requestTimeSum;
    int _requestTimeIndex;
}


@property (retain, nonatomic) BKSAccelerometer *accelerometer; // ivar: _accelerometer
@property BOOL adjustingFocus; // ivar: _adjustingFocus
@property (weak, nonatomic) UIButton *autoButton; // ivar: _autoButton
@property (weak, nonatomic) UIButton *autoButtonForIPhone; // ivar: _autoButtonForIPhone
@property (retain, nonatomic) NSLayoutConstraint *autoButtonForIPhoneTrailingConstraint; // ivar: _autoButtonForIPhoneTrailingConstraint
@property (weak, nonatomic) UILabel *autoShutterOffLabel; // ivar: _autoShutterOffLabel
@property (weak, nonatomic) NSLayoutConstraint *autoShutterOffTopLayoutConstraint; // ivar: _autoShutterOffTopLayoutConstraint
@property (weak, nonatomic) UIView *autoShutterOffView; // ivar: _autoShutterOffView
@property (weak, nonatomic) UILabel *autoShutterOnLabel; // ivar: _autoShutterOnLabel
@property (weak, nonatomic) NSLayoutConstraint *autoShutterOnTopLayoutConstraint; // ivar: _autoShutterOnTopLayoutConstraint
@property (weak, nonatomic) UIView *autoShutterOnView; // ivar: _autoShutterOnView
@property (nonatomic) BOOL awaitingSnapshotCompletion; // ivar: _awaitingSnapshotCompletion
@property (nonatomic) NSUInteger axConsecutiveRecognizerStateCount; // ivar: _axConsecutiveRecognizerStateCount
@property (retain, nonatomic) ICDocCamImageQuad *backupQuad; // ivar: _backupQuad
@property (retain, nonatomic) UIColor *cameraHighlightColor; // ivar: _cameraHighlightColor
@property (retain, nonatomic) NSData *cameraIntrinsicData; // ivar: _cameraIntrinsicData
@property (weak, nonatomic) UILabel *cameraUnavailableLabel; // ivar: _cameraUnavailableLabel
@property (weak, nonatomic) UIView *cameraUnavailableScrim; // ivar: _cameraUnavailableScrim
@property (weak, nonatomic) UIView *cameraUnavailableView; // ivar: _cameraUnavailableView
@property (weak, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (weak, nonatomic) UIButton *cancelButtonForIPhone; // ivar: _cancelButtonForIPhone
@property (retain, nonatomic) NSLayoutConstraint *cancelButtonForIPhoneLeadingConstraint; // ivar: _cancelButtonForIPhoneLeadingConstraint
@property (nonatomic) BOOL captureDebugDone; // ivar: _captureDebugDone
@property (nonatomic) BOOL capturingFromPhysicalButton; // ivar: _capturingFromPhysicalButton
@property (readonly, copy) NSString *debugDescription;
@property BOOL debugRectanglesEnabled; // ivar: _debugRectanglesEnabled
@property (nonatomic) short defaultFilter; // ivar: _defaultFilter
@property (weak) NSObject<ICDocCamViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL deviceHasFlash; // ivar: _deviceHasFlash
@property (nonatomic) BOOL didAddAppLifetimeObservers; // ivar: _didAddAppLifetimeObservers
@property (nonatomic) BOOL didWarnAboutMaxScans; // ivar: _didWarnAboutMaxScans
@property BOOL displayStringEnabled; // ivar: _displayStringEnabled
@property (retain, nonatomic) ICDocCamDocumentInfoCollection *documentInfoCollection; // ivar: _documentInfoCollection
@property (weak, nonatomic) UIButton *filterButton; // ivar: _filterButton
@property (weak, nonatomic) UIButton *filterButtonForIPhone; // ivar: _filterButtonForIPhone
@property (retain, nonatomic) NSMutableArray *filterButtons; // ivar: _filterButtons
@property (weak, nonatomic) UILabel *filterNameFeedbackLabel; // ivar: _filterNameFeedbackLabel
@property (weak, nonatomic) UIView *filterNameFeedbackView; // ivar: _filterNameFeedbackView
@property (retain, nonatomic) NSLayoutConstraint *filterNameFeedbackViewTopLayoutConstraint; // ivar: _filterNameFeedbackViewTopLayoutConstraint
@property (retain, nonatomic) NSArray *filterNames; // ivar: _filterNames
@property (weak, nonatomic) UIScrollView *filterScrollView; // ivar: _filterScrollView
@property (weak, nonatomic) UIView *filterScrollViewContainer; // ivar: _filterScrollViewContainer
@property (nonatomic) BOOL filterSettingUIShowing; // ivar: _filterSettingUIShowing
@property (weak, nonatomic) UIView *filterView; // ivar: _filterView
@property (weak, nonatomic) UIButton *filterViewButton; // ivar: _filterViewButton
@property (weak, nonatomic) UIView *filterViewContainer; // ivar: _filterViewContainer
@property (retain, nonatomic) NSLayoutConstraint *filterViewContainerHeightConstraint; // ivar: _filterViewContainerHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *filterViewContainerWidthConstraint; // ivar: _filterViewContainerWidthConstraint
@property (weak, nonatomic) NSLayoutConstraint *filterViewLeadingConstraint; // ivar: _filterViewLeadingConstraint
@property (weak, nonatomic) NSLayoutConstraint *filterViewTrailingConstraint; // ivar: _filterViewTrailingConstraint
@property (retain, nonatomic) UIImage *filteredImageForRecrop; // ivar: _filteredImageForRecrop
@property (retain) NSObject<OS_dispatch_semaphore> *flashAndFilterUISemaphore; // ivar: _flashAndFilterUISemaphore
@property (weak, nonatomic) UIButton *flashButton; // ivar: _flashButton
@property (weak, nonatomic) UIButton *flashButtonForIPhone; // ivar: _flashButtonForIPhone
@property (nonatomic) NSInteger flashMode; // ivar: _flashMode
@property (weak, nonatomic) UIView *flashSettingButtonView; // ivar: _flashSettingButtonView
@property (nonatomic) BOOL flashSettingUIShowing; // ivar: _flashSettingUIShowing
@property (weak, nonatomic) UIView *flashSettingView; // ivar: _flashSettingView
@property (weak, nonatomic) UIButton *flashSettingViewAutoButton; // ivar: _flashSettingViewAutoButton
@property (weak, nonatomic) UIButton *flashSettingViewFlashIcon; // ivar: _flashSettingViewFlashIcon
@property (retain, nonatomic) NSLayoutConstraint *flashSettingViewHeightConstraint; // ivar: _flashSettingViewHeightConstraint
@property (weak, nonatomic) UIButton *flashSettingViewOffButton; // ivar: _flashSettingViewOffButton
@property (weak, nonatomic) UIButton *flashSettingViewOnButton; // ivar: _flashSettingViewOnButton
@property (weak, nonatomic) NSLayoutConstraint *flashSettingWidthConstraint; // ivar: _flashSettingWidthConstraint
@property (nonatomic) BOOL hasCandidateRectanglesForAX; // ivar: _hasCandidateRectanglesForAX
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideUserPrompt; // ivar: _hideUserPrompt
@property (retain, nonatomic) NSMutableArray *iPadLayoutConstraints; // ivar: _iPadLayoutConstraints
@property (retain, nonatomic) NSMutableArray *iPhoneCompactLandscapeLayoutConstraints; // ivar: _iPhoneCompactLandscapeLayoutConstraints
@property (retain, nonatomic) NSMutableArray *iPhoneLandscapeLayoutConstraints; // ivar: _iPhoneLandscapeLayoutConstraints
@property (retain, nonatomic) NSMutableArray *iPhonePortraitLayoutConstraints; // ivar: _iPhonePortraitLayoutConstraints
@property (retain, nonatomic) ICDocCamImageCache *imageCache; // ivar: _imageCache
@property (retain, nonatomic) UIImage *imageForRetake; // ivar: _imageForRetake
@property (retain, nonatomic) UIImage *imageForThumbnailZoom; // ivar: _imageForThumbnailZoom
@property (retain, nonatomic) NSMutableDictionary *inProgressPhotoCaptureDelegates; // ivar: _inProgressPhotoCaptureDelegates
@property (retain, nonatomic) NSIndexPath *indexPathForRecrop; // ivar: _indexPathForRecrop
@property (retain, nonatomic) NSIndexPath *indexPathForRetake; // ivar: _indexPathForRetake
@property (retain, nonatomic) NSIndexPath *indexPathForThumbnailZoom; // ivar: _indexPathForThumbnailZoom
@property (readonly, nonatomic) BOOL isInRetakeMode;
@property (nonatomic) BOOL isObservingCaptureSession; // ivar: _isObservingCaptureSession
@property (retain, nonatomic) NSDate *lastAXPositionAnnouncementDate; // ivar: _lastAXPositionAnnouncementDate
@property (retain, nonatomic) VNRectangleObservation *lastHighConfidenceRectangle; // ivar: _lastHighConfidenceRectangle
@property (retain) NSDate *lastSubjectAreaChange; // ivar: _lastSubjectAreaChange
@property (weak, nonatomic) UIButton *manualButton; // ivar: _manualButton
@property (copy, nonatomic) id *markupDismissCompletionBlock; // ivar: _markupDismissCompletionBlock
@property (retain, nonatomic) ICDocCamDocumentInfo *markupDocumentInfo; // ivar: _markupDocumentInfo
@property (weak, nonatomic) UILabel *moveCameraCloserLabel; // ivar: _moveCameraCloserLabel
@property (weak, nonatomic) UIView *moveCameraCloserView; // ivar: _moveCameraCloserView
@property (retain, nonatomic) NSLayoutConstraint *moveCameraCloserViewVerticalConstraint; // ivar: _moveCameraCloserViewVerticalConstraint
@property (retain, nonatomic) ICDocCamDebugMovieController *movieController; // ivar: _movieController
@property (nonatomic) NSInteger orientationForRecrop; // ivar: _orientationForRecrop
@property (weak, nonatomic) ICDocCamOverlayView *overlayView; // ivar: _overlayView
@property (retain, nonatomic) AVCapturePhotoOutput *photoOutput; // ivar: _photoOutput
@property (retain, nonatomic) AVCapturePhotoSettings *photoSettings; // ivar: _photoSettings
@property (retain, nonatomic) ICDocCamPhysicalCaptureNotifier *physicalCaptureNotifier; // ivar: _physicalCaptureNotifier
@property (retain, nonatomic) ICDocCamPhysicalCaptureRecognizer *physicalCaptureRecognizer; // ivar: _physicalCaptureRecognizer
@property float pixelFocalLength; // ivar: _pixelFocalLength
@property (weak, nonatomic) ICDocCamPreviewView *previewView; // ivar: _previewView
@property (retain, nonatomic) ICDocCamProcessingBlocker *processRequestsBlocker; // ivar: _processRequestsBlocker
@property NSInteger queueSizeForRectangleDetection; // ivar: _queueSizeForRectangleDetection
@property BOOL realTimeRectangleDetection; // ivar: _realTimeRectangleDetection
@property (retain, nonatomic) NSMutableArray *recentRectangleObservations; // ivar: _recentRectangleObservations
@property (weak, nonatomic) UIButton *recordButton; // ivar: _recordButton
@property (retain) ICDocCamRectangleResultsQueue *rectResultsQueue; // ivar: _rectResultsQueue
@property BOOL rectangleDetectionEnabled; // ivar: _rectangleDetectionEnabled
@property float rectangleMaximumAspectRatio; // ivar: _rectangleMaximumAspectRatio
@property NSInteger rectangleMaximumNumber; // ivar: _rectangleMaximumNumber
@property float rectangleMinimumAspectRatio; // ivar: _rectangleMinimumAspectRatio
@property float rectangleMinimumConfidence; // ivar: _rectangleMinimumConfidence
@property float rectangleMinimumSize; // ivar: _rectangleMinimumSize
@property float rectangleMinimumVisualConfidence; // ivar: _rectangleMinimumVisualConfidence
@property float rectangleQuadratureTolerance; // ivar: _rectangleQuadratureTolerance
@property float rectangleStabilityStdDev; // ivar: _rectangleStabilityStdDev
@property (nonatomic) NSInteger referenceOrientation; // ivar: _referenceOrientation
@property BOOL registrationEnabled; // ivar: _registrationEnabled
@property (weak, nonatomic) UIButton *resumeButton; // ivar: _resumeButton
@property (copy, nonatomic) id *retakeCompletionBlock; // ivar: _retakeCompletionBlock
@property (nonatomic) NSInteger retakeIndex; // ivar: _retakeIndex
@property (retain, nonatomic) ICDocCamSaveButton *saveButton; // ivar: _saveButton
@property (retain, nonatomic) NSLayoutConstraint *saveButtonLandscapeTrailingConstraintForIPhone; // ivar: _saveButtonLandscapeTrailingConstraintForIPhone
@property (retain, nonatomic) NSLayoutConstraint *saveButtonLandscapeVerticalConstraintForIPhone; // ivar: _saveButtonLandscapeVerticalConstraintForIPhone
@property (nonatomic) BOOL scanMovieRecordingDontShowWarning; // ivar: _scanMovieRecordingDontShowWarning
@property (nonatomic) BOOL scanMovieRecordingEnabled; // ivar: _scanMovieRecordingEnabled
@property (weak, nonatomic) UIView *scrimView; // ivar: _scrimView
@property CGPoint segmentBottomLeft; // ivar: _segmentBottomLeft
@property CGPoint segmentBottomRight; // ivar: _segmentBottomRight
@property BOOL segmentMeanComputed; // ivar: _segmentMeanComputed
@property float segmentMinimumVisualConfidence; // ivar: _segmentMinimumVisualConfidence
@property float segmentMinimumVisualConfidence60Frames; // ivar: _segmentMinimumVisualConfidence60Frames
@property float segmentMinimumVisualConfidenceFinalScan; // ivar: _segmentMinimumVisualConfidenceFinalScan
@property float segmentStabilityStdDev; // ivar: _segmentStabilityStdDev
@property CGPoint segmentTopLeft; // ivar: _segmentTopLeft
@property CGPoint segmentTopRight; // ivar: _segmentTopRight
@property float segmentationFudgeFactor; // ivar: _segmentationFudgeFactor
@property (retain, nonatomic) AVCaptureSession *session; // ivar: _session
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue; // ivar: _sessionQueue
@property (nonatomic, getter=isSessionRunning) BOOL sessionRunning; // ivar: _sessionRunning
@property (copy, nonatomic) id *sessionStartNotificationBlock; // ivar: _sessionStartNotificationBlock
@property (nonatomic) NSInteger setupResult; // ivar: _setupResult
@property (retain, nonatomic) CIContext *sharedCoreImageContext; // ivar: _sharedCoreImageContext
@property (weak, nonatomic) ICDocCamShutterButton *shutterButton; // ivar: _shutterButton
@property (retain, nonatomic) NSLayoutConstraint *shutterButtonBottomConstraintForLandscapeIPhone; // ivar: _shutterButtonBottomConstraintForLandscapeIPhone
@property (retain, nonatomic) NSLayoutConstraint *shutterButtonBottomConstraintForPortraitIPhone; // ivar: _shutterButtonBottomConstraintForPortraitIPhone
@property (retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // ivar: _singleTapGestureRecognizer
@property (retain, nonatomic) ICDocCamProcessingBlocker *snapStillImageBlocker; // ivar: _snapStillImageBlocker
@property (nonatomic) NSInteger snapStillImageMode; // ivar: _snapStillImageMode
@property (retain, nonatomic) ICDocCamSpinner *snapshotSpinner; // ivar: _snapshotSpinner
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *snapshotSpinnerQueue; // ivar: _snapshotSpinnerQueue
@property (nonatomic) NSInteger statusBarOrientation; // ivar: _statusBarOrientation
@property (nonatomic) CGSize streamingImageSize; // ivar: _streamingImageSize
@property (readonly) Class superclass;
@property BOOL synchronousRectangleDetection; // ivar: _synchronousRectangleDetection
@property (retain, nonatomic) ICDocCamThumbnailContainerView *thumbnailContainerView; // ivar: _thumbnailContainerView
@property (retain, nonatomic) NSLayoutConstraint *thumbnailContainerViewBottomConstraintForIPhone; // ivar: _thumbnailContainerViewBottomConstraintForIPhone
@property (retain, nonatomic) NSLayoutConstraint *thumbnailContainerViewLeadingConstraintForIPad; // ivar: _thumbnailContainerViewLeadingConstraintForIPad
@property (retain, nonatomic) NSLayoutConstraint *thumbnailContainerViewLeadingConstraintForIPhone; // ivar: _thumbnailContainerViewLeadingConstraintForIPhone
@property (retain, nonatomic) NSLayoutConstraint *thumbnailContainerViewTrailingConstraintForIPad; // ivar: _thumbnailContainerViewTrailingConstraintForIPad
@property (retain, nonatomic) ICDocCamThumbnailCollectionViewController *thumbnailViewController; // ivar: _thumbnailViewController
@property (copy, nonatomic) id *thumbnailZoomCompletionBlock; // ivar: _thumbnailZoomCompletionBlock
@property (weak, nonatomic) UIView *topToolbarForIPhone; // ivar: _topToolbarForIPhone
@property (weak, nonatomic) NSLayoutConstraint *topToolbarForIPhoneHeightConstraint; // ivar: _topToolbarForIPhoneHeightConstraint
@property (retain, nonatomic) UIImage *unfilteredImageForRecrop; // ivar: _unfilteredImageForRecrop
@property (nonatomic) BOOL useCustomRecropTransition; // ivar: _useCustomRecropTransition
@property (nonatomic) BOOL useCustomRetakeTransition; // ivar: _useCustomRetakeTransition
@property (nonatomic) BOOL useCustomThumbnailZoomTransition; // ivar: _useCustomThumbnailZoomTransition
@property (readonly) BOOL useDocumentSegmentation;
@property (weak, nonatomic) UILabel *userPromptLabel; // ivar: _userPromptLabel
@property (weak, nonatomic) UIView *userPromptView; // ivar: _userPromptView
@property (retain, nonatomic) NSLayoutConstraint *userPromptViewVerticalConstraint; // ivar: _userPromptViewVerticalConstraint
@property (retain, nonatomic) AVCaptureConnection *videoConnection; // ivar: _videoConnection
@property (retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // ivar: _videoDataOutput
@property (retain, nonatomic) AVCaptureDeviceInput *videoDeviceInput; // ivar: _videoDeviceInput
@property (weak, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer; // ivar: _videoPreviewLayer
@property (nonatomic) CGSize viewBoundsSize; // ivar: _viewBoundsSize
@property (retain, nonatomic) ICDocCamImageSequenceAnalyzer *vkAnalyzer; // ivar: _vkAnalyzer
@property (nonatomic) CGRect zoomTargetCustomImageFrame; // ivar: _zoomTargetCustomImageFrame
@property (nonatomic) BOOL zoomTargetShouldUseCustomImageFrame; // ivar: _zoomTargetShouldUseCustomImageFrame


+(id)deviceWithMediaType:(id)arg0 preferringPosition:(NSInteger)arg1 ;
+(struct ? )cameraIntrinsicMatrixForWidth:(float)arg0 height:(float)arg1 pixelFocalLength:(float)arg2 ;
+(void)initialize;
+(void)registerDefaults;
+(void)warnAboutMaxScansReachedForViewController:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)accessibilityPerformEscape;
-(BOOL)autoMode;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutoShoot;
-(BOOL)shouldAutorotate;
-(BOOL)sufficientlyLarge:(id)arg0 forImageSize:(struct CGSize )arg1 ;
-(BOOL)useGestureRecognizerForVolumeButtons;
-(BOOL)validRect:(id)arg0 forImageSize:(struct CGSize )arg1 ;
-(CGFloat)filterScrollViewContentWidthWithInterItemSpacing:(CGFloat)arg0 startPadding:(CGFloat)arg1 endPadding:(CGFloat)arg2 ;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)createNSDataFrom:(id)arg0 metaData:(id)arg1 ;
-(id)cropAndFilterImage:(id)arg0 rects:(id)arg1 filterType:(short)arg2 ;
-(id)detectRectanglesRequest;
-(id)extractedDocumentControllerMarkupModelDataForDocument:(id)arg0 ;
-(id)filteredImageForDocument:(id)arg0 ;
-(id)flashMenuButtonSizes;
-(id)imageMeshTransformWithImage:(id)arg0 backgroundImage:(id)arg1 imageViewFrame:(struct CGRect )arg2 imageQuad:(id)arg3 previewView:(id)arg4 previewBounds:(struct CGRect )arg5 scrimView:(id)arg6 ;
-(id)initWithImageCache:(id)arg0 ;
-(id)navigationController:(id)arg0 animationControllerForOperation:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(id)rootView;
-(struct CGRect )targetViewRect;
-(struct CGRect )zoomTargetForIndexPath:(id)arg0 ;
-(unsigned int)imageOrientationFromDevice;
-(void)addNewDocument:(id)arg0 ;
-(void)addObserversIfNecessary;
-(void)analyzerCallbackWithDictionaryResults:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)cancelAction:(id)arg0 ;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)changeFlashAction:(id)arg0 ;
-(void)changeRecordButtonTitle:(id)arg0 ;
-(void)clearQueue;
-(void)clearRectangles;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)createPhysicalCaptureRecognizerOrNotifierIfNecessary;
-(void)dealloc;
-(void)detectRectanglesAndSaveCapturedImage:(struct __CVBuffer *)arg0 metadata:(id)arg1 completionHandler:(id)arg2 ;
-(void)didFinishWithImage:(id)arg0 ;
-(void)didRecognizeRectangleForAccessibility:(BOOL)arg0 ;
-(void)disableRetakeMode;
-(void)dismissFilterAndFlashUI;
-(void)dismissFilterUI;
-(void)dismissFlashUI;
-(void)enableRecordButton:(BOOL)arg0 ;
-(void)enableShutter:(BOOL)arg0 ;
-(void)enableShutterButtonIfPossible;
-(void)enableUIElements:(BOOL)arg0 ;
-(void)enableUIElementsForMovieRecording:(BOOL)arg0 ;
-(void)extractedDocumentController:(id)arg0 didTapRecrop:(id)arg1 index:(NSInteger)arg2 ;
// -(void)extractedDocumentController:(id)arg0 startMarkupOnDocument:(id)arg1 inkStyle:(NSUInteger)arg2 startPresentBlock:(id)arg3 dismissCompletionBlock:(unk)arg4  ;
-(void)extractedDocumentControllerDidDeleteDocument:(id)arg0 ;
-(void)extractedDocumentControllerDidTapDone:(NSUInteger)arg0 ;
-(void)extractedDocumentControllerDidTapRetake:(NSUInteger)arg0 ;
-(void)extractedDocumentControllerDiscardMarkupModelDataForDocument:(id)arg0 ;
-(void)filterButtonAction:(id)arg0 ;
-(void)filterButtonCancelUI:(id)arg0 ;
-(void)filterButtonChoiceAction:(id)arg0 ;
-(void)flashButtonAction:(id)arg0 ;
-(void)flashButtonCancelUI:(id)arg0 ;
-(void)flashFilterButtonNameFeedback;
-(void)flashMoveCloserFeedback;
-(void)focusWithMode:(NSInteger)arg0 exposeWithMode:(NSInteger)arg1 atDevicePoint:(struct CGPoint )arg2 monitorSubjectAreaChange:(BOOL)arg3 ;
-(void)handlePhysicalButtonPressed:(NSInteger)arg0 ;
-(void)handlePhysicalButtonReleased:(NSInteger)arg0 ;
-(void)handleVolumeButtonPress:(id)arg0 ;
-(void)hideFilterSettingUI;
-(void)hideFlashSettingUI;
-(void)hideShutter:(BOOL)arg0 ;
-(void)hideUIForInterruptedSession:(BOOL)arg0 ;
-(void)image:(id)arg0 didFinishSavingWithError:(id)arg1 contextInfo:(*void)arg2 ;
-(void)initializeFilters;
-(void)initializeUserInterface;
-(void)killFeedbackDisplayIncludingUserPrompts:(BOOL)arg0 ;
-(void)killFeedbackDisplayInternalIncludingUserPrompts:(BOOL)arg0 ;
-(void)launchCaptureSession;
-(void)logAlgoChoice;
-(void)markupCancelAction:(id)arg0 ;
-(void)markupDoneAction:(id)arg0 ;
-(void)myApplicationDidBecomeActive:(id)arg0 ;
-(void)myApplicationWillResignActive:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pauseCaptureSessionForMovieRecording;
-(void)physicalCaptureNotifierDidChangeState:(id)arg0 ;
-(void)popViewController:(id)arg0 subtype:(id)arg1 duration:(CGFloat)arg2 completion:(id)arg3 ;
-(void)preWarmFilters;
-(void)prepareForDismissal;
-(void)pushViewController:(id)arg0 type:(id)arg1 subtype:(id)arg2 duration:(CGFloat)arg3 completion:(id)arg4 ;
-(void)removeAllNotifications;
-(void)removeObserversIfNecessary;
-(void)removeSaveActionBlockerForFiles;
-(void)restartImageCaptureSessionIfNecessary;
-(void)resumeCaptureSessionForMovieRecording;
-(void)resumeInterruptedSession:(id)arg0 ;
-(void)retakeButtonWasPressed;
-(void)saveAction:(id)arg0 ;
-(void)saveCapturedImage:(id)arg0 metaData:(id)arg1 rects:(id)arg2 completionHandler:(id)arg3 ;
-(void)sessionInterruptionEnded:(id)arg0 ;
-(void)sessionRuntimeError:(id)arg0 ;
-(void)sessionWasInterrupted:(id)arg0 ;
-(void)setAutoMode:(BOOL)arg0 ;
-(void)setUpFilterScrollView;
-(void)setUpUserDefaults;
-(void)setViewControllers:(id)arg0 type:(id)arg1 subtype:(id)arg2 duration:(CGFloat)arg3 completion:(id)arg4 ;
-(void)setupAccessibilityInfo;
-(void)setupCaptureSession;
-(void)setupThumbnailViewControllerIfNecessary;
-(void)showErrorForMovieRecording:(id)arg0 ;
-(void)shutterButtonAction:(id)arg0 ;
-(void)singleTap;
-(void)snapStillImageWithMode:(NSInteger)arg0 ;
-(void)speakLabelTextForAccessibilityIfNecessary:(id)arg0 afterDelay:(CGFloat)arg1 ;
-(void)speakScannedDocumentForAccessibilityIfNecessary;
-(void)stopImageCaptureSession;
-(void)subjectAreaDidChange:(id)arg0 ;
-(void)thumbnailViewDidTap:(id)arg0 ;
-(void)toggleAutoCapture:(id)arg0 ;
-(void)toggleRecording:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAccessibilityEnabledStateForUIElements;
-(void)updateAccessibilityFocusForHidingFilterSettingsUI;
-(void)updateAccessibilityFocusForHidingFlashSettingsUI;
-(void)updateAccessibilityForAutoShutterMode:(BOOL)arg0 ;
-(void)updateAccessibilityForCurrentFilter;
-(void)updateAccessibilityForCurrentFlashMode;
-(void)updateAllConstraints;
-(void)updateAutoButtonTitleForAutoMode:(BOOL)arg0 ;
-(void)updateConstraintsForIPad;
-(void)updateConstraintsForIPhone;
-(void)updateFilterAndFlashButtons;
-(void)updateFilterButtonTint;
-(void)updateFilterChoiceButtonScrollPositionAnimated:(BOOL)arg0 ;
-(void)updateFilterChoiceButtonSelection:(short)arg0 ;
-(void)updateFonts;
-(void)updateLabelColors;
-(void)updateRecentlyObservedRectanglesWithRect:(id)arg0 ;
-(void)updateThumbnailContainerViewConstraintConstantForIPad;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)warnAboutMaxScansIfNecessary;


@end


#endif