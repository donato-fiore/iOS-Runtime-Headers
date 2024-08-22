// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAANALYTICS_H
#define SAANALYTICS_H

@class NSString, NSDate, NSMutableDictionary;
@protocol SAAnalyticsServiceProtocol;

#import <Foundation/Foundation.h>

#import "SAAnalyticsSettings.h"

@interface SAAnalytics : NSObject <SAAnalyticsServiceProtocol>

 {
    SAAnalyticsSettings *_settings;
}


@property (nonatomic) NSUInteger aggActiveDuration; // ivar: _aggActiveDuration
@property (nonatomic) NSUInteger aggInSafeDuration; // ivar: _aggInSafeDuration
@property (nonatomic) NSUInteger aggInTravelDuration; // ivar: _aggInTravelDuration
@property (nonatomic) NSUInteger aggInUnsafeDuration; // ivar: _aggInUnsafeDuration
@property (nonatomic) CGFloat aggScanDuration; // ivar: _aggScanDuration
@property (nonatomic) CGFloat aggScanDurationForFindingRelevantItemsOnly; // ivar: _aggScanDurationForFindingRelevantItemsOnly
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAllUsingSameSafe; // ivar: _isAllUsingSameSafe
@property (retain, nonatomic) NSDate *lastActivated; // ivar: _lastActivated
@property (retain, nonatomic) NSDate *lastSafeEntry; // ivar: _lastSafeEntry
@property (retain, nonatomic) NSDate *lastTravelStart; // ivar: _lastTravelStart
@property (retain, nonatomic) NSDate *lastUnsafeEntry; // ivar: _lastUnsafeEntry
@property (nonatomic) NSUInteger numAlerts; // ivar: _numAlerts
@property (nonatomic) NSUInteger numAlertsLeftBehind; // ivar: _numAlertsLeftBehind
@property (nonatomic) NSUInteger numAlertsTraveling; // ivar: _numAlertsTraveling
@property (nonatomic) NSUInteger numBTLeftBehindRequests; // ivar: _numBTLeftBehindRequests
@property (nonatomic) NSUInteger numBTRequests; // ivar: _numBTRequests
@property (nonatomic) NSUInteger numBTTravelingRequests; // ivar: _numBTTravelingRequests
@property (nonatomic) NSUInteger numDevicesAtSafeExit; // ivar: _numDevicesAtSafeExit
@property (nonatomic) NSUInteger numEnabled; // ivar: _numEnabled
@property (retain, nonatomic) NSMutableDictionary *numEnabledPerType; // ivar: _numEnabledPerType
@property (nonatomic) NSUInteger numGpsRequests; // ivar: _numGpsRequests
@property (nonatomic) NSUInteger numSafe; // ivar: _numSafe
@property (nonatomic) NSUInteger numSafeInUse; // ivar: _numSafeInUse
@property (nonatomic) NSUInteger numTimers; // ivar: _numTimers
@property (nonatomic) NSUInteger numUnsafe; // ivar: _numUnsafe
@property (nonatomic) NSUInteger numUnsafeWithLOI; // ivar: _numUnsafeWithLOI
@property (nonatomic) NSUInteger numUnsafeWithoutLOI; // ivar: _numUnsafeWithoutLOI
@property (nonatomic) NSUInteger numWifiRequests; // ivar: _numWifiRequests
@property (readonly, nonatomic) CGFloat publishingInterval;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(void)addAggressiveScanRequest:(BOOL)arg0 ;
-(void)addAlertWithContext:(id)arg0 ;
-(void)addDeviceFetchResultCount:(NSUInteger)arg0 type1count:(NSUInteger)arg1 type2count:(NSUInteger)arg2 type3count:(NSUInteger)arg3 type4count:(NSUInteger)arg4 type5count:(NSUInteger)arg5 type6count:(NSUInteger)arg6 type7count:(NSUInteger)arg7 type8count:(NSUInteger)arg8 safeCount:(NSUInteger)arg9 usingSameSafe:(BOOL)arg10 ;
-(void)addDidSeparateWhileInVisit:(BOOL)arg0 didRejoinPriorExit:(BOOL)arg1 ;
-(void)addGpsLocationRequest:(BOOL)arg0 ;
-(void)addNumDevicesWithYou:(NSUInteger)arg0 ;
-(void)addPreArrivalAlertTime:(CGFloat)arg0 didRejoinPriorExit:(BOOL)arg1 ;
-(void)addSafeLocationFetchResultCount:(NSUInteger)arg0 ;
-(void)addScanDuration:(CGFloat)arg0 ;
-(void)addScanDurationForFindingRelevantItemsOnly:(CGFloat)arg0 ;
-(void)addVisit:(BOOL)arg0 withRadius:(NSUInteger)arg1 ;
-(void)addWakeTimerRequest;
-(void)addWifiLocationRequest:(BOOL)arg0 ;
-(void)publishAndResetAggregation;
-(void)resetAggregation;
-(void)setActiveState:(BOOL)arg0 ;
-(void)setInSafeLocationState:(BOOL)arg0 ;
-(void)setInTravelState:(BOOL)arg0 ;
-(void)setInUnsafeLocationState:(BOOL)arg0 ;
-(void)submitAlertRateEvent:(id)arg0 alertType:(id)arg1 ;
-(void)submitDefaultAlertRateEvent;
-(void)submitEvent:(id)arg0 content:(id)arg1 ;


@end


#endif