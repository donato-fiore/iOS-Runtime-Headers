// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDEMODATAHEARTSAMPLEGENERATOR_H
#define HDDEMODATAHEARTSAMPLEGENERATOR_H



#import "HDDemoDataBaseSampleGenerator.h"
#import "HDProfile.h"

@interface HDDemoDataHeartSampleGenerator : HDDemoDataBaseSampleGenerator {
    BOOL _lastVO2MaxWorkoutWasActive;
    HDProfile *_profile;
    CGFloat _nextElectrocardiogramSampleTime;
    NSUInteger _nextElectrocardiogramClassification;
    CGFloat _nextRestingHeartRateSampleTime;
    CGFloat _nextWalkingHeartRateAverageSampleTime;
    CGFloat _lastRestingHeartRate;
    CGFloat _lastWalkingHeartRateAverage;
    CGFloat _nextVO2MaxSampleTime;
    CGFloat _lastVO2MaxValue;
    CGFloat _meanVO2MaxValue;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateFirstRunSampleForDemoPerson:(id)arg0 firstDate:(id)arg1 objectCollection:(id)arg2 ;
-(void)generateSamplesForDemoPerson:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 currentDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)setProfile:(id)arg0 provenance:(id)arg1 ;
-(void)setupWithDemoDataGenerator:(id)arg0 ;


@end


#endif