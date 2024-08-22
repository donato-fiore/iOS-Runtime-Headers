// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMCAMERAVIEWCONTROLLER_H
#define CAMCAMERAVIEWCONTROLLER_H

@class UIViewController, PAImageConversionServiceClient, NSMutableDictionary, PAVideoConversionServiceClient, NSString;
@protocol CAMCaptureResultDelegate, CAMPersistenceResultDelegate, CAMCVCStillImageResultCoordinatorDelegate, CAMViewfinderReviewButtonSource, NSCoding, NSSecureCoding, OS_dispatch_queue, CAMCameraViewControllerCameraSessionDelegate, CAMCameraCaptureDelegate, CAMCameraConfigurationDelegate, CAMCreativeCameraDelegate, CAMCameraViewControllerPresentationDelegate;


#import "CAMThumbnailGenerator.h"
#import "CAMReviewButton.h"
#import "CAMBurstController.h"
#import "CUCaptureController.h"
#import "CAMKeepAliveController.h"
#import "CAMLocationController.h"
#import "CAMMotionController.h"
#import "CAMNebulaDaemonProxyManager.h"
#import "CAMPersistenceController.h"
#import "CAMPowerController.h"
#import "CAMProtectionController.h"
#import "CAMRemoteShutterController.h"
#import "CAMTimelapseController.h"
#import "CAMViewfinderViewController.h"

@interface CAMCameraViewController : UIViewController <CAMCaptureResultDelegate, CAMPersistenceResultDelegate, CAMCVCStillImageResultCoordinatorDelegate, CAMViewfinderReviewButtonSource, NSCoding, NSSecureCoding>



@property (readonly, nonatomic) PAImageConversionServiceClient *_imageConversionClient; // ivar: __imageConversionClient
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_resultProcessingQueue; // ivar: __resultProcessingQueue
@property (readonly, nonatomic) NSMutableDictionary *_resultQueueStillImageResultCoordinators; // ivar: __resultQueueStillImageResultCoordinators
@property (readonly, nonatomic) CAMThumbnailGenerator *_resultQueueThumbnailGenerator; // ivar: __resultQueueThumbnailGenerator
@property (readonly, nonatomic) CAMReviewButton *_reviewButton; // ivar: __reviewButton
@property (readonly, nonatomic) PAVideoConversionServiceClient *_videoConversionClient; // ivar: __videoConversionClient
@property (nonatomic) BOOL automaticallyAdjustsApplicationIdleTimer;
@property (nonatomic) BOOL automaticallyManagesCameraSession; // ivar: _automaticallyManagesCameraSession
@property (readonly, nonatomic) CAMBurstController *burstController; // ivar: _burstController
@property (weak, nonatomic) NSObject<CAMCameraViewControllerCameraSessionDelegate> *cameraSessionDelegate; // ivar: _cameraSessionDelegate
@property (readonly, nonatomic) CUCaptureController *captureController; // ivar: _captureController
@property (weak, nonatomic) NSObject<CAMCameraCaptureDelegate> *captureDelegate; // ivar: _captureDelegate
@property (readonly, nonatomic) NSInteger captureDevice;
@property (readonly, nonatomic) NSInteger captureMode;
@property (readonly, nonatomic, getter=isCapturingLivePhoto) BOOL capturingLivePhoto;
@property (readonly, nonatomic, getter=isCapturingPhoto) BOOL capturingPhoto;
@property (weak, nonatomic) NSObject<CAMCameraConfigurationDelegate> *configurationDelegate;
@property (weak, nonatomic, getter=creativeCameraDelegate) NSObject<CAMCreativeCameraDelegate> *creativeCameraDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisablingAdditionalCaptures) BOOL disablingAdditionalCaptures;
@property (nonatomic, getter=isDisablingMultipleCaptureFeatures) BOOL disablingMultipleCaptureFeatures;
@property (nonatomic) NSInteger flashMode;
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=setHDRMode:) NSInteger hdrMode;
@property (readonly, nonatomic) CAMKeepAliveController *keepAliveController; // ivar: _keepAliveController
@property (nonatomic) NSInteger livePhotoMode;
@property (readonly, nonatomic) CAMLocationController *locationController; // ivar: _locationController
@property (readonly, nonatomic) NSInteger messagesTransitionState;
@property (readonly, nonatomic) CAMMotionController *motionController; // ivar: _motionController
@property (readonly, nonatomic) CAMNebulaDaemonProxyManager *nebulaDaemonProxyManager; // ivar: _nebulaDaemonProxyManager
@property (nonatomic, getter=isPerformingTileTransition) BOOL performingTileTransition;
@property (nonatomic) NSUInteger persistenceBehavior;
@property (readonly, nonatomic) CAMPersistenceController *persistenceController; // ivar: _persistenceController
@property (nonatomic) NSInteger photoModeAspectRatioCrop;
@property (readonly, nonatomic) CAMPowerController *powerController; // ivar: _powerController
@property (weak, nonatomic) NSObject<CAMCameraViewControllerPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (readonly, nonatomic, getter=isPreventingAdditionalCaptures) BOOL preventingAdditionalCaptures;
@property (readonly, nonatomic) CAMProtectionController *protectionController; // ivar: _protectionController
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (readonly, nonatomic) CAMRemoteShutterController *remoteShutterController; // ivar: _remoteShutterController
@property (readonly) Class superclass;
@property (readonly, nonatomic) CAMTimelapseController *timelapseController; // ivar: _timelapseController
@property (nonatomic) NSInteger timerDuration;
@property (nonatomic) NSInteger torchMode;
@property (readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController; // ivar: _viewfinderViewController


+(BOOL)isEmulatingImagePicker;
+(BOOL)supportsSecureCoding;
-(BOOL)capturePhoto;
-(BOOL)startRecording;
-(BOOL)stopRecording;
-(NSInteger)preferredStatusBarUpdateAnimation;
-(NSUInteger)_capturePersistenceBehaviorForViewfinderPersistenceBehavior:(NSUInteger)arg0 ;
-(NSUInteger)_viewfinderPersistenceBehaviorForCapturePersistenceBehavior:(NSUInteger)arg0 ;
-(id)_behaviorDefinedDestinationURLForRequest:(id)arg0 withLocalDestinationURL:(id)arg1 linkedDestinationURL:(id)arg2 ;
-(id)_clientPropertiesForLivePhotoVideoURL:(id)arg0 duration:(struct ? )arg1 error:(id)arg2 ;
-(id)_clientPropertiesForPhotoProperties:(id)arg0 withFilteredImageURL:(id)arg1 conversionOutputInfo:(id)arg2 error:(id)arg3 ;
-(id)_clientPropertiesForStillImageWithURL:(id)arg0 captureMode:(NSInteger)arg1 captureOrientation:(NSInteger)arg2 previewSurface:(*void)arg3 previewOrientation:(NSInteger)arg4 uniqueIdentifier:(id)arg5 savedToPhotoLibrary:(BOOL)arg6 captureResult:(id)arg7 ;
-(id)_clientPropertiesForVideoURL:(id)arg0 renderedURL:(id)arg1 duration:(struct ? )arg2 size:(struct CGSize )arg3 creationDate:(id)arg4 captureOrientation:(NSInteger)arg5 previewOrientation:(NSInteger)arg6 adjustments:(id)arg7 uniqueIdentifier:(id)arg8 savedToPhotoLibrary:(BOOL)arg9 ;
-(id)_exportPropertiesForClientProperties:(id)arg0 ;
-(id)_mediaConversionOptionsForAdjustments:(id)arg0 mediaType:(NSInteger)arg1 description:(id)arg2 ;
-(id)_previewImageFromVideoURL:(id)arg0 ;
-(id)_resultQueueSafeImageFromSurface:(*void)arg0 imageOrientation:(NSInteger)arg1 ;
-(id)_resultQueue_getOrCreateStillImageResultCoordinatorForRequest:(id)arg0 captureTimeExpectedResultSpecifiers:(id)arg1 isExpectingPairedVideo:(BOOL)arg2 isDisablingMultipleCaptures:(BOOL)arg3 isGeneratingFilteredMedia:(BOOL)arg4 ;
-(id)_resultQueue_getStillImageResultCoordinatorForRequest:(id)arg0 ;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForStatusBarHidden;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithOverrides:(id)arg0 initialLayoutStyle:(NSInteger)arg1 privateOptions:(NSInteger)arg2 ;
-(id)initWithOverrides:(id)arg0 usingEmulationMode:(NSInteger)arg1 ;
-(id)reviewButton;
-(struct CGSize )viewSystemLayoutSizeFittingSize:(struct CGSize )arg0 forCaptureMode:(NSInteger)arg1 ;
-(void)_commonCAMCameraViewControllerInitializationWithOverrides:(id)arg0 usingEmulationMode:(NSInteger)arg1 initialLayoutStyle:(NSInteger)arg2 privateOptions:(NSInteger)arg3 ;
-(void)_handleCTMVideoLocalPersistenceResult:(id)arg0 forCaptureResult:(id)arg1 fromRequest:(id)arg2 ;
-(void)_handleCTMVideoLocalPersistenceResult:(id)arg0 forCaptureResult:(id)arg1 fromRequest:(id)arg2 size:(struct CGSize )arg3 videoURL:(id)arg4 renderedToURL:(id)arg5 renderedAdjustments:(id)arg6 ;
-(void)_handleLivePhotoVideoLocalPersistenceResult:(id)arg0 forCaptureResult:(id)arg1 fromRequest:(id)arg2 ;
-(void)_handlePhotoProperties:(id)arg0 videoProperties:(id)arg1 unfilteredPhotoProperties:(id)arg2 unfilteredVideoProperties:(id)arg3 assetAdjustments:(id)arg4 attemptPairingVideo:(BOOL)arg5 error:(id)arg6 ;
-(void)_handleVideoLocalPersistenceResult:(id)arg0 forCaptureResult:(id)arg1 fromRequest:(id)arg2 ;
-(void)_notifyCaptureDelegateOfCompletedCaptureOfLivePhoto:(id)arg0 withProperties:(id)arg1 error:(id)arg2 ;
-(void)_notifyCaptureDelegateOfCompletedCaptureOfPhoto:(id)arg0 withProperties:(id)arg1 error:(id)arg2 ;
-(void)_notifyCaptureDelegateOfCompletedCaptureOfVideo:(id)arg0 withProperties:(id)arg1 error:(id)arg2 ;
-(void)_renderLivePhotoWithCoordinator:(id)arg0 specifiers:(NSUInteger)arg1 photoProperties:(id)arg2 videoProperties:(id)arg3 adjustments:(id)arg4 ;
-(void)_resultQueue_forceCompletionIfPossibleForRequest:(id)arg0 ;
-(void)_resultQueue_removeStillImageResultCoordinatorForIdentifier:(id)arg0 ;
-(void)captureController:(id)arg0 didGenerateStillImageCaptureResult:(id)arg1 fromRequest:(id)arg2 ;
-(void)configureForCaptureMode:(NSInteger)arg0 captureDevice:(NSInteger)arg1 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)handleReviewButtonReleased:(id)arg0 ;
-(void)handleVolumeButtonPressed;
-(void)handleVolumeButtonReleased;
-(void)loadView;
-(void)persistenceController:(id)arg0 didCompleteAllLocalPersistenceForRequest:(id)arg1 ;
-(void)persistenceController:(id)arg0 didGenerateStillImageLocalPersistenceResult:(id)arg1 forCaptureResult:(id)arg2 fromRequest:(id)arg3 ;
-(void)persistenceController:(id)arg0 didGenerateVideoLocalPersistenceResult:(id)arg1 forCaptureResult:(id)arg2 fromRequest:(id)arg3 ;
-(void)resumeCameraSession;
-(void)stillImagePersistenceCoordinator:(id)arg0 requestsDispatchForResultSpecifiers:(NSUInteger)arg1 photoProperties:(id)arg2 videoProperties:(id)arg3 unfilteredPhotoProperties:(id)arg4 unfilteredVideoProperties:(id)arg5 assetAdjustments:(id)arg6 error:(id)arg7 ;
-(void)stillImagePersistenceCoordinatorDidCompleteAllDispatches:(id)arg0 ;
-(void)suspendCameraSession;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif