// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUACCESSORYHEARINGSYNCMANAGER_H
#define HUACCESSORYHEARINGSYNCMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HUAccessoryHearingSyncManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachedEnabled; // ivar: _cachedEnabled
@property (retain, nonatomic) NSMutableDictionary *deviceListeningState; // ivar: _deviceListeningState
@property (retain, nonatomic) NSMutableDictionary *nearbyDevicesListeningState; // ivar: _nearbyDevicesListeningState


+(id)sharedInstance;
+(id)supportedDevices;
-(NSInteger)listeningState;
-(NSInteger)listeningStateForAddress:(id)arg0 andStoredState:(id)arg1 ;
-(id)init;
-(void)listeningModeDidChange:(id)arg0 ;
-(void)sendUpdateToAccessory;


@end


#endif