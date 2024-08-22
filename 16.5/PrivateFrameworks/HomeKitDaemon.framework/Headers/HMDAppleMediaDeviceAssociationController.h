// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEMEDIADEVICEASSOCIATIONCONTROLLER_H
#define HMDAPPLEMEDIADEVICEASSOCIATIONCONTROLLER_H

@class NSUUID, HMFTimer, NSString, NSNotificationCenter;
@protocol HMFMessageReceiver, HMDTimerProvider, HMFTimerDelegate, HMFLogging, HMDAppleMediaDeviceAssociationControllerDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDBackingStore.h"
#import "HMDResidentSyncManager.h"

@interface HMDAppleMediaDeviceAssociationController : NSObject <HMFMessageReceiver, HMDTimerProvider, HMFTimerDelegate, HMFLogging>

 {
    os_unfair_lock_s _lock;
    BOOL _busy;
}


@property (readonly, copy) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly) HMDBackingStore *backingStore; // ivar: _backingStore
@property (retain) HMFTimer *backoffTimer; // ivar: _backoffTimer
@property (readonly) NSObject<HMDAppleMediaDeviceAssociationControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (copy) id *mkfAppleMediaModelFinder; // ivar: _mkfAppleMediaModelFinder
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) HMDResidentSyncManager *residentSyncManager; // ivar: _residentSyncManager
@property (readonly) Class superclass;
@property NSInteger timerIntervalIndex; // ivar: _timerIntervalIndex
@property (weak) NSObject<HMDTimerProvider> *timerProvider; // ivar: _timerProvider


+(id)logCategory;
-(BOOL)_currentDeviceHasDeviceAddress;
-(BOOL)_statusBusy;
-(CGFloat)nextInterval;
-(id)_deviceAssociationInfoFromProtoData:(id)arg0 ;
-(id)initWithHome:(id)arg0 accessory:(id)arg1 dataSource:(id)arg2 ;
-(id)initWithQueue:(id)arg0 homeUUID:(id)arg1 accessoryUUID:(id)arg2 residentSyncManager:(id)arg3 backingStore:(id)arg4 notificationCenter:(id)arg5 dataSource:(id)arg6 ;
-(id)logIdentifier;
-(id)mkfAppleMediaAccessoryWithModelIdentifier:(id)arg0 ;
-(id)timerWithTimeInterval:(CGFloat)arg0 options:(NSUInteger)arg1 ;
-(void)_handleAppleAccountManagerResolvedNotification:(id)arg0 ;
-(void)_handleDeviceUpdatedNotification:(id)arg0 ;
-(void)_handleHMDAppleMediaDeviceAssociationPushMessage:(id)arg0 ;
-(void)_handlePrimaryChange:(id)arg0 ;
-(void)_handlePrimaryResidentDeviceAddressUpdate;
-(void)_process;
-(void)_pushDeviceAddress;
-(void)_pushDeviceAddressIfNeeded;
-(void)_registerForMessages:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)_registerForNotifications:(id)arg0 ;
-(void)_setStatusBusy:(BOOL)arg0 ;
-(void)_shouldPushDeviceAddressWithCompletion:(id)arg0 ;
-(void)_startRetryTimer;
-(void)_updateIdsAddressWithAccessoryUUID:(id)arg0 idsIdentifier:(id)arg1 idsDestination:(id)arg2 completion:(id)arg3 ;
-(void)configureWithHome:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)handleTransactionObjectUpdated;
-(void)timerDidFire:(id)arg0 ;


@end


#endif