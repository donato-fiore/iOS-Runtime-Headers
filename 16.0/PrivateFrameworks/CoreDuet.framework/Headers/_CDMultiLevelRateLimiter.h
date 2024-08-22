// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDMULTILEVELRATELIMITER_H
#define _CDMULTILEVELRATELIMITER_H

@class NSArray, NSMutableArray, NSString, NSDate;
@protocol _CDRateLimiting, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CDMultiLevelRateLimiter : NSObject <_CDRateLimiting>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_periods;
    NSMutableArray *_periodStart;
    NSArray *_maxCounts;
    NSMutableArray *_balances;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) NSDate *lastRecorded; // ivar: _lastRecorded
@property (readonly, nonatomic) NSInteger numOfRateLimitPolicies; // ivar: _numberOfRateLimitPolicies
@property (readonly) Class superclass;


-(BOOL)credit;
-(BOOL)debited;
-(id)init;
-(id)initWithPeriodToCountMap:(id)arg0 ;
-(void)recordTimeAndRefillIfNeededRaw;


@end


#endif