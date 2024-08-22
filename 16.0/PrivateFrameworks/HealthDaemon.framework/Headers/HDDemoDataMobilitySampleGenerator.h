// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDEMODATAMOBILITYSAMPLEGENERATOR_H
#define HDDEMODATAMOBILITYSAMPLEGENERATOR_H



#import "HDDemoDataBaseSampleGenerator.h"

@interface HDDemoDataMobilitySampleGenerator : HDDemoDataBaseSampleGenerator {
    CGFloat _nextStepLengthSampleTime;
    CGFloat _nextWalkingSpeedSampleTime;
    CGFloat _nextAsymmetryPercentageSampleTime;
    CGFloat _nextDoubleSupportPercentageSampleTime;
    CGFloat _nextSixMinuteWalkTestDistanceSampleTime;
    CGFloat _nextStairAscentSpeedSampleTime;
    CGFloat _nextStairDescentSpeedSampleTime;
    CGFloat _nextWalkingSteadinessSampleTime;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateFirstRunObjectsForDemoPerson:(id)arg0 firstDate:(id)arg1 objectCollection:(id)arg2 ;
-(void)generateObjectsForDemoPerson:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 currentDate:(id)arg3 objectCollection:(id)arg4 ;


@end


#endif