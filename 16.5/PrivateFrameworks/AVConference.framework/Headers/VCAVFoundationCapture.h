// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAVFOUNDATIONCAPTURE_H
#define VCAVFOUNDATIONCAPTURE_H

@class AVCaptureDeviceInput, AVCaptureVideoDataOutput, AVCaptureSession, AVCaptureDataOutputSynchronizer, NSMutableArray, AVCaptureMetadataOutput, AVCaptureDevice, NSString, AVCaptureDepthDataOutput;
@protocol VCVideoSource, AVCaptureVideoDataOutputSampleBufferDelegate, VCEffectsManagerDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureDataOutputSynchronizerDelegate, OS_dispatch_queue;


#import "VCVideoCapture.h"
#import "VCImageResizingConverter.h"
#import "VCImageRotationConverter.h"
#import "VCImageMirroringConverter.h"
#import "VCViewpointCorrection.h"

@interface VCAVFoundationCapture : VCVideoCapture <VCVideoSource, AVCaptureVideoDataOutputSampleBufferDelegate, VCEffectsManagerDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureDataOutputSynchronizerDelegate>

 {
    AVCaptureDeviceInput *_videoDeviceInput;
    AVCaptureVideoDataOutput *_videoCaptureOutput;
    NSObject<OS_dispatch_queue> *_captureSessionQueue;
    NSObject<OS_dispatch_queue> *_viewPointCorrectionQueue;
    AVCaptureSession *_captureSession;
    AVCaptureDataOutputSynchronizer *_outputSynchronizer;
    NSMutableArray *_outputSynchronizerOutputs;
    AVCaptureMetadataOutput *_metadataOutput;
    AVCaptureDevice *_captureDevice;
    BOOL _viewPointCorrectionEnabled;
    BOOL _cframingEnabled;
    BOOL _isCaptureSIFRPreferred;
    int _captureSIFRPreferredOverride;
    BOOL _captureFormatNonBinOnlyOverride;
    BOOL _deviceSupportCinematicFraming;
    BOOL _isBackgroundBlurActive;
    int _orientation;
    BOOL _supportPortraitResolution;
    BOOL _beginCommitConfigForFormatSwitch;
    int _activeWidth;
    int _activeHeight;
    int _activeFrameRate;
    int _lastClientRequestedFrameRate;
    int _processedFrameCount;
    CGSize _requestSize;
    CGSize _captureSize;
    BOOL _resize;
    BOOL _isPreviewing;
    BOOL _isCapturing;
    BOOL _forceMirrorCapture;
    BOOL _forceDynamicEffectsFramerate;
    BOOL _forcePearlCamera;
    BOOL _isServerProcess;
    BOOL _avCaptureDeviceInputLocked;
    int _frameCount;
    float _processTimeSum;
    float _depthFrameRateMultplier;
    float _viewpointProcessTime;
    NSMutableArray *_renderFrameTimes;
    NSMutableArray *_cachedDataArray;
    VCImageResizingConverter *_imageCopyingConverter;
    VCImageResizingConverter *_imageResizingConverter;
    VCImageRotationConverter *_imageRotationConverter;
    VCImageMirroringConverter *_imageMirroringConverter;
    VCViewpointCorrection *_viewpointCorrection;
    BOOL _useAVConferenced;
    BOOL _enableBufferStatsDump;
    *tagVCVideoBufferStatistics _statsBuffer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AVCaptureDepthDataOutput *depthDataOutput; // ivar: _depthDataOutput
@property (readonly, copy) NSString *description;
@property BOOL effectsApplied; // ivar: _effectsApplied
@property BOOL faceMeshTrackingEnabled; // ivar: _faceMeshTrackingEnabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isServerProcess;
+(struct ? )frameDurationForFrameRateRangeWithMinFrameRate:(CGFloat)arg0 maxFrameRate:(CGFloat)arg1 minFrameDuration:(struct ? )arg2 maxFrameDuration:(struct ? )arg3 desiredFrameRate:(int)arg4 ;
+(struct CGRect )calculateRegionOfInterest:(struct CGSize )arg0 requestSize:(struct CGSize )arg1 ;
-(?)copyColorInfo;
-(BOOL)cameraSupportsFormatWidth:(int)arg0 height:(int)arg1 ;
-(BOOL)cameraSupportsNoQueueFormatWidth:(int)arg0 height:(int)arg1 ;
-(BOOL)hasRequiredAttributes:(id)arg0 ;
-(BOOL)isBackCamera;
-(BOOL)isFormatMaxFrameRateSupported:(id)arg0 frameRate:(int)arg1 ;
-(BOOL)isFrameRateActive:(int)arg0 captureFormat:(id)arg1 ;
-(BOOL)isFrontCamera;
-(BOOL)isPortraitResolutionCaptureActive;
-(BOOL)isPreviewRunning;
-(BOOL)isVideoDeviceInputSupportCFraming:(id)arg0 ;
-(BOOL)shouldAddDepthData;
-(BOOL)shouldAddTrackedFacesData;
-(BOOL)shouldAdjustCaptureWithOrientation:(int)arg0 ;
-(BOOL)shouldResizeWithCaptureSize:(struct CGSize )arg0 requestSize:(struct CGSize )arg1 ;
-(BOOL)shouldUseCameraVideoStabilization;
-(BOOL)shouldUseViewpointCorrection;
-(BOOL)supportsPortraitResolution;
-(BOOL)supportsViewpointCorrection;
-(NSInteger)captureTierForEncodingSize:(struct CGSize )arg0 ;
-(id)cameraFormatForWidth:(int)arg0 height:(int)arg1 ;
-(id)cameraFormatForWidth:(int)arg0 height:(int)arg1 frameRate:(int)arg2 ;
-(id)cameraFormatForWidthWithList:(int)arg0 height:(int)arg1 frameRate:(int)arg2 formatList:(id)arg3 ;
-(id)getCaptureFormatList;
-(id)initWithCaptureServer:(id)arg0 width:(int)arg1 height:(int)arg2 frameRate:(int)arg3 videoSourceToken:(struct _VCVideoSourceToken )arg4 cinematicFramingEnabled:(BOOL)arg5 videoOrientation:(int)arg6 ;
-(int)configureCaptureWithToken:(struct _VCVideoSourceToken )arg0 ;
-(int)frameBecameAvailableCount:(*int)arg0 figBufferQueueEmptyCount:(*int)arg1 figBufferQueueErrorCount:(*int)arg2 ;
-(int)frameCount:(BOOL)arg0 ;
-(int)getFrameRate;
-(int)getMaxAllowedFrameRate:(int)arg0 ;
-(int)getSupportedMaxDeviceFrameRateWithFrameRateCap:(int)arg0 ;
-(int)invalidate;
-(int)setCamera:(struct _VCVideoSourceToken )arg0 width:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(int)setFrameRate:(int)arg0 ;
-(int)setFrameRateInternal:(int)arg0 forceSourceFrameRateDidChange:(BOOL)arg1 ;
-(int)setVideoDeviceToSelectedDevice:(id)arg0 ;
-(int)setVideoDeviceToWidth:(int)arg0 height:(int)arg1 frameRate:(int)arg2 ;
-(int)setWidth:(int)arg0 height:(int)arg1 frameRate:(int)arg2 ;
-(int)startCaptureWithWidth:(int)arg0 height:(int)arg1 frameRate:(int)arg2 ;
-(int)startPreview;
-(int)stop:(BOOL)arg0 ;
-(struct ? )frameDurationForVideoDeviceFormat:(id)arg0 frameRate:(int)arg1 ;
-(struct CGSize )getOptimizedCameraCaptureWidth:(int)arg0 height:(int)arg1 ;
-(struct opaqueCMSampleBuffer *)newResizedFrame:(struct opaqueCMSampleBuffer *)arg0 time:(struct ? )arg1 ;
-(void)applyVideoRetainedBufferCountHint;
-(void)attachMetadata:(id)arg0 toCVPixelBuffer:(struct __CVBuffer *)arg1 ;
-(void)captureOutput:(id)arg0 didOutputMetadataObjects:(id)arg1 fromConnection:(id)arg2 ;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)captureSessionNotification:(id)arg0 ;
-(void)configureCaptureDeviceDepthFormat;
-(void)configureMetadataTypesForOutput:(id)arg0 ;
-(void)dataOutputSynchronizer:(id)arg0 didOutputSynchronizedDataCollection:(id)arg1 ;
-(void)dealloc;
-(void)encodeProcessedPixelBuffer:(struct __CVBuffer *)arg0 time:(struct ? )arg1 imageData:(id)arg2 processTime:(id)arg3 ;
-(void)getReportingStats:(struct __CFDictionary *)arg0 ;
-(void)initializeMetadataOutput;
-(void)initializeOutputs;
-(void)initializeSynchronizedOutputs;
-(void)initializeVideoCaptureOutput;
-(void)lockAVCaptureDeviceInputForConfiguration;
-(void)observeBackgroundBlurOnDevice:(id)arg0 observe:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)prepareSynchronizedOutputs:(id)arg0 ;
-(void)processMetadataObjects:(id)arg0 ;
-(void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 captureOutput:(id)arg1 ;
-(void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 depthData:(id)arg1 faceData:(id)arg2 captureDevice:(id)arg3 clock:(struct OpaqueCMClock *)arg4 ;
-(void)processViewPointCorrection:(struct opaqueCMSampleBuffer *)arg0 shouldProcess:(BOOL)arg1 ;
-(void)resetViewPointLogging;
-(void)sendImageDataForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 depthData:(id)arg1 faceData:(id)arg2 captureDevice:(id)arg3 originalSize:(struct CGSize )arg4 ;
-(void)setBufferStatsBuffer:(struct tagVCVideoBufferStatistics *)arg0 ;
-(void)setCameraZoomFactor:(CGFloat)arg0 ;
-(void)setCameraZoomFactor:(CGFloat)arg0 withRate:(CGFloat)arg1 ;
-(void)setCinematicFramingEnabled:(BOOL)arg0 ;
-(void)setMetaDataObjectsDelegate;
-(void)setOrientation:(int)arg0 ;
-(void)setVideoCaptureOutputDelegate;
-(void)setVideoOrientationAndMirroredForDevice:(id)arg0 ;
-(void)setVideoStabilization:(BOOL)arg0 ;
-(void)setViewPointCorrectionEnabled:(BOOL)arg0 ;
-(void)tearDownSynchronizer;
-(void)unlockAVCaptureDeviceInputForConfiguration;
-(void)updateCameraZoomCapability;
-(void)updateCenterStageRegionOfInterestWithLock:(BOOL)arg0 ;
-(void)updateDepthFrameRate;
-(void)updatePortraitResolutionCapability;
-(void)updateRenderProcessFrameRate:(id)arg0 ;
-(void)updateVideoCaptureServerWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 time:(struct ? )arg1 frontCamera:(BOOL)arg2 shouldMirrorFrontPreview:(BOOL)arg3 isFromEffects:(BOOL)arg4 ;


@end


#endif