// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCVIDEOCAPTURESERVER_H
#define VCVIDEOCAPTURESERVER_H

@class NSMutableArray, NSMutableDictionary, BKSApplicationStateMonitor, NSString;
@protocol VCVideoCaptureServer, OS_dispatch_source, OS_dispatch_queue, VCVideoSource, AVConferencePreviewDelegate;

#import <Foundation/Foundation.h>

#import "VCVideoSourceTokenManager.h"
#import "VideoAttributes.h"
#import "VCImageQueue.h"
#import "VCImageRotationConverter.h"

@interface VCVideoCaptureServer : NSObject <VCVideoCaptureServer>

 {
    int currentWidth;
    int currentHeight;
    int currentFrameRate;
    int _screenConfiguredFrameRate;
    int _screenCurrentFrameRate;
    int _maxFrameRate;
    int _encodingWidth;
    int _encodingHeight;
    int previewFrameCount;
    int captureFrameCount;
    NSObject<OS_dispatch_source> *cameraHealthMonitor;
    NSObject<OS_dispatch_source> *screenHealthMonitor;
    int pendingWidth;
    int pendingHeight;
    int pendingFrameRate;
    VCVideoSourceTokenManager *_tokenManager;
    BOOL _firstPreviewFrameReceived;
    int snapshotRequestCount;
    NSMutableArray *cameraVideoSinks;
    NSMutableArray *screenCaptureClients;
    NSMutableDictionary *_cameraPreviewClients;
    BKSApplicationStateMonitor *_cameraPreviewClientMonitor;
    VideoAttributes *localVideoAttributes;
    CGSize localScreenPortraitAspectRatio;
    CGSize localScreenLandscapeAspectRatio;
    CGSize localExpectedPortraitAspectRatio;
    CGSize localExpectedLandscapeAspectRatio;
    CGSize _defaultPortraitAspectRatio;
    CGSize _defaultLandscapeAspectRatio;
    NSObject<OS_dispatch_queue> *captureServerQueue;
    NSObject<OS_dispatch_queue> *captureClientQueue;
    NSObject<OS_dispatch_queue> *captureCameraQueue;
    NSObject<OS_dispatch_queue> *_cameraPreviewClientMonitorQueue;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    NSObject<OS_dispatch_queue> *variablesQueue;
    NSObject<OS_dispatch_queue> *snapshotQueue;
    BOOL _useAVCaptureSession;
    NSObject<VCVideoSource> *avCapture;
    NSObject<VCVideoSource> *_screenCapture;
    NSMutableDictionary *_screenShareCaptureConfig;
    *OpaqueVTPixelTransferSession transferSession;
    *__CVPixelBufferPool bufferPool;
    BOOL resize;
    CGFloat falteredRenderingtimeStamp;
    VCImageQueue *frontQueue;
    VCImageQueue *backQueue;
    int _thermalNotificationToken;
    int _thermalLevel;
    int _newThermalLevel;
    int _peakPowerNotificationToken;
    int _peakPowerLevel;
    int _newPeakPowerLevel;
    BOOL _viewPointCorrectionEnabledByThermal;
    BOOL _viewPointCorrectionEnabledByClient;
    BOOL _isPreviewRunning;
    BOOL _forceDisableThermal;
    BOOL _isCapturing;
    BOOL _cinematicFramingEnabled;
    VCImageRotationConverter *_imageRotationConverter;
    _opaque_pthread_mutex_t _enqueueLock;
    NSMutableDictionary *_streamInputCaptureSources;
    NSMutableDictionary *_streamInputs;
}


