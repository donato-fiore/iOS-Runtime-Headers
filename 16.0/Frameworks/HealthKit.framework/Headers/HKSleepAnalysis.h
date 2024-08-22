// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPANALYSIS_H
#define HKSLEEPANALYSIS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface HKSleepAnalysis : NSObject

@property (readonly, nonatomic) CGFloat averageTimeAsleep; // ivar: _averageTimeAsleep
@property (readonly, nonatomic) CGFloat averageTimeInBed; // ivar: _averageTimeInBed
@property (readonly, nonatomic) NSInteger numberOfAsleepSamples; // ivar: _numberOfAsleepSamples
@property (readonly, copy, nonatomic) NSArray *sleepDays; // ivar: _sleepDays


+(id)emptyAnalysis;
-(id)initWithSleepDays:(id)arg0 numberOfAsleepSamples:(NSInteger)arg1 averageTimeInBed:(CGFloat)arg2 averageTimeAlseep:(CGFloat)arg3 ;


@end


#endif