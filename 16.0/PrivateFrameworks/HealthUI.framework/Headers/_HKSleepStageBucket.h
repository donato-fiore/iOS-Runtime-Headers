// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKSLEEPSTAGEBUCKET_H
#define _HKSLEEPSTAGEBUCKET_H

@class NSMutableDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface _HKSleepStageBucket : NSObject

@property (readonly, nonatomic) CGFloat bucketSize; // ivar: _bucketSize
@property (readonly, nonatomic) CGFloat distanceFromStart; // ivar: _distanceFromStart
@property (nonatomic) BOOL hasSleepStagesData; // ivar: _hasSleepStagesData
@property (readonly, nonatomic) NSInteger numberOfDays; // ivar: _numberOfDays
@property (retain, nonatomic) NSMutableDictionary *sleepStageCounts; // ivar: _sleepStageCounts
@property (readonly, nonatomic) NSDate *startOfSleep; // ivar: _startOfSleep


+(id)bucketsWithSize:(CGFloat)arg0 startOfSleep:(id)arg1 maxSleepDuration:(CGFloat)arg2 numberOfDays:(NSInteger)arg3 ;
-(NSInteger)_probableSleepStage;
-(id)initWithBucketSize:(CGFloat)arg0 distanceFromStart:(CGFloat)arg1 startOfSleep:(id)arg2 numberOfDays:(NSInteger)arg3 ;
-(id)probableSleepPeriodSegment;
-(void)updateWithSegment:(id)arg0 ;


@end


#endif