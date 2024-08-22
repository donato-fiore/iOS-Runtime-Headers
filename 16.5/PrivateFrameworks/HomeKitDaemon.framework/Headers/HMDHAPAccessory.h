// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHAPACCESSORY_H
#define HMDHAPACCESSORY_H

@class NSMutableArray, NSMutableDictionary, HMFTimer, NSNumber, NSMutableSet, NSDictionary, NSArray, NSData, HMCameraUserNotificationSettings, NSSet, HMMTRAccessoryServer, NSString, NSDate, HMFPairingIdentity, HMSupportedAccessoryDiagnostics;
@protocol HMDSiriEndpointProfileMetricsDispatcherDataSource, HMDSiriEndpointProfileMetricsDispatcherFactory, HMMTRAccessoryServerDelegate, HMDAccessoryMinimumUserPrivilegeCapable, HMDServiceOwner, HAPAccessoryDelegate, HMFTimerDelegate, HAPAccessoryServerNotification, HMDAccessoryUserManagement, HMDDataStreamSocketController, HMDMessageRouter;


#import "HMDAccessory.h"
#import "HMDAccessoryAdvertisement.h"
#import "HMDBulletinBoard.h"
#import "HMDUser.h"
#import "HMDCameraProfileSettingsManager.h"
#import "HMDCHIPAccessoryStorage.h"
#import "HMFConnectivityInfo.h"
#import "HMDDataStreamController.h"
#import "HMDAccessoryDiagnosticsManager.h"
#import "HMDDoorbellChimeController.h"
#import "HMDAccessoryFirmwareUpdateProfile.h"
#import "HMDHAPMetadata.h"
#import "HMDLowPowerModeProfile.h"
#import "HMDMediaProfile.h"
#import "HMDNetworkRouterController.h"
#import "HMDNetworkRouterProfile.h"
#import "HMDNetworkRouterSatelliteProfile.h"
#import "HMDPendingCharacteristic.h"
#import "HMDAnalyticsHAPServiceData.h"
#import "HMDService.h"
#import "HMDAccessorySessionMetric.h"
#import "HMDSiriEndpointProfile.h"
#import "HMDSiriEndpointProfileMetricsDispatcher.h"
#import "HMDAccessorySymptomHandler.h"
#import "HMDTargetControllerManager.h"
#import "HMDWiFiManagementController.h"

@interface HMDHAPAccessory : HMDAccessory <HMDSiriEndpointProfileMetricsDispatcherDataSource, HMDSiriEndpointProfileMetricsDispatcherFactory, HMMTRAccessoryServerDelegate, HMDAccessoryMinimumUserPrivilegeCapable, HMDServiceOwner, HAPAccessoryDelegate, HMFTimerDelegate, HAPAccessoryServerNotification, HMDAccessoryUserManagement>

 {
    NSMutableArray *_transportInformationInstances;
    NSMutableArray *_services;
    BOOL _supportsTargetController;
}


@property (retain) NSMutableDictionary *accessCodeCache; // ivar: _accessCodeCache
@property (retain, nonatomic) HMDAccessoryAdvertisement *accessoryAdvertisement; // ivar: _accessoryAdvertisement
@property (retain, nonatomic) HMFTimer *accessoryDiscoveryBackoffTimer; // ivar: _accessoryDiscoveryBackoffTimer
@property (copy, nonatomic) NSNumber *accessoryFlags; // ivar: _accessoryFlags
@property (retain, nonatomic) HMFTimer *accessoryKeyRefreshTimer; // ivar: _accessoryKeyRefreshTimer
@property (nonatomic) NSUInteger activationAttempts; // ivar: _activationAttempts
@property (retain, nonatomic) NSMutableSet *activeSessionRestoreClients; // ivar: _activeSessionRestoreClients
@property (readonly, copy) NSDictionary *assistantObject;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, getter=isAutomaticThirdPartyAccessorySoftwareUpdateEnabled) BOOL automaticThirdPartyAccessorySoftwareUpdateEnabled;
@property (copy, nonatomic) NSNumber *backedOffStateNumber; // ivar: _backedOffStateNumber
@property (copy, nonatomic) NSData *broadcastKey; // ivar: _broadcastKey
@property (retain, nonatomic) HMDBulletinBoard *bulletinBoard; // ivar: _bulletinBoard
@property (retain, nonatomic) HMDUser *cachedRemovedUser; // ivar: _cachedRemovedUser
@property (readonly, copy) HMCameraUserNotificationSettings *cameraProfileNotificationSettings;
@property (copy, nonatomic) HMCameraUserNotificationSettings *cameraProfileNotificationSettings; // ivar: _cameraProfileNotificationSettings
@property (readonly, nonatomic) HMDCameraProfileSettingsManager *cameraProfileSettingsManager; // ivar: _cameraProfileSettingsManager
@property (readonly, copy, nonatomic) NSSet *cameraProfiles;
@property (nonatomic) NSInteger certificationStatus; // ivar: _certificationStatus
@property (readonly, nonatomic) HMMTRAccessoryServer *chipAccessoryServer;
@property (readonly, copy) NSNumber *chipNodeId;
@property (retain, nonatomic) HMDCHIPAccessoryStorage *chipStorage; // ivar: _chipStorage
@property (readonly, getter=isClientRegisteredForNotifications) BOOL clientRegisteredForNotifications;
@property NSInteger communicationProtocol; // ivar: _communicationProtocol
@property (retain, nonatomic) HMFConnectivityInfo *connectivityInfo; // ivar: _connectivityInfo
@property (readonly, copy) NSSet *currentActiveSessionRestoreClients;
@property (retain, nonatomic) HMDDataStreamController *dataStreamController; // ivar: _dataStreamController
@property (readonly) NSObject<HMDDataStreamSocketController> *dataStreamSocketController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMDAccessoryDiagnosticsManager *diagnosticsManager;
@property (retain, nonatomic) HMDAccessoryDiagnosticsManager *diagnosticsManager; // ivar: _diagnosticsManager
@property (retain, nonatomic) NSMutableArray *discoveredServices; // ivar: _discoveredServices
@property (retain, nonatomic) HMDDoorbellChimeController *doorbellChimeController; // ivar: _doorbellChimeController
@property (readonly, nonatomic) NSUInteger enhancedAuthMethod;
@property (readonly) HMDAccessoryFirmwareUpdateProfile *firmwareUpdateProfile;
@property (retain, nonatomic) HMDAccessoryFirmwareUpdateProfile *firmwareUpdateProfile; // ivar: _firmwareUpdateProfile
@property (readonly, copy, nonatomic) NSNumber *hapInstanceId;
@property (readonly) HMDHAPMetadata *hapMetadata; // ivar: _hapMetadata
@property (readonly, copy, nonatomic) NSArray *hapServicesListForAnalytics; // ivar: _hapServicesListForAnalytics
@property (nonatomic) BOOL hardwareSupport; // ivar: _hardwareSupport
@property (readonly) BOOL hasCameraStreamService;
@property (copy) NSNumber *hasOnboardedForNaturalLighting; // ivar: _hasOnboardedForNaturalLighting
@property (nonatomic) BOOL hasPostedBulletinForAccessCodeOnboarding; // ivar: _hasPostedBulletinForAccessCodeOnboarding
@property (nonatomic) BOOL hasPostedBulletinForWalletKeyOnboarding; // ivar: _hasPostedBulletinForWalletKeyOnboarding
@property (readonly) BOOL hasResidentWithFirmwareUpdatesSupport;
@property (readonly) BOOL hasSiriEndpointService;
@property BOOL hasSiriEndpointService; // ivar: _hasSiriEndpointService
@property (readonly) BOOL hasSiriSettingsService;
@property (readonly) BOOL hasSmartSpeakerService;
@property (readonly) BOOL hasTelevisionService;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *identifiersForBridgedAccessories; // ivar: _identifiersForBridgedAccessories
@property (readonly) NSUInteger identityType;
@property (readonly, nonatomic) NSSet *initialServiceTypeUUIDs; // ivar: _initialServiceTypeUUIDs
@property (readonly, nonatomic) NSNumber *internalEnhancedAuthConfigNumber; // ivar: _internalEnhancedAuthConfigNumber
@property (readonly, nonatomic) NSNumber *internalEnhancedAuthMethod; // ivar: _internalEnhancedAuthMethod
@property (retain, nonatomic) NSNumber *internalThreadActive; // ivar: _internalThreadActive
@property (retain, nonatomic) NSNumber *internalThreadCapabilities; // ivar: _internalThreadCapabilities
@property (retain, nonatomic) NSNumber *internalThreadStatus; // ivar: _internalThreadStatus
@property (readonly) BOOL isAppleAccessory;
@property (readonly, nonatomic) BOOL isCertifiedForSiriEndpoint;
@property BOOL keyGenerationInProgress; // ivar: _keyGenerationInProgress
@property unsigned char keyGenerationType; // ivar: _keyGenerationType
@property (copy, nonatomic) NSNumber *keyUpdatedStateNumber; // ivar: _keyUpdatedStateNumber
@property (copy, nonatomic) NSDate *keyUpdatedTime; // ivar: _keyUpdatedTime
@property (nonatomic) CGFloat lastLinkChangeSessionCheckTime; // ivar: _lastLinkChangeSessionCheckTime
@property (nonatomic) NSUInteger lastSessionStatus; // ivar: _lastSessionStatus
@property (readonly) NSSet *lightProfiles;
@property (readonly, nonatomic) HMDLowPowerModeProfile *lpmProfile;
@property (retain, nonatomic) NSNumber *matterNodeID; // ivar: _matterNodeID
@property (copy, nonatomic) NSNumber *matterProductID; // ivar: _matterProductID
@property (copy, nonatomic) NSNumber *matterVendorID; // ivar: _matterVendorID
@property (readonly) HMDMediaProfile *mediaProfile;
@property (readonly, nonatomic) unsigned short metric_threadCapabilities;
@property (retain, nonatomic) NSNumber *needsOnboarding; // ivar: _needsOnboarding
@property (readonly, nonatomic) HMDNetworkRouterController *networkRouterController;
@property (retain, nonatomic) HMDNetworkRouterController *networkRouterController; // ivar: _networkRouterController
@property (readonly, nonatomic) HMDNetworkRouterProfile *networkRouterProfile;
@property (readonly, nonatomic) HMDNetworkRouterSatelliteProfile *networkRouterSatelliteProfile;
@property (readonly, copy) NSData *nfcReaderIdentifier;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (nonatomic) NSUInteger pairingAttempts; // ivar: _pairingAttempts
@property (readonly, copy) HMFPairingIdentity *pairingIdentity;
@property (retain, nonatomic) NSString *pairingUsername; // ivar: _pairingUsername
@property (retain, nonatomic) HMDPendingCharacteristic *pendingPowerOn; // ivar: _pendingPowerOn
@property (retain) NSMutableArray *pendingReads; // ivar: _pendingReads
@property (retain, nonatomic) NSMutableArray *powerOnCompletionRoutines; // ivar: _powerOnCompletionRoutines
@property (readonly, copy, nonatomic) HMDAnalyticsHAPServiceData *primaryHAPServiceForAnalytics; // ivar: _primaryHAPServiceForAnalytics
@property (readonly) NSObject<HMDMessageRouter> *primaryResidentMessageRouter;
@property (readonly, nonatomic) HMDService *primaryService; // ivar: _primaryService
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (retain, nonatomic) NSData *publicKey; // ivar: _publicKey
@property (nonatomic, getter=isReachableViaBSP) BOOL reachableViaBSP; // ivar: _reachableViaBSP
@property (readonly, nonatomic) NSString *serializedIdentifier;
@property (readonly, nonatomic) NSSet *serviceTypeUUIDs;
@property (readonly, copy) NSArray *services;
@property (retain, nonatomic) HMDAccessorySessionMetric *sessionMetric; // ivar: _sessionMetric
@property (retain, nonatomic) HMFTimer *sessionRestoreTimer; // ivar: _sessionRestoreTimer
@property (copy, nonatomic) NSData *setupHash; // ivar: _setupHash
@property (readonly, copy) NSString *shortDescription;
@property (readonly) BOOL shouldAutoDiscoverAccessoryServer;
@property BOOL shouldDisconnectOnIdle; // ivar: _shouldDisconnectOnIdle
@property NSUInteger siriEndpointCapabilities; // ivar: _siriEndpointCapabilities
@property (readonly) HMDSiriEndpointProfile *siriEndpointProfile;
@property (retain) HMDSiriEndpointProfileMetricsDispatcher *siriEndpointProfileMetricsDispatcher; // ivar: _siriEndpointProfileMetricsDispatcher
@property (copy, nonatomic) NSNumber *sleepInterval; // ivar: _sleepInterval
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMSupportedAccessoryDiagnostics *supportedDiagnostics;
@property BOOL supportsAccessCode; // ivar: _supportsAccessCode
@property (readonly) BOOL supportsCHIP;
@property (readonly, getter=isCameraRecordingFeatureSupported) BOOL supportsCameraRecordingFeature;
@property (readonly) BOOL supportsHAP;
@property (readonly, nonatomic) BOOL supportsSiri;
@property (readonly, nonatomic) BOOL supportsSiriEndpoint;
@property (readonly) BOOL supportsSiriEndpointOnBoarding;
@property (readonly) BOOL supportsUserManagement;
@property BOOL supportsWalletKey; // ivar: _supportsWalletKey
@property (nonatomic) NSUInteger suspendedState; // ivar: _suspendedState
@property (retain, nonatomic) HMDAccessorySymptomHandler *symptomsHandler; // ivar: _symptomsHandler
@property (retain, nonatomic) HMDTargetControllerManager *targetControllerManager; // ivar: _targetControllerManager
@property (retain, nonatomic) NSArray *targetUUIDs; // ivar: _targetUUIDs
@property (readonly, nonatomic, getter=isThreadTheCurrentlyActiveTransport) BOOL threadActiveTransport;
@property (readonly, nonatomic) unsigned short threadCapabilities;
@property (readonly, nonatomic) unsigned short threadStatus;
@property (readonly, copy, nonatomic) NSArray *transportInformationInstances;
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, copy) NSString *urlString;
@property (copy, nonatomic) NSNumber *wakingViaCharacteristicWithIID; // ivar: _wakingViaCharacteristicWithIID
@property (readonly) HMDWiFiManagementController *wiFiManagementController;
@property (retain, nonatomic) HMDWiFiManagementController *wiFiManagementController; // ivar: _wiFiManagementController
@property (copy, nonatomic) NSNumber *wiFiTransportCapabilities; // ivar: _wiFiTransportCapabilities


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
+(CGFloat)chipPairingModeActiveDuration;
+(Class)transactionClass;
+(NSUInteger)getAWDTransportTypeWithLinkType:(NSInteger)arg0 ;
+(id)_allowedClassesForServiceUnArchiving;
+(void)encodeServices:(id)arg0 forXPCCoder:(id)arg1 metadata:(id)arg2 ;
-(BOOL)__createNetworkRouterProfileAndController:(id)arg0 ;
-(BOOL)__createSatelliteNetworkRouterProfile:(id)arg0 ;
-(BOOL)__removeNetworkRouterController;
-(BOOL)_containsSecureCharacteristic;
-(BOOL)_handleCharacteristicError:(id)arg0 read:(BOOL)arg1 characteristic:(id)arg2 didRelayMessage:(id)arg3 ;
-(BOOL)_handleUpdatedServicesForAccessCodes;
-(BOOL)_handleUpdatedServicesForCameraProfiles:(id)arg0 ;
-(BOOL)_handleUpdatedServicesForDiagnosticsManager:(id)arg0 ;
-(BOOL)_handleUpdatedServicesForDoorbellController;
-(BOOL)_handleUpdatedServicesForFirmwareUpdateProfile:(id)arg0 ;
-(BOOL)_handleUpdatedServicesForLightProfiles:(id)arg0 ;
-(BOOL)_handleUpdatedServicesForLowPowerModeProfile;
-(BOOL)_handleUpdatedServicesForMediaProfile:(id)arg0 ;
-(BOOL)_handleUpdatedServicesForNetworkRouterProfileAndController:(id)arg0 ;
-(BOOL)_handleUpdatedServicesForSiriEndpointProfile:(id)arg0 ;
-(BOOL)_handleUpdatedServicesForWalletKey;
-(BOOL)_handleUpdatedServicesForWiFiManagementController;
-(BOOL)_isRegisteredForNotificationsByForegroundProcess;
-(BOOL)_remotelySetNotificationsEnabled:(BOOL)arg0 forCharacteristic:(id)arg1 clientIdentifier:(id)arg2 ;
-(BOOL)_resolveAudioAbility:(id)arg0 ;
-(BOOL)_resolveSupportedSiriInputType:(id)arg0 ;
-(BOOL)_serviceSupportsMinimumUserPrivilege:(id)arg0 ;
-(BOOL)_shouldFilterAccessoryProfile:(id)arg0 ;
-(BOOL)_shouldTrackAccessoryWithPriority:(*BOOL)arg0 ;
-(BOOL)_supportsMediaAccessControl;
-(BOOL)_validateConnectivityInfo:(id)arg0 ;
-(BOOL)_validateCurrentThreadCredentials:(id)arg0 metadata:(id)arg1 ;
-(BOOL)_validateIncomingMessage:(id)arg0 ;
-(BOOL)associateControllerKeyWithAccessory:(id)arg0 error:(*id)arg1 ;
-(BOOL)bulkSendListenersRequireCharactertisticReadsSync;
-(BOOL)canAcceptBulkSendListeners;
-(BOOL)canAcceptBulkSendListenersSync;
-(BOOL)canProceedWithRequests:(id)arg0 suspended:(*BOOL)arg1 error:(*id)arg2 ;
-(BOOL)canReturnCachedValueForCharacteristic:(id)arg0 ;
-(BOOL)canWakeBasedOnCharacteristicRequests:(id)arg0 ;
-(BOOL)canWakeUpViaWoL;
-(BOOL)canWakeViaCustomWoBLE;
-(BOOL)custom1WoBLE;
-(BOOL)hasAnyServiceWithTypes:(id)arg0 ;
-(BOOL)hasBLEServer;
-(BOOL)hasBTLELink;
-(BOOL)hasBattery;
-(BOOL)hasIPLink;
-(BOOL)hasIPServer;
-(BOOL)hasThreadServer;
-(BOOL)hasValidCachedValueForCharacteristic:(id)arg0 shouldLog:(BOOL)arg1 ;
-(BOOL)isBLELinkConnected;
-(BOOL)isBLESecureSessionEstablished;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIPSecureSessionEstablished;
-(BOOL)isNonClientNotificationEnabled;
-(BOOL)isNotificationEnabled;
-(BOOL)isNotificationEnabledForClientIdentifier:(id)arg0 ;
-(BOOL)isPoweringOn;
-(BOOL)isPrimary;
-(BOOL)isReadingRequiredForBTLEAccessoryCharacteristic:(id)arg0 forceReadFWVersion:(BOOL)arg1 ;
-(BOOL)isSecureSessionEstablished;
-(BOOL)isSecuritySessionOpen;
-(BOOL)isSuspended;
-(BOOL)isThreadSecureSessionEstablished;
-(BOOL)matchesHAPAccessory:(id)arg0 ;
-(BOOL)matchesHAPAccessoryWithServerIdentifier:(id)arg0 instanceID:(id)arg1 ;
-(BOOL)matchesHAPAccessoryWithServerIdentifier:(id)arg0 linkType:(*NSInteger)arg1 ;
-(BOOL)needsAirplayAccess;
-(BOOL)providesHashRouteID;
-(BOOL)residentCanWakeForWOL;
-(BOOL)shouldConfigureTargetController;
-(BOOL)shouldDiscoverSuspendCapableAccessoryServer:(id)arg0 ;
-(BOOL)shouldEnableDaemonRelaunch;
-(BOOL)shouldSubmitRoutineConfigurationEventForSiriEndpointProfileMetricsDispatcher:(id)arg0 ;
-(BOOL)supportsAnnounce;
-(BOOL)supportsDiagnosticsTransfer;
-(BOOL)supportsDoorbellChime;
-(BOOL)supportsFirmwareUpdate;
-(BOOL)supportsIdentify;
-(BOOL)supportsMinimumUserPrivilege;
-(BOOL)supportsMultiUser;
-(BOOL)supportsMusicAlarm;
-(BOOL)supportsNetworkProtection;
-(BOOL)supportsPersonalRequests;
-(BOOL)supportsPreferredMediaUser;
-(BOOL)supportsPrimaryUserInfoSubscription;
-(BOOL)supportsSoftwareUpdate;
-(BOOL)supportsTargetController;
-(BOOL)supportsThread;
-(BOOL)supportsThreadCommissioning;
-(BOOL)supportsUnreachablePing;
-(BOOL)supportsUserMediaSettings;
-(BOOL)supportsWiFiReconfiguration;
-(BOOL)supportsWoL;
-(BOOL)updateAccessoryInformationWithCharacteristicType:(id)arg0 serviceType:(id)arg1 value:(id)arg2 accessoryTransaction:(id)arg3 ;
-(BOOL)updateTransportInformation:(id)arg0 localSource:(BOOL)arg1 ;
-(BOOL)wasUpdatedWithServiceType:(id)arg0 ;
-(CGFloat)_getDurationAndUpdateCurrentTime:(id)arg0 currentTime:(*id)arg1 ;
-(CGFloat)eventTimestamp;
-(CGFloat)sessionCheckPeriod;
-(NSInteger)computeSiriEndpointCertification;
-(NSInteger)linkSpeed;
-(NSInteger)reachableTransports;
-(NSUInteger)numActiveSessionClients;
-(NSUInteger)supportedTransports;
-(NSUInteger)targetControllerTicksPerSecond;
-(id)_accessoryForHH2MigrationFileName;
-(id)_createDiagnosticsManager:(id)arg0 ;
-(id)_createSymptomHandler;
-(id)_findThreadControlPointCharacteristicWithError:(*id)arg0 ;
-(id)_messagesForUpdatedRoom:(id)arg0 ;
-(id)_prepareMessagePayloadForCharacteristicRemoteWrite:(id)arg0 ;
-(id)_updatedResponseForRemoteResponse:(id)arg0 ;
-(id)_updatedResponseTuplesForRequests:(id)arg0 error:(id)arg1 source:(NSUInteger)arg2 suspended:(BOOL)arg3 ;
-(id)accessoryCategoryTypeForSiriEndpointProfileMetricsDispatcher:(id)arg0 ;
-(id)anyIPServer;
-(id)backingStoreObjects:(NSInteger)arg0 ;
-(id)backingStoreTransactionWithName:(id)arg0 ;
-(id)bridge;
-(id)cameraProfileNotificationSettingsFromCoder:(id)arg0 ;
-(id)characteristicWithAuthorizationDataMessage:(id)arg0 ;
-(id)characteristicsPassingTest:(id)arg0 ;
-(id)compositeSettingsControllerManagerForSiriEndpointProfileMetricsDispatcher:(id)arg0 ;
-(id)configureService:(id)arg0 ;
-(id)createSiriEndpointProfileMetricsDispatcherWithAccessoryUUID:(id)arg0 homeUUID:(id)arg1 logEventSubmitter:(id)arg2 ;
-(id)createUpdateServiceTransationWithServiceUUID:(id)arg0 ;
-(id)dumpSimpleState;
-(id)dumpState;
-(id)endpointIdentifier;
-(id)eventForwarder;
-(id)eventSourceIdentifier;
-(id)eventStoreReadHandle;
-(id)findCharacteristic:(id)arg0 ;
-(id)findCharacteristic:(id)arg0 forService:(id)arg1 ;
-(id)findCharacteristicType:(id)arg0 forServiceType:(id)arg1 ;
-(id)findCharacteristicsByType:(id)arg0 forServiceType:(id)arg1 ;
-(id)findCharacteristicsByTypes:(id)arg0 forServiceType:(id)arg1 ;
-(id)findService:(id)arg0 ;
-(id)findServiceWithServiceType:(id)arg0 ;
-(id)firmwareUpdateManager;
-(id)getBluetoothAddress;
-(id)getConfiguredName;
-(id)getFullError:(id)arg0 source:(NSUInteger)arg1 suspended:(BOOL)arg2 ;
-(id)getHAPAccessoryMatchingInstanceId;
-(id)getOrCreateServiceUpdateTransactionForKey:(id)arg0 fromDictionary:(id)arg1 ;
-(id)getPrimaryHAPAccessories;
-(id)getTransportInformationArray;
-(id)hapCharacteristicWriteRequests:(id)arg0 hapAccessory:(id)arg1 hmdResponses:(*id)arg2 mapping:(*id)arg3 ;
-(id)hmdCharacteristicForInstanceId:(id)arg0 ;
-(id)hmdCharacteristicFromHapCharacteristic:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHAPMetadata:(id)arg0 ;
-(id)initWithTransaction:(id)arg0 home:(id)arg1 ;
-(id)initWithTransaction:(id)arg0 home:(id)arg1 hapMetadata:(id)arg2 ;
-(id)logIdentifier;
-(id)matchingHAPAccessoryServerIdentifierWithLinkType:(NSInteger)arg0 ;
-(id)matchingHAPAccessoryWithLinkType:(NSInteger)arg0 ;
-(id)matchingHAPAccessoryWithServerIdentifier:(id)arg0 ;
-(id)matchingHAPAccessoryWithServerIdentifier:(id)arg0 linkType:(NSInteger)arg1 ;
-(id)matchingTransportInformation:(id)arg0 ;
-(id)matchingTransportInformationWithServerIdentifier:(id)arg0 ;
-(id)matchingTransportInformationWithServerIdentifier:(id)arg0 instanceID:(id)arg1 linkType:(NSInteger)arg2 ;
-(id)matchingTransportInformationWithServerIdentifier:(id)arg0 linkType:(NSInteger)arg1 ;
-(id)messageReceiverChildren;
-(id)messageSendPolicy;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)name;
-(id)namesOfServicesShowingTilesInHomeApp;
-(id)preferredHAPAccessoryForOperation:(NSInteger)arg0 linkType:(*NSInteger)arg1 ;
-(id)primaryIPServer;
-(id)profileFieldsForSiriEndpointProfileMetricsDispatcher:(id)arg0 ;
-(id)runtimeState;
-(id)serviceWithSPIClientIdentfier:(id)arg0 ;
-(id)serviceWithUUID:(id)arg0 ;
-(id)settingTopicForKeyPath:(id)arg0 ;
-(id)targetControllerButtonConfiguration;
-(id)transactionWithObjectChangeType:(NSUInteger)arg0 ;
-(id)transportReports;
-(id)updateAccessoryFlagsAndNotifyClients:(id)arg0 ;
-(void)__createNetworkRouterController:(id)arg0 ;
-(void)__handleCharacteristicsChangedPayload:(id)arg0 ;
-(void)__updateNotifyingCharacteristicStateNumber:(id)arg0 ;
-(void)_addHAPAccessory:(id)arg0 ;
-(void)_addService:(id)arg0 ;
-(void)_autoConfigureTargetController;
-(void)_cancelPowerOn;
-(void)_challengeAccessoryAuthMethod;
-(void)_checkBridgedAccessoryOnConfigured;
-(void)_checkForSiriEndpointServiceChange;
-(void)_checkRegisterForServerNotification;
-(void)_checkResidentDeviceForReachabilityPing;
-(void)_checkSession;
-(void)_checkSessionRestoreOnLinkStateChange;
-(void)_commissionToThreadNetworkWithActivity:(id)arg0 pairingEvent:(id)arg1 completion:(id)arg2 ;
-(void)_configNumberUpdated;
-(void)_configureTargetControllerWithCompletion:(id)arg0 ;
-(void)_configureWithAccessoryServices:(id)arg0 changedCharacteristics:(*id)arg1 ;
-(void)_deregisterAllClientsFromSessionRestore;
-(void)_destroyDiagnosticsManager;
-(void)_disableNotificationsForBundleID:(id)arg0 completionHandler:(id)arg1 ;
-(void)_doPrimaryResidentUpdated;
-(void)_doReachabilityUpdateForServer:(id)arg0 ;
-(void)_enableBroadcastNotifications:(BOOL)arg0 hapAccessory:(id)arg1 forCharacteristics:(id)arg2 ;
-(void)_enableNotification:(BOOL)arg0 forCharacteristics:(id)arg1 message:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_evaluateAvailableSoftwareUpdate;
-(void)_evaluateLocalOperation:(NSInteger)arg0 state:(id)arg1 completion:(id)arg2 ;
-(void)_fetchPairingsAndUpdateTransaction;
-(void)_forceEnableReachabilityPingForPrimaryResident:(id)arg0 ;
-(void)_groupCharacteristicsNotificationWithCharacteristics:(id)arg0 enable:(BOOL)arg1 activity:(id)arg2 clientIdentifier:(id)arg3 groupCharacteristicsError:(*id)arg4 characteristicsToModifyLocally:(*id)arg5 characteristicsToModifyOnResident:(*id)arg6 characteristicsToDisableOnResident:(*id)arg7 characteristicsErrorsMapFailingToModify:(*id)arg8 ;
-(void)_handleAccessoryUpdateReachability:(BOOL)arg0 linkType:(NSInteger)arg1 ;
-(void)_handleActivateCHIPPairingModeAndCreateSetupPayloadStringMessage:(id)arg0 ;
-(void)_handleActivateCHIPPairingModeMessage:(id)arg0 ;
-(void)_handleAddServiceTransaction:(id)arg0 message:(id)arg1 ;
-(void)_handleChangeUpdateSource:(id)arg0 ;
-(void)_handleConfigureTargets:(id)arg0 ;
-(void)_handleDiscoveryBackoffTimerFired;
-(void)_handleFetchCHIPPairingsMessage:(id)arg0 ;
-(void)_handleHomeNameChangedNotification:(id)arg0 ;
-(void)_handleHomeUserRemovedNotification:(id)arg0 ;
-(void)_handleKeyRefreshTimerFired;
-(void)_handleMultipleCharacteristicsUpdated:(id)arg0 message:(id)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_handleRemoveCHIPPairingsMessage:(id)arg0 ;
-(void)_handleRemoveStagedSoftwareUpdate:(id)arg0 ;
-(void)_handleRenameService:(id)arg0 ;
-(void)_handleRoomChangedFromOldRoomName:(id)arg0 ;
-(void)_handleServiceRemovedTransaction:(id)arg0 message:(id)arg1 ;
-(void)_handleSessionRestoreTimerFired;
-(void)_handleStartUpdate:(id)arg0 ;
// -(void)_handleUnreachableAccessoryToPerformOperation:(NSInteger)arg0 operationBlock:(id)arg1 errorBlock:(unk)arg2  ;
-(void)_handleUpdateAccessoryConnectionState:(id)arg0 ;
-(void)_handleUpdateAssociatedServiceType:(id)arg0 ;
-(void)_handleUpdateCharacteristicAuthorizationDataMessageForNonOwnerUser:(id)arg0 ;
-(void)_handleUpdateCharacteristicAuthorizationDataMessageForOwnerUser:(id)arg0 ;
-(void)_handleUpdateMediaSourceDisplayOrder:(id)arg0 ;
-(void)_handleUpdatedAuthMethod;
-(void)_handleUpdatedCameraDerivedPropertiesModelValuesForAccessoryModel:(id)arg0 ;
-(void)_handleUpdatedCameraSettingsModelValuesForAccessoryModel:(id)arg0 ;
-(void)_handleUpdatedName:(id)arg0 ;
-(void)_handleUpdatedPairings:(id)arg0 previousPairings:(id)arg1 ;
-(void)_handleUpdatedServicesForDataStreamController:(id)arg0 ;
-(void)_handleUpdatedServicesForProfilesAndControllers:(BOOL)arg0 ;
-(void)_handleUpdatedServicesForThreadManagementWithActivity:(id)arg0 ;
-(void)_handleValidatePairingAuthMethodMessage:(id)arg0 ;
-(void)_handleWakeSuspendedAccessoryMessage:(id)arg0 ;
-(void)_logServerReachabilityNotification:(BOOL)arg0 withDuration:(id)arg1 withLinkType:(id)arg2 ;
-(void)_logServerReachabilityNotification:(id)arg0 ;
-(void)_maybeCommissionToThreadNetworkWithActivity:(id)arg0 completion:(id)arg1 ;
-(void)_notifyBridgedAccessoryReachabilityChange:(id)arg0 ;
-(void)_notifyCharacteristicNotificationChanges:(id)arg0 enableNotification:(BOOL)arg1 message:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_notifyClientsOfTargetControlSupportUpdate;
-(void)_notifyClientsWithNotificationChangesForCharacteristics:(id)arg0 characteristicErrors:(id)arg1 enableNotification:(BOOL)arg2 message:(id)arg3 ;
-(void)_parseResponseFromRemotePeer:(id)arg0 message:(id)arg1 error:(id)arg2 characteristic:(id)arg3 ;
// -(void)_performOperation:(NSInteger)arg0 linkType:(NSInteger)arg1 operationBlock:(id)arg2 errorBlock:(unk)arg3  ;
-(void)_postUpdateEventsIfDifferent:(id)arg0 ;
-(void)_readCharacteristicValues:(id)arg0 hapAccessory:(id)arg1 source:(NSUInteger)arg2 message:(id)arg3 logEvent:(id)arg4 completionHandler:(id)arg5 ;
// -(void)_readCharacteristicValues:(id)arg0 localOperationRequired:(BOOL)arg1 source:(NSUInteger)arg2 message:(id)arg3 logEvent:(id)arg4 completionHandler:(id)arg5 errorBlock:(unk)arg6  ;
-(void)_readValueForCharacteristic:(id)arg0 hapAccessory:(id)arg1 requestMessage:(id)arg2 ;
-(void)_reconcileAccessControlSetting;
-(void)_reenableNotificationsOnWatch;
-(void)_registerForMessages;
-(void)_registerForMessages_lowPowerMode;
-(void)_relayReadFromCharacteristic:(id)arg0 toResidentForMessage:(id)arg1 viaDevice:(id)arg2 ;
-(void)_relayWriteToCharacteristic:(id)arg0 toResidentForMessage:(id)arg1 viaDevice:(id)arg2 ;
-(void)_removeBackedoffAccessoryForStateNumber:(id)arg0 ;
-(void)_removeHAPAccessoryFileFromDisk;
-(void)_removeService:(id)arg0 ;
-(void)_removeSystemCommissionerPairingFromAccessoryPairings:(id)arg0 completion:(id)arg1 ;
-(void)_renameAccessory:(id)arg0 resetName:(BOOL)arg1 message:(id)arg2 ;
-(void)_renameService:(id)arg0 name:(id)arg1 message:(id)arg2 completionBlock:(id)arg3 ;
// -(void)_retrieveHAPAccessoryToPerformOperation:(NSInteger)arg0 linkType:(NSInteger)arg1 operationBlock:(id)arg2 errorBlock:(unk)arg3 activity:(id)arg4  ;
// -(void)_retrieveHAPAccessoryToPerformOperation:(NSInteger)arg0 linkType:(NSInteger)arg1 retries:(NSUInteger)arg2 operationBlock:(id)arg3 errorBlock:(unk)arg4 activity:(id)arg5  ;
-(void)_saveHardwareSupport:(BOOL)arg0 ;
-(void)_saveTargetUUIDs:(id)arg0 ;
-(void)_setNotificationsEnabled:(BOOL)arg0 forCharacteristics:(id)arg1 clientIdentifier:(id)arg2 matchingHAPAccessory:(id)arg3 ;
-(void)_setNotificationsEnabled:(BOOL)arg0 forCharacteristics:(id)arg1 hapAccessory:(id)arg2 activity:(id)arg3 completion:(id)arg4 ;
-(void)_setTargetControllerSession;
-(void)_startManualUpdateFromBestSuitableDevice:(id)arg0 ;
-(void)_startSessionMonitor;
-(void)_startUpdateFromCurrentDeviceWithRequest:(id)arg0 ;
-(void)_startUpdateSessionWithRequest:(id)arg0 ;
-(void)_stopScan;
-(void)_stopSessionMonitor;
-(void)_submitReachabilityDelayedMetric:(id)arg0 ;
-(void)_submitStateNumberChangeMetric;
-(void)_updateAccessoryTracking;
-(void)_updateAuthMethodWithServer:(id)arg0 completion:(id)arg1 ;
-(void)_updateBroadcastKey:(id)arg0 keyUpdatedStateNumber:(id)arg1 keyUpdatedTime:(CGFloat)arg2 ;
-(void)_updateCHIPAccessoryWithFabricLabel:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateCharacteristicsFromService:(id)arg0 context:(id)arg1 ;
-(void)_updatePrimaryServiceIfNeededWithService:(id)arg0 ;
-(void)_updateReachability;
-(void)_updateReachabilityMetric:(BOOL)arg0 withDuration:(id)arg1 ;
-(void)_updateSessionRestoreOnServer:(BOOL)arg0 ;
-(void)_updateSiriAudioFormat:(id)arg0 ;
-(void)_updateStateForTrackedAccessory:(id)arg0 stateNumber:(id)arg1 ;
-(void)_wakeAccessoryIfNeededForCharacteristicRequests:(id)arg0 source:(NSUInteger)arg1 activity:(id)arg2 completion:(id)arg3 ;
// -(void)_wakeSuspendedHAPAccessoryToPerformOperation:(NSInteger)arg0 linkType:(NSInteger)arg1 operationBlock:(id)arg2 errorBlock:(unk)arg3 activity:(id)arg4  ;
-(void)_wirelessPowerOn:(id)arg0 ;
-(void)_wol_ignoreWakingViaCharacteristicUpdateFromChangedService:(id)arg0 ;
-(void)_wol_processDidRemoveHPAccessoryServer:(id)arg0 ;
-(void)_wol_processReadWriteResponseForCharacteristic:(id)arg0 isRead:(BOOL)arg1 error:(id)arg2 ;
-(void)_wol_runAccessoryTransaction:(id)arg0 localOnly:(BOOL)arg1 ;
-(void)_wol_updateSuspendCapableHAPAccessoryServer:(id)arg0 ;
-(void)_wol_updateWakingViaCharacteristicForWriteRequests:(id)arg0 ;
-(void)_wol_updateWakingViaCharacteristicForWriteResponses:(id)arg0 ;
-(void)_writeCharacteristicValues:(id)arg0 hapAccessory:(id)arg1 source:(NSUInteger)arg2 message:(id)arg3 logEvent:(id)arg4 completionHandler:(id)arg5 ;
// -(void)_writeCharacteristicValues:(id)arg0 localOperationRequired:(BOOL)arg1 source:(NSUInteger)arg2 completionHandler:(id)arg3 errorBlock:(unk)arg4  ;
// -(void)_writeCharacteristicValues:(id)arg0 localOperationRequired:(BOOL)arg1 source:(NSUInteger)arg2 message:(id)arg3 completionHandler:(id)arg4 logEvent:(unk)arg5 errorBlock:(id)arg6  ;
-(void)_writeCredentialsForThreadNetworkWithActivity:(id)arg0 pairingEvent:(id)arg1 metadata:(id)arg2 threadControlPointCharacteristic:(id)arg3 completion:(id)arg4 ;
-(void)_writeThreadControlPointCharacteristic:(id)arg0 value:(id)arg1 activity:(id)arg2 completion:(id)arg3 ;
-(void)_writeValue:(id)arg0 forCharacteristic:(id)arg1 hapAccessory:(id)arg2 authorizationData:(id)arg3 message:(id)arg4 ;
-(void)accessory:(id)arg0 didUpdateReachabilityState:(BOOL)arg1 ;
-(void)acknowledgeTargetControlService:(id)arg0 active:(BOOL)arg1 ;
-(void)addAdvertisement:(id)arg0 ;
-(void)addDataStreamBulkSendListener:(id)arg0 fileType:(id)arg1 ;
-(void)addHostedAccessory:(id)arg0 ;
-(void)addSession:(NSInteger)arg0 ;
-(void)addTarget:(id)arg0 buttonConfiguration:(id)arg1 ;
-(void)addTransportInformationInstance:(id)arg0 ;
-(void)addUser:(id)arg0 completionHandler:(id)arg1 ;
-(void)associateWithAccessoryAdvertisement:(id)arg0 ;
-(void)autoConfigureTargetController;
-(void)autoUpdateCachedCountDownCharacteristics:(id)arg0 ;
-(void)backOffAccessoryForStateNumber:(id)arg0 backoffPeriod:(CGFloat)arg1 ;
-(void)cancelPowerOn;
-(void)checkHAPSessionRestore;
-(void)cleanupNotificationCenterObservers;
-(void)commissionToThreadNetworkWithPairingEvent:(id)arg0 completion:(id)arg1 ;
-(void)configureBulletinNotification;
-(void)configureCHIPAccessory;
-(void)configureSiriEndpointProfileMetricsDispatcherWithFactory:(id)arg0 logEventSubmitter:(id)arg1 dailyScheduler:(id)arg2 ;
-(void)configureTargetControllerWithCompletion:(id)arg0 ;
-(void)configureWithAccessory:(id)arg0 homeNotificationsEnabled:(BOOL)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)configureWithHome:(id)arg0 msgDispatcher:(id)arg1 configurationTracker:(id)arg2 initialConfiguration:(BOOL)arg3 ;
-(void)deregisterFromSessionRestore:(id)arg0 ;
-(void)didUpdateConnectionState:(BOOL)arg0 sessionInfo:(id)arg1 withError:(id)arg2 ;
-(void)didUpdateConnectionState:(BOOL)arg0 withError:(id)arg1 ;
-(void)didUpdatePairingsForAccessoryServer:(id)arg0 ;
-(void)disableNotificationsForBundleID:(id)arg0 completionHandler:(id)arg1 ;
-(void)enableNotification:(BOOL)arg0 forCharacteristicIDs:(id)arg1 message:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)enableNotification:(BOOL)arg0 forCharacteristics:(id)arg1 message:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)enableNotificationsWithHAPAccessory:(id)arg0 homeNotificationsEnabled:(BOOL)arg1 ;
-(void)encodeCameraProfileNotificationSettingsWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)establishLocalHAPConnectionWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)evaluateSymptomHandler;
-(void)getSupportedSiriAudioConfiguration:(id)arg0 ;
-(void)handleAccessoryConfigured:(id)arg0 ;
-(void)handleActivateCHIPPairingModeAndCreateSetupPayloadStringMessage:(id)arg0 ;
-(void)handleActivateCHIPPairingModeMessage:(id)arg0 ;
-(void)handleCHIPSendRemoteRequestMessage:(id)arg0 ;
-(void)handleCharacteristicsChangedNotification:(id)arg0 ;
-(void)handleFetchCHIPPairingsMessage:(id)arg0 ;
-(void)handleHomeUserRemovedNotification:(id)arg0 ;
-(void)handleIdentifyAccessoryMessage:(id)arg0 ;
-(void)handleLockNotificationMessage:(id)arg0 ;
-(void)handleMultipleCharacteristicsUpdated:(id)arg0 message:(id)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)handlePairedStateChange:(BOOL)arg0 ;
-(void)handlePrimaryResidentUpdateNotification:(id)arg0 ;
-(void)handleRemoteGatewayNotificationRegistration:(id)arg0 enable:(BOOL)arg1 enableTime:(id)arg2 ;
-(void)handleRemoveCHIPPairingsMessage:(id)arg0 ;
-(void)handleRemoveCorrespondingSystemCommissionerMessage:(id)arg0 ;
-(void)handleResidentDeviceUpdated:(id)arg0 ;
-(void)handleRoomChanged:(id)arg0 ;
-(void)handleRoomNameChanged:(id)arg0 ;
-(void)handleSetHasOnboardedForNaturalLighting:(id)arg0 ;
-(void)handleUpdatePreferredMediaUser:(id)arg0 ;
-(void)handleUpdatedAuthMethod;
-(void)handleUpdatedCHIPPropertiesOnAccessoryModel:(id)arg0 actions:(id)arg1 ;
-(void)handleUpdatedCameraProfileSettingsForAccessoryModel:(id)arg0 ;
-(void)handleUpdatedMinimumUserPrivilege:(NSInteger)arg0 ;
-(void)handleUpdatedPassword:(id)arg0 ;
-(void)handleUpdatedServicesForThreadManagementWithCompletion:(id)arg0 ;
-(void)indicateNotificationFromServer:(id)arg0 notifyType:(NSUInteger)arg1 withDictionary:(id)arg2 ;
-(void)initializeBTLEScan;
-(void)initiateScan:(id)arg0 ;
-(void)makeServiceNameConsistent:(id)arg0 withName:(id)arg1 completionHandler:(id)arg2 ;
-(void)maybeCommissionToThreadNetworkWithCompletion:(id)arg0 ;
-(void)migrateCharacteristicsForHAPAccessoryIfNeeded;
-(void)notifyClientsOfTargetControlSupportUpdate;
-(void)notifyClientsOfUpdatedAccessoryControllableValue;
-(void)notifyValue:(id)arg0 previousValue:(id)arg1 error:(id)arg2 forCharacteristic:(id)arg3 requestMessage:(id)arg4 ;
-(void)notifyingCharacteristicStateNumberUpdated:(id)arg0 ;
-(void)openBulkSendSessionForFileType:(id)arg0 reason:(id)arg1 metadata:(id)arg2 queue:(id)arg3 callback:(id)arg4 ;
-(void)pairingsWithCompletionHandler:(id)arg0 ;
// -(void)performOperation:(NSInteger)arg0 linkType:(NSInteger)arg1 operationBlock:(id)arg2 errorBlock:(unk)arg3  ;
-(void)populateHMDCharacteristicResponses:(id)arg0 hapResponses:(id)arg1 mapping:(id)arg2 overallError:(id)arg3 requests:(id)arg4 ;
-(void)populateModelObject:(id)arg0 version:(NSInteger)arg1 ;
-(void)postNetworkRouterProfileNotification:(id)arg0 object:(id)arg1 ;
-(void)postUpdateEventsIfDifferentWithPerferredMediaUUID:(id)arg0 selectionType:(NSUInteger)arg1 ;
-(void)powerOnComplete:(id)arg0 ;
-(void)profile:(id)arg0 didUpdateAccessoryState:(NSUInteger)arg1 ;
-(void)profile:(id)arg0 didUpdateWoWLANInfos:(id)arg1 ;
-(void)reachabilityDidChangeToReachable:(id)arg0 ;
-(void)reachabilityDidChangeToUnreachable:(id)arg0 ;
-(void)readCharacteristicValues:(id)arg0 source:(NSUInteger)arg1 message:(id)arg2 queue:(id)arg3 logEvent:(id)arg4 completionHandler:(id)arg5 ;
-(void)readCharacteristicValues:(id)arg0 source:(NSUInteger)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)readInitialRequiredCharacteristicsForAccessory:(id)arg0 ;
-(void)registerForActiveIdentifierNotifications;
-(void)registerForSessionRestore:(id)arg0 ;
-(void)removeAdvertisement:(id)arg0 ;
-(void)removeAllCHIPPairingsWithCompletion:(id)arg0 ;
-(void)removeDataStreamBulkSendListener:(id)arg0 ;
-(void)removeHostedAccessory:(id)arg0 ;
-(void)removeSession:(NSInteger)arg0 ;
-(void)removeTarget:(id)arg0 ;
-(void)removeTransportInformationInstance:(id)arg0 ;
-(void)removeUser:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestResource:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)resetNotificationEnabledTime;
-(void)routeUpdatePreferredMediaUser:(id)arg0 ;
-(void)runTransactionWithPreferredMediaUserUUID:(id)arg0 selectionType:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)saveBluetoothAddress:(id)arg0 ;
-(void)saveHardwareSupport:(BOOL)arg0 ;
-(void)savePublicKeyToKeychain;
-(void)saveTargetUUIDs:(id)arg0 ;
-(void)scanningCompleteWithAccessoryFound:(BOOL)arg0 suspended:(BOOL)arg1 ;
-(void)sendLockNotification:(id)arg0 lockOperationType:(id)arg1 lockOperationSource:(id)arg2 ;
-(void)sendTargetControlWhoAmIWithIdentifier:(unsigned int)arg0 ;
-(void)setCHIPReportHandler:(id)arg0 ;
-(void)setDefaultPreferredMediaUser;
-(void)setDefaultPreferredMediaUserIfNeeded;
-(void)setNotificationsEnabled:(BOOL)arg0 forCharacteristics:(id)arg1 clientIdentifier:(id)arg2 ;
-(void)setReachability:(BOOL)arg0 serverIdentifier:(id)arg1 linkType:(NSInteger)arg2 ;
-(void)setSelectedSiriAudioConfiguration:(id)arg0 ;
-(void)startPing;
-(void)startReachabilityCheck;
-(void)stopPing;
-(void)stopReachabilityCheck;
-(void)stopScan;
-(void)submitCharacteristicReadErrorLogEvent:(id)arg0 message:(id)arg1 error:(id)arg2 ;
-(void)submitCharacteristicWriteErrorLogEvent:(id)arg0 startDate:(id)arg1 message:(id)arg2 error:(id)arg3 ;
-(void)testSetInternalEnhancedAuthConfigNumber:(id)arg0 ;
-(void)testSetInternalEnhancedAuthMethod:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)unconfigure;
-(void)unconfigureAccessoryWithServerIdentifier:(id)arg0 linkType:(NSInteger)arg1 updateReachability:(BOOL)arg2 ;
-(void)unregisterFromAccessoryServer;
-(void)updateAccessoryFlags:(id)arg0 ;
-(void)updateActiveDisconnectOnIdleTimeout:(CGFloat)arg0 ;
-(void)updateBridgedAccessoryLightProfilesSettings;
-(void)updateButtonConfigurationForTarget:(id)arg0 ;
-(void)updateCHIPAccessoryName:(id)arg0 ;
-(void)updateCameraProfileNotificationSettings:(id)arg0 ;
-(void)updateHasPostedBulletinForWalletKeyOnboarding:(BOOL)arg0 ;
-(void)updateLightProfilesSettings;
-(void)updateNotificationEnabled:(BOOL)arg0 forCharacteristics:(id)arg1 onBehalfOf:(id)arg2 ;
-(void)updatePrimaryServiceIfNeeded;
-(void)updateSuspendedStateWithConnectionState:(BOOL)arg0 hapAccessory:(id)arg1 ;
-(void)updateSuspendedStateWithWakeNumber:(id)arg0 hapAccessory:(id)arg1 ;
-(void)updateTarget:(id)arg0 name:(id)arg1 buttonConfiguration:(id)arg2 ;
-(void)updateTargetUUIDs:(id)arg0 ;
-(void)updateTrackedAccessoryStateNumber:(id)arg0 ;
-(void)verifyPairingWithCompletionHandler:(id)arg0 ;
-(void)wakeOrScanForSuspendedAccessoryForRequests:(id)arg0 source:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)wirelessPowerOn:(id)arg0 ;
-(void)wirelessResumeInit;
-(void)writeCharacteristicValues:(id)arg0 source:(NSUInteger)arg1 message:(id)arg2 queue:(id)arg3 completionHandler:(id)arg4 ;
-(void)writeCharacteristicValues:(id)arg0 source:(NSUInteger)arg1 message:(id)arg2 queue:(id)arg3 logEvent:(id)arg4 completionHandler:(id)arg5 ;
-(void)writeCharacteristicValues:(id)arg0 source:(NSUInteger)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)writeValue:(id)arg0 toCharacteristic:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;


@end


#endif