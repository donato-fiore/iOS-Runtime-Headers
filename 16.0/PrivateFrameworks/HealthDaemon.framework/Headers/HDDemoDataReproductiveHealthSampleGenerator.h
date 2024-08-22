// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDEMODATAREPRODUCTIVEHEALTHSAMPLEGENERATOR_H
#define HDDEMODATAREPRODUCTIVEHEALTHSAMPLEGENERATOR_H

@class NSArray;


#import "HDDemoDataBaseSampleGenerator.h"

@interface HDDemoDataReproductiveHealthSampleGenerator : HDDemoDataBaseSampleGenerator {
    NSArray *_basalBodyTempMultiplierTable;
    NSArray *_cervicalMucusTable;
    CGFloat _nextSexualActivitySampleTime;
    CGFloat _nextCycleDaySampleTime;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)_computeNextLuteinizingHormoneSurgeForDemoPerson:(id)arg0 atTime:(CGFloat)arg1 ;
-(NSInteger)cycleDayIndexAtTime:(CGFloat)arg0 demoPerson:(id)arg1 ;
-(id)_basalBodyTempMultiplier;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateFirstRunObjectsForDemoPerson:(id)arg0 firstDate:(id)arg1 objectCollection:(id)arg2 ;
-(void)generateObjectsForDemoPerson:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 currentDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)setupWithDemoDataGenerator:(id)arg0 ;


@end


#endif