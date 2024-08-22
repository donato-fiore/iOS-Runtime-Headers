// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMAVCAPTURESESSIONNODE_H
#define AXMAVCAPTURESESSIONNODE_H

@class AVCaptureSession, NSString;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate, AXMAVCaptureSessionNodeFrameDelegate, OS_dispatch_queue, AXMAVCaptureSessionNodeDelegate;


#import "AXMSourceNode.h"
#import "AXMVisionAnalysisOptions.h"
#import "AXMCaptureVideoDataOutput.h"

@interface AXMAVCaptureSessionNode : AXMSourceNode <AVCaptureVideoDataOutputSampleBufferDelegate, AXMAVCaptureSessionNodeFrameDelegate>

 {
    NSObject<OS_dispatch_queue> *_autotrigger_queue;
}


@property (retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions; // ivar: _analysisOptions
@property (retain, nonatomic) AXMCaptureVideoDataOutput *axVideoDataOutput; // ivar: _axVideoDataOutput
@property (weak, nonatomic) AVCaptureSession *captureSession; // ivar: _captureSession
@property (weak, nonatomic) NSObject<AXMAVCaptureSessionNodeDelegate> *captureSessionNodeDelegate; // ivar: _captureSessionNodeDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<AXMAVCaptureSessionNodeFrameDelegate> *frameDelegate; // ivar: _frameDelegate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(void)addVideoDataOutputWithAVCaptureSession:(id)arg0 queue:(id)arg1 ;
-(void)autoTriggerVideoFrameEventsWithAVCaptureSession:(id)arg0 options:(id)arg1 delegate:(id)arg2 ;
-(void)beginFrameEventsWithAVCaptureSession:(id)arg0 delegate:(id)arg1 queue:(id)arg2 ;
-(void)captureOutput:(id)arg0 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)captureSessionNode:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)endAutoTriggerOfVideoFrameEvents;
-(void)endVideoFrameEvents;
-(void)nodeInitialize;
-(void)produceImage:(id)arg0 ;
-(void)setShouldProcessRemotely:(BOOL)arg0 ;
-(void)triggerWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 interfaceOrientation:(NSInteger)arg1 mirrored:(BOOL)arg2 options:(id)arg3 userContext:(id)arg4 ;


@end


#endif