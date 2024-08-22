// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARPFEXPONENTIALBACKOFFTIMER_H
#define CARPFEXPONENTIALBACKOFFTIMER_H



#import "CARPFTimer.h"

@interface CARPFExponentialBackoffTimer : CARPFTimer

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