// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMCPROJECTIONACCURACYANALYTICS_H
#define HKMCPROJECTIONACCURACYANALYTICS_H


#import <Foundation/Foundation.h>


@interface HKMCProjectionAccuracyAnalytics : NSObject



+(BOOL)_isAllowed;
+(BOOL)_isMetricEnabled;
+(BOOL)shouldSubmit;
+(id)_closestProjectionToLoggedDayIndex:(NSInteger)arg0 analysis:(id)arg1 ;
+(id)_isSleepConfiguredForWristTemperatureMeasurementsWithError:(*id)arg0 ;
+(void)submitMetricWithDayIndex:(NSInteger)arg0 oldMenstrualFlow:(NSInteger)arg1 newMenstrualFlow:(NSInteger)arg2 analysis:(id)arg3 isLoggingMultipleDays:(BOOL)arg4 periodPredictionEnabled:(BOOL)arg5 heartRateBasedPredictionEnabled:(BOOL)arg6 wristTemperatureBasedPredictionEnabled:(BOOL)arg7 isWristTemperatureInputDelivered:(BOOL)arg8 internalLiveOnCycleFactorOverrideEnabled:(BOOL)arg9 cycles:(id)arg10 ;


@end


#endif