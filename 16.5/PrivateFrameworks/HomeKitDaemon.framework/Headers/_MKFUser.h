// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKFUSER_H
#define _MKFUSER_H

@class MKFModel, NSArray, NSSet, NSNumber, NSString, NSUUID, NSDictionary, HAPPairingIdentity, NSDate, CKRecordID, CKDeviceToDeviceShareInvitationToken;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFUser, MKFUserPrivateExtensions, MKFUserAccessCode, MKFHome, MKFOutgoingInvitation;


#import "_MKFUserAccessCode.h"
#import "HMDAccountHandle.h"
#import "HMDAccountIdentifier.h"
#import "MKFUserDatabaseID.h"
#import "_MKFHome.h"
#import "_MKFOutgoingInvitation.h"

@interface _MKFUser : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFUser, MKFUserPrivateExtensions>



@property (retain, nonatomic) _MKFUserAccessCode *accessCode;
@property (retain, nonatomic) NSObject<MKFUserAccessCode> *accessCode;
@property (readonly, retain, nonatomic) NSArray *accessoriesWithListeningHistoryEnabled;
@property (retain, nonatomic) NSSet *accessoriesWithListeningHistoryEnabled_;
@property (readonly, retain, nonatomic) NSArray *accessoriesWithMediaContentProfileEnabled;
@property (retain, nonatomic) NSSet *accessoriesWithMediaContentProfileEnabled_;
@property (readonly, retain, nonatomic) NSArray *accessoriesWithPersonalRequestsEnabled;
@property (retain, nonatomic) NSSet *accessoriesWithPersonalRequestsEnabled_;
@property (retain, nonatomic) HMDAccountHandle *accountHandle;
@property (retain, nonatomic) HMDAccountHandle *accountHandle;
@property (retain, nonatomic) HMDAccountIdentifier *accountIdentifier;
@property (retain, nonatomic) HMDAccountIdentifier *accountIdentifier;
@property (copy, nonatomic) NSNumber *activityNotificationsEnabledForPersonalRequests;
@property (copy, nonatomic) NSNumber *activityNotificationsEnabledForPersonalRequests;
@property (copy, nonatomic) NSNumber *allowExplicitContent;
@property (copy, nonatomic) NSNumber *allowExplicitContent;
@property (copy, nonatomic) NSNumber *allowiTunesAccount;
@property (copy, nonatomic) NSNumber *allowiTunesAccount;
@property (copy, nonatomic) NSNumber *analysisAccessSelection;
@property (copy, nonatomic) NSNumber *analysisAccessSelection;
@property (copy, nonatomic) NSNumber *announceAccessLevel;
@property (copy, nonatomic) NSNumber *announceAccessLevel;
@property (readonly, retain, nonatomic) NSArray *bulletinConditions;
@property (retain, nonatomic) NSSet *bulletinConditions_;
@property (readonly, retain, nonatomic) NSArray *bulletinRegistrations;
@property (retain, nonatomic) NSSet *bulletinRegistrations_;
@property (copy, nonatomic) NSNumber *camerasAccessLevel;
@property (copy, nonatomic) NSNumber *camerasAccessLevel;
@property (copy, nonatomic) NSString *changeTag;
@property (copy, nonatomic) NSString *changeTag;
@property (readonly, copy, nonatomic) MKFUserDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *dolbyAtmosEnabled;
@property (copy, nonatomic) NSNumber *dolbyAtmosEnabled;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (retain, nonatomic) _MKFHome *home;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (copy, nonatomic) NSString *idsMergeIdentifier;
@property (copy, nonatomic) NSString *idsMergeIdentifier;
@property (retain, nonatomic) _MKFOutgoingInvitation *invitation;
@property (retain, nonatomic) NSObject<MKFOutgoingInvitation> *invitation;
@property (readonly, retain, nonatomic) NSArray *locationEvents;
@property (retain, nonatomic) NSSet *locationEvents_;
@property (copy, nonatomic) NSNumber *losslessMusicEnabled;
@property (copy, nonatomic) NSNumber *losslessMusicEnabled;
@property (copy, nonatomic) NSUUID *modelID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly, retain, nonatomic) NSArray *notificationRegistrations;
@property (retain, nonatomic) NSSet *notificationRegistrations_;
@property (retain, nonatomic) _MKFHome *ownedHome;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *ownedHome;
@property (copy, nonatomic) NSNumber *ownerAddSceneButtonPresentedCount;
@property (copy, nonatomic) NSNumber *ownerAddSceneButtonPresentedCount;
@property (retain, nonatomic) NSDictionary *ownerCharacteristicAuthorizationData;
@property (retain, nonatomic) NSDictionary *ownerCharacteristicAuthorizationData;
@property (copy, nonatomic) NSNumber *ownerCompletedSwitchingHomesOnboardingUI;
@property (copy, nonatomic) NSNumber *ownerCompletedSwitchingHomesOnboardingUI;
@property (copy, nonatomic) NSNumber *ownerDismissedAccessCodeOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedAccessCodeOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedAccessoryFirmwareUpdateOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedAccessoryFirmwareUpdateOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedAnnounceOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedAnnounceOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedCameraRecordingOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedCameraRecordingOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedCameraRecordingSetupBanner;
@property (copy, nonatomic) NSNumber *ownerDismissedCameraRecordingSetupBanner;
@property (copy, nonatomic) NSNumber *ownerDismissedCameraUpgradeOfferBanner;
@property (copy, nonatomic) NSNumber *ownerDismissedCameraUpgradeOfferBanner;
@property (copy, nonatomic) NSNumber *ownerDismissedHomeTheaterOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedHomeTheaterOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedIdentifyVoiceOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedIdentifyVoiceOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedIdentifyVoiceSetupBanner;
@property (copy, nonatomic) NSNumber *ownerDismissedIdentifyVoiceSetupBanner;
@property (copy, nonatomic) NSNumber *ownerDismissedNaturalLightingOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedNaturalLightingOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedTVViewingProfileOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedTVViewingProfileOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedTVViewingProfileSetupBanner;
@property (copy, nonatomic) NSNumber *ownerDismissedTVViewingProfileSetupBanner;
@property (copy, nonatomic) NSNumber *ownerDismissedUserSplitMediaAccountWarning;
@property (copy, nonatomic) NSNumber *ownerDismissedUserSplitMediaAccountWarning;
@property (copy, nonatomic) NSNumber *ownerDismissedWalletKeyExpressModeOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedWalletKeyExpressModeOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedWelcomeUI;
@property (copy, nonatomic) NSNumber *ownerDismissedWelcomeUI;
@property (copy, nonatomic) NSNumber *ownerHasUserSeenRMVNewLanguageNotification;
@property (copy, nonatomic) NSNumber *ownerHasUserSeenRMVNewLanguageNotification;
@property (readonly, retain, nonatomic) NSArray *pairedAirPlayAccessories;
@property (retain, nonatomic) NSSet *pairedAirPlayAccessories_;
@property (readonly, retain, nonatomic) NSArray *pairedHAPAccessories;
@property (retain, nonatomic) NSSet *pairedHAPAccessories_;
@property (retain, nonatomic) HAPPairingIdentity *pairingIdentity;
@property (retain, nonatomic) HAPPairingIdentity *pairingIdentity;
@property (readonly, retain, nonatomic) NSArray *personsFromPhotos;
@property (retain, nonatomic) NSSet *personsFromPhotos_;
@property (copy, nonatomic) NSUUID *photosPersonDataZoneUUID;
@property (copy, nonatomic) NSUUID *photosPersonDataZoneUUID;
@property (copy, nonatomic) NSNumber *playbackInfluencesEnabled;
@property (copy, nonatomic) NSNumber *playbackInfluencesEnabled;
@property (copy, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (copy, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (readonly, retain, nonatomic) NSArray *presenceEvents;
@property (retain, nonatomic) NSSet *presenceEvents_;
@property (copy, nonatomic) NSNumber *presenceRegionStatus;
@property (copy, nonatomic) NSNumber *presenceRegionStatus;
@property (copy, nonatomic) NSDate *presenceUpdateTimeStamp;
@property (copy, nonatomic) NSDate *presenceUpdateTimeStamp;
@property (copy, nonatomic) NSNumber *privilege;
@property (copy, nonatomic) NSNumber *privilege;
@property (copy, nonatomic) NSNumber *remoteAccessAllowed;
@property (copy, nonatomic) NSNumber *remoteAccessAllowed;
@property (retain, nonatomic) CKRecordID *reverseShareID;
@property (retain, nonatomic) CKRecordID *reverseShareID;
@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *reverseShareToken;
@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *reverseShareToken;
@property (copy, nonatomic) NSNumber *sharePhotosFaceClassifications;
@property (copy, nonatomic) NSNumber *sharePhotosFaceClassifications;
@property (copy, nonatomic) NSNumber *siriIdentifyVoiceEnabled;
@property (copy, nonatomic) NSNumber *siriIdentifyVoiceEnabled;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSArray *triggers;
@property (retain, nonatomic) NSSet *triggers_;
@property (copy, nonatomic) NSNumber *uniqueIDForAccessories;
@property (copy, nonatomic) NSNumber *uniqueIDForAccessories;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
+(id)sharedUserDataRootForUser:(id)arg0 context:(id)arg1 ;
-(BOOL)isActive;
-(BOOL)isOwner;
-(BOOL)isOwnerOrAdmin;
-(id)additionalModelsForSameUser;
-(id)audioAnalysisUserDropInAccessLevel;
-(id)castIfUser;
-(id)characteristicBulletinRegistrationForAccessory:(id)arg0 serviceInstanceID:(id)arg1 characteristicInstanceID:(id)arg2 deviceIdsIdentifier:(id)arg3 context:(id)arg4 ;
-(id)createBulletinRegistrationsRelationOfType:(id)arg0 modelID:(id)arg1 ;
-(id)createBulletinRegistrationsRelationOfTypeAnalysisEventBulletinRegistrationWithModelID:(id)arg0 ;
-(id)createBulletinRegistrationsRelationOfTypeBulletinRegistrationWithModelID:(id)arg0 ;
-(id)createBulletinRegistrationsRelationOfTypeCameraAccessModeBulletinRegistrationWithModelID:(id)arg0 ;
-(id)createBulletinRegistrationsRelationOfTypeCameraReachabilityBulletinRegistrationWithModelID:(id)arg0 ;
-(id)createBulletinRegistrationsRelationOfTypeCameraSignificantEventBulletinRegistrationWithModelID:(id)arg0 ;
-(id)createBulletinRegistrationsRelationOfTypeCharacteristicBulletinRegistrationWithModelID:(id)arg0 ;
-(id)createNotificationRegistrationsRelationOfType:(id)arg0 modelID:(id)arg1 ;
-(id)createNotificationRegistrationsRelationOfTypeNotificationRegistrationCharacteristicWithModelID:(id)arg0 ;
-(id)createNotificationRegistrationsRelationOfTypeNotificationRegistrationMediaPropertyWithModelID:(id)arg0 ;
-(id)findAccessCodeRelationWithModelID:(id)arg0 ;
-(id)findBulletinConditionsRelationWithModelID:(id)arg0 ;
-(id)findBulletinRegistrationsRelationOfTypeAnalysisEventBulletinRegistrationWithModelID:(id)arg0 ;
-(id)findBulletinRegistrationsRelationOfTypeBulletinRegistrationWithModelID:(id)arg0 ;
-(id)findBulletinRegistrationsRelationOfTypeCameraAccessModeBulletinRegistrationWithModelID:(id)arg0 ;
-(id)findBulletinRegistrationsRelationOfTypeCameraReachabilityBulletinRegistrationWithModelID:(id)arg0 ;
-(id)findBulletinRegistrationsRelationOfTypeCameraSignificantEventBulletinRegistrationWithModelID:(id)arg0 ;
-(id)findBulletinRegistrationsRelationOfTypeCharacteristicBulletinRegistrationWithModelID:(id)arg0 ;
-(id)findNotificationRegistrationsRelationOfTypeNotificationRegistrationCharacteristicWithModelID:(id)arg0 ;
-(id)findNotificationRegistrationsRelationOfTypeNotificationRegistrationMediaPropertyWithModelID:(id)arg0 ;
-(id)findPersonsFromPhotosRelationWithModelID:(id)arg0 ;
-(id)materializeOrCreateAccessCodeRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateBulletinConditionsRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateBulletinRegistrationsRelationOfType:(id)arg0 modelID:(id)arg1 createdNew:(*BOOL)arg2 ;
-(id)materializeOrCreateBulletinRegistrationsRelationOfTypeAnalysisEventBulletinRegistrationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateBulletinRegistrationsRelationOfTypeBulletinRegistrationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateBulletinRegistrationsRelationOfTypeCameraAccessModeBulletinRegistrationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateBulletinRegistrationsRelationOfTypeCameraReachabilityBulletinRegistrationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateBulletinRegistrationsRelationOfTypeCameraSignificantEventBulletinRegistrationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateBulletinRegistrationsRelationOfTypeCharacteristicBulletinRegistrationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateNotificationRegistrationsRelationOfType:(id)arg0 modelID:(id)arg1 createdNew:(*BOOL)arg2 ;
-(id)materializeOrCreateNotificationRegistrationsRelationOfTypeNotificationRegistrationCharacteristicWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateNotificationRegistrationsRelationOfTypeNotificationRegistrationMediaPropertyWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreatePersonsFromPhotosRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)notificationRegistrationForCharacteristic:(id)arg0 deviceIdsDestination:(id)arg1 context:(id)arg2 ;
-(id)notificationRegistrationForMediaProperty:(id)arg0 mediaProfile:(id)arg1 deviceIdsDestination:(id)arg2 context:(id)arg3 ;
-(id)sharedUserDataRoot;
-(id)userWithAccessCode:(id)arg0 context:(id)arg1 ;
-(void)addAccessoriesWithListeningHistoryEnabledObject:(id)arg0 ;
-(void)addAccessoriesWithMediaContentProfileEnabledObject:(id)arg0 ;
-(void)addAccessoriesWithPersonalRequestsEnabledObject:(id)arg0 ;
-(void)addBulletinConditionsObject:(id)arg0 ;
-(void)addBulletinRegistrationsObject:(id)arg0 ;
-(void)addNotificationRegistrationsObject:(id)arg0 ;
-(void)addPairedAirPlayAccessoriesObject:(id)arg0 ;
-(void)addPairedHAPAccessoriesObject:(id)arg0 ;
-(void)addPersonsFromPhotosObject:(id)arg0 ;
-(void)removeAccessoriesWithListeningHistoryEnabledObject:(id)arg0 ;
-(void)removeAccessoriesWithMediaContentProfileEnabledObject:(id)arg0 ;
-(void)removeAccessoriesWithPersonalRequestsEnabledObject:(id)arg0 ;
-(void)removeBulletinConditionsObject:(id)arg0 ;
-(void)removeBulletinRegistrationsObject:(id)arg0 ;
-(void)removeNotificationRegistrationsObject:(id)arg0 ;
-(void)removePairedAirPlayAccessoriesObject:(id)arg0 ;
-(void)removePairedHAPAccessoriesObject:(id)arg0 ;
-(void)removePersonsFromPhotosObject:(id)arg0 ;
-(void)residentSyncContextualizeConditions:(id)arg0 userContext:(id)arg1 ;
-(void)setAudioAnalysisUserDropInAccessLevel:(id)arg0 ;


@end


#endif