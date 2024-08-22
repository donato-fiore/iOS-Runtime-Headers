// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITHOMECONFIGURATION_H
#define AWDHOMEKITHOMECONFIGURATION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface AWDHomeKitHomeConfiguration : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL autoThirdPartyJetEnable; // ivar: _autoThirdPartyJetEnable
@property (nonatomic) int currentMediaAccessoryFallbackMediaUserType; // ivar: _currentMediaAccessoryFallbackMediaUserType
@property (nonatomic) unsigned int enabledResidentsDeviceCapabilities; // ivar: _enabledResidentsDeviceCapabilities
@property (retain, nonatomic) NSMutableArray *eventTriggers; // ivar: _eventTriggers
@property (nonatomic) int firstHAPAccessoryAddedCohortWeek; // ivar: _firstHAPAccessoryAddedCohortWeek
@property (retain, nonatomic) NSMutableArray *hapServicesListCertifieds; // ivar: _hapServicesListCertifieds
@property (retain, nonatomic) NSMutableArray *hapServicesLists; // ivar: _hapServicesLists
@property (nonatomic) BOOL hasAutoThirdPartyJetEnable;
@property (nonatomic) BOOL hasCurrentMediaAccessoryFallbackMediaUserType;
@property (nonatomic) BOOL hasEnabledResidentsDeviceCapabilities;
@property (nonatomic) BOOL hasFirstHAPAccessoryAddedCohortWeek;
@property (nonatomic) BOOL hasHomeCreationCohortWeek;
@property (nonatomic) BOOL hasHomeCreationMonth;
@property (nonatomic) BOOL hasHomeCreationYear;
@property (nonatomic) BOOL hasHomepodSynchLatency;
@property (nonatomic) BOOL hasIsOwner;
@property (nonatomic) BOOL hasIsPrimaryResident;
@property (nonatomic) BOOL hasIsResidentAvailable;
@property (nonatomic) BOOL hasNetworkProtectionStatus;
@property (nonatomic) BOOL hasNumAccessories;
@property (nonatomic) BOOL hasNumAccessoriesNetworkProtectionAutoFullAccess;
@property (nonatomic) BOOL hasNumAccessoriesNetworkProtectionAutoProtectedHomeKitLAN;
@property (nonatomic) BOOL hasNumAccessoriesNetworkProtectionAutoProtectedMainLAN;
@property (nonatomic) BOOL hasNumAccessoriesNetworkProtectionFullAccess;
@property (nonatomic) BOOL hasNumAccessoriesNetworkProtectionHomeKitOnly;
@property (nonatomic) BOOL hasNumAccessoriesNetworkProtectionUnprotected;
@property (nonatomic) BOOL hasNumAccessoriesWiFiPPSKCredential;
@property (nonatomic) BOOL hasNumAccessoryServiceGroups;
@property (nonatomic) BOOL hasNumAdmins;
@property (nonatomic) BOOL hasNumAppleAudioAccessories;
@property (nonatomic) BOOL hasNumAppleMediaAccessories;
@property (nonatomic) BOOL hasNumAppleTV4K2ndGenAccessories;
@property (nonatomic) BOOL hasNumAppleTVAccessories;
@property (nonatomic) BOOL hasNumBSPs;
@property (nonatomic) BOOL hasNumBridgedAccessories;
@property (nonatomic) BOOL hasNumBridgedTargetControllers;
@property (nonatomic) BOOL hasNumCameraAccessories;
@property (nonatomic) BOOL hasNumCameraAccessoriesReachabilityNotificationEnabled;
@property (nonatomic) BOOL hasNumCameraAccessoriesRecordingAudioEnabled;
@property (nonatomic) BOOL hasNumCameraAccessoriesRecordingEnabled;
@property (nonatomic) BOOL hasNumCameraAccessoriesSmartBulletinNotificationEnabled;
@property (nonatomic) BOOL hasNumCameraAccessoriesSupportRecording;
@property (nonatomic) BOOL hasNumCameraAccessoriesWithActivityZonesEnabled;
@property (nonatomic) BOOL hasNumCertifiedAccessories;
@property (nonatomic) BOOL hasNumCertifiedBridgedTargetControllers;
@property (nonatomic) BOOL hasNumCertifiedTargetControllers;
@property (nonatomic) BOOL hasNumConfiguredScenes;
@property (nonatomic) BOOL hasNumEventTriggers;
@property (nonatomic) BOOL hasNumHAPAccessories;
@property (nonatomic) BOOL hasNumHAPBLEAccessoriesSupportJet;
@property (nonatomic) BOOL hasNumHAPBTAccessories;
@property (nonatomic) BOOL hasNumHAPBatteryServiceAccessories;
@property (nonatomic) BOOL hasNumHAPIPAccessories;
@property (nonatomic) BOOL hasNumHAPIPAccessoriesSupportJet;
@property (nonatomic) BOOL hasNumHAPNoeAccessoriesSupportJet;
@property (nonatomic) BOOL hasNumHAPSpeakerServiceAccessories;
@property (nonatomic) BOOL hasNumHomePods;
@property (nonatomic) BOOL hasNumLightProfilesWithNaturalLightingEnabled;
@property (nonatomic) BOOL hasNumLightProfilesWithNaturalLightingSupported;
@property (nonatomic) BOOL hasNumLightProfilesWithNaturalLightingUsed;
@property (nonatomic) BOOL hasNumMediaSystems;
@property (nonatomic) BOOL hasNumMoe1Accessories;
@property (nonatomic) BOOL hasNumMoe2Accessories;
@property (nonatomic) BOOL hasNumNoeAccessories;
@property (nonatomic) BOOL hasNumNoeBRCap;
@property (nonatomic) BOOL hasNumNoeBRs;
@property (nonatomic) BOOL hasNumNoeFullCap;
@property (nonatomic) BOOL hasNumNoeMinCap;
@property (nonatomic) BOOL hasNumNoeRoutCap;
@property (nonatomic) BOOL hasNumNoeSleepCap;
@property (nonatomic) BOOL hasNumNotCertifiedAccessories;
@property (nonatomic) BOOL hasNumOfNonAcceptedParticipantsWithKnownCapability;
@property (nonatomic) BOOL hasNumOfParticipantsHaveAccepted;
@property (nonatomic) BOOL hasNumOfParticipantsHaveCloudShareIDAndHaveAccepted;
@property (nonatomic) BOOL hasNumOfParticipantsHaveCloudShareIDButNotAccepted;
@property (nonatomic) BOOL hasNumPoe2Count;
@property (nonatomic) BOOL hasNumPoeCount;
@property (nonatomic) BOOL hasNumPrimaryHAPSpeakerServiceAccessories;
@property (nonatomic) BOOL hasNumResidentsEnabled;
@property (nonatomic) BOOL hasNumRooms;
@property (nonatomic) BOOL hasNumScenes;
@property (nonatomic) BOOL hasNumServices;
@property (nonatomic) BOOL hasNumShortcuts;
@property (nonatomic) BOOL hasNumTargetControllers;
@property (nonatomic) BOOL hasNumTelevisionAccessories;
@property (nonatomic) BOOL hasNumTimerTriggers;
@property (nonatomic) BOOL hasNumTriggerOwnedConfiguredScenes;
@property (nonatomic) BOOL hasNumTriggers;
@property (nonatomic) BOOL hasNumUsers;
@property (nonatomic) BOOL hasNumWholeHouseAudioAccessories;
@property (nonatomic) BOOL hasNumWoLAccessories;
@property (nonatomic) BOOL hasNumZones;
@property (nonatomic) BOOL hasPrimaryReportingDevice;
@property (nonatomic) int homeCreationCohortWeek; // ivar: _homeCreationCohortWeek
@property (nonatomic) unsigned int homeCreationMonth; // ivar: _homeCreationMonth
@property (nonatomic) unsigned int homeCreationYear; // ivar: _homeCreationYear
@property (retain, nonatomic) NSMutableArray *homeKitMultiUserSettings; // ivar: _homeKitMultiUserSettings
@property (nonatomic) unsigned int homepodSynchLatency; // ivar: _homepodSynchLatency
@property (nonatomic) BOOL isOwner; // ivar: _isOwner
@property (nonatomic) BOOL isPrimaryResident; // ivar: _isPrimaryResident
@property (nonatomic) BOOL isResidentAvailable; // ivar: _isResidentAvailable
@property (nonatomic) int networkProtectionStatus; // ivar: _networkProtectionStatus
@property (nonatomic) unsigned int numAccessories; // ivar: _numAccessories
@property (nonatomic) unsigned int numAccessoriesNetworkProtectionAutoFullAccess; // ivar: _numAccessoriesNetworkProtectionAutoFullAccess
@property (nonatomic) unsigned int numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN; // ivar: _numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN
@property (nonatomic) unsigned int numAccessoriesNetworkProtectionAutoProtectedMainLAN; // ivar: _numAccessoriesNetworkProtectionAutoProtectedMainLAN
@property (nonatomic) unsigned int numAccessoriesNetworkProtectionFullAccess; // ivar: _numAccessoriesNetworkProtectionFullAccess
@property (nonatomic) unsigned int numAccessoriesNetworkProtectionHomeKitOnly; // ivar: _numAccessoriesNetworkProtectionHomeKitOnly
@property (nonatomic) unsigned int numAccessoriesNetworkProtectionUnprotected; // ivar: _numAccessoriesNetworkProtectionUnprotected
@property (nonatomic) unsigned int numAccessoriesWiFiPPSKCredential; // ivar: _numAccessoriesWiFiPPSKCredential
@property (nonatomic) unsigned int numAccessoryServiceGroups; // ivar: _numAccessoryServiceGroups
@property (nonatomic) unsigned int numAdmins; // ivar: _numAdmins
@property (nonatomic) unsigned int numAppleAudioAccessories; // ivar: _numAppleAudioAccessories
@property (nonatomic) unsigned int numAppleMediaAccessories; // ivar: _numAppleMediaAccessories
@property (nonatomic) unsigned int numAppleTV4K2ndGenAccessories; // ivar: _numAppleTV4K2ndGenAccessories
@property (nonatomic) unsigned int numAppleTVAccessories; // ivar: _numAppleTVAccessories
@property (nonatomic) unsigned int numBSPs; // ivar: _numBSPs
@property (nonatomic) unsigned int numBridgedAccessories; // ivar: _numBridgedAccessories
@property (nonatomic) unsigned int numBridgedTargetControllers; // ivar: _numBridgedTargetControllers
@property (nonatomic) unsigned int numCameraAccessories; // ivar: _numCameraAccessories
@property (nonatomic) unsigned int numCameraAccessoriesReachabilityNotificationEnabled; // ivar: _numCameraAccessoriesReachabilityNotificationEnabled
@property (nonatomic) unsigned int numCameraAccessoriesRecordingAudioEnabled; // ivar: _numCameraAccessoriesRecordingAudioEnabled
@property (nonatomic) unsigned int numCameraAccessoriesRecordingEnabled; // ivar: _numCameraAccessoriesRecordingEnabled
@property (nonatomic) unsigned int numCameraAccessoriesSmartBulletinNotificationEnabled; // ivar: _numCameraAccessoriesSmartBulletinNotificationEnabled
@property (nonatomic) unsigned int numCameraAccessoriesSupportRecording; // ivar: _numCameraAccessoriesSupportRecording
@property (nonatomic) unsigned int numCameraAccessoriesWithActivityZonesEnabled; // ivar: _numCameraAccessoriesWithActivityZonesEnabled
@property (nonatomic) unsigned int numCertifiedAccessories; // ivar: _numCertifiedAccessories
@property (nonatomic) unsigned int numCertifiedBridgedTargetControllers; // ivar: _numCertifiedBridgedTargetControllers
@property (nonatomic) unsigned int numCertifiedTargetControllers; // ivar: _numCertifiedTargetControllers
@property (nonatomic) unsigned int numConfiguredScenes; // ivar: _numConfiguredScenes
@property (nonatomic) unsigned int numEventTriggers; // ivar: _numEventTriggers
@property (nonatomic) unsigned int numHAPAccessories; // ivar: _numHAPAccessories
@property (nonatomic) unsigned int numHAPBLEAccessoriesSupportJet; // ivar: _numHAPBLEAccessoriesSupportJet
@property (nonatomic) unsigned int numHAPBTAccessories; // ivar: _numHAPBTAccessories
@property (nonatomic) unsigned int numHAPBatteryServiceAccessories; // ivar: _numHAPBatteryServiceAccessories
@property (nonatomic) unsigned int numHAPIPAccessories; // ivar: _numHAPIPAccessories
@property (nonatomic) unsigned int numHAPIPAccessoriesSupportJet; // ivar: _numHAPIPAccessoriesSupportJet
@property (nonatomic) unsigned int numHAPNoeAccessoriesSupportJet; // ivar: _numHAPNoeAccessoriesSupportJet
@property (nonatomic) unsigned int numHAPSpeakerServiceAccessories; // ivar: _numHAPSpeakerServiceAccessories
@property (nonatomic) unsigned int numHomePods; // ivar: _numHomePods
@property (nonatomic) unsigned int numLightProfilesWithNaturalLightingEnabled; // ivar: _numLightProfilesWithNaturalLightingEnabled
@property (nonatomic) unsigned int numLightProfilesWithNaturalLightingSupported; // ivar: _numLightProfilesWithNaturalLightingSupported
@property (nonatomic) unsigned int numLightProfilesWithNaturalLightingUsed; // ivar: _numLightProfilesWithNaturalLightingUsed
@property (nonatomic) unsigned int numMediaSystems; // ivar: _numMediaSystems
@property (nonatomic) unsigned int numMoe1Accessories; // ivar: _numMoe1Accessories
@property (nonatomic) unsigned int numMoe2Accessories; // ivar: _numMoe2Accessories
@property (nonatomic) unsigned int numNoeAccessories; // ivar: _numNoeAccessories
@property (nonatomic) unsigned int numNoeBRCap; // ivar: _numNoeBRCap
@property (nonatomic) unsigned int numNoeBRs; // ivar: _numNoeBRs
@property (nonatomic) unsigned int numNoeFullCap; // ivar: _numNoeFullCap
@property (nonatomic) unsigned int numNoeMinCap; // ivar: _numNoeMinCap
@property (nonatomic) unsigned int numNoeRoutCap; // ivar: _numNoeRoutCap
@property (nonatomic) unsigned int numNoeSleepCap; // ivar: _numNoeSleepCap
@property (nonatomic) unsigned int numNotCertifiedAccessories; // ivar: _numNotCertifiedAccessories
@property (nonatomic) unsigned int numOfNonAcceptedParticipantsWithKnownCapability; // ivar: _numOfNonAcceptedParticipantsWithKnownCapability
@property (nonatomic) unsigned int numOfParticipantsHaveAccepted; // ivar: _numOfParticipantsHaveAccepted
@property (nonatomic) unsigned int numOfParticipantsHaveCloudShareIDAndHaveAccepted; // ivar: _numOfParticipantsHaveCloudShareIDAndHaveAccepted
@property (nonatomic) unsigned int numOfParticipantsHaveCloudShareIDButNotAccepted; // ivar: _numOfParticipantsHaveCloudShareIDButNotAccepted
@property (nonatomic) int numPoe2Count; // ivar: _numPoe2Count
@property (nonatomic) int numPoeCount; // ivar: _numPoeCount
@property (nonatomic) unsigned int numPrimaryHAPSpeakerServiceAccessories; // ivar: _numPrimaryHAPSpeakerServiceAccessories
@property (nonatomic) unsigned int numResidentsEnabled; // ivar: _numResidentsEnabled
@property (nonatomic) unsigned int numRooms; // ivar: _numRooms
@property (nonatomic) unsigned int numScenes; // ivar: _numScenes
@property (nonatomic) unsigned int numServices; // ivar: _numServices
@property (nonatomic) unsigned int numShortcuts; // ivar: _numShortcuts
@property (nonatomic) unsigned int numTargetControllers; // ivar: _numTargetControllers
@property (nonatomic) unsigned int numTelevisionAccessories; // ivar: _numTelevisionAccessories
@property (nonatomic) unsigned int numTimerTriggers; // ivar: _numTimerTriggers
@property (nonatomic) unsigned int numTriggerOwnedConfiguredScenes; // ivar: _numTriggerOwnedConfiguredScenes
@property (nonatomic) unsigned int numTriggers; // ivar: _numTriggers
@property (nonatomic) unsigned int numUsers; // ivar: _numUsers
@property (nonatomic) unsigned int numWholeHouseAudioAccessories; // ivar: _numWholeHouseAudioAccessories
@property (nonatomic) unsigned int numWoLAccessories; // ivar: _numWoLAccessories
@property (nonatomic) unsigned int numZones; // ivar: _numZones
@property (retain, nonatomic) NSMutableArray *primaryHAPServicesListCertifieds; // ivar: _primaryHAPServicesListCertifieds
@property (retain, nonatomic) NSMutableArray *primaryHAPServicesLists; // ivar: _primaryHAPServicesLists
@property (nonatomic) BOOL primaryReportingDevice; // ivar: _primaryReportingDevice


