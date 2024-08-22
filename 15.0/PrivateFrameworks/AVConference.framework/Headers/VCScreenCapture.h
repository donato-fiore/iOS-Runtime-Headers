// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSCREENCAPTURE_H
#define VCSCREENCAPTURE_H

@class NSMutableDictionary, NSString;
@protocol VCVideoSource;


#import "VCVideoCapture.h"

@interface VCScreenCapture : VCVideoCapture <VCVideoSource>

 {
    id *_weakCapture;
    NSMutableDictionary *_options;
    *OpaqueFigVirtualDisplaySession _session;
    *OpaqueVTImageRotationSession _rotationSession;
    *__CVPixelBufferPool _rotationBufferPool;
    *__CVPixelBufferPool _resizeBufferPool;
    *OpaqueVTPixelTransferSession _resizeTransferSession;
    BOOL _shouldResizeInitialized;
    BOOL _shouldResize;
    BOOL _forceMirroring;
    BOOL _enableClearScreen;
    int _resolutionScaling;
    _opaque_pthread_mutex_t _screenCaptureLock;
    *_opaque_pthread_t _clearScreenProc;
    _opaque_pthread_mutex_t _clearScreenLock;
    _opaque_pthread_cond_t _clearScreenChanged;
    BOOL _shouldClearScreen;
    *opaqueCMSampleBuffer _blackFrame;
    *opaqueCMSampleBuffer _previousCompleteFrame;
    CGRect _previousCompleteFrameSourceRect;
    CGRect _previousCompleteFrameDestinationRect;
    unsigned int _previousCompleteFrameTransform;
    BOOL _isPreviousCompleteFrameBlack;
    ? _previousFrameTime;
    BOOL _shouldValidateFrameTimingAfterIdle;
    BOOL _isPreviewing;
    BOOL _isCapturing;
    BOOL _capturePaused;
    int _captureWidth;
    int _captureHeight;
    int _captureFramerate;
    int _frameCount;
    BOOL _enableIdleFrameTimeAdjustments;
    BOOL _receivedFirstFrame;
    unsigned int _currentTransform;
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
-(CGFloat)shiftSampleBufferPresentationTime:(struct opaqueCMSampleBuffer *)arg0 frameTime:(struct ? )arg1 timeOffset:(struct ? )arg2 ;
-(id)initWithCaptureServer:(id)arg0 sourceConfig:(id)arg1 ;
-(int)_startCapture;
-(int)configureCaptureWithToken:(struct _VCVideoSourceToken )arg0 ;
-(int)frameBecameAvailableCount:(*int)arg0 figBufferQueueEmptyCount:(*int)arg1 figBufferQueueErrorCount:(*int)arg2 ;
-(int)frameCount:(BOOL)arg0 ;
-(int)getFrameRate;
-(int)performIdleTimeAdjustments:(struct opaqueCMSampleBuffer *)arg0 frameTime:(struct ? *)arg1 isIdle:(struct __CFBoolean *)arg2 shouldDropFrame:(*BOOL)arg3 shouldAddSignpost:(*BOOL)arg4 ;
-(int)setFrameRate:(int)arg0 ;
-(int)setWidth:(int)arg0 height:(int)arg1 frameRate:(int)arg2 ;
-(int)startCaptureWithWidth:(int)arg0 height:(int)arg1 frameRate:(int)arg2 ;
-(int)startPreview;
-(int)startScreenCapture;
-(int)stop:(BOOL)arg0 ;
-(int)stopScreenCapture;
-(void)callbackWithEventString:(id)arg0 ;
-(void)capturedScreen:(struct opaqueCMSampleBuffer *)arg0 sourceRect:(struct CGRect )arg1 desRect:(struct CGRect )arg2 transform:(unsigned int)arg3 isIdleBlackFrame:(BOOL)arg4 ;
-(void)dealloc;
-(void)processAndSendIdleBlackFrame;
-(void)setPauseCapture:(BOOL)arg0 ;
-(void)shouldClearScreen:(BOOL)arg0 ;
-(void)startClearScreenProc;
-(void)stopClearScreenProc;
-(void)validateFrameTime:(struct ? )arg0 interArrivalTime:(CGFloat)arg1 isIdle:(struct __CFBoolean *)arg2 shouldDropFrame:(*BOOL)arg3 shouldAddSignpost:(*BOOL)arg4 ;


@end


#endif