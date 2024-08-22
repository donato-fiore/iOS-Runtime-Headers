// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CANNEDVIDEOCAPTURE_H
#define CANNEDVIDEOCAPTURE_H

@class NSString;
@protocol VCVideoSource, OS_dispatch_queue, CannedVideoFrameFeeder;


#import "VCVideoCapture.h"

@interface CannedVideoCapture : VCVideoCapture <VCVideoSource>

 {
    NSObject<OS_dispatch_queue> *_captureSessionQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enableTxTimestampAlignmentLogs; // ivar: _enableTxTimestampAlignmentLogs
@property (retain, nonatomic) NSObject<CannedVideoFrameFeeder> *frameFeeder; // ivar: _frameFeeder
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *CannedVideoCapturePrivate pimpl; // ivar: _pimpl
@property (readonly) Class superclass;


+(?)createPixelBufferPool:(?)arg0 withWidthheight;
+(int)cannedVideoTypeForPath:(id)arg0 ;
-(?)copyColorInfo;
-(BOOL)cameraSupportsFormatWidth:(int)arg0 height:(int)arg1 ;
-(BOOL)isFrontCamera;
-(BOOL)isPreviewRunning;
-(id)initWithCaptureServer:(id)arg0 width:(int)arg1 height:(int)arg2 frameRate:(int)arg3 videoSourceToken:(struct _VCVideoSourceToken )arg4 video:(id)arg5 error:(*int)arg6 ;
-(int)configureCaptureWithToken:(struct _VCVideoSourceToken )arg0 ;
-(int)frameBecameAvailableCount:(*int)arg0 figBufferQueueEmptyCount:(*int)arg1 figBufferQueueErrorCount:(*int)arg2 ;
-(int)frameCount:(BOOL)arg0 ;
-(int)getFrameRate;
-(int)setFrameRate:(int)arg0 ;
-(int)setWidth:(int)arg0 height:(int)arg1 frameRate:(int)arg2 ;
-(int)startCaptureWithWidth:(int)arg0 height:(int)arg1 frameRate:(int)arg2 ;
-(int)startPreview;
-(int)startThreads;
-(int)stop:(BOOL)arg0 ;
-(void)dealloc;
-(void)setOrientation:(int)arg0 ;
-(void)stopThreads;


@end


#endif