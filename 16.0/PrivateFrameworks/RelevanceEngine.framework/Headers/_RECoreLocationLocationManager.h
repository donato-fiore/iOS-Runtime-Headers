// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _RECORELOCATIONLOCATIONMANAGER_H
#define _RECORELOCATIONLOCATIONMANAGER_H

@class CLLocation, NSLock, CLLocationManager, NSString;
@protocol CLLocationManagerDelegate, OS_dispatch_queue;


#import "RELocationManager.h"

@interface _RECoreLocationLocationManager : RELocationManager <CLLocationManagerDelegate>

 {
    CLLocation *_currentLocation;
    NSLock *_locationAccessLock;
    id *_handler;
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _resumedQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)currentLocation;
-(id)init;
-(void)_notifyUpdateHandlersWithError:(id)arg0 ;
-(void)_updateLocation:(id)arg0 ;
-(void)dealloc;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)startLocationUpdatesWithHandler:(id)arg0 ;
-(void)stopLocationUpdates;


@end


#endif