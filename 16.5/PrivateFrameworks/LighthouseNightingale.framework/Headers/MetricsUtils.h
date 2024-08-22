// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef METRICSUTILS_H
#define METRICSUTILS_H


#import <Foundation/Foundation.h>


@interface MetricsUtils : NSObject



+(CGFloat)getAbsErrOfPrediction:(id)arg0 givenCycle:(id)arg1 ;
+(CGFloat)getLeftLightRedDaysFromPrediction:(id)arg0 ;
+(CGFloat)getMeanOfValuesInArray:(id)arg0 ;
+(CGFloat)getPopulationStandardDeviationOfValuesInArray:(id)arg0 ;
+(CGFloat)getPredictionErrorFromHistoricalCycle:(id)arg0 andPrediction:(id)arg1 ;
+(CGFloat)getRightLightRedDaysFromPrediction:(id)arg0 ;
+(CGFloat)getWastageFromHistoricalCycle:(id)arg0 andPrediction:(id)arg1 ;
+(NSInteger)getWidthFromPrediction:(id)arg0 ;
+(id)daysSinceFactorsRemovedFromCycleFactors:(id)arg0 andLastJulianDay:(NSInteger)arg1 ;
+(id)getMetricsFromDayInputs:(id)arg0 startingAtJulianDay:(NSInteger)arg1 andEndingAtJulianDay:(NSInteger)arg2 ;
+(id)getRollingMeanWithoutOutliers:(id)arg0 minValue:(id)arg1 maxValue:(id)arg2 ;
+(id)getRollingSDWithoutOutliers:(id)arg0 minValue:(id)arg1 maxValue:(id)arg2 ;


@end


#endif