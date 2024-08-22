// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMEDIASYSTEM_H
#define HMDMEDIASYSTEM_H

@class HMFObject, NSArray, HMMediaDestination, NSString, HMMediaSystemData, NSSet, NSUUID, HMFMessageDispatcher, NSNotificationCenter, HMFActivity;
@protocol HMDMediaDestinationsManagerDataSource, HMDMediaDestinationsManagerDelegate, HMDAccessorySettingsControllerDataSource, HMDAccessorySettingsControllerDelegate, NSSecureCoding, HMFDumpState, HMFLogging, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, HMDMediaGroupsAggregateConsumerDataProvider, HMDMediaDestinationManager, HMDMediaSystemDataSource, OS_dispatch_queue;


#import "HMDAccessorySetupMetricDispatcher.h"
#import "HMDApplicationData.h"
#import "HMDMediaDestinationsManager.h"
#import "HMDBackingStore.h"
#import "HMDCurrentAccessorySetupMetricDispatcher.h"
#import "HMDHome.h"
#import "HMDMediaSession.h"
#import "HMDRoom.h"
#import "HMDAccessorySettingsController.h"
#import "HMDAppleMediaAccessory.h"

@interface HMDMediaSystem : HMFObject <HMDMediaDestinationsManagerDataSource, HMDMediaDestinationsManagerDelegate, HMDAccessorySettingsControllerDataSource, HMDAccessorySettingsControllerDelegate, NSSecureCoding, HMFDumpState, HMFLogging, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSArray *accessories;
@property (readonly) HMDAccessorySetupMetricDispatcher *accessorySetupMetricDispatcher;
@property (readonly) NSObject<HMDMediaGroupsAggregateConsumerDataProvider> *aggregateDataProvider; // ivar: _aggregateDataProvider
@property (retain, nonatomic) HMDApplicationData *appData; // ivar: _appData
@property (readonly, copy) NSArray *associatedAudioDestinationManagers;
@property (readonly) HMMediaDestination *audioDestination; // ivar: _audioDestination
@property (readonly) NSObject<HMDMediaDestinationManager> *audioDestinationManager;
@property (retain) HMDMediaDestinationsManager *audioDestinationsManager; // ivar: _audioDestinationsManager
@property (copy) id *audioDestinationsManagerFactory; // ivar: _audioDestinationsManagerFactory
@property (readonly) HMDBackingStore *backingStore;
@property (readonly, copy, nonatomic) NSArray *components; // ivar: _components
@property (copy, nonatomic) NSString *configuredName; // ivar: _configuredName
@property (readonly) HMDCurrentAccessorySetupMetricDispatcher *currentAccessorySetupMetricDispatcher;
@property (retain) HMMediaSystemData *data; // ivar: _data
@property (weak) NSObject<HMDMediaSystemDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HMDHome *home; // ivar: _home
@property (retain, nonatomic) HMDMediaSession *mediaSession; // ivar: _mediaSession
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) HMDRoom *room;
@property (readonly) HMDAccessorySettingsController *settingsController; // ivar: _settingsController
@property (retain) HMFActivity *setupActivity;
@property CGFloat setupStartTimestamp;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsUserMediaSettings; // ivar: _supportsUserMediaSettings
@property (readonly, nonatomic) HMDAppleMediaAccessory *targetAccessory;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
+(id)destinationIdentifierForComponentRoleType:(NSUInteger)arg0 components:(id)arg1 ;
+(id)initalizeDataWithIdentifier:(id)arg0 parentIdentifier:(id)arg1 name:(id)arg2 defaultName:(BOOL)arg3 components:(id)arg4 ;
+(id)logCategory;
+(id)sortMediaComponents:(id)arg0 ;
+(void)_configureMediaSystemComponents:(id)arg0 mediaSystem:(id)arg1 ;
-(BOOL)isCurrentComponent;
-(BOOL)isMultiUserEnabledForAccessorySettingsController:(id)arg0 ;
-(BOOL)isValid;
-(id)assistantAccessControlModelWithRemovedAccessoriesForAccessorySettingsController:(id)arg0 ;
-(id)assistantObject;
-(id)associatedDestinationManagersForMediaDestinationsManager:(id)arg0 ;
-(id)attributeDescriptions;
-(id)backingStoreObjectsForVersion:(NSInteger)arg0 ;
-(id)createNewAudioDestination;
-(id)destinationControllerGroupedWithAssociatedDestination;
-(id)dumpState;
-(id)generateComponents;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaSystemData:(id)arg0 home:(id)arg1 ;
-(id)initWithMediaSystemModel:(id)arg0 home:(id)arg1 ;
-(id)initWithUUID:(id)arg0 configuredName:(id)arg1 home:(id)arg2 data:(id)arg3 components:(id)arg4 ;
-(id)initWithUUID:(id)arg0 configuredName:(id)arg1 home:(id)arg2 data:(id)arg3 components:(id)arg4 settingsControllerCreator:(id)arg5 ;
-(id)legacyAudioDestination;
-(id)legacyComponents;
-(id)legacyConfiguredName;
-(id)legacyName;
-(id)logIdentifier;
-(id)mediaDestinationsManager:(id)arg0 destinationControllerWithIdentifier:(id)arg1 ;
-(id)mediaGroupsAggregatorMessengerForMediaDestinationsManager:(id)arg0 ;
-(id)messageDestination;
-(id)modelForMediaSystem;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(id)modelsToMakeSettingsForController:(id)arg0 parentUUID:(id)arg1 ;
-(id)modelsToMigrateSettingsForController:(id)arg0 ;
-(id)privateDescription;
-(id)remoteMessageDestinationForAccessorySettingsController:(id)arg0 target:(id)arg1 ;
-(id)serialize;
-(id)supportedMultiUserLanguageCodesForAccessorySettingsController:(id)arg0 ;
-(id)targetAccessoryForMediaDestinationManager:(id)arg0 ;
-(id)urlString;
-(void)_appDataRemoved:(id)arg0 message:(id)arg1 ;
-(void)_appDataUpdated:(id)arg0 message:(id)arg1 ;
-(void)_handleAppData:(id)arg0 ;
-(void)_registerForMessages;
-(void)_registerForNotifications;
-(void)_routeUpdateMediaSystem:(id)arg0 ;
-(void)_transactionMediaSystemUpdated:(id)arg0 message:(id)arg1 ;
-(void)_updateAppData:(id)arg0 ;
-(void)accessorySettingsController:(id)arg0 saveWithReason:(id)arg1 ;
-(void)accessorySettingsController:(id)arg0 saveWithReason:(id)arg1 model:(id)arg2 ;
-(void)auditMediaComponents;
-(void)configureAudioDestinationsManager;
-(void)configureMediaSystemComponents:(id)arg0 ;
-(void)configureWithMessageDispatcher:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleAccessorySoftwareUpdated:(id)arg0 ;
-(void)handleHomeCloudZoneReadyNotification:(id)arg0 ;
-(void)handleRemovedAccessory:(id)arg0 ;
-(void)languagesChangedForAccessorySettingsController:(id)arg0 ;
-(void)mediaDestinationsManager:(id)arg0 didUpdateDestination:(id)arg1 ;
-(void)mergeAudioDestination:(id)arg0 ;
-(void)mergeMediaSystemData:(id)arg0 ;
-(void)relayMessage:(id)arg0 ;
-(void)removeManagedConfigurationProfileWithProfileData:(id)arg0 completion:(id)arg1 ;
-(void)repairAnyPreExistingAudioGroups;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)unconfigureMediaSystemComponents;
-(void)unconfigureMediaSystemComponents:(id)arg0 ;


@end


#endif