// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMACCESSORY_H
#define HMACCESSORY_H

@class HMFUnfairLock, NSUUID, NSNumber, NSString, NSArray, NSSet, HMFPairingIdentity, NSDictionary, HMFSoftwareVersion, HMFWiFiNetworkInfo;
@protocol HMMediaDestinationControllerDataSource, HMFLogging, HMFObject, HMAccessorySettingsContainer, HMControllable, HMMediaDestinationInternal, HMMutableApplicationData, HMObjectMerge, HMFMessageReceiver, NSSecureCoding, HMApplicationData, HMMediaDestination, HMAccessoryDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDevice.h"
#import "HMSoftwareUpdateController.h"
#import "HMMutableArray.h"
#import "HMApplicationData.h"
#import "HMMediaDestination.h"
#import "HMMediaDestinationController.h"
#import "HMAccessoryCategory.h"
#import "HMHome.h"
#import "_HMContext.h"
#import "HMNetworkConfigurationProfile.h"
#import "HMRemoteLoginHandler.h"
#import "HMRoom.h"
#import "HMAccessorySettings.h"
#import "HMSupportedAccessoryDiagnostics.h"
#import "HMSymptomsHandler.h"

@interface HMAccessory : NSObject <HMMediaDestinationControllerDataSource, HMFLogging, HMFObject, HMAccessorySettingsContainer, HMControllable, HMMediaDestinationInternal, HMMutableApplicationData, HMObjectMerge, HMFMessageReceiver, NSSecureCoding, HMApplicationData, HMMediaDestination>

 {
    HMFUnfairLock *_lock;
    HMDevice *_device;
    HMSoftwareUpdateController *_softwareUpdateController;
    NSUUID *_endpointIdentifier;
}


