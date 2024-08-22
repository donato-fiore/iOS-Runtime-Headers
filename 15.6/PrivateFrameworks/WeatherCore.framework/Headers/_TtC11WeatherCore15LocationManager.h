// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC11WEATHERCORE15LOCATIONMANAGER_H
#define _TTC11WEATHERCORE15LOCATIONMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC11WeatherCore15LocationManager : NSObject {
    ? $__lazy_storage_$_locationManager;
    ? highAccuracyRadiusMeters;
    ? mediumAccuracyRadiusMeters;
    ? isUpdatingLocation;
    ? _firstRevGeoComplete;
    ? logger;
    ? _locationUpdateSignpostID;
    ? _authorizationSignpostID;
    ? observers;
    ? lock;
    ? notifyQueue;
    ? locationActivityQueue;
    ? geocodeManager;
    ? _authorizationState;
    ? _currentLocationStatus;
}




-(id)init;


@end


#endif