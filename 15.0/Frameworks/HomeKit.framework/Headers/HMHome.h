// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMHOME_H
#define HMHOME_H

@class NSString, HMFUnfairLock, NSArray, NSUUID, CLLocation, HMFMessageDestination, NSDate, NSOperationQueue, NSSet, HMFVersion;
@protocol HMSiriEndpointProfilesMessengerFactory, HMFLogging, HMUserActionPredictionControllerDataSource, HMMutableApplicationData, HMObjectMerge, HMFMessageReceiver, NSSecureCoding, HMHomeDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMApplicationData.h"
#import "_HMContext.h"
#import "HMMutableArray.h"
#import "HMUser.h"
#import "HMRoom.h"
#import "HMHomeManager.h"
#import "HMHomePersonManager.h"
#import "HMHomePersonManagerSettings.h"
#import "HMPersonSettingsManager.h"
#import "HMUserActionPredictionController_MessagingImpl.h"

@interface HMHome : NSObject <HMSiriEndpointProfilesMessengerFactory, HMFLogging, HMUserActionPredictionControllerDataSource, HMMutableApplicationData, HMObjectMerge, HMFMessageReceiver, NSSecureCoding>

 {
    BOOL _automaticSoftwareUpdateEnabled;
    BOOL _automaticThirdPartyAccessorySoftwareUpdateEnabled;
    NSInteger _minimumMediaUserPrivilege;
    BOOL _mediaPeerToPeerEnabled;
    NSString *_mediaPassword;
    HMFUnfairLock *_lock;
}


@property (readonly, copy, nonatomic) NSArray *accessories;
@property (readonly, copy) NSArray *accessoryProtectionGroups;
@property (readonly, copy, nonatomic) NSArray *actionSets;
@property (nonatomic, getter=isAdminUser) BOOL adminUser; // ivar: _adminUser
@property (retain, nonatomic) HMApplicationData *applicationData; // ivar: _applicationData
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (copy, nonatomic) NSString *assistantIdentifier; // ivar: _assistantIdentifier
@property (readonly, getter=isAutomaticSoftwareUpdateEnabled) BOOL automaticSoftwareUpdateEnabled;
@property (getter=isAutomaticSoftwareUpdateEnabled) BOOL automaticSoftwareUpdateEnabled;
@property (readonly, getter=isAutomaticThirdPartyAccessorySoftwareUpdateEnabled) BOOL automaticThirdPartyAccessorySoftwareUpdateEnabled;
@property (getter=isAutomaticThirdPartyAccessorySoftwareUpdateEnabled) BOOL automaticThirdPartyAccessorySoftwareUpdateEnabled;
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (retain, nonatomic) HMMutableArray *currentAccessories; // ivar: _currentAccessories
@property (retain, nonatomic) HMMutableArray *currentAccessoryProtectionGroups; // ivar: _currentAccessoryProtectionGroups
@property (retain, nonatomic) HMMutableArray *currentActionSets; // ivar: _currentActionSets
@property (retain, nonatomic) HMMutableArray *currentMediaSystems; // ivar: _currentMediaSystems
@property (retain, nonatomic) HMMutableArray *currentOutgoingInvitations; // ivar: _currentOutgoingInvitations
@property (retain, nonatomic) HMMutableArray *currentResidentDevices; // ivar: _currentResidentDevices
@property (retain, nonatomic) HMMutableArray *currentRooms; // ivar: _currentRooms
@property (retain, nonatomic) HMMutableArray *currentServiceGroups; // ivar: _currentServiceGroups
@property (retain, nonatomic) HMMutableArray *currentTriggerOwnedActionSets; // ivar: _currentTriggerOwnedActionSets
@property (retain, nonatomic) HMMutableArray *currentTriggers; // ivar: _currentTriggers
@property (readonly, nonatomic) HMUser *currentUser;
@property (retain, nonatomic) HMUser *currentUser; // ivar: _currentUser
@property (retain, nonatomic) HMMutableArray *currentUsers; // ivar: _currentUsers
@property (retain, nonatomic) HMMutableArray *currentZones; // ivar: _currentZones
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMHomeDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAnyUserAcknowledgedCameraRecordingOnboarding; // ivar: _hasAnyUserAcknowledgedCameraRecordingOnboarding
@property (readonly) BOOL hasOnboardedForAccessCode;
@property BOOL hasOnboardedForAccessCode; // ivar: _hasOnboardedForAccessCode
@property (readonly) BOOL hasOnboardedForWalletKey;
@property BOOL hasOnboardedForWalletKey; // ivar: _hasOnboardedForWalletKey
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMRoom *homeAsRoom; // ivar: _homeAsRoom
@property (readonly, nonatomic) NSUInteger homeHubState; // ivar: _homeHubState
@property (readonly) CLLocation *homeLocation; // ivar: _homeLocation
@property (nonatomic) NSInteger homeLocationStatus; // ivar: _homeLocationStatus
@property (weak, nonatomic) HMHomeManager *homeManager; // ivar: _homeManager
@property (nonatomic) BOOL isUpdatedToROAR; // ivar: _isUpdatedToROAR
@property (nonatomic) NSInteger locationAuthorization; // ivar: _locationAuthorization
@property (copy, nonatomic) NSArray *managedTriggers; // ivar: _managedTriggers
@property (readonly, copy) NSString *mediaPassword;
@property (copy) NSString *mediaPassword;
@property (readonly, getter=isMediaPeerToPeerEnabled) BOOL mediaPeerToPeerEnabled;
@property (getter=isMediaPeerToPeerEnabled) BOOL mediaPeerToPeerEnabled;
@property (readonly, copy, nonatomic) HMFMessageDestination *messageDestination;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSInteger minimumMediaUserPrivilege;
@property NSInteger minimumMediaUserPrivilege;
@property (nonatomic) BOOL multiUserEnabled; // ivar: _multiUserEnabled
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) NSUInteger networkRouterSupport;
@property NSUInteger networkRouterSupport; // ivar: _networkRouterSupport
@property (readonly) NSUInteger networkRouterSupportDisableReason;
@property NSUInteger networkRouterSupportDisableReason; // ivar: _networkRouterSupportDisableReason
@property (nonatomic) BOOL notificationEnableRequested; // ivar: _notificationEnableRequested
@property (nonatomic) BOOL notificationEnableRequestedForAppleMediaAccessories; // ivar: _notificationEnableRequestedForAppleMediaAccessories
@property (nonatomic, getter=areNotificationsEnabled) BOOL notificationsEnabled; // ivar: _notificationsEnabled
@property (copy, nonatomic) NSDate *notificationsUpdatedTime; // ivar: _notificationsUpdatedTime
@property (nonatomic, getter=isOwnerUser) BOOL ownerUser; // ivar: _ownerUser
@property (readonly) HMHomePersonManager *personManager;
@property (retain) HMHomePersonManager *personManager; // ivar: _personManager
@property (readonly, copy) HMHomePersonManagerSettings *personManagerSettings;
@property (copy) HMHomePersonManagerSettings *personManagerSettings; // ivar: _personManagerSettings
@property (readonly) HMPersonSettingsManager *personSettingsManager;
@property (readonly) HMPersonSettingsManager *personSettingsManager; // ivar: _personSettingsManager
@property (readonly) HMUserActionPredictionController_MessagingImpl *predictionController; // ivar: _predictionController
@property (nonatomic, getter=isPrimary) BOOL primary; // ivar: _primary
@property (readonly) NSInteger protectionMode;
@property NSInteger protectionMode; // ivar: _protectionMode
@property (readonly, copy, nonatomic) NSArray *rooms;
@property (readonly, copy, nonatomic) NSArray *serviceGroups;
@property (retain, nonatomic) NSOperationQueue *shareWithHomeOwnerOperationQueue; // ivar: _shareWithHomeOwnerOperationQueue
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSSet *supportedFeatures; // ivar: _supportedFeatures
@property (copy) HMFVersion *supportedSiriEndPointVersion; // ivar: _supportedSiriEndPointVersion
@property (readonly, nonatomic) BOOL supportsAddingNetworkRouter;
@property (readonly, nonatomic) NSUUID *threadNetworkCredentialsUUID;
@property (readonly, nonatomic) NSString *threadNetworkID;
@property (retain, nonatomic) NSString *threadNetworkID; // ivar: _threadNetworkID
@property (readonly, copy, nonatomic) NSArray *triggerOwnedActionSets;
@property (readonly, copy, nonatomic) NSArray *triggers;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, copy, nonatomic) NSArray *users;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, copy) NSString *walletKeyPassSerialNumber;
@property (readonly, copy, nonatomic) NSArray *zones;


+(BOOL)accessorySupportsMediaAccessControl:(id)arg0 ;
+(BOOL)isValidMediaPassword:(id)arg0 error:(*id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)errorByDeviceWithOverallError:(id)arg0 ;
+(id)generateMediaPasswordWithError:(*id)arg0 ;
+(id)logCategory;
+(id)passSerialNumberWithHomeUUID:(id)arg0 userUUID:(id)arg1 ;
-(BOOL)_addActionSetFromResponse:(id)arg0 completion:(id)arg1 ;
-(BOOL)_addEventTriggerFromResponse:(id)arg0 withEventTrigger:(id)arg1 completion:(id)arg2 ;
-(BOOL)_addTimerTriggerFromResponse:(id)arg0 withTimerTrigger:(id)arg1 completion:(id)arg2 ;
-(BOOL)_addTrigger:(id)arg0 triggerUUID:(id)arg1 completion:(id)arg2 ;
// -(BOOL)_handleActionSetRemovedFromResponse:(id)arg0 responsePayload:(unk)arg1  ;
-(BOOL)_mergeWithNewObject:(id)arg0 operations:(id)arg1 ;
-(BOOL)_removeTriggerFromResponse:(id)arg0 completion:(id)arg1 ;
-(BOOL)_setSupportedFeature:(NSInteger)arg0 enabled:(BOOL)arg1 ;
-(BOOL)isMultiUserEnabled;
-(NSUInteger)_mergeAccessoriesForMergeCollection:(id)arg0 currentAccessories:(id)arg1 ;
-(NSUInteger)_mergeCurrentHomeAccessoriesWithNewHomeAccessories:(id)arg0 operations:(id)arg1 ;
-(NSUInteger)_mergeCurrentHomeAccessoryNetworkProtectionGroupsWithNewAccessoryNetworkProtectionGroups:(id)arg0 operations:(id)arg1 ;
-(NSUInteger)_mergeCurrentHomeActionSetsWithNewHomeActionSets:(id)arg0 operations:(id)arg1 ;
-(NSUInteger)_mergeCurrentHomeInvitationsWithNewHomeInvitations:(id)arg0 operations:(id)arg1 ;
-(NSUInteger)_mergeCurrentHomeMediaSystemsWithNewMediaSystems:(id)arg0 operations:(id)arg1 ;
-(NSUInteger)_mergeCurrentHomeResidentDevicesWithNewHomeResidentDevices:(id)arg0 operations:(id)arg1 ;
-(NSUInteger)_mergeCurrentHomeRoomsWithNewHomeRooms:(id)arg0 operations:(id)arg1 ;
-(NSUInteger)_mergeCurrentHomeServiceGroupsWithNewHomeServiceGroups:(id)arg0 operations:(id)arg1 ;
-(NSUInteger)_mergeCurrentHomeTriggerOwnedActionSetsWithNewHomeActionSets:(id)arg0 operations:(id)arg1 ;
-(NSUInteger)_mergeCurrentHomeTriggersWithNewHomeTriggers:(id)arg0 operations:(id)arg1 ;
-(NSUInteger)_mergeCurrentHomeUsersWithNewHomeUsers:(id)arg0 operations:(id)arg1 ;
-(NSUInteger)_mergeCurrentHomeZonesWithNewHomeZones:(id)arg0 operations:(id)arg1 ;
-(NSUInteger)_mergeRoomsForMergeCollection:(id)arg0 currentRooms:(id)arg1 ;
-(id)__defaultProgressHandlerForAddAccessory:(SEL)arg0 ;
// -(id)__responseHandlerForRequests:(SEL)arg0 progressHandler:(id)arg1 completionHandler:(id)arg2 activity:(unk)arg3  ;
-(id)_createFailedAccessoriesListFromError:(id)arg0 ;
-(id)_findUserWithID:(id)arg0 ;
-(id)_getContainerForAppData:(id)arg0 ;
-(id)_privateDelegate;
-(id)accessoriesForUserActionPredictionController:(id)arg0 ;
-(id)accessoryWithEndpointIdentifier:(id)arg0 ;
-(id)accessoryWithIdsIdentifier:(id)arg0 ;
-(id)accessoryWithSiriEndpointIdentifier:(id)arg0 ;
-(id)accessoryWithUUID:(id)arg0 ;
-(id)accessoryWithUniqueIdentifier:(id)arg0 ;
-(id)actionSetWithName:(id)arg0 ;
-(id)actionSetWithUUID:(id)arg0 ;
-(id)actionSetsForUserActionPredictionController:(id)arg0 ;
-(id)administrator;
-(id)builtinActionSetOfType:(id)arg0 ;
-(id)controlTargets;
-(id)createAccessCodeManager;
-(id)createActionSetWithName:(id)arg0 type:(id)arg1 uuid:(id)arg2 ;
-(id)createAndAddActionSetWithName:(id)arg0 type:(id)arg1 uuid:(id)arg2 ;
-(id)createSiriEndpointProfilesMessenger;
-(id)homeAccessControlForUser:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 uuid:(id)arg1 ;
-(id)initWithName:(id)arg0 uuid:(id)arg1 homeAsRoomUUID:(id)arg2 homeAsRoomName:(id)arg3 actionSets:(id)arg4 ;
-(id)lightProfileWithProfileUUID:(id)arg0 ;
-(id)location;
-(id)logIdentifier;
-(id)mediaDestintionsWithHomeTheaterSupportedOptions;
-(id)mediaDestintionsWithSupportedOptions:(NSUInteger)arg0 ;
-(id)mediaProfileWithProfileUUID:(id)arg0 ;
-(id)mediaProfileWithUUID:(id)arg0 ;
-(id)mediaSystems;
-(id)mediaSystemsForUserActionPredictionController:(id)arg0 ;
-(id)notificationCenterForUserActionPredictionController:(id)arg0 ;
-(id)outgoingInvitations;
-(id)owner;
-(id)personManagerWithUUID:(id)arg0 ;
-(id)photosPersonManagerForUser:(id)arg0 ;
-(id)photosPersonManagerWithUUID:(id)arg0 ;
-(id)profileWithUniqueIdentifier:(id)arg0 ;
-(id)residentDevices;
-(id)roomForEntireHome;
-(id)roomWithName:(id)arg0 ;
-(id)roomWithUUID:(id)arg0 ;
-(id)serviceGroupWithName:(id)arg0 ;
-(id)serviceGroupWithUUID:(id)arg0 ;
-(id)serviceGroupsForUserActionPredictionController:(id)arg0 ;
-(id)servicesWithTypes:(id)arg0 ;
-(id)targetControllers;
-(id)triggerOwnedActionSetWithUUID:(id)arg0 ;
-(id)triggerWithName:(id)arg0 ;
-(id)triggerWithUUID:(id)arg0 ;
-(id)userActionPredictionController;
-(id)userWithUUID:(id)arg0 ;
-(id)zoneWithName:(id)arg0 ;
-(id)zoneWithUUID:(id)arg0 ;
-(void)__configureWithContext:(id)arg0 homeManager:(id)arg1 ;
-(void)__handleExecuteRequest:(id)arg0 activity:(id)arg1 batchRequest:(id)arg2 ;
-(void)__locationAuthorizationUpdated:(id)arg0 ;
-(void)__updateLocation:(id)arg0 locationStatus:(NSInteger)arg1 mergeOperations:(id)arg2 ;
-(void)_acceptInvitation:(id)arg0 completionHandler:(id)arg1 ;
// -(void)_addAccessory:(id)arg0 accessoryDescription:(id)arg1 password:(id)arg2 setupCodeDeferred:(BOOL)arg3 progress:(id)arg4 completionHandler:(unk)arg5  ;
-(void)_addActionSetWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)_addAndSetUpAccessoriesWithSetupPayloadURL:(id)arg0 suggestedRoomName:(id)arg1 ownershipToken:(id)arg2 legacyAPI:(BOOL)arg3 trustedOrigin:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)_addIdentifier:(id)arg0 bridgeUUID:(id)arg1 ;
-(void)_addRoomWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)_addServiceGroupWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)_addTrigger:(id)arg0 completionHandler:(id)arg1 ;
-(void)_addZoneWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)_assignAccessory:(id)arg0 toRoom:(id)arg1 completionHandler:(id)arg2 ;
// -(void)_callProgressHandler:(id)arg0 updatingAccessoryDescription:(unk)arg1 fromMessage:(id)arg2  ;
-(void)_cancelInvitation:(id)arg0 completionHandler:(id)arg1 ;
-(void)_cancelPairingForAccessoryWithDescription:(id)arg0 completionHandler:(id)arg1 ;
-(void)_cancelPairingForAccessoryWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)_configureOutgoingInvitiation:(id)arg0 ;
-(void)_continuePairingForAccessoryWithUUID:(id)arg0 setupCode:(id)arg1 completionHandler:(id)arg2 ;
-(void)_didAddAccessoryNetworkProtectionGroup:(id)arg0 ;
-(void)_didRemoveAccessoryNetworkProtectionGroup:(id)arg0 ;
-(void)_didUpdateAccessoryNetworkProtectionGroup:(id)arg0 ;
-(void)_didUpdateNetworkRouterSupport;
-(void)_enableNotification:(BOOL)arg0 forCharacteristics:(id)arg1 completionHandler:(id)arg2 ;
-(void)_enableNotifications:(BOOL)arg0 includeAppleMediaAccessoryNotifications:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_executeActionSet:(id)arg0 activity:(id)arg1 reportContext:(id)arg2 completionHandler:(id)arg3 ;
-(void)_handleAccessoryAddedNotification:(id)arg0 ;
-(void)_handleAccessoryConnectivityChangedNotification:(id)arg0 ;
-(void)_handleAccessoryErrorNotification:(id)arg0 ;
-(void)_handleAccessoryInfoUpdatedNotification:(id)arg0 ;
-(void)_handleAccessoryNetworkProtectionGroupAddedNotification:(id)arg0 ;
-(void)_handleAccessoryNetworkProtectionGroupRemovedNotification:(id)arg0 ;
-(void)_handleAccessoryRemovedNotification:(id)arg0 ;
-(void)_handleAccessoryReprovisionStateUpdate:(id)arg0 ;
-(void)_handleAccessoryReprovisionedNotification:(id)arg0 ;
-(void)_handleAddAccessoryProgressNotification:(id)arg0 ;
-(void)_handleDidAddWalletKeyMessage:(id)arg0 ;
-(void)_handleDidRemoveWalletKeyMessage:(id)arg0 ;
-(void)_handleHasAnyUserAcknowledgedCameraRecordingOnboardingChangeNotification:(id)arg0 ;
-(void)_handleHomeHubStateUpdatedNotification:(id)arg0 ;
-(void)_handleHomeLocationStatusUpdateNotification:(id)arg0 ;
-(void)_handleHomeLocationUpdate:(id)arg0 ;
-(void)_handleHomeLocationUpdateNotificaton:(id)arg0 ;
-(void)_handleHomeNetworkProtectionModeUpdatedNotification:(id)arg0 ;
-(void)_handleHomeNetworkRouterSupportUpdated:(id)arg0 ;
-(void)_handleHomeRenamedNotification:(id)arg0 ;
-(void)_handleMediaSystemRemovedNotification:(id)arg0 ;
-(void)_handleMultiUserEnabledChangeNotification:(id)arg0 ;
-(void)_handleMultipleCharacteristicValuesUpdated:(id)arg0 ;
-(void)_handleNotificationsEnabled:(id)arg0 ;
-(void)_handleRequestAccessorySetupCodeRequestKey:(id)arg0 ;
-(void)_handleRuntimeStateUpdate:(id)arg0 reason:(id)arg1 ;
-(void)_handleServiceGroupAddedNotification:(id)arg0 ;
-(void)_handleServiceGroupRemovedNotification:(id)arg0 ;
-(void)_handleUpdatedPresenceAuthNotification:(id)arg0 ;
-(void)_handleUpdatedPresenceComputeNotification:(id)arg0 ;
-(void)_handleUpdatedResidentDevice:(id)arg0 ;
-(void)_handleUpdatedToROARNotification:(id)arg0 ;
-(void)_handleUpdatedUserAccessNotification:(id)arg0 ;
-(void)_handleUserAddedNotification:(id)arg0 ;
-(void)_handleUserInvitationsUpdatedNotification:(id)arg0 ;
-(void)_handleUserRemovedNotification:(id)arg0 ;
-(void)_handleZoneAddedNotification:(id)arg0 ;
-(void)_handleZoneRemovedNotification:(id)arg0 ;
-(void)_inviteWithUserInformation:(id)arg0 completionHandler:(id)arg1 ;
-(void)_invokeDelegateForAppData:(id)arg0 ;
-(void)_manageUsersWithCompletionHandler:(id)arg0 ;
-(void)_notifyDelegateOfAccesoryInvitationsUpdateForUser:(id)arg0 ;
-(void)_notifyDelegateOfAccessControlUpdateForUser:(id)arg0 ;
-(void)_notifyDelegateOfAddedMediaSystem:(id)arg0 ;
-(void)_notifyDelegateOfAppDataUpdate;
-(void)_notifyDelegateOfAppDataUpdateForActionSet:(id)arg0 ;
-(void)_notifyDelegateOfAppDataUpdateForRoom:(id)arg0 ;
-(void)_notifyDelegateOfAppDataUpdateForServiceGroup:(id)arg0 ;
-(void)_notifyDelegateOfHomeHubStateUpdate;
-(void)_notifyDelegateOfRemovedMediaSystem:(id)arg0 ;
-(void)_notifyDelegateOfTriggerAdded:(id)arg0 ;
-(void)_notifyDelegateOfTriggerRemoved:(id)arg0 ;
-(void)_notifyDelegateOfTriggerUpdated:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedHomeLocationStatus;
-(void)_notifySetupFailedIfInHomeUIService:(id)arg0 ;
-(void)_notifyUpdatedSupportedFeatures;
-(void)_performBatchRequest:(id)arg0 activity:(id)arg1 ;
-(void)_recomputeAssistantIdentifier;
-(void)_registerNotificationHandlers;
-(void)_removeAccessory:(id)arg0 completionHandler:(id)arg1 ;
-(void)_removeActionSet:(id)arg0 completionHandler:(id)arg1 ;
-(void)_removeIdentifier:(id)arg0 bridgeUUID:(id)arg1 ;
-(void)_removeIncompatibleTrigger:(id)arg0 ;
-(void)_removeMediaSystem:(id)arg0 completionHandler:(id)arg1 ;
-(void)_removeRoom:(id)arg0 completionHandler:(id)arg1 ;
-(void)_removeServiceGroup:(id)arg0 completionHandler:(id)arg1 ;
-(void)_removeServices:(id)arg0 ;
-(void)_removeTrigger:(id)arg0 completionHandler:(id)arg1 ;
-(void)_removeUser:(id)arg0 completionHandler:(id)arg1 ;
-(void)_removeZone:(id)arg0 completionHandler:(id)arg1 ;
-(void)_reprovisionAccessory:(id)arg0 completionHandler:(id)arg1 ;
-(void)_retrieveLocation;
// -(void)_retrieveResultsWithReportingContext:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2 activity:(id)arg3  ;
-(void)_setupBuiltinActionSets:(id)arg0 ;
// -(void)_startPairingWithAccessoryDescription:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)_startSearchForAccessoriesNeedingReprovisioning;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)_updateAccessForUser:(id)arg0 announceAccess:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_updateAccessForUser:(id)arg0 camerasAccessLevel:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)_updateApplicationData:(id)arg0 forAppDataContainer:(id)arg1 appDataContainerUUIDKeyName:(id)arg2 completionHandler:(id)arg3 ;
-(void)_updateInvitation:(id)arg0 invitationState:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)_updateName:(id)arg0 completionHandler:(id)arg1 ;
-(void)_userDidConfirmExecution:(BOOL)arg0 ofTriggerWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)addAccessory:(id)arg0 completionHandler:(id)arg1 ;
-(void)addAccessory:(id)arg0 password:(id)arg1 completionHandler:(id)arg2 ;
// -(void)addAccessory:(id)arg0 password:(id)arg1 progress:(id)arg2 completionHandler:(unk)arg3  ;
// -(void)addAccessoryWithAccessorySetupPayload:(id)arg0 progress:(id)arg1 completionHandler:(unk)arg2  ;
-(void)addActionSetWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)addAndSetUpNewAccessoriesWithSuggestedRoomName:(id)arg0 completionHandler:(id)arg1 ;
-(void)addAndSetupAccessoriesWithCompletionHandler:(id)arg0 ;
-(void)addAndSetupAccessoriesWithPayload:(id)arg0 completionHandler:(id)arg1 ;
-(void)addRoomWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)addServiceGroupWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)addTrigger:(id)arg0 completionHandler:(id)arg1 ;
-(void)addUser:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)addUserWithCompletionHandler:(id)arg0 ;
-(void)addUserWithoutConfirmation:(id)arg0 privilege:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)addWalletKeyToPairedWatchesWithOptions:(NSInteger)arg0 completion:(id)arg1 ;
-(void)addWalletKeyWithOptions:(NSInteger)arg0 completion:(id)arg1 ;
-(void)addWalletKeyWithOptions:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)addZoneWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)assignAccessory:(id)arg0 toRoom:(id)arg1 completionHandler:(id)arg2 ;
-(void)cancelPairingForAccessoryWithDescription:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancelPairingForAccessoryWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)configurePersonManagerWithSettings:(id)arg0 ;
-(void)continuePairingForAccessoryWithUUID:(id)arg0 setupCode:(id)arg1 completionHandler:(id)arg2 ;
-(void)enableExpressForWalletKeyWithAuthData:(id)arg0 completion:(id)arg1 ;
-(void)enableMultiUserWithCompletionHandler:(id)arg0 ;
-(void)enableNotification:(BOOL)arg0 forCharacteristics:(id)arg1 completionHandler:(id)arg2 ;
-(void)enableNotifications:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)enableNotifications:(BOOL)arg0 includeAppleMediaAccessoryNotifications:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)enableRemoteAccess:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)establishShareWithHomeOwner:(id)arg0 container:(id)arg1 allowWriteAccess:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)establishShareWithHomeOwner:(id)arg0 container:(id)arg1 completionHandler:(id)arg2 ;
-(void)executeActionSet:(id)arg0 completionHandler:(id)arg1 ;
-(void)executeActions:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchAccessoryInformation:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchAvailableWalletKeyEncodedPKPass:(id)arg0 ;
-(void)fetchExistingWalletKeyUUIDWithCompletion:(id)arg0 ;
-(void)fetchHasWalletKeyWithCompletion:(id)arg0 ;
-(void)fetchIsExpressEnabledForWalletKeyWithCompletion:(id)arg0 ;
-(void)fetchIsWalletKeySupportedOnAnyPairedWatchWithCompletion:(id)arg0 ;
-(void)fetchIsWalletKeySupportedWithCompletion:(id)arg0 ;
-(void)fetchLastModifiedServiceOfType:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchSettingsForLightProfiles:(id)arg0 withCompletion:(id)arg1 ;
-(void)fetchWalleKeyExpressEnablementConflictingPassDescription:(id)arg0 ;
-(void)fetchWalletKeyColorWithCompletion:(id)arg0 ;
-(void)fetchWalletKeyCustomURLWithCompletion:(id)arg0 ;
-(void)fetchWalletKeyDeviceStateForPairedWatchesWithCompletion:(id)arg0 ;
-(void)fetchWalletKeyDeviceStateWithCompletion:(id)arg0 ;
-(void)fetchWalletKeyEncodedPKPass:(id)arg0 ;
-(void)fetchWalletKeyEncodedPKPassWithIgnoredErrorCodes:(id)arg0 completion:(id)arg1 ;
-(void)handleRuntimeStateUpdate:(id)arg0 reason:(id)arg1 ;
-(void)handleStartWithError:(id)arg0 response:(id)arg1 ;
-(void)inviteUsers:(id)arg0 completionHandler:(id)arg1 ;
-(void)inviteUsersWithInviteInformation:(id)arg0 completionHandler:(id)arg1 ;
-(void)joinThreadNetwork:(id)arg0 withCompletion:(id)arg1 ;
-(void)joinThreadNetworkWithCompletion:(id)arg0 ;
-(void)manageUsersWithCompletionHandler:(id)arg0 ;
-(void)mergeWithNewObjectNoMergeCount:(id)arg0 ;
-(void)notifyDelegateOfAccesoryInvitationsUpdateForUser:(id)arg0 ;
-(void)notifyDelegateOfAccessControlUpdateForUser:(id)arg0 ;
-(void)notifyDelegateOfAppDataUpdateForActionSet:(id)arg0 ;
-(void)notifyDelegateOfAppDataUpdateForRoom:(id)arg0 ;
-(void)notifyDelegateOfAppDataUpdateForServiceGroup:(id)arg0 ;
-(void)notifyDelegateOfROARStatusChanged;
-(void)notifyDelegatesOfExecution:(id)arg0 actionSet:(id)arg1 ;
-(void)performBatchCharacteristicRequest:(id)arg0 ;
-(void)performBatchRequest:(id)arg0 ;
-(void)queryRemoteAccessWithCompletionHandler:(id)arg0 ;
-(void)reEnableNotifications;
-(void)recomputeAssistantIdentifier;
-(void)recomputeAssistantIdentifiersWithCompletion:(id)arg0 ;
-(void)removeAccessory:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeActionSet:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeMediaSystem:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeRoom:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeServiceGroup:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeServices:(id)arg0 ;
-(void)removeTrigger:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeUser:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeUserWithoutConfirmation:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeZone:(id)arg0 completionHandler:(id)arg1 ;
-(void)reprovisionAccessory:(id)arg0 completionHandler:(id)arg1 ;
-(void)resetAndRemoveAllCHIPPairingsFromAccessory:(id)arg0 completion:(id)arg1 ;
-(void)resolveThreadNetworkCredentialsWithCompletion:(id)arg0 ;
-(void)retrieveHomeKitLocationForFeedbackWithCompletionHandler:(id)arg0 ;
// -(void)retrieveResultsWithReportingContext:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)sendConfigureBulletinNotification;
-(void)setAccessoryNetworkProtectionChangeSupportMinHomeKitVersion:(id)arg0 completionHandler:(id)arg1 ;
-(void)shareWithHomeOwner:(id)arg0 container:(id)arg1 completionHandler:(id)arg2 ;
-(void)startDiscoveringSymptomsForNearbyDevices;
// -(void)startPairingWithAccessory:(id)arg0 accessorySetupDescription:(id)arg1 progress:(id)arg2 completionHandler:(unk)arg3  ;
// -(void)startPairingWithAccessoryDescription:(id)arg0 progress:(id)arg1 completion:(unk)arg2  ;
// -(void)startPairingWithAccessoryDescription:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)startSearchForAccessoriesNeedingReprovisioning;
-(void)stopDiscoveringSymptomsForNearbyDevices;
-(void)unblockAccessory:(id)arg0 completionHandler:(id)arg1 ;
-(void)unconfigure;
-(void)unjoinThreadNetworkWithCompletion:(id)arg0 ;
-(void)updateAccessForUser:(id)arg0 administrator:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)updateAccessForUser:(id)arg0 announceAccess:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)updateAccessForUser:(id)arg0 camerasAccessLevel:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)updateAccessForUser:(id)arg0 remoteAccess:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)updateAccessoryNetworkProtectionGroup:(id)arg0 protectionMode:(NSInteger)arg1 completion:(id)arg2 ;
-(void)updateApplicationData:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateApplicationData:(id)arg0 forActionSet:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateApplicationData:(id)arg0 forAppDataContainer:(id)arg1 appDataContainerUUIDKeyName:(id)arg2 completionHandler:(id)arg3 ;
-(void)updateApplicationData:(id)arg0 forRoom:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateApplicationData:(id)arg0 forServiceGroup:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateAutomaticSoftwareUpdateEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateAutomaticThirdPartyAccessorySoftwareUpdateEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateForUser:(id)arg0 presenceAuthorizationStatus:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)updateMediaPassword:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateMediaPeerToPeerEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateMinimumMediaUserPrivilege:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)updateName:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateNetworkProtection:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)updatePersonManagerSettings:(id)arg0 completion:(id)arg1 ;
-(void)userDidConfirmExecution:(BOOL)arg0 ofTrigger:(id)arg1 completionHandler:(id)arg2 ;
-(void)userDidConfirmExecution:(BOOL)arg0 ofTriggerWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)userDidRespondToConsentRequestForSetupAccessoryDescription:(id)arg0 withResponse:(NSInteger)arg1 ;


@end


#endif