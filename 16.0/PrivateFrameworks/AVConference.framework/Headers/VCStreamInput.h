// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCSTREAMINPUT_H
#define VCSTREAMINPUT_H

@class NSString, NSDictionary, NSNumber;
@protocol VCStreamInputCaptureSourceDelegate, OS_dispatch_queue, VCStreamInputDelegate;


#import "VCObject.h"

@interface VCStreamInput : VCObject <VCStreamInputCaptureSourceDelegate>

 {
    NSObject<OS_dispatch_queue> *_streamInputQueue;
    *unk _sampleBufferHandler;
    *opaqueCMFormatDescription _format;
    id<VCStreamInputDelegate> *_strongDelegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    ? _lastBufferTime;
    ? _lastAveragedTime;
    uint8_t _sampleBufferCount;
    CGFloat _estimatedJitter;
    CGFloat _lastTransitTime;
    *opaqueVCRemoteImageQueue _receiverQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isStarted; // ivar: _isStarted
@property (readonly) NSDictionary *reportingStats;
@property (readonly, nonatomic) NSNumber *streamInputID; // ivar: _streamInputID
@property (readonly) Class superclass;


-(BOOL)createRemoteReceiveQueue:(id)arg0 ;
-(BOOL)isEqualFormat:(struct opaqueCMFormatDescription *)arg0 ;
-(id)initWithStreamInputID:(id)arg0 format:(struct opaqueCMFormatDescription *)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 remoteQueue:(id)arg4 ;
-(struct opaqueCMFormatDescription *)streamFormat;
-(void)dealloc;
-(void)didResumeStreamInputCaptureSource;
-(void)didStartStreamInputCaptureSource;
-(void)didStopStreamInputCaptureSource;
-(void)didSuspendStreamInputCaptureSource;
-(void)invalidate;
-(void)thermalLevelDidChange:(int)arg0 ;


@end


#endif