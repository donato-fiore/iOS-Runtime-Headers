// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSTREAMINPUTCAPTURESOURCE_H
#define VCSTREAMINPUTCAPTURESOURCE_H

@class NSMutableDictionary, NSString;
@protocol VCVideoSink, VCVideoCaptureServer, VCVideoSource;


#import "VCVideoCapture.h"

@interface VCStreamInputCaptureSource : VCVideoCapture <VCVideoSink, VCVideoCaptureServer>

 {
    id *_delegate;
    _opaque_pthread_mutex_t _sinkMutex;
    NSMutableDictionary *_videoSinkState;
    id<VCVideoSource> *_cannedVideoCapture;
    int _cannedVideoWidth;
    int _cannedVideoHeight;
}


@property (readonly, nonatomic) int bestCameraCaptureFrameRate;
@property (nonatomic) int captureSourceID; // ivar: _captureSourceID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL followSystemCamera;
@property (readonly, nonatomic) *opaqueCMFormatDescription formatDescription; // ivar: _formatDescription
@property (readonly, nonatomic) unsigned int frameRate; // ivar: _frameRate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger streamInputID; // ivar: _streamInputID
@property (readonly) Class superclass;


+(BOOL)readIntegerFromConfig:(id)arg0 key:(id)arg1 value:(*NSInteger)arg2 ;
+(BOOL)readUint32FromConfig:(id)arg0 key:(id)arg1 value:(*unsigned int)arg2 ;
-(BOOL)allSinksSuspended;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)onVideoFrame:(struct opaqueCMSampleBuffer *)arg0 frameTime:(struct ? )arg1 attribute:(struct ? )arg2 ;
-(BOOL)setupDataFormatWithConfiguration:(id)arg0 ;
-(BOOL)setupFormatWithConfiguration:(id)arg0 ;
-(BOOL)setupVideoFormatWithConfiguration:(id)arg0 ;
-(id)copyOnVideoFrameBlock:(SEL)arg0 ;
-(id)initWithCaptureSourceID:(int)arg0 configuration:(id)arg1 ;
-(int)getCaptureFrameRateForSource:(int)arg0 ;
-(unsigned int)addSink:(id)arg0 ;
-(unsigned int)removeSink:(id)arg0 ;
-(void)dealloc;
-(void)didResumeVideoSink:(id)arg0 ;
-(void)didSuspendVideoSink:(id)arg0 ;
-(void)handleCaptureEvent:(id)arg0 ;
-(void)handleCaptureEvent:(id)arg0 subType:(id)arg1 ;
-(void)loadCannedVideoReplay;
-(void)onCaptureScreenFrame:(struct opaqueCMSampleBuffer *)arg0 frameTime:(struct ? )arg1 orientation:(int)arg2 ;
-(void)onCaptureVideoFrame:(struct opaqueCMSampleBuffer *)arg0 frameTime:(struct ? )arg1 switching:(BOOL)arg2 camera:(int)arg3 videoMirrored:(BOOL)arg4 ;
-(void)setCFAvailabilityChange:(BOOL)arg0 ;
-(void)setCameraZoomAvailable:(BOOL)arg0 currentZoomFactor:(CGFloat)arg1 maxZoomFactor:(CGFloat)arg2 ;
-(void)setCaptureFrameRate:(int)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)sourceFrameRateDidChange:(unsigned int)arg0 ;


@end


#endif