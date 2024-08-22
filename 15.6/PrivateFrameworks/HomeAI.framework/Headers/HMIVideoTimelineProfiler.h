// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOTIMELINEPROFILER_H
#define HMIVIDEOTIMELINEPROFILER_H

@class HMFObject;


#import "HMIVideoTimeline.h"
#import "HMITimeIntervalAverage.h"

@interface HMIVideoTimelineProfiler : HMFObject {
    HMIVideoTimeline *_timeline;
    HMITimeIntervalAverage *_average;
}




-(CGFloat)averageTime;
-(id)initWithMaxCapacity:(NSInteger)arg0 ;
-(void)endedAtTime:(struct ? )arg0 ;
-(void)startedAtTime:(struct ? )arg0 ;


@end


#endif