// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIMEMORYSAMPLER_H
#define HMIMEMORYSAMPLER_H

@class HMFObject, NSString, HMFTimer;
@protocol HMFTimerDelegate, HMFLogging;


#import "MovingAverage.h"

@interface HMIMemorySampler : HMFObject <HMFTimerDelegate, HMFLogging>



@property (readonly) MovingAverage *average; // ivar: _average
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSInteger highWaterMark; // ivar: _highWaterMark
@property (readonly) Class superclass;
@property (readonly) HMFTimer *tick; // ivar: _tick


+(id)logCategory;
+(id)sharedInstance;
-(id)init;
-(void)start;
-(void)stop;
-(void)timerDidFire:(id)arg0 ;


@end


#endif