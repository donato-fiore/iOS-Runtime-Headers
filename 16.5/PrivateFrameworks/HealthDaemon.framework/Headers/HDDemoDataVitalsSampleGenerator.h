// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDEMODATAVITALSSAMPLEGENERATOR_H
#define HDDEMODATAVITALSSAMPLEGENERATOR_H

@class NSArray;


#import "HDDemoDataBaseSampleGenerator.h"

@interface HDDemoDataVitalsSampleGenerator : HDDemoDataBaseSampleGenerator {
    NSArray *_diurnalBPVariationTable;
    NSArray *_diurnalTempVariationTable;
    CGFloat _nextHeartRateSampleTime;
    CGFloat _nextRespirationRateSampleTime;
    CGFloat _lastRespirationRateGenerationTime;
    CGFloat _nextBloodPressureSampleTime;
    CGFloat _nextBodyTempSampleTime;
    CGFloat _nextOxygenSaturationSampleTime;
    CGFloat _nextPeripheralPerfusionIndexSampleTime;
    CGFloat _lastPeripheralPerfusionIndexValue;
}




+(BOOL)supportsSecureCoding;
-(CGFloat)_computeBodyTempInCelsiusForDemoPerson:(id)arg0 atTime:(CGFloat)arg1 addNoise:(BOOL)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateObjectsForDemoPerson:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 currentDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)setupWithDemoDataGenerator:(id)arg0 ;


@end


#endif