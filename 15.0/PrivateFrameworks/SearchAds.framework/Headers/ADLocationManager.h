// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADLOCATIONMANAGER_H
#define ADLOCATIONMANAGER_H

@class CLLocation, CLPlacemark, NSString, NSMutableArray, CLLocationManager;
@protocol CLLocationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ADLocationManager : NSObject <CLLocationManagerDelegate>

 {
    NSObject<OS_dispatch_queue> *_locationQueue;
}


@property (retain, nonatomic) CLLocation *actualLocation; // ivar: _actualLocation
@property (nonatomic) int callerStatus; // ivar: _callerStatus
@property (retain) CLPlacemark *currentPlacemark; // ivar: _currentPlacemark
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLocationInitialized; // ivar: _isLocationInitialized
@property (nonatomic) BOOL isLocationUpdating; // ivar: _isLocationUpdating
@property (retain, nonatomic) CLLocation *lastPlacemarkLocation; // ivar: _lastPlacemarkLocation
@property (retain, nonatomic) NSMutableArray *listeners; // ivar: _listeners
@property (retain, nonatomic) CLLocationManager *locationManager; // ivar: _locationManager
@property (readonly) Class superclass;
@property BOOL updatingPlacemark; // ivar: _updatingPlacemark


+(id)sharedInstance;
-(BOOL)locationEnabledFor:(int)arg0 ;
-(id)currentLocation;
-(id)init;
-(id)obfuscatedLocation;
-(void)addListener:(id)arg0 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)updatePlacemark;


@end


#endif