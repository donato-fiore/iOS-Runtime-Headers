// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPPRIVACYPROXYLOCATIONMONITOR_H
#define NSPPRIVACYPROXYLOCATIONMONITOR_H

@class CLLocationManager, NSString, CLLocation, NSTimer;
@protocol CLLocationManagerDelegate, NSPPrivacyProxyLocationMonitorDelegate;

#import <Foundation/Foundation.h>


@interface NSPPrivacyProxyLocationMonitor : NSObject <CLLocationManagerDelegate>



@property (retain, nonatomic) CLLocationManager *clLocationManager; // ivar: _clLocationManager
@property (readonly) NSString *currentCountryPlusTimezone;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NSPPrivacyProxyLocationMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isAuthorized;
@property (nonatomic) BOOL isMonitoringEnabled; // ivar: _isMonitoringEnabled
@property (retain, nonatomic) NSString *lastGeohash; // ivar: _lastGeohash
@property (retain) NSString *latestCountryPlusTimezone; // ivar: _latestCountryPlusTimezone
@property (retain) CLLocation *latestLocation; // ivar: _latestLocation
@property (retain, nonatomic) NSTimer *locationMonitorTimer; // ivar: _locationMonitorTimer
@property (nonatomic, setter=setMonitorTimeInterval:) CGFloat monitorTimeInterval; // ivar: _monitorTimeInterval
@property (readonly) Class superclass;


+(id)sharedMonitor;
-(BOOL)checkSignificantLocationChange:(id)arg0 ;
-(BOOL)isCoreWLANAuthorized;
-(id)geohashFromLocation:(id)arg0 ;
-(id)init;
-(void)handleLocationUpdate:(id)arg0 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)refreshCountryPlusTimezone:(id)arg0 ;
-(void)setLastCountryPlusTimezone:(id)arg0 ;
-(void)setUserEventAgentTimer;
-(void)start;
-(void)startLocationMonitor;
-(void)stop;
-(void)stopLocationMonitor;


@end


#endif