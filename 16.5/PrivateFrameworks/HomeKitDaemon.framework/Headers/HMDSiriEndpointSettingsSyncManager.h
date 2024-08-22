// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSIRIENDPOINTSETTINGSSYNCMANAGER_H
#define HMDSIRIENDPOINTSETTINGSSYNCMANAGER_H

@class HMFObject, NSString, NSMutableSet, NSNotificationCenter;
@protocol HMFLogging, HMEEventConsumer, HMDCompositeSettingsSiriEndpointProfileBridge, HMDSiriEndpointSettingsSyncManagerDataSource, HMESubscriptionProviding, OS_dispatch_queue;



@interface HMDSiriEndpointSettingsSyncManager : HMFObject <HMFLogging, HMEEventConsumer, HMDCompositeSettingsSiriEndpointProfileBridge>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, weak) NSObject<HMDSiriEndpointSettingsSyncManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSMutableSet *homeUUIDsManagedByCurrentDevice; // ivar: _homeUUIDsManagedByCurrentDevice
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) NSObject<HMESubscriptionProviding> *subscriptionProvider; // ivar: _subscriptionProvider
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
+(id)siriEndPointHomeKitBackedKeyPaths;
-(NSInteger)siriEndpointCertificationReasonForAccessoryUUID:(id)arg0 homeUUID:(id)arg1 error:(*id)arg2 ;
-(id)initWithDataSource:(id)arg0 subscriptionProvider:(id)arg1 notificationCenter:(id)arg2 workQueue:(id)arg3 ;
-(id)readValueValueForAccessoryUUID:(id)arg0 homeUUID:(id)arg1 forKeyPath:(id)arg2 ;
-(void)_beginManagingAccessory:(id)arg0 forHome:(id)arg1 ;
-(void)_beginManagingHome:(id)arg0 ;
-(void)_matchingHomeforUUID:(id)arg0 accessoryUUID:(id)arg1 home:(*id)arg2 accessory:(*id)arg3 ;
-(void)_stopManagingAccessory:(id)arg0 forHome:(id)arg1 ;
-(void)_stopManagingHome:(id)arg0 ;
-(void)_synchronizeSettingsForAccessoryUUID:(id)arg0 homeUUID:(id)arg1 ;
-(void)_updateManagedHomes;
-(void)_writeSetting:(id)arg0 toAccessory:(id)arg1 forKeyPath:(id)arg2 ;
-(void)_writeSettingValue:(id)arg0 toAccessory:(id)arg1 forKeyPath:(id)arg2 ;
-(void)_writeSettingValue:(id)arg0 toAccessory:(id)arg1 forKeyPath:(id)arg2 completionHandler:(id)arg3 ;
-(void)configure;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)handleAccessoryIsReachableNotification:(id)arg0 ;
-(void)handleCompositeSettingsControllerDidConfigureNotification:(id)arg0 ;
-(void)handleHAPMediaProfileAddedNotification:(id)arg0 ;
-(void)handleHomeAddedNotification:(id)arg0 ;
-(void)handleHomeRemovedNotification:(id)arg0 ;
-(void)handlePrimaryResidentUpdateNotification:(id)arg0 ;
-(void)handleSiriEndPointAddedNotification:(id)arg0 ;
-(void)registerForAccessoryNotificationsOnHapAccessory:(id)arg0 ;
-(void)unregisterFromAccessoryNotificationsOnHapAccessory:(id)arg0 ;
-(void)writeSettingValue:(id)arg0 accessoryUUID:(id)arg1 homeUUID:(id)arg2 forKeyPath:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif