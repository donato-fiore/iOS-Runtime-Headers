// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCARDIOFITNESSCLASSIFICATIONUTILITIES_H
#define HKCARDIOFITNESSCLASSIFICATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface HKCardioFitnessClassificationUtilities : NSObject



+(NSInteger)cardioFitnessLevelForVO2Max:(CGFloat)arg0 biologicalSex:(NSInteger)arg1 age:(NSInteger)arg2 ;
+(NSInteger)cardioFitnessLevelForVO2MaxSample:(id)arg0 inHealthStore:(id)arg1 ;
+(id)_cardioFitnessLevelTransitionDatesForDateInterval:(id)arg0 biologicalSex:(NSInteger)arg1 dateOfBirth:(id)arg2 ;
+(id)_cardioFitnessLevels;
+(id)_flattenedThresholdsForLevelData:(id)arg0 ;
+(id)_parseCoreMotionClassificationData:(id)arg0 ;
+(id)_queryCoreMotionClassifications;
+(id)_queryCoreMotionClassificationsForBiologicalSex:(NSInteger)arg0 age:(NSInteger)arg1 ;
+(id)_stubbedCardioFitnessLevelData;
+(id)analyticsStringForLevel:(NSInteger)arg0 ;
+(id)cardioFitnessDataForBiologicalSex:(NSInteger)arg0 ;
+(id)cardioFitnessDataForBiologicalSex:(NSInteger)arg0 age:(NSInteger)arg1 ;
+(id)cardioFitnessDataForLevel:(NSInteger)arg0 biologicalSex:(NSInteger)arg1 age:(NSInteger)arg2 ;
+(id)cardioFitnessDataForLevel:(NSInteger)arg0 date:(id)arg1 healthStore:(id)arg2 ;
+(id)cardioFitnessDataForVO2Max:(CGFloat)arg0 biologicalSex:(NSInteger)arg1 age:(NSInteger)arg2 ;
+(id)cardioFitnessLevelDateIntervalsWithDateInterval:(id)arg0 healthStore:(id)arg1 ;
+(id)cardioFitnessPropertiesForDate:(id)arg0 healthStore:(id)arg1 ;
+(id)flattenedCardioFitnessDataForBiologicalSex:(NSInteger)arg0 ;


@end


#endif