// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKLOCATIONCOORDINATESMONITOR_H
#define _DKLOCATIONCOORDINATESMONITOR_H

@class DKMonitor, CLLocationManager, CLLocation, BMStream, BMSource, NSString;
@protocol CLLocationManagerDelegate;



@interface _DKLocationCoordinatesMonitor : DKMonitor <CLLocationManagerDelegate>

 {
    CLLocationManager *_locationManager;
    CLLocation *_lastLocation;
    NSUInteger _lastLocationGeoHash300m;
    BMStream *_locationCoordinatesStream;
    BMSource *_locationCoordinatesStreamSource;
    BMStream *_locationHashedCoordinatesStream;
    BMSource *_locationHashedCoordinatesStreamSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)entitlements;
+(id)eventStream;
+(id)log;
-(id)init;
-(int)altitudeRangeFrom:(CGFloat)arg0 ;
-(int)locationTypeFrom:(int)arg0 ;
-(int)speedRangeFrom:(CGFloat)arg0 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif