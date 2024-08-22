// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMECONFIGURATIONLOGEVENT_H
#define HMDHOMECONFIGURATIONLOGEVENT_H

@class HMMLogEvent, NSString, NSDate, NSArray, NSNumber;
@protocol HMMCoreAnalyticsLogging;



@interface HMDHomeConfigurationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL autoThirdPartyJetEnable; // ivar: _autoThirdPartyJetEnable
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSInteger currentMediaAccessoryFallbackMediaUserType; // ivar: _currentMediaAccessoryFallbackMediaUserType
@property (readonly, nonatomic) unsigned int databaseSize; // ivar: _databaseSize
@property (readonly, nonatomic) NSInteger durationDaysSinceFirstHAPAccessoryAddedDate; // ivar: _durationDaysSinceFirstHAPAccessoryAddedDate
@property (readonly, nonatomic) NSInteger durationDaysSinceHomeCreationDate; // ivar: _durationDaysSinceHomeCreationDate
@property (readonly, nonatomic) NSUInteger enabledResidentsDeviceCapabilities; // ivar: _enabledResidentsDeviceCapabilities
@property (copy, nonatomic) NSArray *eventTriggers; // ivar: _eventTriggers
@property (readonly, nonatomic) NSDate *firstHAPAccessoryAddedDate; // ivar: _firstHAPAccessoryAddedDate
@property (readonly, nonatomic) NSArray *hapServices; // ivar: _hapServices
@property (readonly, nonatomic) BOOL hasHomeKeyInWallet; // ivar: _hasHomeKeyInWallet
@property (readonly, nonatomic) NSUInteger homeIndex; // ivar: _homeIndex
@property (readonly, nonatomic) BOOL isAutomaticThirdPartyAccessorySoftwareUpdateEnabled; // ivar: _isAutomaticThirdPartyAccessorySoftwareUpdateEnabled
@property (readonly, nonatomic) BOOL isCurrentDeviceLocalToHome; // ivar: _isCurrentDeviceLocalToHome
@property (readonly, nonatomic) BOOL isCurrentDevicePrimaryResident; // ivar: _isCurrentDevicePrimaryResident
@property (readonly, nonatomic) BOOL isCurrentDeviceResidentEnabled; // ivar: _isCurrentDeviceResidentEnabled
@property (readonly, nonatomic) BOOL isResidentAvailable; // ivar: _isResidentAvailable
@property (readonly, nonatomic) unsigned int metadataVersion; // ivar: _metadataVersion
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
@property (copy) NSNumber *numBSPs; // ivar: _numBSPs
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
@property (readonly, nonatomic) NSUInteger numHomePods; // ivar: _numHomePods
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
@property (readonly, nonatomic) NSUInteger numTargetControllers; // ivar: _numTargetControllers
@property (readonly, nonatomic) NSUInteger numTelevisionAccessories; // ivar: _numTelevisionAccessories
@property (readonly, nonatomic) NSUInteger numTelevisionSetTopBoxAccessories; // ivar: _numTelevisionSetTopBoxAccessories
@property (readonly, nonatomic) NSUInteger numTelevisionStreamingStickAccessories; // ivar: _numTelevisionStreamingStickAccessories
@property (readonly, nonatomic) NSUInteger numThreadAccessories; // ivar: _numThreadAccessories
@property (readonly, nonatomic) NSUInteger numThreadAccessoryBorderRouterCapable; // ivar: _numThreadAccessoryBorderRouterCapable
@property (readonly, nonatomic) NSUInteger numThreadAccessoryFullCapable; // ivar: _numThreadAccessoryFullCapable
@property (readonly, nonatomic) NSUInteger numThreadAccessoryMinCapable; // ivar: _numThreadAccessoryMinCapable
@property (readonly, nonatomic) NSUInteger numThreadAccessoryRouterCapable; // ivar: _numThreadAccessoryRouterCapable
@property (readonly, nonatomic) NSUInteger numThreadAccessorySleepCapable; // ivar: _numThreadAccessorySleepCapable
@property (copy) NSNumber *numThreadBorderRouters; // ivar: _numThreadBorderRouters
@property (readonly, nonatomic) NSUInteger numTimerTriggers; // ivar: _numTimerTriggers
@property (readonly, nonatomic) NSUInteger numTriggerOwnedConfiguredScenes; // ivar: _numTriggerOwnedConfiguredScenes
@property (readonly, nonatomic) NSUInteger numTriggers; // ivar: _numTriggers
@property (readonly, nonatomic) NSUInteger numUsers; // ivar: _numUsers
@property (readonly, nonatomic) NSUInteger numWholeHouseAudioAccessories; // ivar: _numWholeHouseAudioAccessories
@property (readonly, nonatomic) NSUInteger numWoLAccessories; // ivar: _numWoLAccessories
@property (readonly, nonatomic) NSUInteger numZones; // ivar: _numZones
@property (readonly, nonatomic, getter=isOwnerUser) BOOL ownerUser; // ivar: _ownerUser
@property (readonly, nonatomic) BOOL primaryReportingDevice; // ivar: _primaryReportingDevice


+(BOOL)submitEventWithHistogrammedCommonConfigurationDimensions;
-(BOOL)isSubmitted;
-(id)eventName;
-(id)initWithHome:(id)arg0 metadataVersion:(unsigned int)arg1 databaseSize:(unsigned int)arg2 homeIndex:(NSUInteger)arg3 ;
-(id)serializedEvent;


@end


#endif