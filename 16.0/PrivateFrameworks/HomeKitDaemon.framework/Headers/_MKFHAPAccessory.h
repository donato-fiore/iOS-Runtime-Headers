// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFHAPACCESSORY_H
#define _MKFHAPACCESSORY_H

@class MKFAccessory, NSNumber, NSData, NSArray, NSSet, NSDate, NSString, NSUUID;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHAPAccessory, MKFHAPAccessoryPrivateExtensions, MKFApplicationData, MKFHome, MKFAccessory, MKFRoom, MKFHomeNetworkRouterSetting, MKFSoftwareUpdate;


#import "HMFConnectivityInfo.h"
#import "MKFHAPAccessoryDatabaseID.h"
#import "_MKFHomeNetworkRouterSetting.h"

@interface _MKFHAPAccessory : MKFAccessory <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHAPAccessory, MKFHAPAccessoryPrivateExtensions>



@property (copy, nonatomic) NSNumber *accessModeChangeNotificationEnabled;
@property (copy, nonatomic) NSNumber *accessModeChangeNotificationEnabled;
@property (copy, nonatomic) NSNumber *accessoryCategory;
@property (copy, nonatomic) NSNumber *accessoryFlags;
@property (copy, nonatomic) NSNumber *accessoryFlags;
@property (retain, nonatomic) NSData *accessorySetupHash;
@property (retain, nonatomic) NSData *accessorySetupHash;
@property (readonly, retain, nonatomic) NSArray *actionCharacteristicWrites;
@property (retain, nonatomic) NSSet *actionCharacteristicWrites_;
@property (readonly, retain, nonatomic) NSArray *actionMediaPlaybacks;
@property (copy, nonatomic) NSNumber *airPlayEnabled;
@property (copy, nonatomic) NSNumber *airPlayEnabled;
@property (readonly, retain, nonatomic) NSArray *analysisEventBulletinRegistrations;
@property (copy, nonatomic) NSNumber *announceEnabled;
@property (copy, nonatomic) NSNumber *announceEnabled;
@property (retain, nonatomic) NSObject<MKFApplicationData> *applicationData;
@property (retain, nonatomic) NSArray *appliedFirewallWANRules;
@property (retain, nonatomic) NSData *broadcastKey;
@property (retain, nonatomic) NSData *broadcastKey;
@property (copy, nonatomic) NSNumber *cameraAccessModeAtHome;
@property (copy, nonatomic) NSNumber *cameraAccessModeAtHome;
@property (readonly, retain, nonatomic) NSArray *cameraAccessModeBulletinRegistrations;
@property (copy, nonatomic) NSNumber *cameraAccessModeNotAtHome;
@property (copy, nonatomic) NSNumber *cameraAccessModeNotAtHome;
@property (retain, nonatomic) NSSet *cameraActivityZones;
@property (retain, nonatomic) NSSet *cameraActivityZones;
@property (copy, nonatomic) NSNumber *cameraActivityZonesIncludedForSignificantEventDetection;
@property (copy, nonatomic) NSNumber *cameraActivityZonesIncludedForSignificantEventDetection;
@property (copy, nonatomic) NSNumber *cameraCurrentAccessMode;
@property (copy, nonatomic) NSNumber *cameraCurrentAccessMode;
@property (copy, nonatomic) NSDate *cameraCurrentAccessModeChangeDate;
@property (copy, nonatomic) NSDate *cameraCurrentAccessModeChangeDate;
@property (copy, nonatomic) NSNumber *cameraCurrentAccessModeChangeReason;
@property (copy, nonatomic) NSNumber *cameraCurrentAccessModeChangeReason;
@property (readonly, retain, nonatomic) NSArray *cameraReachabilityBulletinRegistrations;
@property (copy, nonatomic) NSNumber *cameraRecordingEventTriggers;
@property (copy, nonatomic) NSNumber *cameraRecordingEventTriggers;
@property (readonly, retain, nonatomic) NSArray *cameraSignificantEventBulletinRegistrations;
@property (copy, nonatomic) NSNumber *certificationStatus;
@property (copy, nonatomic) NSNumber *certificationStatus;
@property (copy, nonatomic) NSNumber *communicationProtocol;
@property (copy, nonatomic) NSNumber *communicationProtocol;
@property (copy, nonatomic) NSString *configurationAppIdentifier;
@property (copy, nonatomic) NSString *configuredName;
@property (retain, nonatomic) HMFConnectivityInfo *connectivityInfo;
@property (retain, nonatomic) HMFConnectivityInfo *connectivityInfo;
@property (copy, nonatomic) NSNumber *currentNetworkProtectionMode;
@property (readonly, copy, nonatomic) MKFHAPAccessoryDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *doorbellChimeEnabled;
@property (copy, nonatomic) NSNumber *doorbellChimeEnabled;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (copy, nonatomic) NSNumber *hardwareSupport;
@property (copy, nonatomic) NSNumber *hardwareSupport;
@property (copy, nonatomic) NSNumber *hasDismissedHomePodHasNonMemberMediaAccountWarning;
@property (copy, nonatomic) NSNumber *hasDismissedHomePodHasNonMemberMediaAccountWarning;
@property (copy, nonatomic) NSNumber *hasOnboardedForNaturalLighting;
@property (copy, nonatomic) NSNumber *hasOnboardedForNaturalLighting;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (retain, nonatomic) NSObject<MKFAccessory> *hostAccessory;
@property (readonly, retain, nonatomic) NSArray *hostedAccessories;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSNumber *initialCategoryIdentifier;
@property (copy, nonatomic) NSString *initialManufacturer;
@property (copy, nonatomic) NSString *initialModel;
@property (retain, nonatomic) NSArray *initialServiceTypes;
@property (retain, nonatomic) NSArray *initialServiceTypes;
@property (copy, nonatomic) NSNumber *interactionHoldDurationEnabled;
@property (copy, nonatomic) NSNumber *interactionHoldDurationEnabled;
@property (copy, nonatomic) NSNumber *interactionHoldDurationSeconds;
@property (copy, nonatomic) NSNumber *interactionHoldDurationSeconds;
@property (copy, nonatomic) NSNumber *interactionIgnoreRepeatEnabled;
@property (copy, nonatomic) NSNumber *interactionIgnoreRepeatEnabled;
@property (copy, nonatomic) NSNumber *interactionIgnoreRepeatSeconds;
@property (copy, nonatomic) NSNumber *interactionIgnoreRepeatSeconds;
@property (copy, nonatomic) NSNumber *interactionTouchAccommodationsEnabled;
@property (copy, nonatomic) NSNumber *interactionTouchAccommodationsEnabled;
@property (copy, nonatomic) NSNumber *keyUpdatedStateNumber;
@property (copy, nonatomic) NSNumber *keyUpdatedStateNumber;
@property (copy, nonatomic) NSDate *keyUpdatedTime;
@property (copy, nonatomic) NSDate *keyUpdatedTime;
@property (copy, nonatomic) NSNumber *lastNetworkAccessViolationOccurrenceSince1970;
@property (copy, nonatomic) NSNumber *lastNetworkAccessViolationResetSince1970;
@property (copy, nonatomic) NSDate *lastPairingAuditTime;
@property (copy, nonatomic) NSDate *lastPairingAuditTime;
@property (copy, nonatomic) NSNumber *lightWhenUsingSiriEnabled;
@property (copy, nonatomic) NSNumber *lightWhenUsingSiriEnabled;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSNumber *matterNodeID;
@property (copy, nonatomic) NSNumber *matterNodeID;
@property (retain, nonatomic) NSSet *matterPairings;
@property (retain, nonatomic) NSSet *matterPairings;
@property (readonly, retain, nonatomic) NSArray *mediaPropertyNotificationRegistrations;
@property (copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly, retain, nonatomic) NSArray *naturalLightingActions;
@property (retain, nonatomic) NSSet *naturalLightingActions_;
@property (copy, nonatomic) NSNumber *needsOnboarding;
@property (copy, nonatomic) NSNumber *needsOnboarding;
@property (copy, nonatomic) NSNumber *needsPairingAudit;
@property (copy, nonatomic) NSNumber *needsPairingAudit;
@property (copy, nonatomic) NSNumber *networkClientIdentifier;
@property (copy, nonatomic) NSNumber *networkClientLAN;
@property (copy, nonatomic) NSString *networkClientProfileFingerprint;
@property (copy, nonatomic) NSString *networkRouterUUID;
@property (readonly, retain, nonatomic) NSArray *pairedUsers;
@property (retain, nonatomic) NSSet *pairedUsers_;
@property (copy, nonatomic) NSString *pairingUsername;
@property (copy, nonatomic) NSString *pairingUsername;
@property (retain, nonatomic) NSSet *pairingsToRemove;
@property (retain, nonatomic) NSSet *pairingsToRemove;
@property (copy, nonatomic) NSString *pendingConfigurationIdentifier;
@property (copy, nonatomic) NSUUID *preferredMediaUserUUID;
@property (copy, nonatomic) NSUUID *preferredMediaUserUUID;
@property (copy, nonatomic) NSNumber *preferredUserSelectionType;
@property (copy, nonatomic) NSNumber *preferredUserSelectionType;
@property (copy, nonatomic) NSString *primaryProfileVersion;
@property (copy, nonatomic) NSString *productData;
@property (copy, nonatomic) NSString *providedName;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSData *publicKey;
@property (copy, nonatomic) NSNumber *reachabilityEventNotificationEnabled;
@property (copy, nonatomic) NSNumber *reachabilityEventNotificationEnabled;
@property (retain, nonatomic) NSObject<MKFRoom> *room;
@property (copy, nonatomic) NSString *serialNumber;
@property (readonly, retain, nonatomic) NSArray *services;
@property (retain, nonatomic) NSSet *services_;
@property (retain, nonatomic) _MKFHomeNetworkRouterSetting *settingNetworkRouter;
@property (retain, nonatomic) NSObject<MKFHomeNetworkRouterSetting> *settingNetworkRouter;
@property (copy, nonatomic) NSNumber *shareSiriAnalytics;
@property (copy, nonatomic) NSNumber *shareSiriAnalytics;
@property (copy, nonatomic) NSNumber *shareSpeakerAnalytics;
@property (copy, nonatomic) NSNumber *shareSpeakerAnalytics;
@property (copy, nonatomic) NSNumber *siriEnabled;
@property (copy, nonatomic) NSNumber *siriEnabled;
@property (copy, nonatomic) NSNumber *siriEndpointEnabled;
@property (copy, nonatomic) NSNumber *siriEndpointEnabled;
@property (copy, nonatomic) NSString *siriLanguageCode;
@property (copy, nonatomic) NSString *siriLanguageCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceGenderCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceGenderCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceName;
@property (copy, nonatomic) NSString *siriLanguageVoiceName;
@property (copy, nonatomic) NSNumber *sleepInterval;
@property (copy, nonatomic) NSNumber *sleepInterval;
@property (retain, nonatomic) NSData *smartBulletinBoardNotificationData;
@property (retain, nonatomic) NSData *smartBulletinBoardNotificationData;
@property (retain, nonatomic) NSObject<MKFSoftwareUpdate> *softwareUpdate;
@property (copy, nonatomic) NSNumber *soundAlertEnabled;
@property (copy, nonatomic) NSNumber *soundAlertEnabled;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *suspendCapable;
@property (copy, nonatomic) NSNumber *suspendedState;
@property (copy, nonatomic) NSNumber *suspendedState;
@property (retain, nonatomic) NSArray *targetUUIDs;
@property (retain, nonatomic) NSArray *targetUUIDs;
@property (retain, nonatomic) NSArray *transportInformation;
@property (retain, nonatomic) NSArray *transportInformation;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, retain, nonatomic) NSArray *usersWithListeningHistoryEnabled;
@property (readonly, retain, nonatomic) NSArray *usersWithMediaContentProfileEnabled;
@property (readonly, retain, nonatomic) NSArray *usersWithPersonalRequestsEnabled;
@property (copy, nonatomic) NSNumber *visionDoubleTapSettingsTimeoutInterval;
@property (copy, nonatomic) NSNumber *visionDoubleTapSettingsTimeoutInterval;
@property (copy, nonatomic) NSNumber *visionSpeakingRate;
@property (copy, nonatomic) NSNumber *visionSpeakingRate;
@property (copy, nonatomic) NSNumber *visionVoiceOverAudioDuckingEnabled;
@property (copy, nonatomic) NSNumber *visionVoiceOverAudioDuckingEnabled;
@property (copy, nonatomic) NSNumber *visionVoiceOverEnabled;
@property (copy, nonatomic) NSNumber *visionVoiceOverEnabled;
@property (copy, nonatomic) NSNumber *wiFiCredentialType;
@property (copy, nonatomic) NSNumber *wiFiTransportCapabilities;
@property (copy, nonatomic) NSNumber *wiFiTransportCapabilities;
@property (retain, nonatomic) NSData *wiFiUniquePreSharedKey;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)bulletinRegistrationFromFetchRequest:(id)arg0 context:(id)arg1 ;
-(id)cameraAccessModeBulletinRegistrationWithDeviceIdsIdentifier:(id)arg0 context:(id)arg1 ;
-(id)cameraReachabilityBulletinRegistrationWithDeviceIdsIdentifier:(id)arg0 context:(id)arg1 ;
-(id)cameraSignificantEventBulletinRegistrationWithDeviceIdsIdentifier:(id)arg0 context:(id)arg1 ;
-(id)castIfHAPAccessory;
-(id)characteristicFromInstanceID:(id)arg0 context:(id)arg1 ;
-(id)findServicesRelationWithInstanceID:(id)arg0 ;
-(id)materializeOrCreateNaturalLightingActionsRelation:(*BOOL)arg0 ;
-(id)materializeOrCreateServicesRelationWithInstanceID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)predicateToFetchBulletinRegistrationOnDeviceIdsIdentifier:(id)arg0 ;
-(id)serviceWithID:(id)arg0 context:(id)arg1 ;
-(void)addPairedUsersObject:(id)arg0 ;
-(void)maybeFixUpCharacteristicWriteActionsInContext:(id)arg0 ;
-(void)removePairedUsersObject:(id)arg0 ;
-(void)synchronizeServicesRelationWith:(id)arg0 ;


@end


#endif