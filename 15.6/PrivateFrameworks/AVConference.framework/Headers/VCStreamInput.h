// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCSTREAMINPUT_H
#define VCSTREAMINPUT_H

@class NSString, NSNumber;
@protocol VCStreamInputCaptureSourceDelegate, OS_dispatch_queue;


#import "VCVideoCapture.h"

@interface VCStreamInput : VCVideoCapture <VCStreamInputCaptureSourceDelegate>

 {
    *opaqueCMFormatDescription _format;
    id *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isStarted; // ivar: _isStarted
@property (readonly, nonatomic) NSNumber *streamInputID; // ivar: _streamInputID
@property (readonly) Class superclass;


-(id)delegate;
-(id)initWithStreamInputID:(id)arg0 format:(struct opaqueCMFormatDescription *)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(struct opaqueCMFormatDescription *)streamFormat;
-(void)dealloc;
-(void)didStartStreamInputCaptureSource;
-(void)didStopStreamInputCaptureSource;
-(void)pushSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif