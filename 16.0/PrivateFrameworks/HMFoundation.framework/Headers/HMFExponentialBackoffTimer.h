// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFEXPONENTIALBACKOFFTIMER_H
#define HMFEXPONENTIALBACKOFFTIMER_H



#import "HMFTimer.h"

@interface HMFExponentialBackoffTimer : HMFTimer

@property (readonly, nonatomic) NSInteger exponentialFactor; // ivar: _exponentialFactor
@property (readonly, nonatomic, getter=isIncreasing) BOOL increasing; // ivar: _increasing
@property (readonly, nonatomic) CGFloat maximumTimeInterval; // ivar: _maximumTimeInterval
@property (readonly, nonatomic) CGFloat minimumTimeInterval; // ivar: _minimumTimeInterval


-(CGFloat)timeInterval;
-(id)initWithMinimumTimeInterval:(CGFloat)arg0 maximumTimeInterval:(CGFloat)arg1 exponentialFactor:(NSInteger)arg2 options:(NSUInteger)arg3 ;
-(id)initWithTimeInterval:(CGFloat)arg0 options:(NSUInteger)arg1 ;
-(void)__fire;
-(void)reset;


@end


#endif