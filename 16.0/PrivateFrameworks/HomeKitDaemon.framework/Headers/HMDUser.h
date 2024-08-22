// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDUSER_H
#define HMDUSER_H

@class HMFObject, NSString, NSUUID, AVOutputDeviceAuthorizedPeer, NSSet, HMBShareUserID, NAFuture, HMUserHomeAccessSettings, HMFMessageDispatcher, NSData, NSNumber, NSDictionary, HAPPairingIdentity, HMPhotosPersonManagerSettings, HMUserPresenceAuthorization;
@protocol HMDCloudShareTrustManagerDataSource, HMDCloudShareTrustManagerDelegate, HMDUserDataControllerDelegate, HMDUserSettingsBackingStoreControllerDelegate, HMDUserDataControllerDataSource, HMFLogging, HMFDumpState, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, HMDRemoteEventRouterUserAccessControlProvider, HMDUserSettingsInitialValueProviding, NSSecureCoding, OS_dispatch_queue, HMDUserAccessorySettingsDataController, HMDUserDataSource;


#import "HMDAccountHandle.h"
#import "HMDAccountIdentifier.h"
#import "HMDAssistantAccessControl.h"
#import "HMDCloudShareTrustManager.h"
#import "HMDHome.h"
#import "HMDPersonSettingsManager.h"
#import "HMDUserPhotosPersonDataManager.h"
#import "HMDPhotosPersonManager.h"
#import "HMDUserSettingsBackingStoreController.h"
#import "HMDCloudShareMessenger.h"
#import "HMDSiriMultiUserNewLanguageNotificationManager.h"
#import "HMDUserDataController.h"

@interface HMDUser : HMFObject <HMDCloudShareTrustManagerDataSource, HMDCloudShareTrustManagerDelegate, HMDUserDataControllerDelegate, HMDUserSettingsBackingStoreControllerDelegate, HMDUserDataControllerDataSource, HMFLogging, HMFDumpState, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, HMDRemoteEventRouterUserAccessControlProvider, HMDUserSettingsInitialValueProviding, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMDAccountHandle *_accountHandle;
    HMDAccountIdentifier *_accountIdentifier;
}


