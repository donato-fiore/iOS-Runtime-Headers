// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDEMODATAACTIVITYSAMPLEGENERATOR_H
#define HDDEMODATAACTIVITYSAMPLEGENERATOR_H

@class HKActivityCache;


#import "HDDemoDataBaseSampleGenerator.h"
#import "HDProfile.h"
#import "HDDataOriginProvenance.h"
#import "HDDemoDataGeneratorWorkoutConfiguration.h"
#import "_HDDemoDataActivityWorkoutState.h"

@interface HDDemoDataActivitySampleGenerator : HDDemoDataBaseSampleGenerator {
    HDProfile *_profile;
    HDDataOriginProvenance *_provenance;
    CGFloat _nextActiveCaloriesSampleTime;
    CGFloat _nextAppleStandHourSampleTime;
    CGFloat _nextRestingCaloriesSampleTime;
    CGFloat _nextFallSampleTime;
    CGFloat _nextFlightsClimbedSampleTime;
    CGFloat _nextStepsSampleTime;
    CGFloat _nextExerciseMinuteTime;
    CGFloat _nextHeartRateRecoveryStartTime;
    CGFloat _nextHeartRateRecoveryStopTime;
    CGFloat _nextUVIndexSampleTime;
    CGFloat _lastUVIndexPeakTime;
    CGFloat _lastUVExposure;
    CGFloat _lastUVIndexPeak;
    HKActivityCache *_lastActivityCache;
    HDDemoDataGeneratorWorkoutConfiguration *_currentWorkoutConfiguration;
    _HDDemoDataActivityWorkoutState *_workoutState;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_isDemoPersonCoolingDown:(id)arg0 atTime:(CGFloat)arg1 ;
-(BOOL)_isDemoPersonInWorkoutRecovery:(id)arg0 atTime:(CGFloat)arg1 ;
-(BOOL)_isDemoPersonSedentary:(id)arg0 atTime:(CGFloat)arg1 ;
-(BOOL)_isDemoPersonWalking:(id)arg0 atTime:(CGFloat)arg1 samplePeriod:(CGFloat)arg2 ;
-(CGFloat)_computeExerciseTimeFromCurrentTime:(CGFloat)arg0 mean:(CGFloat)arg1 stdDev:(CGFloat)arg2 ;
-(CGFloat)_computePercentCooledForDemoPerson:(id)arg0 atTime:(CGFloat)arg1 ;
-(id)_computeFlightsClimbedForDemoPerson:(id)arg0 atTime:(CGFloat)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateFirstRunSampleForDemoPerson:(id)arg0 firstDate:(id)arg1 objectCollection:(id)arg2 ;
-(void)generateSamplesForDemoPerson:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 currentDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)setProfile:(id)arg0 provenance:(id)arg1 ;
-(void)setupWithDemoDataGenerator:(id)arg0 ;


@end


#endif