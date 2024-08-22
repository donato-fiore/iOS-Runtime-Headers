// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15REMINDERSUICORE21TTRGEOLOCATIONSERVICE_H
#define _TTC15REMINDERSUICORE21TTRGEOLOCATIONSERVICE_H


#import <Foundation/Foundation.h>


@interface _TtC15RemindersUICore21TTRGeoLocationService : NSObject {
    ? delegate;
    ? locationAccuraceUpperBound;
    ? maximumLocationUpdatingTime;
    ? _addressToResolvedLocationCache;
    ? _locationToResolvedLocationCache;
    ? currentlyGeocodingLocation;
    ? _lastKnownCurrentLocation;
    ? pendingLocationsToResolve;
    ? locationManager;
    ? blockToPerformAfterRequestingInUseAuthorization;
}




-(id)init;


@end


#endif