+(Class)hapServicesListCertifiedType;
+(Class)hapServicesListType;
+(Class)primaryHAPServicesListCertifiedType;
+(Class)primaryHAPServicesListType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentMediaAccessoryFallbackMediaUserTypeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventTriggersAtIndex:(NSUInteger)arg0 ;
-(id)hapServicesListAtIndex:(NSUInteger)arg0 ;
-(id)hapServicesListCertifiedAtIndex:(NSUInteger)arg0 ;
-(id)homeKitMultiUserSettingsAtIndex:(NSUInteger)arg0 ;
-(id)networkProtectionStatusAsString:(int)arg0 ;
-(id)primaryHAPServicesListAtIndex:(NSUInteger)arg0 ;
-(id)primaryHAPServicesListCertifiedAtIndex:(NSUInteger)arg0 ;
-(int)StringAsCurrentMediaAccessoryFallbackMediaUserType:(id)arg0 ;
-(int)StringAsNetworkProtectionStatus:(id)arg0 ;
-(void)addEventTriggers:(id)arg0 ;
-(void)addHapServicesList:(id)arg0 ;
-(void)addHapServicesListCertified:(id)arg0 ;
-(void)addHomeKitMultiUserSettings:(id)arg0 ;
-(void)addPrimaryHAPServicesList:(id)arg0 ;
-(void)addPrimaryHAPServicesListCertified:(id)arg0 ;
-(void)clearEventTriggers;
-(void)clearHapServicesListCertifieds;
-(void)clearHapServicesLists;
-(void)clearHomeKitMultiUserSettings;
-(void)clearPrimaryHAPServicesListCertifieds;
-(void)clearPrimaryHAPServicesLists;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif