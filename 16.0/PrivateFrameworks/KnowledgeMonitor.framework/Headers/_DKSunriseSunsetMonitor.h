// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKSUNRISESUNSETMONITOR_H
#define _DKSUNRISESUNSETMONITOR_H

@class DKMonitor, NSString, CLLocationManager, NSDictionary;
@protocol CLLocationManagerDelegate, OS_os_log, OS_dispatch_source;



@interface _DKSunriseSunsetMonitor : DKMonitor <CLLocationManagerDelegate>



@property (nonatomic) int authorizationStatus; // ivar: _authorizationStatus
@property (nonatomic) BOOL awaitingLocationAfterDisabledAirplaneMode; // ivar: _awaitingLocationAfterDisabledAirplaneMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) CLLocationManager *manager; // ivar: _manager
@property (retain, nonatomic) NSDictionary *previousDataDictionary; // ivar: _previousDataDictionary
@property *__SCPreferences radioPrefs; // ivar: _radioPrefs
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger updateInterval; // ivar: _updateInterval
@property (retain, nonatomic) NSObject<OS_dispatch_source> *updateTimer; // ivar: _updateTimer


+(id)entitlements;
+(id)eventStream;
-(BOOL)currentSunriseSunsetTimes:(id)arg0 differsFromPreviousTimes:(id)arg1 byInterval:(CGFloat)arg2 ;
-(BOOL)isAirplaneModeEnabled;
-(BOOL)isAirplaneModeEnabledWithPreferences:(struct __SCPreferences *)arg0 ;
-(id)contextDictionaryWithGeoAlmanac:(id)arg0 authorizationStatus:(int)arg1 ;
-(id)init;
-(id)loadState;
-(void)deactivate;
-(void)dealloc;
-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)respondToAirplaneModeStatusChanged;
-(void)respondToTimeChange:(id)arg0 ;
-(void)saveState;
-(void)start;
-(void)stop;
-(void)unprotectedUpdateSunriseSunsetTime:(id)arg0 ;


@end


#endif