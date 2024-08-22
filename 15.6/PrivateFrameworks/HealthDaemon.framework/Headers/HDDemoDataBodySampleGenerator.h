// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDEMODATABODYSAMPLEGENERATOR_H
#define HDDEMODATABODYSAMPLEGENERATOR_H

@class NSArray;


#import "HDDemoDataBaseSampleGenerator.h"

@interface HDDemoDataBodySampleGenerator : HDDemoDataBaseSampleGenerator {
    NSArray *_boysHeightBirthTo36MonthsGrowthCurve;
    NSArray *_boysHeight2To20YearsGrowthCurve;
    NSArray *_boysWeightBirthTo36MonthsGrowthCurve;
    NSArray *_boysWeight2To20YearsGrowthCurve;
    NSArray *_girlsHeightBirthTo36MonthsGrowthCurve;
    NSArray *_girlsHeight2To20YearsGrowthCurve;
    NSArray *_girlsWeightBirthTo36MonthsGrowthCurve;
    NSArray *_girlsWeight2To20YearsGrowthCurve;
    CGFloat _nextHeightSampleTime;
    CGFloat _nextWeightSampleTime;
    CGFloat _lastHeightInCm;
    CGFloat _lastWeightInKg;
    CGFloat _weightAdultStartInKg;
}




+(BOOL)supportsSecureCoding;
-(CGFloat)lastHeightInCm;
-(CGFloat)lastWeightInKg;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateSamplesForDemoPerson:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 currentDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)setupWithDemoDataGenerator:(id)arg0 ;


@end


#endif