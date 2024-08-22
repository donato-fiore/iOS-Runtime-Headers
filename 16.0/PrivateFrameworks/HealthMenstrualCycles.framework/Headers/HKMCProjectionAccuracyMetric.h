// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMCPROJECTIONACCURACYMETRIC_H
#define HKMCPROJECTIONACCURACYMETRIC_H

@class NSString, NSNumber, NSDictionary;

#import <Foundation/Foundation.h>


@interface HKMCProjectionAccuracyMetric : NSObject

@property (retain, nonatomic) NSString *activePairedWatchProductType; // ivar: _activePairedWatchProductType
@property (nonatomic) NSInteger daysAgoLogged; // ivar: _daysAgoLogged
@property (retain, nonatomic) NSNumber *daysFromMostLikelyEnd; // ivar: _daysFromMostLikelyEnd
@property (retain, nonatomic) NSNumber *daysFromMostLikelyStart; // ivar: _daysFromMostLikelyStart
@property (retain, nonatomic) NSNumber *daysFromProjectedEnd; // ivar: _daysFromProjectedEnd
@property (retain, nonatomic) NSNumber *daysFromProjectedStart; // ivar: _daysFromProjectedStart
@property (copy, nonatomic) NSDictionary *eventPayload; // ivar: _eventPayload
@property (nonatomic) BOOL heartRateBasedPredictionEnabled; // ivar: _heartRateBasedPredictionEnabled
@property (nonatomic) BOOL internalLiveOnCycleFactorOverrideEnabled; // ivar: _internalLiveOnCycleFactorOverrideEnabled
@property (nonatomic) BOOL isLoggingMultipleDays; // ivar: _isLoggingMultipleDays
@property (retain, nonatomic) NSNumber *isOngoingPeriod; // ivar: _isOngoingPeriod
@property (nonatomic) BOOL isSleepConfiguredForWristTemperatureMeasurements; // ivar: _isSleepConfiguredForWristTemperatureMeasurements
@property (nonatomic) BOOL isWristTemperatureInputDelivered; // ivar: _isWristTemperatureInputDelivered
@property (nonatomic) BOOL overlapMostLikelyDays; // ivar: _overlapMostLikelyDays
@property (nonatomic) BOOL overlapNone; // ivar: _overlapNone
@property (nonatomic) BOOL overlapProjectedDays; // ivar: _overlapProjectedDays
@property (nonatomic) BOOL partiallyLogged; // ivar: _partiallyLogged
@property (nonatomic) BOOL periodPredictionEnabled; // ivar: _periodPredictionEnabled
@property (retain, nonatomic) NSString *predictionPrimarySource; // ivar: _predictionPrimarySource
@property (nonatomic) NSInteger totalDayRange; // ivar: _totalDayRange
@property (nonatomic) BOOL wristTemperatureBasedPredictionEnabled; // ivar: _wristTemperatureBasedPredictionEnabled


+(id)eventName;
-(id)description;
-(id)initWithOverlapMostLikelyDays:(BOOL)arg0 overlapProjectedDays:(BOOL)arg1 overlapNone:(BOOL)arg2 predictionPrimarySource:(id)arg3 totalDayRange:(NSInteger)arg4 partiallyLogged:(BOOL)arg5 periodPredictionEnabled:(BOOL)arg6 heartRateBasedPredictionEnabled:(BOOL)arg7 isLoggingMultipleDays:(BOOL)arg8 daysAgoLogged:(NSInteger)arg9 isOngoingPeriod:(id)arg10 activePairedWatchProductType:(id)arg11 daysFromMostLikelyStart:(id)arg12 daysFromMostLikelyEnd:(id)arg13 daysFromProjectedStart:(id)arg14 daysFromProjectedEnd:(id)arg15 wristTemperatureBasedPredictionEnabled:(BOOL)arg16 isWristTemperatureInputDelivered:(BOOL)arg17 isSleepConfiguredForWristTemperatureMeasurements:(BOOL)arg18 internalLiveOnCycleFactorOverrideEnabled:(BOOL)arg19 ;


@end


#endif