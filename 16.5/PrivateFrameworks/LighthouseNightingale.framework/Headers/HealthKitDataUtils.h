// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HEALTHKITDATAUTILS_H
#define HEALTHKITDATAUTILS_H


#import <Foundation/Foundation.h>


@interface HealthKitDataUtils : NSObject



+(id)fuseDayInputsFromDaySummary:(id)arg0 heartRate:(id)arg1 ;
+(id)getBirthDateFromHKHealthStore:(id)arg0 withError:(*id)arg1 ;
+(id)getConsolidatedSleepHoursFromSleepSamples:(id)arg0 ;
+(id)getDayStreamProcessorConfigFromConfig:(id)arg0 andLastJulianDay:(NSInteger)arg1 ;
+(id)getDayStreamProcessorConfigFromHKHealthStore:(id)arg0 asOfJulianDay:(NSInteger)arg1 withError:(*id)arg2 ;
+(id)getHKMCAnalysisWithHKHealthStore:(id)arg0 error:(*id)arg1 ;
+(id)getHKMCDaySummaryWithHKHealthStore:(id)arg0 forDayIndexRange:(struct ? )arg1 error:(*id)arg2 ;
+(id)getHistoricalCyclesFromDayInputs:(id)arg0 andCycleFactors:(id)arg1 upToJulianDay:(NSInteger)arg2 WithError:(*id)arg3 ;
+(id)getMenstruationPredictionsFromDayInputs:(id)arg0 andDayStreamProcessorConfig:(id)arg1 andCycleFactors:(id)arg2 asOfJulianDay:(NSInteger)arg3 includingHeartRate:(BOOL)arg4 includingWristTemperature:(BOOL)arg5 withError:(*id)arg6 ;
+(id)getPercentile:(NSInteger)arg0 valueFromArray:(id)arg1 ;
+(id)getReducedDayInputsFromFullInputs:(id)arg0 includingHeartRate:(BOOL)arg1 includingWristTemperature:(BOOL)arg2 upToJulianDay:(NSInteger)arg3 ;
+(id)reduceCycleFactors:(id)arg0 withLastJulianDay:(NSInteger)arg1 ;
+(id)removeForwardLookingValuesFromDayInputs:(id)arg0 ;
+(void)addCycleFactors:(id)arg0 intoPhaseIngestor:(id)arg1 withLastDay:(NSInteger)arg2 ;
+(void)asynchronouslyLoadCycleFactorsIntoDictionary:(id)arg0 FromHKHealthStore:(id)arg1 upToLastDay:(NSInteger)arg2 withAdditionalDayCount:(NSInteger)arg3 withDispatchGroup:(id)arg4 withError:(*id)arg5 ;
+(void)asynchronouslyLoadDayInputsIntoArray:(*id)arg0 fromHealthStore:(id)arg1 upToJulianDay:(NSInteger)arg2 withAdditionalDayCount:(NSInteger)arg3 useHeartRate:(BOOL)arg4 useWristTemperature:(BOOL)arg5 withDispatchGroup:(id)arg6 error:(*id)arg7 ;
+(void)asynchronouslyLoadDaySummaryDayInputsIntoDictionary:(id)arg0 FromHealthStore:(id)arg1 upToJulianDay:(NSInteger)arg2 withAdditionalDayCount:(NSInteger)arg3 includeWristTemperature:(BOOL)arg4 withDispatchGroup:(id)arg5 error:(*id)arg6 ;
+(void)asynchronouslyLoadHeartRateDayInputsIntoDictionary:(id)arg0 fromHealthStore:(id)arg1 upToJulianDay:(NSInteger)arg2 withAdditionalDayCount:(NSInteger)arg3 withDispatchGroup:(id)arg4 error:(*id)arg5 ;
+(void)asynchronouslyLoadMostRecentBMIIntoNSNumber:(*id)arg0 FromHKHealthStore:(id)arg1 asOfJulianDay:(NSInteger)arg2 withDispatchGroup:(id)arg3 withError:(*id)arg4 ;


@end


#endif