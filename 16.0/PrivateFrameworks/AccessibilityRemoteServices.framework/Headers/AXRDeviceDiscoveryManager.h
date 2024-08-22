// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXRDEVICEDISCOVERYMANAGER_H
#define AXRDEVICEDISCOVERYMANAGER_H

@class NSHashTable, RPCompanionLinkClient, NSMutableArray, IDSService;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXRDeviceDiscoveryManager : NSObject {
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSHashTable *_observers;
    os_unfair_lock_s _observersLock;
}


@property (retain, nonatomic) RPCompanionLinkClient *companionLinkClient; // ivar: _companionLinkClient
@property (nonatomic) os_unfair_lock_s devicesLock; // ivar: _devicesLock
@property (retain, nonatomic) NSMutableArray *discoveredDevices; // ivar: _discoveredDevices
@property (retain, nonatomic) IDSService *service; // ivar: _service


+(id)sharedInstance;
-(NSUInteger)_indexOfDeviceWithEffectiveIdentifier:(id)arg0 ;
-(id)_init;
-(id)cachedDiscoveredDevices;
-(id)mineDevices;
-(void)_enumerateObservers:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif