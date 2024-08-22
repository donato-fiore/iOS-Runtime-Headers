// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYNETWORKPROTECTIONGROUPREGISTRY_H
#define HMDACCESSORYNETWORKPROTECTIONGROUPREGISTRY_H

@class NSMutableDictionary, NSSet, NSString, NSUUID, NSNotificationCenter;
@protocol HMFMessageReceiver, HMFLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDHome.h"

@interface HMDAccessoryNetworkProtectionGroupRegistry : NSObject <HMFMessageReceiver, HMFLogging>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_groupRecords;
}


@property (readonly, copy) NSSet *activeGroups;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HMDHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, copy) NSSet *persistedGroups;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_evaluateActiveStatusForGroupWithUUID:(id)arg0 ;
-(BOOL)_updateGroupWithUUID:(id)arg0 active:(BOOL)arg1 ;
-(BOOL)addActiveSurrogateGroup:(id)arg0 ;
-(BOOL)updateTargetProtectionModeForGroupWithUUID:(id)arg0 protectionMode:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)updateTargetProtectionModeForGroupWithUUID:(id)arg0 protectionMode:(NSInteger)arg1 error:(*id)arg2 requestMessage:(id)arg3 ;
-(NSInteger)targetProtectionModeForGroupWithUUID:(id)arg0 ;
-(id)accessoriesForGroupWithUUID:(id)arg0 ;
-(id)groupRecordWithUUID:(id)arg0 ;
-(id)groupWithUUID:(id)arg0 ;
-(id)initWithHome:(id)arg0 notificationCenter:(id)arg1 ;
-(id)initWithHome:(id)arg0 notificationCenter:(id)arg1 persistedGroups:(id)arg2 ;
-(id)logIdentifier;
-(id)markGroupWithUUID:(id)arg0 active:(BOOL)arg1 ;
-(id)removeGroupWithUUID:(id)arg0 ;
-(void)_registerForAccessoryChanges:(id)arg0 ;
-(void)_registerForMessages;
-(void)_setupActiveGroupsForHome;
-(void)_setupProtectionGroupForAccessory:(id)arg0 shouldNotifyChange:(BOOL)arg1 ;
-(void)addActiveSurrogateGroupForAccessory:(id)arg0 shouldNotifyChange:(BOOL)arg1 ;
-(void)configure;
-(void)handleAddOrUpdateAccessoryNetworkProtectionGroupModel:(id)arg0 message:(id)arg1 ;
-(void)handleAddedAccessory:(id)arg0 ;
-(void)handleRemoveAccessoryNetworkProtectionGroupModel:(id)arg0 message:(id)arg1 ;
-(void)handleRemovedAccessory:(id)arg0 ;
-(void)handleUpdateAccessoryNetworkProtectionGroupProtectionMode:(id)arg0 ;
-(void)handleUpdatedAccessoryConfiguredNetworkProtectionGroup:(id)arg0 ;
-(void)handleUpdatedAccessoryInitialManufacturerOrCategory:(id)arg0 ;
-(void)notifyClientsOfAddedGroup:(id)arg0 ;
-(void)notifyClientsOfRemovedGroup:(id)arg0 ;


@end


#endif