@property (retain, nonatomic) NSNumber *accessoryFlags; // ivar: _accessoryFlags
@property (retain, nonatomic) HMMutableArray *accessoryProfiles; // ivar: _accessoryProfiles
@property (readonly, nonatomic) NSUInteger accessoryReprovisionState;
@property (nonatomic) NSUInteger accessoryReprovisionState; // ivar: _accessoryReprovisionState
@property (copy) NSUUID *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic, getter=isAdditionalSetupRequired) BOOL additionalSetupRequired;
@property (nonatomic) NSUInteger additionalSetupStatus; // ivar: _additionalSetupStatus
@property (retain, nonatomic) HMApplicationData *applicationData; // ivar: _applicationData
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (copy, nonatomic) NSString *assistantIdentifier; // ivar: _assistantIdentifier
@property (readonly, nonatomic) NSInteger associationOptions;
@property (nonatomic) NSInteger associationOptions; // ivar: _associationOptions
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (retain) HMMediaDestination *audioDestination; // ivar: _audioDestination
@property (readonly) HMMediaDestinationController *audioDestinationController;
@property (retain) HMMediaDestinationController *audioDestinationController; // ivar: _audioDestinationController
@property (readonly, copy) NSUUID *audioDestinationGroupIdentifier;
@property (readonly, copy) NSString *audioDestinationIdentifier;
@property (readonly, copy) NSArray *audioDestinationMediaProfiles;
@property (readonly, copy) NSString *audioDestinationName;
@property (readonly, copy) NSString *audioDestinationParentIdentifier;
@property (readonly) NSInteger audioDestinationType;
@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;
@property (readonly, nonatomic, getter=isBridged) BOOL bridged;
@property (readonly, nonatomic) NSArray *bridgedAccessories;
@property (nonatomic) BOOL bridgedAccessory; // ivar: _bridgedAccessory
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (copy) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy, nonatomic) NSArray *cameraProfiles;
@property (retain, nonatomic) HMAccessoryCategory *category; // ivar: _category
@property (readonly, nonatomic) NSInteger certificationStatus;
@property (nonatomic) NSInteger certificationStatus; // ivar: _certificationStatus
@property (readonly, copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSString *configuredName; // ivar: _configuredName
@property (readonly, weak) HMHome *containerHome;
@property (retain) _HMContext *context; // ivar: _context
@property (copy, nonatomic) NSArray *controlTargetUUIDs; // ivar: _controlTargetUUIDs
@property (readonly, getter=isControllable) BOOL controllable; // ivar: _controllable
@property (readonly, getter=isCurrentAccessory) BOOL currentAccessory;
@property (getter=isCurrentAccessory) BOOL currentAccessory; // ivar: _currentAccessory
@property (copy, nonatomic) HMMutableArray *currentServices; // ivar: _currentServices
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMAccessoryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, nonatomic, getter=isFirmwareUpdateAvailable) BOOL firmwareUpdateAvailable;
@property (nonatomic, getter=isFirmwareUpdateAvailable) BOOL firmwareUpdateAvailable; // ivar: _firmwareUpdateAvailable
@property (copy, nonatomic) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (readonly) BOOL hasOnboardedForNaturalLighting;
@property BOOL hasOnboardedForNaturalLighting; // ivar: _hasOnboardedForNaturalLighting
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HMHome *home;
@property (weak, nonatomic) HMHome *home; // ivar: _home
@property (readonly) NSUInteger homePodVariant;
@property NSUInteger homePodVariant; // ivar: _homePodVariant
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSArray *identifiersForBridgedAccessories;
@property (readonly) NSSet *lightProfiles;
@property (copy, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) HMNetworkConfigurationProfile *networkConfigurationProfile;
@property (readonly) NSUUID *networkProtectionGroupUUID; // ivar: _networkProtectionGroupUUID
@property (nonatomic) BOOL paired; // ivar: _paired
@property (readonly, copy) HMFPairingIdentity *pairingIdentity; // ivar: _pairingIdentity
@property (readonly, copy) NSString *pendingConfigurationIdentifier;
@property (copy) NSString *pendingConfigurationIdentifier; // ivar: _pendingConfigurationIdentifier
@property (copy) NSUUID *preferredMediaUserUUID; // ivar: _preferredMediaUserUUID
@property NSUInteger preferredUserSelectionType; // ivar: _preferredUserSelectionType
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSArray *profiles;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, getter=isReachable) BOOL reachable; // ivar: _reachable
@property (readonly, nonatomic) NSInteger reachableTransports;
@property (nonatomic) NSInteger reachableTransports; // ivar: _reachableTransports
@property (readonly, nonatomic) HMRemoteLoginHandler *remoteLoginHandler;
@property (retain) HMRemoteLoginHandler *remoteLoginHandler; // ivar: _remoteLoginHandler
@property (weak, nonatomic) HMRoom *room; // ivar: _room
@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (copy) NSString *serialNumber; // ivar: _serialNumber
@property (readonly, copy) NSDictionary *serializedDictionaryRepresentation;
@property (readonly, copy, nonatomic) NSArray *services;
@property (readonly) HMAccessorySettings *settings; // ivar: _settings
@property (readonly, copy) NSString *shortDescription;
@property (copy) HMFSoftwareVersion *softwareVersion; // ivar: _softwareVersion
@property (readonly, copy, nonatomic) NSString *storeID;
@property (copy) NSString *storeID; // ivar: _storeID
@property (readonly) Class superclass;
@property (retain, nonatomic) HMSupportedAccessoryDiagnostics *supportedDiagnostics; // ivar: _supportedDiagnostics
@property NSUInteger supportedStereoPairVersions; // ivar: _supportedStereoPairVersions
@property (readonly) BOOL supportsAccessCodes;
@property BOOL supportsAccessCodes; // ivar: _supportsAccessCodes
@property (readonly, nonatomic) BOOL supportsAnnounce;
@property (nonatomic) BOOL supportsAnnounce; // ivar: _supportsAnnounce
@property (readonly) BOOL supportsAudioDestination;
@property (readonly) BOOL supportsAudioGroup;
@property (readonly) BOOL supportsCHIP;
@property BOOL supportsCHIP; // ivar: _supportsCHIP
@property (readonly, nonatomic) BOOL supportsCompanionInitiatedRestart;
@property (nonatomic) BOOL supportsCompanionInitiatedRestart; // ivar: _supportsCompanionInitiatedRestart
@property (readonly) BOOL supportsCoordinationDoorbellChime;
@property BOOL supportsCoordinationDoorbellChime; // ivar: _supportsCoordinationDoorbellChime
@property (nonatomic) BOOL supportsDiagnosticsTransfer; // ivar: _supportsDiagnosticsTransfer
@property (readonly, nonatomic) BOOL supportsDoorbellChime;
@property BOOL supportsDoorbellChime; // ivar: _supportsDoorbellChime
@property (readonly) BOOL supportsIdentify; // ivar: _supportsIdentify
@property (nonatomic) BOOL supportsMediaAccessControl; // ivar: _supportsMediaAccessControl
@property (readonly, nonatomic) BOOL supportsMultiUser;
@property (nonatomic) BOOL supportsMultiUser; // ivar: _supportsMultiUser
@property (readonly, nonatomic) BOOL supportsMusicAlarm;
@property (nonatomic) BOOL supportsMusicAlarm; // ivar: _supportsMusicAlarm
@property (readonly) BOOL supportsPreferredMediaUser;
@property BOOL supportsPreferredMediaUser; // ivar: _supportsPreferredMediaUser
@property (nonatomic) BOOL supportsTargetControl; // ivar: _supportsTargetControl
@property (nonatomic) BOOL supportsTargetController; // ivar: _supportsTargetController
@property (readonly) BOOL supportsThirdPartyMusic;
@property BOOL supportsThirdPartyMusic; // ivar: _supportsThirdPartyMusic
@property (readonly, nonatomic) BOOL supportsWalletKey;
@property (nonatomic) BOOL supportsWalletKey; // ivar: _supportsWalletKey
@property (readonly, nonatomic) BOOL suspendCapable;
@property (nonatomic) BOOL suspendCapable; // ivar: _suspendCapable
@property (readonly, nonatomic) NSUInteger suspendedState;
@property (nonatomic) NSUInteger suspendedState; // ivar: _suspendedState
@property (readonly, nonatomic) HMSymptomsHandler *symptomsHandler;
@property (copy) HMSymptomsHandler *symptomsHandler; // ivar: _symptomsHandler
@property (nonatomic) BOOL targetControllerHardwareSupport; // ivar: _targetControllerHardwareSupport
@property (readonly, copy, nonatomic) NSArray *televisionProfiles;
@property (readonly, nonatomic) NSUInteger transportTypes;
@property (nonatomic) NSUInteger transportTypes; // ivar: _transportTypes
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (copy, nonatomic) NSArray *uniqueIdentifiersForBridgedAccessories; // ivar: _uniqueIdentifiersForBridgedAccessories
@property (readonly, copy, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) HMFWiFiNetworkInfo *wifiNetworkInfo;
@property (retain, nonatomic) HMFWiFiNetworkInfo *wifiNetworkInfo; // ivar: _wifiNetworkInfo


