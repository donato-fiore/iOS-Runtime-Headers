// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKSIMULATEDLOCATIONMANAGER_H
#define NTKSIMULATEDLOCATIONMANAGER_H



#import "NTKLocationManager.h"

@interface NTKSimulatedLocationManager : NTKLocationManager



-(id)companionLocation;
-(id)currentLocation;
-(id)init;
-(id)previousLocation;
-(id)startLocationUpdatesWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(id)startLocationUpdatesWithIdentifier:(id)arg0 wantsGroundElevation:(BOOL)arg1 handler:(id)arg2 ;
-(void)stopLocationUpdatesForToken:(id)arg0 ;


@end


#endif