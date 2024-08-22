// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDEMODATASLEEPSAMPLEGENERATOR_H
#define HDDEMODATASLEEPSAMPLEGENERATOR_H

@class NSArray;


#import "HDDemoDataBaseSampleGenerator.h"

@interface HDDemoDataSleepSampleGenerator : HDDemoDataBaseSampleGenerator {
    CGFloat _nextSleepDurationSampleTime;
    NSArray *_sleepGraphsArray;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isDemoPersonAwake:(id)arg0 atTime:(CGFloat)arg1 ;
-(BOOL)isDemoPersonSleeping:(id)arg0 atTime:(CGFloat)arg1 ;
-(CGFloat)computeAwakeTimeForDemoPerson:(id)arg0 atTime:(CGFloat)arg1 ;
-(CGFloat)computeSleepTimeFromCurrentTime:(CGFloat)arg0 mean:(CGFloat)arg1 stdDev:(CGFloat)arg2 ;
-(id)createSleepSamplesFromSleepGraph:(id)arg0 sleepCategoryType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)sleepGraphsFileName;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateObjectsForDemoPerson:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 currentDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)setupWithDemoDataGenerator:(id)arg0 ;


@end


#endif