// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVSAMPLEBUFFERVIDEOOUTPUT_H
#define AVSAMPLEBUFFERVIDEOOUTPUT_H

@protocol OS_dispatch_queue, AVSampleBufferVideoOutputPullDelegate;

#import <Foundation/Foundation.h>

#import "AVSampleBufferVideoOutputInternal.h"

@interface AVSampleBufferVideoOutput : NSObject {
    AVSampleBufferVideoOutputInternal *_videoOutputInternal;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, weak, nonatomic) NSObject<AVSampleBufferVideoOutputPullDelegate> *outputDelegate;


-(BOOL)_configureWithVideoQueue:(struct OpaqueFigVideoQueue *)arg0 ;
-(BOOL)hasNewPixelBufferForSourceTime:(struct ? )arg0 ;
-(BOOL)setUpWithOutputSettings:(id)arg0 outputSettingsArePixelBufferAttributes:(BOOL)arg1 withExceptionReason:(*id)arg2 ;
-(id)_weakReference;
-(id)init;
-(struct OpaqueFigVisualContext *)_visualContext;
-(struct __CVBuffer *)_copyPixelBufferForItemTimeWithOptions:(struct ? )arg0 itemTimeForDisplay:(struct ? *)arg1 options:(unsigned int)arg2 ;
-(struct __CVBuffer *)copyLastPixelBuffer:(struct ? *)arg0 ;
-(struct __CVBuffer *)copyPixelBufferForSourceTime:(struct ? )arg0 sourceTimeForDisplay:(struct ? *)arg1 ;
-(void)_dispatchOutputSequenceWasFlushed;
-(void)_resetLastImageTime;
-(void)dealloc;


@end


#endif