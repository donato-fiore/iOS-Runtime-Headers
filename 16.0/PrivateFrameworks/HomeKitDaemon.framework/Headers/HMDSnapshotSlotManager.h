// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSNAPSHOTSLOTMANAGER_H
#define HMDSNAPSHOTSLOTMANAGER_H

@class HMFObject, NSMapTable, HMFMessageDispatcher, NSString, NSDictionary, NSUUID;
@protocol HMFLogging, OS_dispatch_queue;


#import "HMDAccessory.h"
#import "HMDNotificationRegistration.h"
#import "HMDSnapshotFile.h"

@interface HMDSnapshotSlotManager : HMFObject <HMFLogging>

 {
    NSMapTable *_filledSnapshotSlotIdentifiersByProcess;
    NSMapTable *_snapshotSlots;
    HMDAccessory *_accessory;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_msgDispatcher;
    NSString *_imageCacheDirectory;
    HMDNotificationRegistration *_notificationRegistration;
    HMDSnapshotFile *_mostRecentSnapshot;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *encodedMostRecentSnapshot;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)logCategory;
-(id)createSlotForSnapshotFile:(id)arg0 requestMessages:(id)arg1 shouldNotifyClients:(BOOL)arg2 ;
-(id)encodedMostRecentSnapshotForMessage:(id)arg0 ;
-(id)initWithAccessory:(id)arg0 workQueue:(id)arg1 imageCacheDirectory:(id)arg2 logID:(id)arg3 uniqueIdentifier:(id)arg4 msgDispatcher:(id)arg5 ;
-(void)backboardServicesRelaunched:(id)arg0 ;
-(void)handleFillSnapshotSlot:(id)arg0 ;
-(void)handleProcessStateChange:(id)arg0 ;
-(void)handleReleaseSnapshot:(id)arg0 ;
-(void)registerForMessages;


@end


#endif