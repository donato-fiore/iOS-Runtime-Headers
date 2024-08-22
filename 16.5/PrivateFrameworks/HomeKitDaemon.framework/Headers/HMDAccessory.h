// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORY_H
#define HMDACCESSORY_H

@class HMFObject, NSMutableSet, NSArray, NSDictionary, HMAccessoryCategory, NSNumber, NSString, NSUUID, NSDate, NSSet, HMFMessageDispatcher, HMFVersion, NSData;
@protocol HMDBulletinIdentifiers, HMDSoftwareUpdateDataSource, NSSecureCoding, HMDHomeMessageReceiver, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging, HMDFeaturesDataSource, OS_dispatch_queue;


#import "HMDApplicationData.h"
#import "HMDAccessoryVersion.h"
#import "HMDHome.h"
#import "HMDAccessory.h"
#import "HMDNetworkRouterFirewallRuleAccessoryIdentifier.h"
#import "HMDAccessoryNetworkAccessViolation.h"
#import "HMDRoom.h"
#import "HMDSoftwareUpdate.h"
#import "HMDVendorModelEntry.h"

@interface HMDAccessory : HMFObject <HMDBulletinIdentifiers, HMDSoftwareUpdateDataSource, NSSecureCoding, HMDHomeMessageReceiver, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging>

 {
    os_unfair_recursive_lock_s _lock;
    NSMutableSet *_accessoryProfiles;
}


