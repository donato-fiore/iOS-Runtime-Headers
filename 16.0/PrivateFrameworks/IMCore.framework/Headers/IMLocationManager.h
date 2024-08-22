// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMLOCATIONMANAGER_H
#define IMLOCATIONMANAGER_H

@class NSString, NSError, NSMutableArray, CLInUseAssertion, NSDate, CLLocation, CLLocationManager, NSTimer;
@protocol CLLocationManagerDelegate, IMLocationManager;

#import <Foundation/Foundation.h>


@interface IMLocationManager : NSObject <CLLocationManagerDelegate, IMLocationManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL firstAuthorizationCallbackArrived; // ivar: _firstAuthorizationCallbackArrived
@property (retain, nonatomic) NSMutableArray *handlers; // ivar: _handlers
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inRequestPreciseLocation; // ivar: _inRequestPreciseLocation
@property (retain, nonatomic) CLInUseAssertion *inUseAssertion; // ivar: _inUseAssertion
@property (retain, nonatomic) NSDate *locateStartTime; // ivar: _locateStartTime
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) BOOL locationAuthorizationDenied;
@property (readonly, nonatomic) BOOL locationAuthorizationDetermined;
@property (retain, nonatomic) CLLocationManager *locationManager; // ivar: _locationManager
@property (retain, nonatomic) NSTimer *locationUpdateTimer; // ivar: _locationUpdateTimer
@property (readonly, nonatomic) BOOL preciseLocationAuthorized;
@property (readonly) Class superclass;


+(Class)__CLInUseAssertionClass;
+(Class)__CLLocationManagerClass;
+(id)sharedInstance;
-(BOOL)_shouldSendLocation:(id)arg0 timeIntervalSinceStart:(CGFloat)arg1 ;
-(id)init;
-(void)_errorHappend:(id)arg0 ;
-(void)_fireCompletionHandlers;
-(void)_locationUpdateTimerFired:(id)arg0 ;
// -(void)_startLocationUpdateTimerWithAuthorizedHandler:(id)arg0 updateHandler:(unk)arg1  ;
-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)shiftedLocationWithLocation:(id)arg0 completion:(id)arg1 ;
// -(void)startUpdatingCurrentLocationWithAuthorizedHandler:(id)arg0 updateHandler:(unk)arg1  ;
// -(void)startUpdatingCurrentLocationWithForegroundAssertionForBundleIdentifier:(id)arg0 withAuthorizedHandler:(id)arg1 updateHandler:(unk)arg2  ;


@end


#endif