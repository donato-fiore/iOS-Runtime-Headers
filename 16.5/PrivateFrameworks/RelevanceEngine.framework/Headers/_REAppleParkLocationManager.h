// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _REAPPLEPARKLOCATIONMANAGER_H
#define _REAPPLEPARKLOCATIONMANAGER_H



#import "RELocationManager.h"

@interface _REAppleParkLocationManager : RELocationManager



-(id)currentLocation;
-(void)startLocationUpdatesWithHandler:(id)arg0 ;
-(void)stopLocationUpdates;


@end


#endif