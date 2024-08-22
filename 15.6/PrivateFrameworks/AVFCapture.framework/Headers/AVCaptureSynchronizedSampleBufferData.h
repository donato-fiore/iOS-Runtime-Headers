// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAPTURESYNCHRONIZEDSAMPLEBUFFERDATA_H
#define AVCAPTURESYNCHRONIZEDSAMPLEBUFFERDATA_H



#import "AVCaptureSynchronizedData.h"
#import "AVCaptureSynchronizedSampleBufferDataInternal.h"

@interface AVCaptureSynchronizedSampleBufferData : AVCaptureSynchronizedData {
    AVCaptureSynchronizedSampleBufferDataInternal *_internal;
}


@property (readonly) NSInteger droppedReason;
@property (readonly) *opaqueCMSampleBuffer sampleBuffer;
@property (readonly) BOOL sampleBufferWasDropped;


+(void)initialize;
-(BOOL)hasCorrespondingDepthData;
-(BOOL)hasCorrespondingVisionData;
-(id)_initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 sampleBufferWasDropped:(BOOL)arg1 ;
-(int)constituentDeviceCaptureID;
-(void)dealloc;


@end


#endif