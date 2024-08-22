// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMECONFIGURATIONLOGEVENT_H
#define HMDHOMECONFIGURATIONLOGEVENT_H

@class HMMLogEvent, NSString, NSArray, NSDictionary, NSUUID, NSNumber;
@protocol HMMCoreAnalyticsLogging;



@interface HMDHomeConfigurationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic, getter=isAdminUser) BOOL adminUser; // ivar: _adminUser
@property (readonly) NSUInteger appleMediaCategoryBitMask; // ivar: _appleMediaCategoryBitMask
@property (readonly, nonatomic) BOOL autoThirdPartyJetEnable; // ivar: _autoThirdPartyJetEnable
@property (readonly, nonatomic) NSInteger currentMediaAccessoryFallbackMediaUserType; // ivar: _currentMediaAccessoryFallbackMediaUserType
@property unsigned int databaseSize; // ivar: _databaseSize
@property (readonly, nonatomic) NSUInteger enabledResidentsDeviceCapabilities; // ivar: _enabledResidentsDeviceCapabilities
@property (readonly, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSArray *eventTriggers; // ivar: _eventTriggers
@property (readonly, nonatomic) NSInteger firstHAPAccessoryAddedCohortWeek; // ivar: _firstHAPAccessoryAddedCohortWeek
@property (readonly, nonatomic) NSArray *hapServices; // ivar: _hapServices
@property (readonly, nonatomic) BOOL hasHomeKeyInWallet; // ivar: _hasHomeKeyInWallet
@property (readonly, nonatomic) NSDictionary *histogrammedHomeDataCommonDimensionsFormattedForCoreAnalytics; // ivar: _histogrammedHomeDataCommonDimensionsFormattedForCoreAnalytics
@property (readonly) NSUInteger homeCategoryBitMask; // ivar: _homeCategoryBitMask
@property (readonly, nonatomic) NSInteger homeCreationCohortWeek; // ivar: _homeCreationCohortWeek
@property NSUInteger homeIndex; // ivar: _homeIndex
@property (retain, nonatomic) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly, nonatomic) BOOL isAutomaticThirdPartyAccessorySoftwareUpdateEnabled; // ivar: _isAutomaticThirdPartyAccessorySoftwareUpdateEnabled
@property (readonly, nonatomic) BOOL isCurrentDeviceLocalToHome; // ivar: _isCurrentDeviceLocalToHome
@property (readonly, nonatomic) BOOL isCurrentDevicePrimaryResident; // ivar: _isCurrentDevicePrimaryResident
@property (readonly, nonatomic) BOOL isCurrentDeviceResidentCapable; // ivar: _isCurrentDeviceResidentCapable
@property (readonly, nonatomic) BOOL isCurrentDeviceResidentEnabled; // ivar: _isCurrentDeviceResidentEnabled
@property (readonly, nonatomic) BOOL isResidentAvailable; // ivar: _isResidentAvailable
@property (readonly) BOOL isResidentElectionV2Enabled; // ivar: _isResidentElectionV2Enabled
@property (readonly) BOOL isResidentFirstEnabled; // ivar: _isResidentFirstEnabled
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property unsigned int metadataVersion; // ivar: _metadataVersion
@property (copy, nonatomic) NSArray *multiUserSettings; // ivar: _multiUserSettings
@property (readonly, nonatomic) BOOL networkProtectionEnabled; // ivar: _networkProtectionEnabled
@property (readonly, nonatomic) int networkProtectionStatus; // ivar: _networkProtectionStatus
@property (readonly, nonatomic) NSUInteger numAccessories; // ivar: _numAccessories
@property (readonly, nonatomic) NSUInteger numAccessoriesNetworkProtectionAutoFullAccess; // ivar: _numAccessoriesNetworkProtectionAutoFullAccess
@property (readonly, nonatomic) NSUInteger numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN; // ivar: _numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN
@property (readonly, nonatomic) NSUInteger numAccessoriesNetworkProtectionAutoProtectedMainLAN; // ivar: _numAccessoriesNetworkProtectionAutoProtectedMainLAN
@property (readonly, nonatomic) NSUInteger numAccessoriesNetworkProtectionFullAccess; // ivar: _numAccessoriesNetworkProtectionFullAccess
@property (readonly, nonatomic) NSUInteger numAccessoriesNetworkProtectionHomeKitOnly; // ivar: _numAccessoriesNetworkProtectionHomeKitOnly
@property (readonly, nonatomic) NSUInteger numAccessoriesNetworkProtectionUnprotected; // ivar: _numAccessoriesNetworkProtectionUnprotected
@property (readonly, nonatomic) NSUInteger numAccessoriesWiFiPPSKCredential; // ivar: _numAccessoriesWiFiPPSKCredential
@property (readonly, nonatomic) NSUInteger numAccessoriesWithWalletKeySupported; // ivar: _numAccessoriesWithWalletKeySupported
@property (readonly, nonatomic) NSUInteger numAccessoryServiceGroups; // ivar: _numAccessoryServiceGroups
@property (readonly, nonatomic) NSUInteger numActiveTriggers; // ivar: _numActiveTriggers
@property (readonly, nonatomic) NSUInteger numAdmins; // ivar: _numAdmins
@property (readonly, nonatomic) NSUInteger numAppleAudioAccessories; // ivar: _numAppleAudioAccessories
@property (readonly, nonatomic) NSUInteger numAppleMediaAccessories; // ivar: _numAppleMediaAccessories
@property (readonly, nonatomic) NSUInteger numAppleTV4K2ndGenAccessories; // ivar: _numAppleTV4K2ndGenAccessories
@property (readonly, nonatomic) NSUInteger numAppleTVAccessories; // ivar: _numAppleTVAccessories
@property (readonly, copy) NSNumber *numBSPs; // ivar: _numBSPs
@property (readonly, nonatomic) NSUInteger numBTAccessories; // ivar: _numBTAccessories
@property (readonly, nonatomic) NSUInteger numBTOnlyAccessories; // ivar: _numBTOnlyAccessories
@property (readonly, nonatomic) NSUInteger numBridgedAccessories; // ivar: _numBridgedAccessories
@property (readonly, nonatomic) NSUInteger numBridgedTargetControllers; // ivar: _numBridgedTargetControllers
@property (readonly, nonatomic) NSUInteger numCHIPAccessories; // ivar: _numCHIPAccessories
@property (readonly, nonatomic) NSUInteger numCameraAccessories; // ivar: _numCameraAccessories
@property (readonly, nonatomic) NSUInteger numCameraAccessoriesReachabilityNotificationEnabled; // ivar: _numCameraAccessoriesReachabilityNotificationEnabled
@property (readonly, nonatomic) NSUInteger numCameraAccessoriesRecordingEnabled; // ivar: _numCameraAccessoriesRecordingEnabled
@property (readonly, nonatomic) NSUInteger numCameraAccessoriesSupportRecording; // ivar: _numCameraAccessoriesSupportRecording
@property (readonly, nonatomic) NSUInteger numCameraAccessoriesWithActivityZonesEnabled; // ivar: _numCameraAccessoriesWithActivityZonesEnabled
@property (readonly, nonatomic) NSUInteger numCapableSiriEndpointAccessories; // ivar: _numCapableSiriEndpointAccessories
@property (readonly, nonatomic) NSUInteger numCertifiedAccessories; // ivar: _numCertifiedAccessories
@property (readonly, nonatomic) NSUInteger numCertifiedBridgedTargetControllers; // ivar: _numCertifiedBridgedTargetControllers
@property (readonly, nonatomic) NSUInteger numCertifiedTargetControllers; // ivar: _numCertifiedTargetControllers
@property (readonly, nonatomic) NSUInteger numConfiguredScenes; // ivar: _numConfiguredScenes
@property (readonly, nonatomic) NSUInteger numEnabledSiriEndpointAccessories; // ivar: _numEnabledSiriEndpointAccessories
@property (readonly, nonatomic) NSUInteger numEventTriggers; // ivar: _numEventTriggers
@property (readonly, nonatomic) NSUInteger numHAPAccessories; // ivar: _numHAPAccessories
@property (readonly, nonatomic) NSUInteger numHAPBLEAccessoriesSupportJet; // ivar: _numHAPBLEAccessoriesSupportJet
@property (readonly, nonatomic) NSUInteger numHAPBTAccessories; // ivar: _numHAPBTAccessories
@property (readonly, nonatomic) NSUInteger numHAPBatteryServiceAccessories; // ivar: _numHAPBatteryServiceAccessories
@property (readonly, nonatomic) NSUInteger numHAPIPAccessories; // ivar: _numHAPIPAccessories
@property (readonly, nonatomic) NSUInteger numHAPIPAccessoriesSupportJet; // ivar: _numHAPIPAccessoriesSupportJet
@property (readonly, nonatomic) NSUInteger numHAPSpeakerServiceAccessories; // ivar: _numHAPSpeakerServiceAccessories
@property (readonly, nonatomic) NSUInteger numHAPThreadAccessoriesSupportJet; // ivar: _numHAPThreadAccessoriesSupportJet
@property (readonly, nonatomic) NSUInteger numHomePodMiniStereoPairs; // ivar: _numHomePodMiniStereoPairs
@property (readonly, nonatomic) NSUInteger numHomePodMinis; // ivar: _numHomePodMinis
@property (readonly, nonatomic) NSUInteger numHomePodStereoPairs; // ivar: _numHomePodStereoPairs
@property (readonly, nonatomic) NSUInteger numHomePods; // ivar: _numHomePods
@property NSInteger numHomeWidgetsEnabled; // ivar: _numHomeWidgetsEnabled
@property (readonly, nonatomic) NSUInteger numIPAccessories; // ivar: _numIPAccessories
@property (readonly, nonatomic) NSUInteger numLightProfilesWithNaturalLightingEnabled; // ivar: _numLightProfilesWithNaturalLightingEnabled
@property (readonly, nonatomic) NSUInteger numLightProfilesWithNaturalLightingSupported; // ivar: _numLightProfilesWithNaturalLightingSupported
@property (readonly, nonatomic) NSUInteger numLightProfilesWithNaturalLightingUsed; // ivar: _numLightProfilesWithNaturalLightingUsed
@property (readonly, nonatomic) NSUInteger numMediaSystems; // ivar: _numMediaSystems
@property (readonly, nonatomic) NSUInteger numNotCertifiedAccessories; // ivar: _numNotCertifiedAccessories
@property (readonly, nonatomic) NSUInteger numPrimaryHAPSpeakerServiceAccessories; // ivar: _numPrimaryHAPSpeakerServiceAccessories
@property (readonly, nonatomic) NSUInteger numResidentsEnabled; // ivar: _numResidentsEnabled
@property (readonly, nonatomic) NSUInteger numRooms; // ivar: _numRooms
@property (readonly, nonatomic) NSUInteger numScenes; // ivar: _numScenes
@property (readonly, nonatomic) NSUInteger numServices; // ivar: _numServices
@property (readonly, nonatomic) NSUInteger numShortcuts; // ivar: _numShortcuts
@property (readonly, nonatomic) NSUInteger numSmartHomeAccessories; // ivar: _numSmartHomeAccessories
@property (readonly, nonatomic) NSUInteger numTargetControllers; // ivar: _numTargetControllers
@property (readonly, nonatomic) NSUInteger numTelevisionAccessories; // ivar: _numTelevisionAccessories
@property (readonly, nonatomic) NSUInteger numTelevisionServiceAccessories;
@property (readonly, nonatomic) NSUInteger numTelevisionSetTopBoxAccessories; // ivar: _numTelevisionSetTopBoxAccessories
@property (readonly, nonatomic) NSUInteger numTelevisionStreamingStickAccessories; // ivar: _numTelevisionStreamingStickAccessories
@property (readonly, nonatomic) NSUInteger numThirdPartyAudioAccessories;
@property (readonly, nonatomic) NSUInteger numThirdPartyMediaAccessories; // ivar: _numThirdPartyMediaAccessories
@property (readonly, nonatomic) NSUInteger numThreadAccessories; // ivar: _numThreadAccessories
@property (readonly, nonatomic) NSUInteger numThreadAccessoryBorderRouterCapable; // ivar: _numThreadAccessoryBorderRouterCapable
@property (readonly, nonatomic) NSUInteger numThreadAccessoryFullCapable; // ivar: _numThreadAccessoryFullCapable
@property (readonly, nonatomic) NSUInteger numThreadAccessoryMinCapable; // ivar: _numThreadAccessoryMinCapable
@property (readonly, nonatomic) NSUInteger numThreadAccessoryRouterCapable; // ivar: _numThreadAccessoryRouterCapable
@property (readonly, nonatomic) NSUInteger numThreadAccessorySleepCapable; // ivar: _numThreadAccessorySleepCapable
@property (readonly, nonatomic) NSUInteger numThreadBorderRouters; // ivar: _numThreadBorderRouters
@property (readonly, nonatomic) NSUInteger numTimerTriggers; // ivar: _numTimerTriggers
@property (readonly, nonatomic) NSUInteger numTriggerOwnedConfiguredScenes; // ivar: _numTriggerOwnedConfiguredScenes
@property (readonly, nonatomic) NSUInteger numTriggers; // ivar: _numTriggers
@property (readonly, nonatomic) NSUInteger numUsers; // ivar: _numUsers
@property (readonly, nonatomic) NSUInteger numWholeHouseAudioAccessories; // ivar: _numWholeHouseAudioAccessories
@property (readonly, nonatomic) NSUInteger numWoLAccessories; // ivar: _numWoLAccessories
@property (readonly, nonatomic) NSUInteger numZones; // ivar: _numZones
@property (readonly, nonatomic, getter=isOwnerUser) BOOL ownerUser; // ivar: _ownerUser
@property (readonly, nonatomic) BOOL primaryReportingDevice; // ivar: _primaryReportingDevice
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly) NSUInteger thirdPartyMediaCategoryBitMask; // ivar: _thirdPartyMediaCategoryBitMask