@property (retain, nonatomic) NSObject<AVConferencePreviewDelegate> *appDelegate; // ivar: appDelegate
@property (readonly, nonatomic) _VCVideoSourceToken currentVideoSourceToken; // ivar: _currentVideoSourceToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)VCVideoCaptureServerSingleton;
-(BOOL)cameraSupportsWidth:(int)arg0 height:(int)arg1 ;
-(BOOL)canStopPreview;
-(BOOL)captureVideoWidth:(*int)arg0 height:(*int)arg1 frameRate:(*int)arg2 ;
-(BOOL)deregisterForVideoFramesFromSource:(int)arg0 withClient:(id)arg1 ;
-(BOOL)enqueueFrameToQueueFront:(BOOL)arg0 frame:(struct __CVBuffer *)arg1 frameTime:(struct ? )arg2 ;
-(BOOL)internalRegisterStreamInput:(id)arg0 ;
-(BOOL)internalUnregisterStreamInput:(id)arg0 ;
-(BOOL)isClientRegisteredForVideoFrames:(id)arg0 fromSource:(int)arg1 ;
-(BOOL)isValidStreamInput:(id)arg0 ;
-(BOOL)onVideoFrame:(struct opaqueCMSampleBuffer *)arg0 frameTime:(struct ? )arg1 attribute:(struct ? )arg2 ;
-(BOOL)registerForFrames:(id)arg0 ;
-(BOOL)registerForVideoFramesFromSource:(int)arg0 sourceConfig:(id)arg1 ;
-(BOOL)registerForVideoFramesFromSource:(int)arg0 withClient:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 ;
-(BOOL)registerStreamInput:(id)arg0 ;
-(BOOL)setCaptureCameraWithToken:(struct _VCVideoSourceToken )arg0 ;
-(BOOL)setLocalScreenAttributes:(id)arg0 ;
-(BOOL)setLocalVideoAttributes:(id)arg0 ;
-(BOOL)setUpScreenVideoCaptureSource:(id)arg0 ;
-(BOOL)setupScreenCaptureForSource:(int)arg0 config:(id)arg1 ;
-(BOOL)setupStreamInputCaptureSources;
-(BOOL)setupStreamInputs;
-(BOOL)startScreenShareCapture:(id)arg0 ;
-(BOOL)stopScreenShareCapture;
-(BOOL)unregisterStreamInputCaptureSourceWithCaptureSourceID:(int)arg0 ;
-(NSInteger)streamInputIDForCaptureSourceID:(int)arg0 ;
-(NSUInteger)retainCount;
-(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)autorelease;
-(id)copyLocalScreenAttributesForVideoAttributes:(id)arg0 ;
-(id)copyLocalVideoAttributes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)localScreenAttributesForVideoAttributes:(id)arg0 ;
-(id)localVideoAttributes;
-(id)retain;
-(int)createVideoCaptureWithWidth:(int)arg0 height:(int)arg1 frameRate:(int)arg2 useBackFacingCamera:(BOOL)arg3 ;
-(int)findNextAvailableCaptureSourceID;
-(int)getCaptureFrameRateForSource:(int)arg0 ;
-(int)getFrameRateForPeakPowerLevel:(int)arg0 ;
-(int)getFrameRateForThermalLevel:(int)arg0 ;
-(int)getFrameRateForThermalLevel:(int)arg0 peakPowerPressure:(int)arg1 ;
-(int)getScreenFrameRateForThermalLevel:(int)arg0 ;
-(int)registerStreamInputCaptureSourceWithConfiguration:(id)arg0 ;
-(struct CGSize )localExpectedRatioForScreenOrientation:(int)arg0 ;
-(struct CGSize )localScreenRatioForScreenOrientation:(int)arg0 ;
-(struct __CFDictionary *)copyCameraColorInfo;
-(struct __CFDictionary *)copyStatsDictionary;
-(struct __CVBuffer *)createResizedFrame:(struct __CVBuffer *)arg0 ;
-(struct opaqueCMFormatDescription *)newFormatDescriptionForCaptureSource:(int)arg0 ;
-(unsigned int)setLocalVideoDestination:(id)arg0 facing:(BOOL)arg1 ;
-(void)applyPressureLevelChanges;
-(void)beginPIPToPreviewAnimation;
-(void)beginPreviewToPIPAnimation;
-(void)changeCameraToPendingSettingsWithReset:(BOOL)arg0 ;
-(void)cleanupStreamInputCaptureSources;
-(void)cleanupStreamInputs;
-(void)dealloc;
-(void)deregisterCaptureClientForScreenShare:(id)arg0 ;
-(void)deregisterCaptureConfigForSource:(int)arg0 ;
-(void)didReceiveFirstPreviewFrame;
-(void)endPIPToPreviewAnimation;
-(void)endPreviewToPIPAnimation;
-(void)handleAVCaptureError:(int)arg0 domain:(id)arg1 ;
-(void)handleAVCaptureError:(int)arg0 error:(id)arg1 ;
-(void)handleCameraPreviewClientStateChange:(id)arg0 ;
-(void)handleCaptureEvent:(id)arg0 ;
-(void)handleCaptureEvent:(id)arg0 subType:(id)arg1 ;
-(void)handleCaptureSourcePositionDidChange:(BOOL)arg0 ;
-(void)notifyCameraDidChangeAvailability:(id)arg0 available:(BOOL)arg1 ;
-(void)notifyFrameRateBeingThrottledForClients:(id)arg0 newFrameRate:(int)arg1 thermalLevelDidChange:(BOOL)arg2 powerLevelDidChange:(BOOL)arg3 ;
-(void)notifyThermalChangeForClients:(id)arg0 ;
-(void)onCaptureScreenFrame:(struct opaqueCMSampleBuffer *)arg0 frameTime:(struct ? )arg1 orientation:(int)arg2 ;
-(void)onCaptureVideoFrame:(struct opaqueCMSampleBuffer *)arg0 frameTime:(struct ? )arg1 switching:(BOOL)arg2 camera:(int)arg3 videoMirrored:(BOOL)arg4 ;
-(void)pausePreview;
-(void)previewVideoWidth:(*int)arg0 height:(*int)arg1 frameRate:(*int)arg2 ;
-(void)processCaptureSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 frameTime:(struct ? )arg1 camera:(int)arg2 cameraStatusBits:(unsigned char)arg3 ;
-(void)processFrameSizeChange:(struct __CVBuffer *)arg0 cameraStatusBits:(unsigned char)arg1 ;
-(void)processPreviewSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 frameTime:(struct ? )arg1 camera:(int)arg2 cameraStatusBits:(unsigned char)arg3 ;
-(void)reconnectClientLayerFront:(BOOL)arg0 ;
-(void)registerBlocksForServer;
-(void)registerCaptureClientForScreenShare:(id)arg0 ;
-(void)registerCaptureConfig:(id)arg0 forSource:(int)arg1 ;
-(void)registerVideoSink:(id)arg0 withCaptureSource:(int)arg1 ;
-(void)release;
-(void)resetCameraToPreviewSettingsForced:(BOOL)arg0 ;
-(void)sendBiomeEventIsStarting:(BOOL)arg0 ;
-(void)sendSnapshotFromFrame:(struct __CVBuffer *)arg0 ;
-(void)setCFAvailabilityChange:(BOOL)arg0 ;
-(void)setCameraZoomAvailable:(BOOL)arg0 currentZoomFactor:(CGFloat)arg1 maxZoomFactor:(CGFloat)arg2 ;
-(void)setCameraZoomFactor:(CGFloat)arg0 ;
-(void)setCameraZoomFactor:(CGFloat)arg0 withRate:(CGFloat)arg1 ;
-(void)setCaptureFrameRate:(int)arg0 ;
-(void)setCaptureWidth:(int)arg0 height:(int)arg1 rate:(int)arg2 ;
-(void)setCaptureWidth:(int)arg0 height:(int)arg1 rate:(int)arg2 forced:(BOOL)arg3 ;
-(void)setCinematicFramingEnabled:(BOOL)arg0 ;
-(void)setCurrentFrameRate:(int)arg0 ;
-(void)setPauseCapture:(BOOL)arg0 ;
-(void)setScreenCaptureFrameRate:(int)arg0 ;
-(void)setUpDefaultAspectRatios;
-(void)setUpImageRotationConverter;
-(void)setViewPointCorrectionEnabled:(BOOL)arg0 ;
-(void)sourceFrameRateDidChange:(unsigned int)arg0 ;
-(void)startCaptureWithWidth:(int)arg0 height:(int)arg1 frameRate:(int)arg2 ;
-(void)startPreview;
-(void)stopCapture;
-(void)stopPreview;
-(void)tearDownImageRotationConverter;
-(void)unregisterStreamInput:(id)arg0 ;
-(void)unregisterVideoSink:(id)arg0 withCaptureSource:(int)arg1 ;
-(void)updateImageQueueFrameRate:(int)arg0 ;
-(void)updateLocalAspectRatios:(int)arg0 localScreenAspectRatio:(struct CGSize )arg1 ;
-(void)updatePreviewState;
-(void)updateViewPointCorrectionStatus;


@end


#endif