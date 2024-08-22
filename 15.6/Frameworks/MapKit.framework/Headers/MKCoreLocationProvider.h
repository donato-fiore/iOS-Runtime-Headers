// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKCORELOCATIONPROVIDER_H
#define MKCORELOCATIONPROVIDER_H

@class CLLocationManager, NSBundle, NSString, geo_isolater, CLLocation;
@protocol CLLocationManagerVehicleDelegate, MKLocationProvider, OS_dispatch_queue, MKLocationProviderDelegate;

#import <Foundation/Foundation.h>


@interface MKCoreLocationProvider : NSObject <CLLocationManagerVehicleDelegate, MKLocationProvider>

 {
    CLLocationManager *_clLocationManager;
    BOOL _locationServicesPreferencesDialogEnabled;
    int _authorizationStatus;
    NSInteger _accuracyAuthorization;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    id *_authorizationRequestBlock;
    BOOL _waitingForAuthorization;
    BOOL _hasQueriedAuthorization;
    geo_isolater *_isolation;
    NSObject<OS_dispatch_queue> *_coreLocationQueue;
    CGFloat _desiredAccuracy;
    NSInteger _activityType;
    CGFloat _distanceFilter;
    BOOL _matchInfoEnabled;
    BOOL _fusionInfoEnabled;
    int _headingOrientation;
    BOOL _hasExternallyProvidedLocationManager;
}


@property (readonly, nonatomic) CLLocationManager *_clLocationManager;
@property (readonly, nonatomic) NSInteger accuracyAuthorization;
@property (nonatomic) NSInteger activityType;
@property (copy, nonatomic) id *authorizationRequestBlock;
@property (readonly, nonatomic) int authorizationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKLocationProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat desiredAccuracy;
@property (nonatomic) CGFloat distanceFilter;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (readonly, nonatomic) CGFloat expectedGpsUpdateInterval; // ivar: _expectedGpsUpdateInterval
@property (nonatomic) BOOL fusionInfoEnabled;
@property (readonly) NSUInteger hash;
@property (nonatomic) int headingOrientation;
@property (readonly, nonatomic) BOOL isTracePlayer;
@property (readonly, nonatomic) CLLocation *lastLocation;
@property (nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property (nonatomic) BOOL matchInfoEnabled;
@property (readonly, nonatomic) BOOL shouldShiftIfNecessary;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeScale;
@property (readonly, nonatomic) BOOL usesCLMapCorrection;


-(BOOL)locationManagerShouldDisplayHeadingCalibration:(id)arg0 ;
-(id)init;
-(id)initWithCLLocationManager:(id)arg0 ;
-(void)_createCLLocationManager;
-(void)_resetForNewEffectiveBundle;
-(void)_updateAccuracyAuthorizationOnQueue:(id)arg0 ;
-(void)_updateAuthorizationStatus;
-(void)accuracyAuthorizationOnQueue:(id)arg0 result:(id)arg1 ;
-(void)authorizationStatusOnQueue:(id)arg0 result:(id)arg1 ;
-(void)dealloc;
-(void)dismissHeadingCalibrationDisplay;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateHeading:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateVehicleHeading:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateVehicleSpeed:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg0 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg0 ;
-(void)requestTemporaryPreciseLocationAuthorizationWithPurposeKey:(id)arg0 completion:(id)arg1 ;
-(void)requestWhenInUseAuthorization;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)startUpdatingHeading;
-(void)startUpdatingLocation;
-(void)startUpdatingVehicleHeading;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingHeading;
-(void)stopUpdatingLocation;
-(void)stopUpdatingVehicleHeading;
-(void)stopUpdatingVehicleSpeed;


@end


#endif