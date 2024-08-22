// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef E911LOCATIONMANAGER_H
#define E911LOCATIONMANAGER_H

@class CLLocationManager, NSBundle, NSString, CLLocation, CLAssertion;
@protocol CLLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface E911LocationManager : NSObject <CLLocationManagerDelegate>

 {
    CLLocationManager *_manager;
    BOOL _locationServiceDenied;
    NSBundle *_bundle;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) *void delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property unsigned int desiredIntegrity; // ivar: _desiredIntegrity
@property CGFloat desiredLocationAccuracy; // ivar: _desiredLocationAccuracy
@property (copy) CLLocation *goodEnoughLocation; // ivar: _goodEnoughLocation
@property (readonly) NSUInteger hash;
@property (copy) CLLocation *location; // ivar: _location
@property (nonatomic) BOOL locationAvailable; // ivar: _locationAvailable
@property (nonatomic) BOOL locationRequested; // ivar: _locationRequested
@property (nonatomic) BOOL locationServiceAuthorized; // ivar: _locationServiceAuthorized
@property (retain, nonatomic) CLAssertion *locationServicesAssertion; // ivar: _locationServicesAssertion
@property (readonly) Class superclass;


-(BOOL)isLocationServiceAuthorized;
-(BOOL)isLocationServiceDenied;
-(BOOL)isLocationServiceEnabled;
-(id)copyLastKnownLocation;
-(id)init;
-(void)dealloc;
-(void)emergencyLocationServicesAssertion:(BOOL)arg0 ;
-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)shouldUpdateLocation:(BOOL)arg0 ;
-(void)startLocationUpdates;
-(void)stopLocationUpdates;


@end


#endif