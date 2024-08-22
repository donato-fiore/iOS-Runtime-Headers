// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERASNAPSHOTMONITOREVENTS_H
#define HMDCAMERASNAPSHOTMONITOREVENTS_H

@class HMFObject, HMFMessageDispatcher, NSMutableSet, NSString, NSSet, NSUUID;
@protocol HMFTimerDelegate, HMFLogging, HMDCharacteristicsAvailabilityListenerDelegate, HMDHomeMessageReceiver, OS_dispatch_queue, HMDCameraBulletinBoard;


#import "HMDCameraSnapshotManager.h"
#import "HMDHAPAccessory.h"
#import "HMDNotificationRegistration.h"
#import "HMDCharacteristicsAvailabilityListener.h"

@interface HMDCameraSnapshotMonitorEvents : HMFObject <HMFTimerDelegate, HMFLogging, HMDCharacteristicsAvailabilityListenerDelegate, HMDHomeMessageReceiver>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDCameraSnapshotManager *_snapshotManager;
    NSMutableSet *_snapShotNotificationResponseTimers;
    HMDHAPAccessory *_accessory;
    NSString *_bulletinImagesDirectory;
    id<HMDCameraBulletinBoard> *_bulletinBoard;
    HMDNotificationRegistration *_notificationRegistration;
}


@property (copy) NSSet *bulletinSnapshotCharacteristics; // ivar: _bulletinSnapshotCharacteristics
@property (retain) HMDCharacteristicsAvailabilityListener *characteristicsAvailabilityListener; // ivar: _characteristicsAvailabilityListener
@property (readonly, copy) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;
@property (readonly) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)hasMessageReceiverChildren;
+(id)logCategory;
-(id)initWithSnapshotManager:(id)arg0 accessory:(id)arg1 workQueue:(id)arg2 msgDispatcher:(id)arg3 ;
-(void)dealloc;
-(void)handleBulletinBoardNotificationDidUpdateNotification:(id)arg0 ;
-(void)handleCameraSettingsDidUpdateNotification:(id)arg0 ;
-(void)handleCharacteristicsChangedNotification:(id)arg0 ;
-(void)listener:(id)arg0 didUpdateAvailableCharacteristics:(id)arg1 ;
-(void)registerForMessages;
-(void)timerDidFire:(id)arg0 ;


@end


#endif