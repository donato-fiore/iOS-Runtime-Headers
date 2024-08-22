// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKNEARBYDEVICE_H
#define GKNEARBYDEVICE_H

@class NSString, GKDiscovery;

#import <Foundation/Foundation.h>

#import "GKPlayer.h"

@interface GKNearbyDevice : NSObject

@property (retain, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (retain, nonatomic) GKDiscovery *discovery; // ivar: _discovery
@property (retain, nonatomic) GKPlayer *player; // ivar: _player
@property (nonatomic) NSInteger state; // ivar: _state


+(id)nearbyDeviceWithID:(id)arg0 discovery:(id)arg1 ;
-(void)sendDictionary:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif