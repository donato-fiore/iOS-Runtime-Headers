// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NTKRELEVANCEENGINELOCATIONMANAGER_H
#define _NTKRELEVANCEENGINELOCATIONMANAGER_H

@class RELocationManager, NSString;


#import "NTKLocationManager.h"

@interface _NTKRelevanceEngineLocationManager : RELocationManager {
    NTKLocationManager *_locationManager;
    NSString *_token;
}




-(id)currentLocation;
-(id)initWithLocationManager:(id)arg0 ;
-(void)startLocationUpdatesWithHandler:(id)arg0 ;
-(void)stopLocationUpdates;


@end


#endif