+(BOOL)supportsSecureCoding;
+(id)_cameraProfilesForAccessoryProfiles:(id)arg0 ;
+(id)_lightProfilesForAccessoryProfiles:(id)arg0 ;
+(id)_mediaProfilesForAccessoryProfiles:(id)arg0 ;
+(id)_networkConfigurationProfilesForCoder:(id)arg0 accessoryIdentifier:(id)arg1 ;
+(id)_networkRouterProfilesForAccessoryProfiles:(id)arg0 ;
+(id)_siriEndpointProfilesForAccessoryProfiles:(id)arg0 ;
+(id)_televisionProfilesForAccessoryServices:(id)arg0 ;
+(id)accessoryWithAccessoryReference:(id)arg0 home:(id)arg1 ;
+(id)accessoryWithSerializedDictionaryRepresentation:(id)arg0 home:(id)arg1 ;
+(id)logCategory;
-(BOOL)__updateSymptomsHandler:(id)arg0 operations:(id)arg1 ;
-(BOOL)_mergeControlTargets:(id)arg0 operations:(id)arg1 ;
-(BOOL)_mergeServices:(id)arg0 operations:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg0 operations:(id)arg1 ;
-(BOOL)_updateFromAccessory:(id)arg0 ;
-(BOOL)isSuspendCapable;
-(BOOL)isUserNotifiedOfSoftwareUpdate;
-(id)_accessoryInformationService;
-(id)_findCharacteristic:(id)arg0 forService:(id)arg1 ;
-(id)_findService:(id)arg0 ;
-(id)_findServiceWithUniqueIdentifier:(id)arg0 ;
-(id)_handleMultipleCharacteristicsUpdated:(id)arg0 informDelegate:(BOOL)arg1 ;
-(id)_privateDelegate;
-(id)_valueForCharacteristic:(id)arg0 ofService:(id)arg1 ;
-(id)controlTargets;
-(id)device;
-(id)endpointIdentifier;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(id)logIdentifier;
-(id)mediaDestinationController:(id)arg0 destinationWithIdentifier:(id)arg1 ;
-(id)mediaProfile;
-(id)networkRouterProfile;
-(id)preferredMediaUser;
-(id)siriEndpointIdentifier;
-(id)siriEndpointProfile;
-(id)softwareUpdateController;
-(id)targetControllers;
-(void)__configureWithContext:(id)arg0 home:(id)arg1 ;
-(void)_auditPairingsWithCompletionHandler:(id)arg0 ;
-(void)_configureProfilesWithContext:(id)arg0 ;
-(void)_copyFrom:(id)arg0 ;
-(void)_deleteSiriHistoryWithCompletion:(id)arg0 ;
-(void)_handleAccessoryCategoryChanged:(id)arg0 ;
-(void)_handleAccessoryControllableChanged:(id)arg0 ;
-(void)_handleAccessoryFlagsChanged:(id)arg0 ;
-(void)_handleAccessoryNotificationsUpdated:(id)arg0 ;
-(void)_handleCharacteristicValueUpdated:(id)arg0 ;
-(void)_handleCharacteristicsUpdated:(id)arg0 ;
-(void)_handleConnectivityChanged:(id)arg0 ;
-(void)_handleControlTargetsUpdatedMessage:(id)arg0 ;
-(void)_handleMultiUserSupportUpdatedMessage:(id)arg0 ;
-(void)_handlePairingIdentityUpdate:(id)arg0 ;
-(void)_handlePairingStateChanged:(id)arg0 ;
-(void)_handleRenamed:(id)arg0 ;
-(void)_handleRootSettingsUpdated:(id)arg0 ;
-(void)_handleServiceConfigurationState:(id)arg0 ;
-(void)_handleServiceDefaultNameUpdate:(id)arg0 ;
-(void)_handleServiceMediaSourceIdentifierUpdated:(id)arg0 ;
-(void)_handleServiceRenamed:(id)arg0 ;
-(void)_handleServiceSubtype:(id)arg0 ;
-(void)_handleServiceTypeAssociated:(id)arg0 ;
-(void)_handleSupportsCompanionInitiatedRestartUpdatedMessage:(id)arg0 ;
-(void)_handleSupportsDiagnosticsTransferUpdateMessage:(id)arg0 ;
-(void)_handleSymptomsHandlerUpdatedMessage:(id)arg0 ;
-(void)_handleTargetControlSupportUpdatedMessage:(id)arg0 ;
-(void)_identifyWithCompletionHandler:(id)arg0 ;
-(void)_invokeDidUpdateSupportsWalletKeyDelegate:(BOOL)arg0 ;
-(void)_listPairingsWithCompletionHandler:(id)arg0 ;
-(void)_mergeProfileObjects:(id)arg0 currentOperations:(id)arg1 ;
-(void)_notifyClientsOfDiagnosticsTransferSupportUpdate;
-(void)_notifyClientsOfMultiUserSupportUpdate;
-(void)_notifyClientsOfSupportsCompanionInitiatedRestartUpdate;
-(void)_notifyClientsOfSupportsMusicAlarmUpdate;
-(void)_notifyClientsOfSymptomsHandlerAddedOrRemoved:(BOOL)arg0 ;
-(void)_notifyClientsOfTargetControlSupportUpdate;
-(void)_notifyDelegateOfAddedControlTarget:(id)arg0 ;
-(void)_notifyDelegateOfAppDataUpdateForService:(id)arg0 ;
-(void)_notifyDelegateOfRemovedControlTarget:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedSettings:(id)arg0 ;
-(void)_notifyDelegatesOfAdditionalSetupRequiredChange;
-(void)_notifyDelegatesOfUpdatedControllable;
-(void)_readValueForCharacteristic:(id)arg0 completionHandler:(id)arg1 ;
-(void)_recomputeAssistantIdentifier;
-(void)_setNotifyValue:(BOOL)arg0 forCharacteristic:(id)arg1 ;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)_updateApplicationData:(id)arg0 forService:(id)arg1 completionHandler:(id)arg2 ;
-(void)_updateAssociatedServiceType:(id)arg0 forService:(id)arg1 completionHandler:(id)arg2 ;
-(void)_updateAuthorizationData:(id)arg0 forService:(id)arg1 characteristic:(id)arg2 completionHandler:(id)arg3 ;
-(void)_updateName:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateName:(id)arg0 forService:(id)arg1 completionHandler:(id)arg2 ;
-(void)_updateRoom:(id)arg0 completionHandler:(id)arg1 ;
-(void)_writeValue:(id)arg0 forCharacteristic:(id)arg1 completionHandler:(id)arg2 ;
-(void)activateCHIPPairingModeWithCompletion:(id)arg0 ;
-(void)addControlTarget:(id)arg0 completionHandler:(id)arg1 ;
-(void)addControlTargetUUIDs:(id)arg0 ;
-(void)callCompletionHandler:(id)arg0 ;
// -(void)callCompletionHandler:(id)arg0 error:(unk)arg1  ;
-(void)clearUserNotifiedOfSoftwareUpdateWithCompletion:(id)arg0 ;
-(void)deleteSiriHistoryWithCompletion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchCHIPPairingsWithCompletion:(id)arg0 ;
-(void)handleRuntimeStateUpdate:(id)arg0 completionHandler:(id)arg1 ;
-(void)identifyWithCompletionHandler:(id)arg0 ;
-(void)initiateDiagnosticsTransferWithCompletionHandler:(id)arg0 ;
-(void)initiateDiagnosticsTransferWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)markAsUserNotifiedOfSoftwareUpdateWithCompletion:(id)arg0 ;
-(void)markAsUserNotifiedOfSoftwareUpdateWithVersion:(id)arg0 completion:(id)arg1 ;
-(void)notifyDelegateOfAppDataUpdateForService:(id)arg0 ;
-(void)notifyDelegateOfAudioDestinationControllerUpdate;
-(void)notifyDelegateOfAudioDestinationUpdate;
-(void)notifyDelegateUpdatedPreferredMediaUser;
-(void)notifyDelegateUpdatedSupportsPreferredMediaUser;
-(void)pairingIdentityWithPrivateKey:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)queryAdvertisementInformationWithCompletionHandler:(id)arg0 ;
-(void)recomputeAssistantIdentifier;
-(void)removeCHIPPairings:(id)arg0 completion:(id)arg1 ;
-(void)removeControlTarget:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeControlTargetUUIDs:(id)arg0 ;
-(void)resetControlTargetsWithCompletionHandler:(id)arg0 ;
-(void)setCHIPPairingModeActive:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)setDevice:(id)arg0 ;
-(void)setSoftwareUpdateController:(id)arg0 ;
-(void)updateAccessoryInfo:(id)arg0 ;
-(void)updateAccessoryName:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateApplicationData:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateApplicationData:(id)arg0 forService:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateAudioDestinationSupportedOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)updateName:(id)arg0 completionHandler:(id)arg1 ;
-(void)updatePendingConfigurationIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)updatePreferredMediaUser:(id)arg0 completionHandler:(id)arg1 ;
-(void)updatePreferredMediaUserSelectionType:(NSUInteger)arg0 user:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateShouldProcessTransactionRemovalWithValue:(BOOL)arg0 completion:(id)arg1 ;
-(void)validatePairingAuthMethodWithCompletion:(id)arg0 ;
-(void)wakeSuspendedAccessoryWithWakeType:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif