// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARLOCATIONSENSOR_H
#define ARLOCATIONSENSOR_H

@class NSString, CLLocationManager, _CLLocationPlayer, VLLocalizer, NSMutableArray;
@protocol CLLocationManagerDelegate, ARSensor, OS_dispatch_queue, ARSensorDelegate;

#import <Foundation/Foundation.h>

#import "ARLocationData.h"

@interface ARLocationSensor : NSObject <CLLocationManagerDelegate, ARSensor>

 {
    NSString *_bundleIdentifier;
    CLLocationManager *_locationManager;
    _CLLocationPlayer *_locationPlayer;
    VLLocalizer *_localizer;
    BOOL _isStarted;
    NSObject<OS_dispatch_queue> *_locationManagerQueue;
    CGFloat _lastVIOUpdateTimestamp;
    CGFloat _lastVLUpdateTimestamp;
    CGFloat _lastLocationUpdateTimestamp;
    NSMutableArray *_altitudeSkipTiles;
    id<ARSensorDelegate> *_delegate;
}


@property (retain) ARLocationData *currentLocation; // ivar: _currentLocation
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARSensorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CLLocationManagerDelegate> *locationManagerDelegate; // ivar: _locationManagerDelegate
@property (nonatomic) NSUInteger powerUsage;
@property (readonly) Class superclass;


-(NSUInteger)providedDataTypes;
-(id)_createLocationManager;
-(id)_getLocationPlayer;
-(id)_validateLocationAuthorization;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)updateFromDeviceOrientationData:(id)arg0 ;
-(id)updateFromLocationData:(id)arg0 ;
-(void)_attemptAltitudeLookupAtCoordinate:(struct CLLocationCoordinate2D )arg0 attemptCount:(unsigned int)arg1 lookupStartDate:(id)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)lookupAltitudeAtCoordinate:(struct CLLocationCoordinate2D )arg0 completionHandler:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)updateARSessionState:(NSUInteger)arg0 ;
-(void)updateEstimationFromVIOPose:(id)arg0 imageData:(id)arg1 ;
-(void)updateFromVisualLocalizationResult:(id)arg0 ;


@end


#endif