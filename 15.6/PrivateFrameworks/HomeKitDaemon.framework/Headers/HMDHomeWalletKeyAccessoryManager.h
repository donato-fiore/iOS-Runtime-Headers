// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMEWALLETKEYACCESSORYMANAGER_H
#define HMDHOMEWALLETKEYACCESSORYMANAGER_H

@class HMFObject, NSMutableDictionary, NSString, HMFMessageDispatcher, NSUUID, NSNotificationCenter, NSNumber;
@protocol HMFLogging, HMFMessageReceiver, HMDHomeWalletDataSource, HMDHomeWalletKeyAccessoryManagerDelegate, OS_dispatch_queue;


#import "HMDHome.h"
#import "HMDHomeWalletKeyAccessoryManagerDeviceCredentialKeyOperation.h"
#import "HMDDevice.h"

@interface HMDHomeWalletKeyAccessoryManager : HMFObject <HMFLogging, HMFMessageReceiver>



@property (readonly) NSMutableDictionary *accessoriesUUIDsByDeviceCredentialKey; // ivar: _accessoriesUUIDsByDeviceCredentialKey
@property BOOL canConfigureAccessories; // ivar: _canConfigureAccessories
@property (getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident; // ivar: _currentDevicePrimaryResident
@property (readonly) NSObject<HMDHomeWalletDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDHomeWalletKeyAccessoryManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMDHome *home; // ivar: _home
@property (retain) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy) NSMutableDictionary *nfcReaderKeyConfigureStateByAccessoryUUID; // ivar: _nfcReaderKeyConfigureStateByAccessoryUUID
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, copy) NSMutableDictionary *pendingAccessoryDeviceCredentialKeyOperationByDeviceUUID; // ivar: _pendingAccessoryDeviceCredentialKeyOperationByDeviceUUID
@property (copy) HMDHomeWalletKeyAccessoryManagerDeviceCredentialKeyOperation *pendingPrimaryResidentDeviceCredentialKeyOperation; // ivar: _pendingPrimaryResidentDeviceCredentialKeyOperation
@property (readonly) HMDDevice *primaryResidentDevice;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid; // ivar: _uuid
@property (readonly, copy) NSNumber *walletKeyColor; // ivar: _walletKeyColor
@property (readonly, copy) NSString *walletKeyColorPreferenceKey;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithUUID:(id)arg0 workQueue:(id)arg1 ;
-(id)initWithUUID:(id)arg0 workQueue:(id)arg1 dataSource:(id)arg2 notificationCenter:(id)arg3 ;
-(id)logIdentifier;
-(id)walletKeyColorWithCharacteristicValue:(id)arg0 ;
-(id)writeRequestsWithAccessories:(id)arg0 home:(id)arg1 deviceCredentialKey:(id)arg2 user:(id)arg3 ;
-(void)configureAccessories:(id)arg0 withDeviceCredentialKey:(id)arg1 completion:(id)arg2 ;
-(void)configureAccessories:(id)arg0 withDeviceCredentialKey:(id)arg1 forDeviceWithUUID:(id)arg2 user:(id)arg3 completion:(id)arg4 ;
-(void)configureAccessory:(id)arg0 withDeviceCredentialKey:(id)arg1 completion:(id)arg2 ;
-(void)configureAccessoryWithNfcReaderKey:(id)arg0 accessory:(id)arg1 completion:(id)arg2 ;
-(void)configureAllAccessoriesWithDeviceCredentialKey:(id)arg0 completion:(id)arg1 ;
-(void)configureNFCReaderKeyForAccessory:(id)arg0 ;
-(void)configureNFCReaderKeyForAllAccessories;
-(void)configureNotificationsWithReason:(id)arg0 ;
-(void)configureWithHome:(id)arg0 ;
-(void)createAccessoryDeviceCredentialKeyPendingOperationWithAccessories:(id)arg0 deviceCredentialKey:(id)arg1 user:(id)arg2 deviceUUID:(id)arg3 ;
-(void)createAccessoryDeviceCredentialKeyPendingOperationWithAccessoriesUUIDs:(id)arg0 deviceCredentialKey:(id)arg1 user:(id)arg2 deviceUUID:(id)arg3 ;
-(void)fetchIsAccessoryConfiguredWithReaderKey:(id)arg0 accessory:(id)arg1 completion:(id)arg2 ;
-(void)fetchOrConfigureNFCReaderKeyForAccessory:(id)arg0 completion:(id)arg1 ;
-(void)fetchWalletKeyColorForAccessories:(id)arg0 withCompletion:(id)arg1 ;
-(void)fetchWalletKeyColorWithAccessory:(id)arg0 ;
-(void)fetchWalletKeyColorWithCompletion:(id)arg0 ;
-(void)handleAccessoryCharacteristicsChangedNotification:(id)arg0 ;
-(void)handleAccessoryConnected:(id)arg0 ;
-(void)handleConfigureAccessoriesWithDeviceCredentialKeyMessage:(id)arg0 ;
-(void)handleHomeAccessoryRemovedNotification:(id)arg0 ;
-(void)handleHomeAddedAccessoryNotification:(id)arg0 ;
-(void)handleHomeDidDisableCharacteristicNotification:(id)arg0 ;
-(void)handleHomeDidEnableCharacteristicNotification:(id)arg0 ;
-(void)handleHomeNFCReaderKeyKeychainItemAvailableNotification:(id)arg0 ;
-(void)handlePendingDeviceCredentialKeysSyncForAccessories:(id)arg0 withReason:(id)arg1 ;
-(void)handlePendingDeviceCredentialKeysSyncForAccessory:(id)arg0 withReason:(id)arg1 ;
-(void)handlePrimaryResidentUpdateNotification:(id)arg0 ;
-(void)handleWalletKeyRemoved;
-(void)handleWalletKeySupportDidChange:(id)arg0 ;
-(void)registerForNotificationsWithReason:(id)arg0 ;
-(void)removeNfcReaderKeyWithIdentifier:(id)arg0 accessory:(id)arg1 completion:(id)arg2 ;
-(void)requestPrimaryResident:(id)arg0 toConfigureAccessories:(id)arg1 withDeviceCredentialKey:(id)arg2 completion:(id)arg3 ;
-(void)unregisterForNotificationsWithReason:(id)arg0 ;


@end


#endif