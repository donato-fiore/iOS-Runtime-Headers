// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
@property (nonatomic) BOOL isLoggingMultipleDays; // ivar: _isLoggingMultipleDays
@property (retain, nonatomic) NSNumber *isOngoingPeriod; // ivar: _isOngoingPeriod
@property (nonatomic) BOOL overlapMostLikelyDays; // ivar: _overlapMostLikelyDays
@property (nonatomic) BOOL overlapNone; // ivar: _overlapNone
@property (nonatomic) BOOL overlapProjectedDays; // ivar: _overlapProjectedDays
@property (nonatomic) BOOL partiallyLogged; // ivar: _partiallyLogged
@property (nonatomic) BOOL periodPredictionEnabled; // ivar: _periodPredictionEnabled
@property (nonatomic) BOOL sensorBasedPrediction; // ivar: _sensorBasedPrediction
@property (nonatomic) BOOL sensorBasedPredictionEnabled; // ivar: _sensorBasedPredictionEnabled
@property (nonatomic) NSInteger totalDayRange; // ivar: _totalDayRange


+(id)eventName;
-(id)description;
-(id)initWithOverlapMostLikelyDays:(BOOL)arg0 overlapProjectedDays:(BOOL)arg1 overlapNone:(BOOL)arg2 sensorBasedPrediction:(BOOL)arg3 totalDayRange:(NSInteger)arg4 partiallyLogged:(BOOL)arg5 periodPredictionEnabled:(BOOL)arg6 sensorBasedPredictionEnabled:(BOOL)arg7 isLoggingMultipleDays:(BOOL)arg8 daysAgoLogged:(NSInteger)arg9 isOngoingPeriod:(id)arg10 activePairedWatchProductType:(id)arg11 daysFromMostLikelyStart:(id)arg12 daysFromMostLikelyEnd:(id)arg13 daysFromProjectedStart:(id)arg14 daysFromProjectedEnd:(id)arg15 ;


@end


#endif