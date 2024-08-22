// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXVIDEOCAMERACONTROLLER_H
#define JFXVIDEOCAMERACONTROLLER_H

@class AVCaptureSession, AVCaptureDeviceInput, AVCaptureVideoDataOutput, AVCaptureAudioDataOutput, AVCaptureDepthDataOutput, AVCaptureMetadataOutput, AVCapturePhotoOutput, AVCaptureDataOutputSynchronizer, NSString, NSMutableSet, PVFrameSet, NSNumber, NSArray, VCPCaptureAnalysisSession;
@protocol AVCaptureDataOutputSynchronizerDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, AVCapturePhotoCaptureDelegate, AVCaptureMetadataOutputObjectsDelegate, JFXARKitFrameDelegate, OS_dispatch_queue, JFXVideoCameraThermalDelegate;

#import <Foundation/Foundation.h>

#import "JFXARKitCameraSessionController.h"
#import "JFXCaptureCallObserver.h"
#import "JFXARMetadata.h"
#import "JFXFaceAnchor.h"

@interface JFXVideoCameraController : NSObject <AVCaptureDataOutputSynchronizerDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, AVCapturePhotoCaptureDelegate, AVCaptureMetadataOutputObjectsDelegate, JFXARKitFrameDelegate>

 {
    AVCaptureSession *_captureSession;
    AVCaptureSession *_audioSession;
    AVCaptureDeviceInput *_cameraDeviceInput;
    AVCaptureDeviceInput *_audioInput;
    AVCaptureVideoDataOutput *_videoOutput;
    AVCaptureAudioDataOutput *_audioOutput;
    AVCaptureDepthDataOutput *_depthOutput;
    AVCaptureMetadataOutput *_metadataOutput;
    AVCapturePhotoOutput *_photoOutput;
    AVCaptureDataOutputSynchronizer *_dataOutputSynchronizer;
    NSObject<OS_dispatch_queue> *_captureSessionQueue;
    NSObject<OS_dispatch_queue> *_audioOutQueue;
    NSObject<OS_dispatch_queue> *_dataOutSynchQueue;
    NSObject<OS_dispatch_queue> *_queryDataQueue;
    NSString *_photoOutCodec;
    id *_capturePhotoCompletionBlock;
    NSMutableSet *_videoDelegates;
    NSObject<OS_dispatch_queue> *_videoDelegateQueue;
    NSMutableSet *_audioDelegates;
    NSObject<OS_dispatch_queue> *_audioDelegateQueue;
    NSMutableSet *_livePlayerSources;
    NSObject<OS_dispatch_queue> *_livePlayerSourceQueue;
    BOOL _observingAudioRouteChanges;
    BOOL _runningARKit_dataOutSynchQueue;
}


