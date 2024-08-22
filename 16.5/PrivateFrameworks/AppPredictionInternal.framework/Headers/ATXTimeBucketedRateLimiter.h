// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXTIMEBUCKETEDRATELIMITER_H
#define ATXTIMEBUCKETEDRATELIMITER_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface ATXTimeBucketedRateLimiter : NSObject {
    NSUInteger _maxCount;
    CGFloat _period;
    NSDate *_endOfCurrentBucket;
    NSUInteger _countForCurrentBucket;
}


@property (retain, nonatomic) NSDate *now; // ivar: _now


-(BOOL)tryToIncrementCountAndReturnSuccess;
-(id)initWithMaxCount:(NSUInteger)arg0 perPeriod:(CGFloat)arg1 ;
-(void)_resetBucketIfNeeded;


@end


#endif