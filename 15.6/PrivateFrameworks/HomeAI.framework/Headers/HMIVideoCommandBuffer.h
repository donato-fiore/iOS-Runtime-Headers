// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOCOMMANDBUFFER_H
#define HMIVIDEOCOMMANDBUFFER_H

@class NSCondition, NSString;
@protocol HMFLogging, HMIVideoCommandBufferDelegate, OS_dispatch_queue;


#import "HMIVideoProcessingNode.h"
#import "HMITimeIntervalAverage.h"

@interface HMIVideoCommandBuffer : HMIVideoProcessingNode <HMFLogging>

 {
    ? _duration;
}


@property (readonly) NSUInteger capacity; // ivar: _capacity
@property (readonly) NSCondition *condition; // ivar: _condition
@property (readonly, copy) NSString *debugDescription;
@property (readonly) CGFloat delay;
@property (weak) NSObject<HMIVideoCommandBufferDelegate> *delegate; // ivar: _delegate
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) float fillRatio;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isEmpty;
@property (readonly) BOOL isFull;
@property (readonly) HMITimeIntervalAverage *sampleBufferDelay; // ivar: _sampleBufferDelay
@property NSUInteger size; // ivar: _size
@property (readonly) Class superclass;
@property (readonly) ? videoDuration; // ivar: _videoDuration


+(id)logCategory;
-(id)initWithMaxCapacity:(NSUInteger)arg0 ;
-(void)flush;
-(void)flushAsync;
-(void)handleBlock:(id)arg0 ;
-(void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif