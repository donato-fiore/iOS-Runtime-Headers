// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOSPERSISTENTTIMERLOCATIONMANAGER_H
#define SOSPERSISTENTTIMERLOCATIONMANAGER_H

@class CLLocationManager, PCPersistentTimer, NSString, CLAssertion, CLLocation;
@protocol CLLocationManagerDelegate, OS_dispatch_queue, SOSPersistentTimerLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface SOSPersistentTimerLocationManager : NSObject <CLLocationManagerDelegate>

 {
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_locationUpdateStartQueue;
    PCPersistentTimer *_locationUpdateTimer;
    PCPersistentTimer *_requestLocationsTimer;
    CGFloat _ti;
    PCPersistentTimer *_initalRequestTimer;
    PCPersistentTimer *_assertionTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<SOSPersistentTimerLocationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLAssertion *forceEnableLocationAssertion; // ivar: _forceEnableLocationAssertion
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLLocation *lastLocation; // ivar: _lastLocation
@property (nonatomic, getter=isRequestingLocation) BOOL requestingLocation; // ivar: _requestingLocation
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)isValid;
-(BOOL)shouldStopRequestingLocationAfterCallback;
-(id)init;
-(void)_emergencyLocationAssertionTimeOut:(id)arg0 ;
-(void)_requestLocationsTimeout:(id)arg0 ;
-(void)_sosPersistentTimerInitialRequest:(id)arg0 ;
-(void)_sosPersistentTimerLocationManagerTic:(id)arg0 ;
-(void)_startTimer;
-(void)dealloc;
-(void)fireAndStartTimertWithTimeInterval:(CGFloat)arg0 ;
-(void)invalidateInitialTimer;
-(void)invalidateRequestLocationsTimer;
-(void)invalidateTimer;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)requestLocation;
-(void)stopRequestingLocationUpdates;
-(void)warmUpLocationRequest;


@end


#endif