// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKUIMETRICCOLORS_H
#define HKUIMETRICCOLORS_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface HKUIMetricColors : NSObject

@property (retain, nonatomic) UIColor *contextViewPrimaryTextColor; // ivar: _contextViewPrimaryTextColor
@property (retain, nonatomic) UIColor *contextViewSecondaryTextColor; // ivar: _contextViewSecondaryTextColor
@property (retain, nonatomic) UIColor *keyColor; // ivar: _keyColor


+(id)activityColors;
+(id)allergiesClinicalColors;
+(id)bodyMeasurementColors;
+(id)carePlansClinicalColors;
+(id)categoryColorsWithColor:(id)arg0 ;
+(id)conditionsClinicalColors;
+(id)defaultClinicalColors;
+(id)defaultContextViewColorsUsingColor:(id)arg0 ;
+(id)devicesClinicalColors;
+(id)disabledContextViewColor;
+(id)hearingHealthColors;
+(id)immunizationsClinicalColors;
+(id)insuranceClinicalColors;
+(id)labResultsClinicalColors;
+(id)medicationTrackingColors;
+(id)medicationsClinicalColors;
+(id)mindfulnessColors;
+(id)mobilityColors;
+(id)nutritionColors;
+(id)otherColors;
+(id)proceduresClinicalColors;
+(id)reproductiveHealthColors;
+(id)respiratoryColors;
+(id)sleepColors;
+(id)sleepColorsForSleepAnalysis:(NSInteger)arg0 ;
+(id)socialHistoryClinicalColors;
+(id)symptomsColors;
+(id)unknownCategoryClinicalColors;
+(id)vitalsClinicalColors;
+(id)vitalsColors;
+(id)workoutContextViewColors;


@end


#endif