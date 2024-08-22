// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCSCREENCAPTURE_H
#define VCSCREENCAPTURE_H

@class NSMutableDictionary, NSString;
@protocol VCScreenCaptureSourceDelegate, VCVideoSource, VCScreenCaptureSource;


#import "VCVideoCapture.h"

@interface VCScreenCapture : VCVideoCapture <VCScreenCaptureSourceDelegate, VCVideoSource>

 {
    NSMutableDictionary *_options;
    NSObject<VCScreenCaptureSource> *_screenCapture;
    BOOL _forceMirroring;
    _opaque_pthread_mutex_t _screenCaptureLock;
    *_opaque_pthread_t _clearScreenProc;
    _opaque_pthread_cond_t _clearScreenChanged;
    *opaqueCMSampleBuffer _blackFrame;
    BOOL _isPreviewing;
    BOOL _isCapturing;
    BOOL _capturePaused;
    int _captureFramerate;
    _opaque_pthread_mutex_t _clearScreenLock;
    BOOL _enableClearScreen;
    BOOL _isPreviousCompleteFrameBlack;
    *opaqueCMSampleBuffer _previousCompleteFrame;
    unsigned int _previousCompleteFrameTransform;
    ? _previousFrameTime;
    BOOL _shouldClearScreen;
    *__CVPixelBufferPool _resizeBufferPool;
    *OpaqueVTPixelTransferSession _resizeTransferSession;
    *OpaqueVTPixelRotationSession _rotationSession;
    *__CVPixelBufferPool _rotationBufferPool;
    int _captureWidth;
    int _captureHeight;
    unsigned int _currentTransform;
    BOOL _enableIdleFrameTimeAdjustments;
    int _frameCount;
    BOOL _receivedFirstFrame;
    int _resolutionScaling;
    BOOL _shouldResize;
    BOOL _shouldResizeInitialized;
    BOOL _shouldValidateFrameTimingAfterIdle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isClearScreenThreadRunning; // ivar: _isClearScreenThreadRunning
@property (readonly) Class superclass;


-(?)copyColorInfo;
-(BOOL)cameraSupportsFormatWidth:(int)arg0 height:(int)arg1 ;
-(BOOL)isFrontCamera;
-(BOOL)isPreviewRunning;
-(id)initWithCaptureServer:(id)arg0 sourceConfig:(id)arg1 ;
-(int)_startCapture;
-(int)configureCaptureWithToken:(struct _VCVideoSourceToken )arg0 ;
-(int)frameBecameAvailableCount:(*int)arg0 figBufferQueueEmptyCount:(*int)arg1 figBufferQueueErrorCount:(*int)arg2 ;
-(int)frameCount:(BOOL)arg0 ;
-(int)getFrameRate;
-(int)setFrameRate:(int)arg0 ;
-(int)setWidth:(int)arg0 height:(int)arg1 frameRate:(int)arg2 ;
-(int)startCaptureWithWidth:(int)arg0 height:(int)arg1 frameRate:(int)arg2 ;
-(int)startPreview;
-(int)startScreenCapture;
-(int)stop:(BOOL)arg0 ;
-(int)stopScreenCapture;
-(void)dealloc;
-(void)processAndSendIdleBlackFrame;
-(void)screenCaptureSourceProcessEventString:(id)arg0 ;
-(void)screenCaptureSourceShouldClearScreen:(BOOL)arg0 ;
-(void)setPauseCapture:(BOOL)arg0 ;
-(void)shouldClearScreen:(BOOL)arg0 ;
-(void)startClearScreenProc;
-(void)stopClearScreenProc;


@end


#endif