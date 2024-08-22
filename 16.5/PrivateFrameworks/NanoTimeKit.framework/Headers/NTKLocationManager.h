// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKLOCATIONMANAGER_H
#define NTKLOCATIONMANAGER_H


#import <Foundation/Foundation.h>


@interface NTKLocationManager : NSObject



+(id)fallbackLocation;
+(id)sharedLocationManager;
-(id)anyLocation;
-(id)currentLocation;
-(id)previousLocation;
-(id)startLocationUpdatesWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(id)startLocationUpdatesWithIdentifier:(id)arg0 wantsGroundElevation:(BOOL)arg1 handler:(id)arg2 ;
-(void)stopLocationUpdatesForToken:(id)arg0 ;


@end


#endif