@property (readonly, copy) NSArray *accessoryProfiles;
@property (nonatomic) NSUInteger accessoryReprovisionState; // ivar: _accessoryReprovisionState
@property (retain, nonatomic) NSArray *allowedHosts; // ivar: _allowedHosts
@property (retain, nonatomic) HMDApplicationData *appData; // ivar: _appData
@property (readonly, copy) NSDictionary *assistantObject;
@property (retain, nonatomic) HMAccessoryCategory *category; // ivar: _category
@property (retain, nonatomic) NSNumber *categoryIdentifier; // ivar: _categoryIdentifier
@property (nonatomic) NSUInteger configNumber; // ivar: _configNumber
@property (copy, nonatomic) NSString *configurationAppIdentifier; // ivar: _configurationAppIdentifier
@property (retain, nonatomic) NSString *configuredName; // ivar: _configuredName
@property (retain, nonatomic) NSUUID *configuredNetworkProtectionGroupUUID; // ivar: _configuredNetworkProtectionGroupUUID
@property (nonatomic, getter=hasActiveSession) BOOL connected; // ivar: _connected
@property (nonatomic) NSUInteger consecutivePairingFailures; // ivar: _consecutivePairingFailures
@property (readonly, copy, nonatomic) NSString *contextID;
@property (readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property (readonly, getter=isCurrentAccessory) BOOL currentAccessory;
@property (nonatomic) NSInteger currentNetworkProtectionMode; // ivar: _currentNetworkProtectionMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *defaultNetworkProtectionGroupUUID; // ivar: _defaultNetworkProtectionGroupUUID
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSUUID *endpointIdentifier;
@property (retain) NSObject<HMDFeaturesDataSource> *featuresDataSource; // ivar: _featuresDataSource
@property (readonly, copy, nonatomic) HMDAccessoryVersion *firmwareVersion; // ivar: _firmwareVersion
@property (readonly, nonatomic) BOOL hasBattery;
@property (readonly) BOOL hasMediaProfile;
@property (readonly) BOOL hasSiriEndpointProfile;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *hashRouteID; // ivar: _hashRouteID
@property (copy) id *hashedRouteFactory; // ivar: _hashedRouteFactory
@property (weak) HMDHome *home; // ivar: _home
@property (weak, nonatomic) HMDAccessory *hostAccessory; // ivar: _hostAccessory
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSNumber *initialCategoryIdentifier; // ivar: _initialCategoryIdentifier
@property (readonly, copy, nonatomic) NSString *initialManufacturer; // ivar: _initialManufacturer
@property (readonly, copy, nonatomic) NSString *initialModel; // ivar: _initialModel
@property (nonatomic) CGFloat lastPairingFailureTime; // ivar: _lastPairingFailureTime
@property (retain, nonatomic) NSDate *lastSeenDate; // ivar: _lastSeenDate
@property (nonatomic, getter=isLowBattery) BOOL lowBattery; // ivar: _lowBattery
@property (readonly, copy, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) HMDNetworkRouterFirewallRuleAccessoryIdentifier *metadataIdentifier;
@property (readonly, copy, nonatomic) NSString *model; // ivar: _model
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (readonly, copy, nonatomic) NSString *name;
@property (retain, nonatomic) HMDAccessoryNetworkAccessViolation *networkAccessViolation; // ivar: _networkAccessViolation
@property (retain, nonatomic) NSNumber *networkClientIdentifier; // ivar: _networkClientIdentifier
@property (nonatomic) NSInteger networkClientLAN; // ivar: _networkClientLAN
@property (retain, nonatomic) NSUUID *networkClientProfileFingerprint; // ivar: _networkClientProfileFingerprint
@property (retain, nonatomic) NSUUID *networkRouterUUID; // ivar: _networkRouterUUID
@property (copy, nonatomic) NSString *pendingConfigurationIdentifier; // ivar: _pendingConfigurationIdentifier
@property (copy, nonatomic) NSNumber *preferredMediaUserSelectionTypeNumber; // ivar: _preferredMediaUserSelectionTypeNumber
@property (copy, nonatomic) NSUUID *preferredMediaUserUUID; // ivar: _preferredMediaUserUUID
@property (nonatomic, getter=isPrimary) BOOL primary; // ivar: _primary
@property (retain, nonatomic) HMFVersion *primaryProfileVersion; // ivar: _primaryProfileVersion
@property (readonly, nonatomic) NSString *productData; // ivar: _productData
@property (readonly, nonatomic) NSString *productGroup;
@property (copy, nonatomic) NSString *providedName; // ivar: _providedName
@property (nonatomic) BOOL reachabilityPingEnabled; // ivar: _reachabilityPingEnabled
@property (nonatomic) BOOL reachabilityPingNotificationEnabled; // ivar: _reachabilityPingNotificationEnabled
@property (nonatomic, getter=isReachable) BOOL reachable; // ivar: _reachable
@property (readonly, nonatomic) NSInteger reachableTransports;
@property (nonatomic, getter=isRemoteAccessEnabled) BOOL remoteAccessEnabled; // ivar: _remoteAccessEnabled
@property (nonatomic, getter=isRemotelyReachable) BOOL remotelyReachable; // ivar: _remotelyReachable
@property (readonly) BOOL requiresHomeAppForManagement;
@property (nonatomic) BOOL resetOnBackoffExpiry; // ivar: _resetOnBackoffExpiry
@property (retain, nonatomic) HMDRoom *room; // ivar: _room
@property (readonly, copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property BOOL shouldProcessTransactionRemoval; // ivar: _shouldProcessTransactionRemoval
@property (retain, nonatomic) HMDSoftwareUpdate *softwareUpdate; // ivar: _softwareUpdate
@property (readonly, copy) NSUUID *spiClientIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAnnounce;
@property (readonly, nonatomic) BOOL supportsAudioAnalysis;
@property (readonly, nonatomic) BOOL supportsCompanionInitiatedRestart;
@property (readonly, nonatomic) BOOL supportsCoordinationDoorbellChime; // ivar: _supportsCoordinationDoorbellChime
@property (readonly, nonatomic) BOOL supportsDoorbellChime; // ivar: _supportsDoorbellChime
@property (readonly, nonatomic) BOOL supportsDropIn;
@property (readonly, nonatomic) BOOL supportsFirmwareUpdate;
@property (readonly, nonatomic) BOOL supportsHomeLevelLocationServiceSetting;
@property (readonly) BOOL supportsIdentify;
@property (readonly) BOOL supportsManagedConfigurationProfile; // ivar: _supportsManagedConfigurationProfile
@property (readonly, nonatomic) BOOL supportsMediaActions;
@property (readonly, nonatomic) BOOL supportsMediaContentProfile;
@property (readonly, nonatomic) BOOL supportsMessagedHomePodSettings;
@property (readonly, nonatomic) BOOL supportsMultiUser;
@property (readonly, nonatomic) BOOL supportsMusicAlarm;
@property (readonly, nonatomic) BOOL supportsPersonalRequests;
@property (readonly) BOOL supportsSoftwareUpdateV2;
@property (readonly, nonatomic) BOOL supportsTargetControl;
@property (readonly, nonatomic) BOOL supportsTargetController;
@property (readonly, nonatomic) BOOL supportsThirdPartyMusic;
@property (readonly) BOOL supportsUserManagement;
@property (readonly, nonatomic) BOOL supportsUserMediaSettings; // ivar: _supportsUserMediaSettings
@property (nonatomic, getter=isSuspendCapable) BOOL suspendCapable; // ivar: _suspendCapable
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended
@property (copy, nonatomic) NSDate *timeBecameReachable; // ivar: _timeBecameReachable
@property (copy, nonatomic) NSDate *timeBecameUnreachable; // ivar: _timeBecameUnreachable
@property (copy, nonatomic) NSArray *transportReports; // ivar: _transportReports
@property (readonly, copy) NSString *urlString;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, copy, nonatomic) HMDVendorModelEntry *vendorInfo;
@property (nonatomic) NSInteger wiFiCredentialType; // ivar: _wiFiCredentialType
@property (retain, nonatomic) NSData *wiFiUniquePreSharedKey; // ivar: _wiFiUniquePreSharedKey
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(BOOL)splitProductDataIntoProductGroupAndProductNumber:(id)arg0 productGroup:(*id)arg1 productNumber:(*id)arg2 ;
+(BOOL)supportsSecureCoding;
+(BOOL)validateProductData:(id)arg0 ;
+(id)logCategory;
-(BOOL)_allowSoftwareUpdateChangeFromSource:(NSUInteger)arg0 ;
-(BOOL)_getLastKnownLowBatteryStatus;
-(BOOL)_shouldFilterAccessoryProfile:(id)arg0 ;
-(BOOL)_updateRoom:(id)arg0 source:(NSUInteger)arg1 ;
-(BOOL)isFirstPartyAccessory;
-(BOOL)needsAirplayAccess;
-(BOOL)providesHashRouteID;
-(BOOL)shouldEnableDaemonRelaunch;
-(BOOL)supportsDiagnosticsTransfer;
-(BOOL)supportsMinimumUserPrivilege;
-(BOOL)supportsNetworkProtection;
-(BOOL)supportsSoftwareUpdate;
-(BOOL)supportsUnreachablePing;
-(BOOL)supportsWiFiReconfiguration;
-(NSInteger)targetNetworkProtectionMode;
-(NSUInteger)consecutivePairingFailure;
-(NSUInteger)supportedTransports;
-(id)_updateCategory:(id)arg0 notifyClients:(BOOL)arg1 ;
-(id)accessoryBulletinContext;
-(id)attributeDescriptions;
-(id)backingStoreObjects:(NSInteger)arg0 ;
-(id)dumpNetworkState;
-(id)dumpSimpleState;
-(id)dumpState;
-(id)getConfiguredName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransaction:(id)arg0 home:(id)arg1 ;
-(id)logIdentifier;
-(id)messageDestination;
-(id)messageSendPolicy;
-(id)metricLoggingTransportDetails;
-(id)metricLoggingVendorDetails;
-(id)modelWithUpdatedRoom:(id)arg0 ;
-(id)networkProtectionGroupUUID;
-(id)networkProtectionReportForAWD;
-(id)notificationCenterForSoftwareUpdate:(id)arg0 ;
-(id)privateDescription;
-(id)runtimeState;
-(id)shortDescription;
-(id)transactionWithObjectChangeType:(NSUInteger)arg0 ;
-(id)vendorDetailsForAWD;
-(int)networkProtectionStatusForAnalytics;
-(void)__handleGetAccessoryAdvertisingParams:(id)arg0 ;
-(void)__handleIdentify:(id)arg0 ;
-(void)__handleListPairings:(id)arg0 ;
-(void)__handlePairingIdentityRequest:(id)arg0 ;
-(void)__handleRename:(id)arg0 ;
-(void)__handleSetAppData:(id)arg0 ;
-(void)__handleUpdatePendingConfigurationIdentifierMessage:(id)arg0 ;
-(void)__handleUpdateRoom:(id)arg0 ;
-(void)_applySoftwareUpdateModel:(id)arg0 completion:(id)arg1 ;
-(void)_checkForLastSeenUpdateOnBecomingUnreachable;
-(void)_handlePreviewAllowedHosts:(id)arg0 ;
-(void)_handleUpdatedName:(id)arg0 ;
-(void)_handleWiFiReconfiguration:(id)arg0 ;
-(void)_notifyConnectivityChangedWithReachabilityState:(BOOL)arg0 remoteAccessChanged:(BOOL)arg1 ;
-(void)_registerForMessages;
-(void)_relayIdentifyAccessorytoResidentForMessage:(id)arg0 ;
-(void)_remoteAccessEnabled:(BOOL)arg0 ;
-(void)_updateHost:(id)arg0 ;
-(void)addAccessoryProfile:(id)arg0 ;
-(void)addAdvertisement:(id)arg0 ;
-(void)addHostedAccessory:(id)arg0 ;
-(void)appDataRemoved:(id)arg0 message:(id)arg1 ;
-(void)appDataUpdated:(id)arg0 message:(id)arg1 ;
-(void)autoConfigureTargetControllers;
-(void)configureTargetController:(id)arg0 ;
-(void)configureWithHome:(id)arg0 msgDispatcher:(id)arg1 configurationTracker:(id)arg2 initialConfiguration:(BOOL)arg3 ;
-(void)dealloc;
-(void)decodePreferredMediaUser:(id)arg0 ;
-(void)didEncounterError:(id)arg0 ;
-(void)didUpdateCurrentNetworkProtection;
-(void)encodePreferredMediaUser:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleAccessoryUpdateShouldProcessTransactionRemovalValueRequestMessage:(id)arg0 ;
-(void)handleAddedAccessoryProfile:(id)arg0 ;
-(void)handleAddedMediaProfile:(id)arg0 ;
-(void)handleAddedSiriEndpointProfile:(id)arg0 ;
-(void)handleAddedSoftwareUpdateModel:(id)arg0 message:(id)arg1 ;
-(void)handleIdentifyAccessoryMessage:(id)arg0 ;
-(void)handleRemovedSoftwareUpdateModel:(id)arg0 message:(id)arg1 ;
-(void)handleUpdatedSoftwareUpdateModel:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)notifyAccessoryNameChanged:(BOOL)arg0 ;
-(void)notifyClientsOfConfigurationChangeWithReason:(id)arg0 source:(id)arg1 shouldFetch:(BOOL)arg2 ;
-(void)notifyClientsOfUpdatedAccessoryControllableValue:(BOOL)arg0 ;
-(void)populateModelObject:(id)arg0 version:(NSInteger)arg1 ;
-(void)populateVendorDetailsForCoreAnalytics:(id)arg0 keyPrefix:(id)arg1 ;
-(void)remoteAccessEnabled:(BOOL)arg0 ;
-(void)removeAccessoryProfile:(id)arg0 ;
-(void)removeAdvertisement:(id)arg0 ;
-(void)removeCloudData;
-(void)removeHostedAccessory:(id)arg0 ;
-(void)runTransactionWithModel:(id)arg0 label:(id)arg1 completion:(id)arg2 ;
-(void)runTransactionWithModels:(id)arg0 label:(id)arg1 completion:(id)arg2 ;
-(void)runTransactionWithPreferredMediaUserUUID:(id)arg0 selectionType:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)saveCurrentNetworkProtectionMode:(NSInteger)arg0 assignedLAN:(NSInteger)arg1 allowedWANHosts:(id)arg2 profileFingerprint:(id)arg3 ;
-(void)saveLastSeenToLocalStore;
-(void)saveNetworkAccessViolation:(id)arg0 ;
-(void)saveNetworkClientIdentifier:(id)arg0 networkRouterUUID:(id)arg1 clearProfileFingerprint:(BOOL)arg2 ;
-(void)saveWiFiUniquePreSharedKey:(id)arg0 credentialType:(NSInteger)arg1 ;
-(void)sendRemovalRequest;
-(void)sendRemovalRequestWithCompletion:(id)arg0 ;
-(void)setConsecutivePairingFailure:(NSUInteger)arg0 ;
-(void)setDefaultPreferredMediaUserIfRemoved:(id)arg0 defaultUser:(id)arg1 completion:(id)arg2 ;
-(void)setPreferredMediaUser:(id)arg0 selectionType:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)setWifiCredentialType:(NSInteger)arg0 ;
-(void)setreachabilityPingNotificationEnabled:(BOOL)arg0 ;
-(void)startReachabilityCheck;
-(void)stopReachabilityCheck;
-(void)submitLogEvent:(id)arg0 ;
-(void)submitLogEvent:(id)arg0 error:(id)arg1 ;
-(void)transactionAccessoryUpdatedForPreferredMediaUser:(id)arg0 completionHandler:(id)arg1 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)unconfigure;
-(void)updateCategory:(id)arg0 ;
-(void)updateMediaSession:(id)arg0 ;
-(void)updateRoom:(id)arg0 source:(NSUInteger)arg1 ;
-(void)updateSoftwareUpdate:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif