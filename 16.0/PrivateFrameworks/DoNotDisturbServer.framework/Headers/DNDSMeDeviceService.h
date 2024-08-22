// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSMEDEVICESERVICE_H
#define DNDSMEDEVICESERVICE_H

@class DNDMeDeviceState, NSMutableSet;
@protocol OS_dispatch_queue, DNDSBackingStore;

#import <Foundation/Foundation.h>

#import "DNDSMeDeviceStore.h"

@interface DNDSMeDeviceService : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    DNDMeDeviceState *_meDeviceState;
    NSMutableSet *_listeners;
    DNDSMeDeviceStore *_store;
    id<DNDSBackingStore> *_backingStore;
    os_unfair_lock_s _storeLock;
}


@property (readonly, copy, nonatomic) DNDMeDeviceState *meDeviceState;


-(BOOL)_queue_saveDataToBackingStoreWithError:(*id)arg0 ;
-(BOOL)_saveDataToBackingStoreWithError:(*id)arg0 ;
-(id)_queue_computeMeDeviceStateForDevices:(id)arg0 ;
-(id)init;
-(void)_loadDataFromBackingStore;
-(void)_queue_fetchAllDevices;
-(void)_queue_processDevices:(id)arg0 error:(id)arg1 ;
-(void)addListener:(id)arg0 ;
-(void)devicesChanged;
-(void)meDeviceChanged;
-(void)removeListener:(id)arg0 ;


@end


#endif