@property (readonly, nonatomic) BOOL ARKitEnabled;
@property (nonatomic) BOOL allowARMetadata;
@property (nonatomic) BOOL allowARMetadata_queryDataQueue; // ivar: _allowARMetadata_queryDataQueue
@property (retain, nonatomic) JFXARKitCameraSessionController *arCameraSessionController; // ivar: _arCameraSessionController
@property (readonly, nonatomic) BOOL audioEnabled;
@property (nonatomic) NSInteger cachedMovieRecordingTorchMode; // ivar: _cachedMovieRecordingTorchMode
@property (readonly, nonatomic) JFXCaptureCallObserver *callObserver; // ivar: _callObserver
@property (readonly, nonatomic) NSInteger cameraColorSpace;
@property (nonatomic) NSInteger cameraColorSpace_queryDataQueue; // ivar: _cameraColorSpace_queryDataQueue
@property (nonatomic) ? cameraDeviceIntrinsics_dataOutSynchQueue; // ivar: _cameraDeviceIntrinsics_dataOutSynchQueue
@property (nonatomic) CGSize cameraFrameResolution_dataOutSynchQueue; // ivar: _cameraFrameResolution_dataOutSynchQueue
@property (readonly, nonatomic) NSInteger cameraMode;
@property (nonatomic) NSInteger cameraMode_captureSessionQueue; // ivar: _cameraMode_captureSessionQueue
@property (nonatomic) NSInteger cameraMode_dataOutSynchQueue; // ivar: _cameraMode_dataOutSynchQueue
@property (nonatomic) NSInteger cameraMode_queryDataQueue; // ivar: _cameraMode_queryDataQueue
@property (readonly, nonatomic) BOOL cameraSessionRunning;
@property (retain, nonatomic) NSString *cameraType_queryDataQueue; // ivar: _cameraType_queryDataQueue
@property (nonatomic) CGFloat cameraVideoMaxZoomFactor_captureSessionQueue; // ivar: _cameraVideoMaxZoomFactor_captureSessionQueue
@property (nonatomic) CGFloat cameraVideoZoomFactor_queryDataQueue; // ivar: _cameraVideoZoomFactor_queryDataQueue
@property (nonatomic) BOOL captureSessionRunning_queryDataQueue; // ivar: _captureSessionRunning_queryDataQueue
@property (nonatomic) NSInteger captureVideoOrientation_dataOutSynchQueue; // ivar: _captureVideoOrientation_dataOutSynchQueue
@property (nonatomic) NSInteger captureVideoOrientation_queryDataQueue; // ivar: _captureVideoOrientation_queryDataQueue
@property (retain, nonatomic) PVFrameSet *capturedPhotoFrameSet_dataOutSynchQueue; // ivar: _capturedPhotoFrameSet_dataOutSynchQueue
@property (nonatomic) NSInteger currentCameraPosition_captureSessionQueue; // ivar: _currentCameraPosition_captureSessionQueue
@property (nonatomic) NSInteger currentCameraPosition_dataOutSynchQueue; // ivar: _currentCameraPosition_dataOutSynchQueue
@property (nonatomic) NSInteger currentCameraPosition_queryDataQueue; // ivar: _currentCameraPosition_queryDataQueue
@property (retain, nonatomic) PVFrameSet *currentFrameSet_dataOutSynchQueue; // ivar: _currentFrameSet_dataOutSynchQueue
@property (retain, nonatomic) NSNumber *currentlyTrackedFaceID; // ivar: _currentlyTrackedFaceID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) ? depthDimensions;
@property (readonly, nonatomic) BOOL depthEnabled;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasFFCZoomEnabled;
@property (nonatomic) BOOL hasValidFaceData;
@property (nonatomic) BOOL hasValidFaceData_queryDataQueue; // ivar: _hasValidFaceData_queryDataQueue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFlashScene;
@property (nonatomic) BOOL isFlashScene_queryDataQueue; // ivar: _isFlashScene_queryDataQueue
@property (nonatomic) BOOL isRecordingMovie_captureSessionQueue; // ivar: _isRecordingMovie_captureSessionQueue
@property (retain, nonatomic) NSNumber *largestDepthDimension; // ivar: _largestDepthDimension
@property (retain, nonatomic) NSArray *metadataFaceObjectsArray_dataOutSynchQueue; // ivar: _metadataFaceObjectsArray_dataOutSynchQueue
@property (retain, nonatomic) NSArray *metadataTrackedFacesArray_dataOutSynchQueue; // ivar: _metadataTrackedFacesArray_dataOutSynchQueue
@property (retain, nonatomic) JFXARMetadata *mostRecentARMetadata;
@property (retain, nonatomic) JFXARMetadata *mostRecentARMetadata_queryDataQueue; // ivar: _mostRecentARMetadata_queryDataQueue
@property (retain, nonatomic) NSString *ownerName; // ivar: _ownerName
@property (retain, nonatomic) NSArray *pvDetectedFacesArray_dataOutSynchQueue; // ivar: _pvDetectedFacesArray_dataOutSynchQueue
@property (nonatomic) BOOL sessionRequiresFaceTracking;
@property (nonatomic) BOOL sessionRequiresFaceTracking_queryDataQueue; // ivar: _sessionRequiresFaceTracking_queryDataQueue
@property (readonly, nonatomic) JFXFaceAnchor *stillImageFaceAnchor;
@property (retain, nonatomic) JFXFaceAnchor *stillImageFaceAnchor_queryDataQueue; // ivar: _stillImageFaceAnchor_queryDataQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<JFXVideoCameraThermalDelegate> *thermalDelegate; // ivar: _thermalDelegate
@property (readonly, nonatomic) VCPCaptureAnalysisSession *vcpAnalyzer; // ivar: _vcpAnalyzer
@property (nonatomic) CGFloat zoomFactor;