@property (copy) NSString *accessCode; // ivar: _accessCode
@property (retain) NSUUID *accessCodeChangedByUserUUID; // ivar: _accessCodeChangedByUserUUID
@property (retain) NSObject<HMDUserAccessorySettingsDataController> *accessorySettingsDataController; // ivar: _accessorySettingsDataController
@property (copy) HMDAccountIdentifier *accountIdentifier;
@property (readonly, getter=isAdministrator) BOOL administrator;
@property BOOL allowExplicitContent; // ivar: _allowExplicitContent
@property BOOL allowiTunesAccount; // ivar: _allowiTunesAccount
@property (readonly, getter=isAnnounceAccessAllowed) BOOL announceAccessAllowed;
@property NSUInteger announceAccessLevel; // ivar: _announceAccessLevel
@property NSUInteger announceNotificationModeForCurrentDevice; // ivar: _announceNotificationModeForCurrentDevice
@property (retain) HMDAssistantAccessControl *assistantAccessControl; // ivar: _assistantAccessControl
@property (readonly) NSUUID *assistantAccessControlModelUUID;
@property (readonly, copy) AVOutputDeviceAuthorizedPeer *av_authorizedPeer;
@property (readonly) NSSet *cachedCurrentUserPairingIdentityIdentifiers; // ivar: _cachedCurrentUserPairingIdentityIdentifiers
@property NSUInteger camerasAccessLevel; // ivar: _camerasAccessLevel
@property (retain) HMBShareUserID *cloudShareID; // ivar: _cloudShareID
@property (readonly) NAFuture *cloudShareIDFuture; // ivar: _cloudShareIDFuture
@property (retain) HMDCloudShareTrustManager *cloudShareTrustManager; // ivar: _cloudShareTrustManager
@property (readonly, getter=isCurrentUser) BOOL currentUser;
@property (readonly) NSObject<HMDUserDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *displayName; // ivar: _displayName
@property BOOL dolbyAtmosEnabled; // ivar: _dolbyAtmosEnabled
@property (readonly, copy, nonatomic) NSString *encodingRemoteDisplayName;
@property (readonly) BOOL hasCameraClipsAccess;
@property (readonly) NSUInteger hash;
@property (weak) HMDHome *home; // ivar: _home
@property (copy) HMUserHomeAccessSettings *homeAccessSettings; // ivar: _homeAccessSettings
@property (readonly) BOOL isCurrentUser;
@property (readonly) BOOL isRunningOnHomeOwnersDevice;
@property BOOL losslessMusicEnabled; // ivar: _losslessMusicEnabled
@property (retain) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property BOOL needsiTunesMultiUserRepair; // ivar: _needsiTunesMultiUserRepair
@property (readonly, copy) NSData *nfcIssuerKeyIdentifier;
@property (readonly) NSNumber *notificationContextHAPIdentifier;
@property (readonly) NSNumber *notificationContextNFCIdentifier;
@property (readonly, getter=isOwner) BOOL owner;
@property NSUInteger ownerAddSceneButtonPresentedCount; // ivar: _ownerAddSceneButtonPresentedCount
@property (retain) NSDictionary *ownerCharacteristicAuthorizationData; // ivar: _ownerCharacteristicAuthorizationData
@property BOOL ownerCompletedSwitchingHomesOnboardingUI; // ivar: _ownerCompletedSwitchingHomesOnboardingUI
@property BOOL ownerDismissedAccessCodeOnboarding; // ivar: _ownerDismissedAccessCodeOnboarding
@property BOOL ownerDismissedAccessoryFirmwareUpdateOnboarding; // ivar: _ownerDismissedAccessoryFirmwareUpdateOnboarding
@property BOOL ownerDismissedAnnounceOnboarding; // ivar: _ownerDismissedAnnounceOnboarding
@property BOOL ownerDismissedCameraRecordingOnboarding; // ivar: _ownerDismissedCameraRecordingOnboarding
@property BOOL ownerDismissedCameraRecordingSetupBanner; // ivar: _ownerDismissedCameraRecordingSetupBanner
@property BOOL ownerDismissedCameraUpgradeOfferBanner; // ivar: _ownerDismissedCameraUpgradeOfferBanner
@property BOOL ownerDismissedHomeTheaterOnboarding; // ivar: _ownerDismissedHomeTheaterOnboarding
@property BOOL ownerDismissedIdentifyVoiceOnboarding; // ivar: _ownerDismissedIdentifyVoiceOnboarding
@property BOOL ownerDismissedIdentifyVoiceSetupBanner; // ivar: _ownerDismissedIdentifyVoiceSetupBanner
@property BOOL ownerDismissedNaturalLightingOnboarding; // ivar: _ownerDismissedNaturalLightingOnboarding
@property BOOL ownerDismissedTVViewingProfileOnboarding; // ivar: _ownerDismissedTVViewingProfileOnboarding
@property BOOL ownerDismissedTVViewingProfileSetupBanner; // ivar: _ownerDismissedTVViewingProfileSetupBanner
@property BOOL ownerDismissedUserSplitMediaAccountWarning; // ivar: _ownerDismissedUserSplitMediaAccountWarning
@property BOOL ownerDismissedWalletKeyExpressModeOnboarding; // ivar: _ownerDismissedWalletKeyExpressModeOnboarding
@property BOOL ownerDismissedWelcomeUI; // ivar: _ownerDismissedWelcomeUI
@property (copy) HAPPairingIdentity *pairingIdentity; // ivar: _pairingIdentity
@property (readonly, copy) NSString *pairingUsername;
@property (retain) HMDPersonSettingsManager *personSettingsManager; // ivar: _personSettingsManager
@property (retain) HMDUserPhotosPersonDataManager *photosPersonDataManager; // ivar: _photosPersonDataManager
@property (readonly) HMDPhotosPersonManager *photosPersonManager;
@property (readonly, copy) HMPhotosPersonManagerSettings *photosPersonManagerSettings;
@property BOOL playbackInfluencesEnabled; // ivar: _playbackInfluencesEnabled
@property (copy) HMUserPresenceAuthorization *presenceAuthStatus; // ivar: _presenceAuthStatus
@property (retain) HMDUserSettingsBackingStoreController *privateBackingStoreController; // ivar: _privateBackingStoreController
@property NSUInteger privilege; // ivar: _privilege
@property (readonly, copy) NSData *publicKey;
@property (getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed; // ivar: _remoteAccessAllowed
@property (readonly, getter=isRemoteGateway) BOOL remoteGateway;
@property (retain) HMDCloudShareMessenger *shareMessenger; // ivar: _shareMessenger
@property (retain) HMDUserSettingsBackingStoreController *sharedBackingStoreController; // ivar: _sharedBackingStoreController
@property BOOL siriIdentifyVoiceEnabled; // ivar: _siriIdentifyVoiceEnabled
@property (retain) HMDSiriMultiUserNewLanguageNotificationManager *siriMultiUserNewLanguageNotificationManager; // ivar: _siriMultiUserNewLanguageNotificationManager
@property (readonly) Class superclass;
@property NSInteger userCloudShareWithOwnerMessagingState; // ivar: _userCloudShareWithOwnerMessagingState
@property (retain) HMDUserDataController *userDataController; // ivar: _userDataController
@property (copy, nonatomic) NSString *userID; // ivar: _userID
@property (readonly) NSUUID *userUUID;
@property (copy, setter=setUUID:) NSUUID *uuid; // ivar: _uuid
@property (readonly, getter=isValid) BOOL valid;


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
+(id)UUIDWithUserID:(id)arg0 forHomeIdentifier:(id)arg1 uuid:(id)arg2 pairingIdentity:(id)arg3 ;
+(id)_openZoneWithName:(id)arg0 inDatabase:(id)arg1 ;
+(id)allLastUserSyncDataArchives;
+(id)allowedClassesForAnnounceNotificationMode;
+(id)allowedClassesForSyncData;
+(id)appendRootPath:(id)arg0 withSettingPath:(id)arg1 ;
+(id)currentUserWithPrivilege:(NSUInteger)arg0 forHome:(id)arg1 ;
+(id)currentUserWithPrivilege:(NSUInteger)arg0 forHome:(id)arg1 forceHH1Key:(BOOL)arg2 ;
+(id)getSettingsUsingPreOrderTraversal:(id)arg0 rootUUID:(id)arg1 keyPath:(id)arg2 ;
+(id)getSyncDataFromLocalDiskWithArchive:(id)arg0 ;
+(id)localPrivateZoneForSharedUserUUID:(id)arg0 database:(id)arg1 ;
+(id)localSharedZoneForSharedUserUUID:(id)arg0 database:(id)arg1 ;
+(id)logCategory;
+(id)ownerWithUserID:(id)arg0 home:(id)arg1 pairingIdentity:(id)arg2 homeManager:(id)arg3 ;
+(id)privateZoneNameForUserUUID:(id)arg0 ;
+(id)sharedZoneNameForUserUUID:(id)arg0 ;
+(id)userDictionaryWithUserID:(id)arg0 privilege:(NSUInteger)arg1 remoteAccessAllowed:(BOOL)arg2 cameraAccessLevel:(NSUInteger)arg3 announceAccessAllowed:(id)arg4 announceAccessLevel:(NSUInteger)arg5 homeAccessSettings:(id)arg6 ;
+(id)userIDForAccountHandle:(id)arg0 ;
+(id)userWithDictionary:(id)arg0 ;
+(id)userWithDictionary:(id)arg0 home:(id)arg1 ;
+(void)__findOrCreateCKSharedUserAccessorySettingsForAccessory:(id)arg0 usingManagedObjectContext:(id)arg1 rootShareObject:(id)arg2 listeningHistoryEnabled:(id)arg3 mediaContentProfileEnabled:(id)arg4 personalRequestsEnabled:(id)arg5 ;
+(void)_fetchAndMigrateAssistantAccessControlModelV2ToCoreDataFromLocalZone:(id)arg0 managedObjectContext:(id)arg1 rootShareObject:(id)arg2 ;
+(void)_fetchAndMigrateMediaContentProfileAccessControlModelToCoreDataFromLocalZone:(id)arg0 managedObjectContext:(id)arg1 rootShareObject:(id)arg2 ;
+(void)_fetchAndMigratePhotosPersonManagerSettingsFromLocalZone:(id)arg0 managedObjectContext:(id)arg1 rootShareObject:(id)arg2 ;
+(void)_fetchAndMigrateUserListeningHistoryUpdatedControlModelToCoreDataFromLocalZone:(id)arg0 managedObjectContext:(id)arg1 rootShareObject:(id)arg2 ;
+(void)_saveSharedUserSettingsToCoreData:(id)arg0 managedObjectContext:(id)arg1 rootShareObject:(id)arg2 ;
+(void)migrateHH1SettingsToHH2ForSharedUserWithUUID:(id)arg0 homeUUID:(id)arg1 privateZone:(id)arg2 backingStoreContext:(id)arg3 ;
+(void)migrateHH1SettingsToHH2ForSharedUserWithUUID:(id)arg0 homeUUID:(id)arg1 sharedZone:(id)arg2 backingStoreContext:(id)arg3 ;
-(BOOL)_isExplicitContentValueEnabledForAppleMediaAccessory:(id)arg0 ;
-(BOOL)cloudShareTrustManager:(id)arg0 shouldShareTrustWithUser:(id)arg1 ;
-(BOOL)hasDeviceWithHomeKitVersionGreaterThanVersion:(id)arg0 ;
-(BOOL)isAccountEqualWithUser:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isOwnerCapableForTrustManager:(id)arg0 ;
-(BOOL)matchingPairingIdentityIdentifier:(id)arg0 ;
-(BOOL)refreshDisplayName;
-(BOOL)requiresMakoSupport;
-(BOOL)updateAdministrator:(BOOL)arg0 ;
-(BOOL)userDataController:(id)arg0 isAccessoryUserListeningHistoryUpdateCapable:(id)arg1 ;
-(BOOL)userDataController:(id)arg0 isAppleMediaAccessory:(id)arg1 ;
-(BOOL)userDataController:(id)arg0 isHAPAccessory:(id)arg1 ;
-(BOOL)userDataController:(id)arg0 isMediaContentProfileCapableAccessoryID:(id)arg1 ;
-(BOOL)userDataController:(id)arg0 isPersonalRequestCapableAccessoryID:(id)arg1 ;
-(NSInteger)sharedUserSettingsLogEventBackingStoreControllerRunState;
-(NSUInteger)_compatiblePrivilege;
-(NSUInteger)allowedRemoteEventAccessUserTypes;
-(NSUInteger)defaultAnnounceUserAccessLevel;
-(id)account;
-(id)accountHandle;
-(id)allAccessoryUUID;
-(id)announceNotificationFileName;
-(id)announceNotificationFileNameForUserUUID:(id)arg0 ;
-(id)attributeDescriptions;
-(id)backingStoreController:(id)arg0 createParticipantManagerForCloudZone:(id)arg1 ;
-(id)backingStoreObjects:(NSInteger)arg0 ;
-(id)dictionaryEncoding;
-(id)dumpState;
-(id)homeForCloudShareTrustManager:(id)arg0 ;
-(id)initWithAccountHandle:(id)arg0 home:(id)arg1 pairingIdentity:(id)arg2 privilege:(NSUInteger)arg3 ;
-(id)initWithAccountHandle:(id)arg0 home:(id)arg1 pairingIdentity:(id)arg2 privilege:(NSUInteger)arg3 dataSource:(id)arg4 ;
-(id)initWithAccountHandle:(id)arg0 homeUUID:(id)arg1 pairingIdentity:(id)arg2 privilege:(NSUInteger)arg3 ;
-(id)initWithAccountHandle:(id)arg0 homeUUID:(id)arg1 pairingIdentity:(id)arg2 privilege:(NSUInteger)arg3 dataSource:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModelObject:(id)arg0 ;
-(id)logIdentifier;
-(id)messageDestination;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)ownerForCloudShareTrustManager:(id)arg0 ;
-(id)ownerForUserSettingsBackingStoreController:(id)arg0 ;
-(id)ownerPrivateSettingsAsDictionary;
-(id)privateSettingValuesByKeyPath;
-(id)privateZoneControllerForUserDataController:(id)arg0 ;
-(id)privateZoneName;
-(id)pushTokensForDevicesObservingSubjectDevice:(id)arg0 subActivity:(id)arg1 ;
-(id)settingsControllerFollowerKeyPaths:(id)arg0 ;
-(id)sharedSettingValuesByKeyPath;
-(id)sharedSettingsAsDictionary;
-(id)sharedZoneControllerForUserDataController:(id)arg0 ;
-(id)sharedZoneName;
-(id)shortDescription;
-(id)trustTargetUUID;
-(id)updatePhotosPersonManagerSettings:(id)arg0 ;
-(id)zoneNameForCloudShareTrustManager:(id)arg0 ;
-(void)__handleAddedAccount:(id)arg0 ;
-(void)__handleRemovedAccount:(id)arg0 ;
-(void)_handleAnnounceSettingsUpdate:(id)arg0 ;
-(void)_handleAssistantAccessControlUpdate:(id)arg0 ;
-(void)_handleCloudShareWithOwnerMessageError;
-(void)_handleMediaContentProfileAccessControlUpdate:(id)arg0 ;
-(void)_handleMultiUserSharePayloadRequest:(id)arg0 ;
-(void)_handleNeedsiTunesMultiUserRepair:(id)arg0 ;
-(void)_handlePairingIdentityRequest:(id)arg0 ;
-(void)_handleShareClientRepairRequest:(id)arg0 ;
-(void)_handleShareLookupInfoRequest:(id)arg0 ;
-(void)_handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(id)arg0 ;
-(void)_migrateAnnounceNotificationModeIfNeeded;
-(void)_readAnnounceNotificationModeFromLocalStore;
-(void)_recoverTrustManagerDueToUUIDChange;
-(void)_recoverUserSettingsDueToUUIDChange;
-(void)_removeAnnounceNotificationModeFileFromDiskForUserUUID:(id)arg0 ;
-(void)_saveAnnounceSettingsToLocalStore:(NSUInteger)arg0 ;
-(void)_sendAccountMessage:(id)arg0 payload:(id)arg1 deviceCapabilities:(id)arg2 multicast:(BOOL)arg3 completion:(id)arg4 ;
-(void)_sendSecureShareClientPayloadToMostEligibleDevice:(id)arg0 completion:(id)arg1 ;
-(void)_transactionAccessorySettingsUpdated:(id)arg0 ;
-(void)_transactionPhotosPersonManagerSettingsUpdated:(id)arg0 ;
-(void)_transactionUserSettingsUpdated:(id)arg0 ;
-(void)_transactionUserUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)_updateAnnounceNotificationModeToLocalStore:(NSUInteger)arg0 managedObjectContext:(id)arg1 ;
-(void)applyConditionalValueUpdateToModels:(id)arg0 ;
-(void)backingStoreController:(id)arg0 didUpdatePhotosPersonManagerSettingsModel:(id)arg1 previousPhotosPersonManagerSettingsModel:(id)arg2 ;
-(void)cloudShareTrustManager:(id)arg0 didFetchOwnerCloudShareID:(id)arg1 ;
-(void)cloudShareTrustManager:(id)arg0 didRemoveUserWithUUID:(id)arg1 ;
-(void)configureCloudShareTrustManager;
-(void)configurePersonSettingsManager;
-(void)configurePhotosPersonDataManager;
-(void)configureWithHome:(id)arg0 ;
-(void)dealloc;
-(void)deregisterForMessages;
-(void)deregisterIDSActivityObserver:(id)arg0 ;
-(void)deregisterIDSActivityObserver:(id)arg0 subActivity:(id)arg1 subjectDevice:(id)arg2 ;
-(void)deregisterIdentity;
-(void)didFinishConfiguringForCloudShareTrustManager:(id)arg0 ;
-(void)didRemoveTrustZoneInCloudShareTrustManager:(id)arg0 ;
-(void)didStartBackingStoreController:(id)arg0 ;
-(void)didStartLocalZoneForBackingStoreController:(id)arg0 ;
-(void)didStopBackingStoreController:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleAssistantAccessControlUpdate:(id)arg0 ;
-(void)handleMediaContentProfileAccessControlUpdate:(id)arg0 ;
-(void)handleRemovedAccessory:(id)arg0 ;
-(void)handleUserDataControllerInitialized:(id)arg0 ;
-(void)handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(id)arg0 ;
-(void)initializeUserSettingsWithHome:(id)arg0 ;
-(void)migrateCloudZone:(id)arg0 migrationQueue:(id)arg1 completion:(id)arg2 ;
-(void)postUserSettingsUpdatedNotificationWithReason:(id)arg0 ;
-(void)recoverUserCloudDataDueToUUIDChangeFromOldUUID:(id)arg0 ;
-(void)registerForMessages;
-(void)registerIDSActivityObserver:(id)arg0 subActivity:(id)arg1 subjectDevice:(id)arg2 ;
-(void)registerIdentity;
-(void)removeAccessoriesFromAssistantAccessControlList:(id)arg0 ;
-(void)removeCloudData;
-(void)removeCloudShareID;
-(void)setAccountHandle:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)unconfigure;
-(void)updateCloudShareID:(id)arg0 ;
-(void)updateIDSActivityObserver:(id)arg0 ;
-(void)updateSharedBackingStoreControllerParticipants;
-(void)userDataControllerDidUpdateAssistantAccessControl:(id)arg0 ;
-(void)userDataControllerDidUpdateMediaContentProfile:(id)arg0 ;
-(void)userDataControllerDidUpdateUserListeningHistoryUpdateControl:(id)arg0 ;


@end


#endif