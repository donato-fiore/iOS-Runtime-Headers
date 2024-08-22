// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBBRIDGEIDSREACHABILITY_H
#define PBBRIDGEIDSREACHABILITY_H

@class NSMutableOrderedSet, IDSService, NSString;
@protocol IDSServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PBBridgeIDSReachabilityStatusObject.h"

@interface PBBridgeIDSReachability : NSObject <IDSServiceDelegate>

 {
    NSMutableOrderedSet *_observers;
    IDSService *_reachabilityService;
    NSObject<OS_dispatch_queue> *_queue;
    os_unfair_lock_s _lock;
    PBBridgeIDSReachabilityStatusObject *_activeDeviceStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)deviceStatusFromIDSDevices:(id)arg0 nrDevices:(id)arg1 ;
+(id)nrDevices;
+(id)sharedInstance;
-(NSUInteger)reachabilityForDevice:(id)arg0 ;
-(id)getDeviceStatusChangeFromIDSDevices:(id)arg0 nrDevices:(id)arg1 ;
-(id)init;
-(void)_processDevices:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)service:(id)arg0 activeAccountsChanged:(id)arg1 ;
-(void)service:(id)arg0 connectedDevicesChanged:(id)arg1 ;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;
-(void)service:(id)arg0 linkedDevicesChanged:(id)arg1 ;
-(void)service:(id)arg0 nearbyDevicesChanged:(id)arg1 ;


@end


#endif