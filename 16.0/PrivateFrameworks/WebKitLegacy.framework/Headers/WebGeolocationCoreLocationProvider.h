// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBGEOLOCATIONCORELOCATIONPROVIDER_H
#define WEBGEOLOCATIONCORELOCATIONPROVIDER_H

@class NSString;
@protocol CLLocationManagerDelegate, WebGeolocationCoreLocationUpdateListener;

#import <Foundation/Foundation.h>


@interface WebGeolocationCoreLocationProvider : NSObject <CLLocationManagerDelegate>

 {
    id<WebGeolocationCoreLocationUpdateListener> *_positionListener;
    RetainPtr<CLLocationManager> _locationManager;
    BOOL _isWaitingForAuthorization;
    int _lastAuthorizationStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithListener:(id)arg0 ;
-(void)createLocationManager;
-(void)dealloc;
-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)requestGeolocationAuthorization;
-(void)sendLocation:(id)arg0 ;
-(void)setEnableHighAccuracy:(BOOL)arg0 ;
-(void)start;
-(void)stop;


@end


#endif