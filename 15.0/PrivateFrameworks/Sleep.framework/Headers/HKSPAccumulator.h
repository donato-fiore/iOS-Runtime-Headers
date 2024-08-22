// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPACCUMULATOR_H
#define HKSPACCUMULATOR_H

@class NSMutableSet;
@protocol NAScheduler;

#import <Foundation/Foundation.h>

#import "HKSPThrottler.h"

@interface HKSPAccumulator : NSObject {
    HKSPThrottler *_throttler;
    id<NAScheduler> *_scheduler;
    NSMutableSet *_accumulatedValues;
}




-(id)initWithInterval:(CGFloat)arg0 updateBlock:(id)arg1 ;
// -(id)initWithInterval:(CGFloat)arg0 updateBlock:(id)arg1 scheduler:(unk)arg2  ;
-(void)accumulateValue:(id)arg0 ;
-(void)accumulateValues:(id)arg0 ;


@end


#endif