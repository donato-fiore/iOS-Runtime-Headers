// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNCORELOCATIONPROVIDER_H
#define MNCORELOCATIONPROVIDER_H

@class CLLocationManager, NSBundle, NSString, NSRunLoop;
@protocol CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MNLocationProvider, MNLocationProviderDelegate;

#import <Foundation/Foundation.h>

#import "MNLocationProviderCLParameters.h"

@interface MNCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MNLocationProvider>

 {
    BOOL _hasQueriedAuthorization;
    CLLocationManager *_clLocationManager;
    MNLocationProviderCLParameters *_clParameters;
    int _authorizationStatus;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    CGFloat _distanceFilter;
    CGFloat _desiredAccuracy;
    BOOL _matchInfoEnabled;
    NSRunLoop *_debug_initRunLoop;
    NSRunLoop *_debug_deinitRunLoop;
}


@property (readonly, nonatomic) CLLocationManager *_clLocationManager;
@property (readonly, nonatomic) BOOL coarseModeEnabled; // ivar: _coarseModeEnabled
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MNLocationProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (readonly, nonatomic) CGFloat expectedGpsUpdateInterval;
@property (readonly) NSUInteger hash;
@property (nonatomic) int headingOrientation;
@property (readonly, nonatomic) BOOL isAuthorized;
@property (readonly, nonatomic) BOOL isTracePlayer;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeScale;
@property (readonly, nonatomic) NSUInteger traceVersion;


-(id)init;
-(id)initWithEffectiveBundle:(id)arg0 ;
-(id)initWithEffectiveBundleIdentifier:(id)arg0 ;
-(void)_createCLLocationManager;
-(void)_resetForNewEffectiveBundle;
-(void)_sharedInit;
-(void)_updateAuthorizationStatus;
-(void)_updateCoarseModeEnabled;
-(void)_updateForCLParameters:(id)arg0 ;
-(void)dealloc;
-(void)locationManager:(id)arg0 didEnterRegion:(id)arg1 ;
-(void)locationManager:(id)arg0 didExitRegion:(id)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateHeading:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateVehicleHeading:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateVehicleSpeed:(id)arg1 ;
-(void)locationManager:(id)arg0 monitoringDidFailForRegion:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg0 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg0 ;
-(void)requestLocation;
-(void)resetForActiveTileGroupChanged;
-(void)setCLParameters:(id)arg0 ;
-(void)setDesiredAccuracy:(CGFloat)arg0 ;
-(void)setDistanceFilter:(CGFloat)arg0 ;
-(void)setMatchInfoEnabled:(BOOL)arg0 ;
-(void)startMonitoringForRegion:(id)arg0 ;
-(void)startUpdatingHeading;
-(void)startUpdatingLocation;
-(void)startUpdatingVehicleHeading;
-(void)startUpdatingVehicleSpeed;
-(void)stopMonitoringForRegion:(id)arg0 ;
-(void)stopUpdatingHeading;
-(void)stopUpdatingLocation;
-(void)stopUpdatingVehicleHeading;
-(void)stopUpdatingVehicleSpeed;


@end


#endif