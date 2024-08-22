// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APLOCATIONMANAGER_H
#define APLOCATIONMANAGER_H

@class CLLocationManager, CLPlacemark, NSString, CLLocation;
@protocol CLLocationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface APLocationManager : NSObject <CLLocationManagerDelegate>

 {
    NSObject<OS_dispatch_queue> *_locationQueue;
}


@property (nonatomic) int callerStatus; // ivar: _callerStatus
@property (retain, nonatomic) CLLocationManager *clLocationManager; // ivar: _clLocationManager
@property (retain) CLPlacemark *currentPlacemark; // ivar: _currentPlacemark
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLocationInitialized; // ivar: _isLocationInitialized
@property (nonatomic) BOOL isLocationUpdating; // ivar: _isLocationUpdating
@property (retain, nonatomic) CLLocation *lastPlacemarkLocation; // ivar: _lastPlacemarkLocation
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (readonly) Class superclass;
@property BOOL updatingPlacemark; // ivar: _updatingPlacemark


+(BOOL)locationEnabledFor:(int)arg0 ;
+(id)sharedInstance;
-(id)init;
-(id)initForTesting;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)updatePlacemark;


@end


#endif