// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOFRAMEINTERVALSAMPLER_H
#define HMIVIDEOFRAMEINTERVALSAMPLER_H

@class NSString;
@protocol HMFLogging;


#import "HMIVideoFrameSampler.h"

@interface HMIVideoFrameIntervalSampler : HMIVideoFrameSampler <HMFLogging>

 {
    ? _interval;
    ? _firstPTS;
    NSInteger _lastIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithFrameRate:(float)arg0 ;
-(id)initWithInterval:(struct ? )arg0 ;
-(void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif