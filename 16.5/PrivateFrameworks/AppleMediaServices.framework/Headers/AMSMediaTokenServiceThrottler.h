// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMEDIATOKENSERVICETHROTTLER_H
#define AMSMEDIATOKENSERVICETHROTTLER_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface AMSMediaTokenServiceThrottler : NSObject

@property (nonatomic) NSUInteger attemptNumber; // ivar: _attemptNumber
@property (nonatomic) CGFloat baseSleepInterval; // ivar: _baseSleepInterval
@property (nonatomic) CGFloat maxSleepInterval; // ivar: _maxSleepInterval
@property (retain, nonatomic) NSDate *throttleDate; // ivar: _throttleDate


-(BOOL)shouldThrottle;
-(CGFloat)_calculateThrottleInterval;
-(id)initWithBaseSleepInterval:(CGFloat)arg0 maxSleepInterval:(CGFloat)arg1 ;
-(void)reset;
-(void)throttle;


@end


#endif