+(BOOL)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
-(BOOL)isSubmitted;
-(NSInteger)daysSinceDate:(id)arg0 trimAtMaximumValue:(NSUInteger)arg1 ;
-(NSInteger)weeksSinceDate:(id)arg0 trimAtMaximumValue:(NSUInteger)arg1 ;
-(id)createHistogrammedAggregateHomeDataCommonDimensionsFormattedForCoreAnalytics;
-(id)initForUnitTesting;
-(id)initWithDataSource:(id)arg0 home:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithIsOwnerUser:(BOOL)arg0 isResidentAvailable:(BOOL)arg1 isAutomaticThirdPartyAccessorySoftwareUpdateEnabled:(BOOL)arg2 isPrimaryReportingDevice:(BOOL)arg3 isCurrentDeviceResidentEnabled:(BOOL)arg4 isPrimaryResident:(BOOL)arg5 isCurrentDeviceLocalToHome:(BOOL)arg6 isNetworkProtectionEnabled:(BOOL)arg7 isAutoThirdPartyJetEnable:(BOOL)arg8 isUserRoeProvisioned:(BOOL)arg9 isResidentFirstEnabled:(BOOL)arg10 isResidentElectionV2Enabled:(BOOL)arg11 ;
-(void)setHomeConfigurationBitMasks;
-(void)updateConfigWithAccessory:(id)arg0 reportNetworkProtectionMetrics:(BOOL)arg1 networkProtectionEnabled:(BOOL)arg2 hapServiceTypes:(id)arg3 primaryHAPServiceTypes:(id)arg4 ;


@end


#endif