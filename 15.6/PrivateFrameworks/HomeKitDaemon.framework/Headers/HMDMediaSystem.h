// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIASYSTEM_H
#define HMDMEDIASYSTEM_H

@class HMFObject, NSArray, HMMediaDestination, NSString, NSSet, NSUUID, HMFMessageDispatcher, NSNotificationCenter, HMFActivity;
@protocol HMDMediaDestinationsManagerDataSource, HMDMediaDestinationsManagerDelegate, HMDAccessorySettingsControllerDataSource, HMDAccessorySettingsControllerDelegate, NSSecureCoding, HMFDumpState, HMFLogging, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, HMFLocking, HMDMediaDestinationManager, OS_dispatch_queue;


#import "HMDAccessorySetupMetricDispatcher.h"
#import "HMDApplicationData.h"
#import "HMDMediaDestinationsManager.h"
#import "HMDBackingStore.h"
#import "HMDHome.h"
#import "HMDMediaSession.h"
#import "HMDRoom.h"
#import "HMDAccessorySettingsController.h"
#import "HMDMediaSystemSymptomHandler.h"
#import "HMDAppleMediaAccessory.h"

@interface HMDMediaSystem : HMFObject <HMDMediaDestinationsManagerDataSource, HMDMediaDestinationsManagerDelegate, HMDAccessorySettingsControllerDataSource, HMDAccessorySettingsControllerDelegate, NSSecureCoding, HMFDumpState, HMFLogging, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver>

 {
    id<HMFLocking> *_lock;
}


@property (readonly, nonatomic) NSArray *accessories;
@property (readonly) HMDAccessorySetupMetricDispatcher *accessorySetupMetricDispatcher;
@property (retain, nonatomic) HMDApplicationData *appData; // ivar: _appData
@property (readonly, copy) NSArray *associatedAudioDestinationManagers;
@property (readonly) HMMediaDestination *audioDestination; // ivar: _audioDestination
@property (readonly) NSObject<HMDMediaDestinationManager> *audioDestinationManager;
@property (retain) HMDMediaDestinationsManager *audioDestinationsManager; // ivar: _audioDestinationsManager
@property (copy) id *audioDestinationsManagerFactory; // ivar: _audioDestinationsManagerFactory
@property (readonly) HMDBackingStore *backingStore;
@property (copy, nonatomic) NSArray *components; // ivar: _components
@property (retain, nonatomic) NSString *configuredName; // ivar: _configuredName
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
@property (readonly) HMDMediaSystemSymptomHandler *symptomsHandler; // ivar: _symptomsHandler
@property (readonly, nonatomic) HMDAppleMediaAccessory *targetAccessory;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
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
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaSystemModel:(id)arg0 home:(id)arg1 ;
-(id)initWithUUID:(id)arg0 configuredName:(id)arg1 home:(id)arg2 components:(id)arg3 ;
-(id)initWithUUID:(id)arg0 configuredName:(id)arg1 home:(id)arg2 components:(id)arg3 settingsControllerCreator:(id)arg4 ;
-(id)logIdentifier;
-(id)mediaDestinationsManager:(id)arg0 destinationControllerWithIdentifier:(id)arg1 ;
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
-(void)_handleUpdateMediaSystem:(id)arg0 ;
-(void)_registerForMessages;
-(void)_registerForNotifications;
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
-(void)relayMessage:(id)arg0 ;
-(void)removeManagedConfigurationProfileWithProfileData:(id)arg0 completion:(id)arg1 ;
-(void)repairAnyPreExistingAudioGroups;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)unconfigureMediaSystemComponents;
-(void)unconfigureMediaSystemComponents:(id)arg0 ;


@end


#endif