+(BOOL)allowsDepthFromDualBackCamera;
+(CGFloat)cameraZoomFactorForUIZoomFactor:(CGFloat)arg0 captureDeviceType:(id)arg1 ;
+(id)sharedInstance;
+(void)initialize;
-(BOOL)JFX_buildCaptureSessionGraphError:(*id)arg0 ;
-(BOOL)JFX_configureCaptureSessionForCaptureDevice:(id)arg0 error:(*id)arg1 ;
// -(BOOL)JFX_configureCaptureSesstionForPosition:(NSInteger)arg0 applyFFCZoom:(BOOL)arg1 configureLockedCamera:(id)arg2 error:(unk)arg3  ;
-(BOOL)JFX_configureLockedCaptureDeviceCustomFormat:(id)arg0 applyFFCZoom:(BOOL)arg1 ;
-(BOOL)JFX_isAudioEnabledCaptureSessionQueue;
-(BOOL)JFX_isDepthEnabledCaptureSessionQueue;
-(BOOL)JFX_isUsingInternalMicCaptureSessionQueue;
-(BOOL)JFX_setupCaptureSessionAudioError:(*id)arg0 ;
-(BOOL)JFX_setupCaptureSessionDepthError:(*id)arg0 ;
-(BOOL)JFX_setupCaptureSessionPhotoError:(*id)arg0 ;
-(BOOL)JFX_setupCaptureSessionVideoDataOutputError:(*id)arg0 ;
-(BOOL)faceTrackingEnabled;
-(NSInteger)cameraPosition;
-(NSInteger)captureVideoOrientation;
-(id)JFX_createPVFrameSetFromPixelBuffer:(struct __CVBuffer *)arg0 withMetadata:(id)arg1 timeInterval:(CGFloat)arg2 error:(*id)arg3 ;
-(id)JFX_currentAVMetadataFaceObject:(id)arg0 ;
-(id)JFX_getFormatForCaptureDevice:(id)arg0 previewDimensions:(struct ? )arg1 colorSpace:(NSInteger)arg2 ;
-(id)JFX_processPixelBufferForFaceTransform:(struct __CVBuffer *)arg0 cameraIntrinsics:(struct ? )arg1 forNormalizedFaceRect:(struct CGRect )arg2 withRollAngle:(float)arg3 withTimestamp:(struct ? )arg4 andDuration:(struct ? )arg5 detectionOrientation:(NSInteger)arg6 interfaceOrientation:(NSInteger)arg7 needsMirroring:(BOOL)arg8 ;
-(id)JFX_updateCurrentlyTrackedFaceID:(id)arg0 ;
-(id)cameraType;
-(id)createLivePlayerCameraSource;
-(id)debugFrameRateLabel;
-(id)init;
-(id)updateCurrentlyTrackedFaceID:(id)arg0 ;
-(void)JFX_audioSessionRouteChangeNotification:(id)arg0 ;
-(void)JFX_captureSessionDidStartRunningNotification:(id)arg0 ;
-(void)JFX_captureSessionDidStopRunningNotification:(id)arg0 ;
-(void)JFX_captureSessionInterruptionEndedNotification:(id)arg0 ;
-(void)JFX_captureSessionRuntimeErrorNotification:(id)arg0 ;
-(void)JFX_captureSessionWasInterruptedNotification:(id)arg0 ;
-(void)JFX_configureCaptureSessionDataOutputSynchronizer;
-(void)JFX_configureCaptureSessionEnableCameraIntrinsicMatrixDelivery;
-(void)JFX_configureCaptureSessionMetadataForCaptureDevice:(id)arg0 ;
-(void)JFX_configureCaptureSessionMicrophoneForOmnidirectionalPattern;
-(void)JFX_configureCaptureSessionMicrophoneForPosition:(NSInteger)arg0 ;
-(void)JFX_configureCaptureSessionPhotoOrientationFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)JFX_configureCaptureSessionPreset;
-(void)JFX_configureCaptureSessionVideoDataOutput;
-(void)JFX_configureLockedCaptureDevice:(id)arg0 ;
-(void)JFX_configureLockedCaptureDevice:(id)arg0 minFrameRate:(int)arg1 maxFrameRate:(int)arg2 ;
-(void)JFX_configureLockedCaptureDeviceExposure:(id)arg0 exposurePoint:(struct CGPoint )arg1 ;
-(void)JFX_configureLockedCaptureDeviceFocus:(id)arg0 focusPoint:(struct CGPoint )arg1 ;
-(void)JFX_configureLockedCaptureDeviceForDepth:(id)arg0 ;
-(void)JFX_configureLockedCaptureDeviceFrameRate:(id)arg0 ;
-(void)JFX_notifyVideoDelegatesOfDroppedFrameWithTimeStamp:(struct ? )arg0 ;
-(void)JFX_notifyVideoDelegatesOfFrameSetDataOutSynchQueue:(id)arg0 ;
-(void)JFX_observeCaptureSessionNotifications:(id)arg0 ;
-(void)JFX_orientationMonitorDeviceInterfaceOrientationNotification:(id)arg0 ;
-(void)JFX_processMetadataObjectsDataOutSynchQueue:(id)arg0 ;
-(void)JFX_rampToZoom:(CGFloat)arg0 rate:(CGFloat)arg1 durationCaptureSessionQueue:(CGFloat)arg2 ;
-(void)JFX_resetSessionCaptureSessionQueue;
-(void)JFX_setCaptureDeviceType:(id)arg0 captureDevicePositionCaptureSessionQueue:(NSInteger)arg1 ;
-(void)JFX_setupARCameraSessionController;
-(void)JFX_startARCameraSessionController;
-(void)JFX_thermalPolicyOrLevelChangedNotification:(id)arg0 ;
-(void)addAudioRenderDelegate:(id)arg0 ;
-(void)addVideoRenderDelegate:(id)arg0 ;
-(void)captureOutput:(id)arg0 didFinishProcessingPhoto:(id)arg1 error:(id)arg2 ;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)capturePhotoWithFlash:(NSInteger)arg0 completion:(id)arg1 ;
-(void)clear;
-(void)dataOutputSynchronizer:(id)arg0 didOutputSynchronizedDataCollection:(id)arg1 ;
-(void)dealloc;
-(void)didUpdateFrame:(id)arg0 ;
-(void)enableRecordingMovieMode:(BOOL)arg0 completion:(id)arg1 ;
-(void)minFrameRate:(*int)arg0 maxFrameRate:(*int)arg1 ;
-(void)notifyExternalARKitFaceTrackedImageData:(id)arg0 completion:(id)arg1 ;
-(void)notifyExternalImageData:(id)arg0 completion:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)preProcessFrameWithPixelBuffer:(struct __CVBuffer *)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 completion:(id)arg3 ;
-(void)prepareCameraForMode:(NSInteger)arg0 position:(NSInteger)arg1 completion:(id)arg2 ;
-(void)rampToZoom:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(void)rampToZoom:(CGFloat)arg0 rate:(CGFloat)arg1 ;
-(void)removeAudioRenderDelegate:(id)arg0 async:(BOOL)arg1 ;
-(void)removeLivePlayerCameraSource:(id)arg0 ;
-(void)removeVideoRenderDelegate:(id)arg0 async:(BOOL)arg1 ;
-(void)saveToPhotoLibrary:(id)arg0 ;
-(void)scaleCurrentZoomFactor:(CGFloat)arg0 ;
-(void)setCameraZoomFactorForUIZoomFactor:(CGFloat)arg0 ;
-(void)setCaptureTorchMode:(NSInteger)arg0 completion:(id)arg1 ;
-(void)setFFCZoom:(BOOL)arg0 completion:(id)arg1 ;
-(void)setFocusAndExposurePoint:(struct CGPoint )arg0 ;
-(void)setMinFrameRate:(int)arg0 maxFrameRate:(int)arg1 ;
-(void)startCameraSession:(id)arg0 ;
-(void)stopCameraSession:(id)arg0 ;
-(void)stopRampToZoom:(id)arg0 ;
-(void)supportedFlashModes:(id)arg0 ;
-(void)switchCamera:(id)arg0 ;
// -(void)switchCameraToPosition:(NSInteger)arg0 applyFFCZoom:(BOOL)arg1 configureLockedCamera:(id)arg2 completion:(unk)arg3  ;
-(void)switchCameraToPosition:(NSInteger)arg0 completion:(id)arg1 ;
-(void)turnOffMicrophone;
-(void)turnOnMicrophone;
-(void)videoAndAudioOutputSettings:(id)arg0 ;


@end


#endif