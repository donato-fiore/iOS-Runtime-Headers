// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPPRIVACYPROXYLOCATIONMONITOR_H
#define NSPPRIVACYPROXYLOCATIONMONITOR_H

@class CLLocationManager, CLLocation, NSString, NSTimer;
@protocol CLLocationManagerDelegate, NSPPrivacyProxyLocationMonitorDelegate;

#import <Foundation/Foundation.h>


@interface NSPPrivacyProxyLocationMonitor : NSObject <CLLocationManagerDelegate>

 {
    BOOL _isMonitoringEnabled;
    CLLocationManager *_clLocationManager;
    CLLocation *_latestLocation;
    NSString *_latestCountryPlusTimezone;
    NSTimer *_locationMonitorTimer;
    CGFloat _monitorTimeInterval;
    NSString *_lastGeohash;
}


@property (readonly) NSString *currentCountryPlusTimezone;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NSPPrivacyProxyLocationMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isAuthorized;
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
-(void)setLastGeohash:(id)arg0 ;
-(void)setMonitorTimeInterval:(CGFloat)arg0 ;
-(void)setUserEventAgentTimer;
-(void)start;
-(void)startLocationMonitor;
-(void)stop;
-(void)stopLocationMonitor;


@end


#endif