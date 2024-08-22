// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFHEALTHKITHELPER_H
#define WFHEALTHKITHELPER_H


#import <Foundation/Foundation.h>


@interface WFHealthKitHelper : NSObject



+(BOOL)readableWorkoutActivityTypeIsValid:(id)arg0 ;
+(NSInteger)enumFromReadableAppleStandingHour:(id)arg0 ;
+(NSInteger)enumFromReadableBloodGlucoseMealTime:(id)arg0 ;
+(NSInteger)enumFromReadableCervicalMucusQuality:(id)arg0 ;
+(NSInteger)enumFromReadableInsulinDeliveryReason:(id)arg0 ;
+(NSInteger)enumFromReadableMenstrualFlow:(id)arg0 ;
+(NSInteger)enumFromReadableOvulationTestResult:(id)arg0 ;
+(NSInteger)enumFromReadableSleepAnalysis:(id)arg0 ;
+(NSInteger)enumFromReadableVO2MaxTestType:(id)arg0 ;
+(NSUInteger)workoutActivityTypeFromReadableWorkoutActivityType:(id)arg0 ;
+(id)boolFromReadableMenstrualFlowIsStartOfCycle:(id)arg0 ;
+(id)boolFromReadableSexualActivity:(id)arg0 ;
+(id)characteristicTypeIdentifierFromReadableTypeIdentifier:(id)arg0 ;
+(id)extractHKDataFromContentQuery:(id)arg0 ;
+(id)localizedDisplayNameForUnit:(id)arg0 quantityTypeIdentifier:(id)arg1 ;
+(id)localizedDisplayNameForUnit:(id)arg0 value:(id)arg1 ;
+(id)localizedDisplayNameForUnit:(id)arg0 value:(id)arg1 quantityTypeIdentifier:(id)arg2 ;
+(id)localizedSampleTypes;
+(id)readableAppleStandingHourFromEnum:(NSInteger)arg0 ;
+(id)readableAppleStandingHourValues;
+(id)readableBiologicalSexFromEnum:(NSInteger)arg0 ;
+(id)readableBloodGlucoseMealTimeFromEnum:(NSInteger)arg0 ;
+(id)readableBloodGlucoseMealTimeValues;
+(id)readableBloodTypeFromEnum:(NSInteger)arg0 ;
+(id)readableCervicalMucusQualityFromEnum:(NSInteger)arg0 ;
+(id)readableCervicalMucusQualityValues;
+(id)readableCharacteristicTypes;
+(id)readableInsulinDeliveryReasonFromEnum:(NSInteger)arg0 ;
+(id)readableInsulinDeliveryReasonValues;
+(id)readableMenstrualFlowFromEnum:(NSInteger)arg0 ;
+(id)readableMenstrualFlowIsStartOfCycleFromBool:(BOOL)arg0 ;
+(id)readableMenstrualFlowIsStartOfCycleValues;
+(id)readableMenstrualFlowValues;
+(id)readableOvulationTestResultFromEnum:(NSInteger)arg0 ;
+(id)readableOvulationTestResultValues;
+(id)readableSampleTypeIdentifierFromSampleTypeIdentifier:(id)arg0 ;
+(id)readableSampleTypes;
+(id)readableSexualActivityFromBool:(BOOL)arg0 ;
+(id)readableSexualActivityValues;
+(id)readableSleepAnalysisFromEnum:(NSInteger)arg0 ;
+(id)readableSleepAnalysisValues;
+(id)readableTypeIdentifierFromCharacteristicTypeIdentifier:(id)arg0 ;
+(id)readableVO2MaxTestTypeFromEnum:(NSInteger)arg0 ;
+(id)readableVO2MaxTestTypeValues;
+(id)readableWorkoutActivityTypeFromWorkoutActivityType:(NSUInteger)arg0 ;
+(id)readableWorkoutActivityTypes;
+(id)sampleTypeIdentifierFromReadableTypeIdentifier:(id)arg0 ;
+(void)sourceWithName:(id)arg0 ofSampleType:(id)arg1 completion:(id)arg2 ;
+(void)sourcesForSampleType:(id)arg0 completion:(id)arg1 ;
+(void)validUnitsForQuantityType:(id)arg0 completion:(id)arg1 ;


@end


#endif