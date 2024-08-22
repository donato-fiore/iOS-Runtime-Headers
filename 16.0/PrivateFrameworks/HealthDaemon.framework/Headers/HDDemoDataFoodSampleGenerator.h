// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDEMODATAFOODSAMPLEGENERATOR_H
#define HDDEMODATAFOODSAMPLEGENERATOR_H

@class NSArray;


#import "HDDemoDataBaseSampleGenerator.h"
#import "HDDemoDataFoodDatabase.h"

@interface HDDemoDataFoodSampleGenerator : HDDemoDataBaseSampleGenerator {
    HDDemoDataFoodDatabase *_foodDatabase;
    CGFloat _nextMealTime;
    NSArray *_lastMeal;
    CGFloat _nextBloodGlucoseSampleTime;
    CGFloat _nextBloodGlucoseFingerStickSampleTime;
    CGFloat _nextBloodGlucoseMealTime;
    CGFloat _lastBloodGlucose;
    CGFloat _nextInsulinPumpBasalSampleTime;
    CGFloat _carbohydratesLeftToDigest;
    CGFloat _bloodGlucoseCarbohydrateGlycemicRate;
    CGFloat _bloodGlucoseDecreaseRateDueToInsulin;
    CGFloat _nextWaterConsumedSampleTime;
}


@property (readonly, nonatomic) CGFloat lastMealTime; // ivar: _lastMealTime
@property (readonly, nonatomic) CGFloat nextBreakfastTime; // ivar: _nextBreakfastTime
@property (readonly, nonatomic) CGFloat nextDinnerTime; // ivar: _nextDinnerTime
@property (readonly, nonatomic) CGFloat nextLunchTime; // ivar: _nextLunchTime
@property (readonly, nonatomic) CGFloat nextSnackTime; // ivar: _nextSnackTime


+(BOOL)supportsSecureCoding;
-(BOOL)_isDemoPersonConsumingCaffeine:(id)arg0 atTime:(CGFloat)arg1 ;
-(CGFloat)_computeMealTimeForDemoPerson:(id)arg0 fromTime:(CGFloat)arg1 mealTimeType:(NSInteger)arg2 timeMean:(CGFloat)arg3 stdDev:(CGFloat)arg4 ;
-(id)_lastMeal;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_generateRandomLastMeal;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateFirstRunObjectsForDemoPerson:(id)arg0 firstDate:(id)arg1 objectCollection:(id)arg2 ;
-(void)generateObjectsForDemoPerson:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 currentDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)setupWithDemoDataGenerator:(id)arg0 ;


@end


#endif