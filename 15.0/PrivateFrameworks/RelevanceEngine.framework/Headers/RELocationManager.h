// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RELOCATIONMANAGER_H
#define RELOCATIONMANAGER_H


#import <Foundation/Foundation.h>


@interface RELocationManager : NSObject



+(id)locationManager;
+(id)simulatedLocationManager;
-(id)currentLocation;
-(void)startLocationUpdatesWithHandler:(id)arg0 ;
-(void)stopLocationUpdates;


@end


#endif