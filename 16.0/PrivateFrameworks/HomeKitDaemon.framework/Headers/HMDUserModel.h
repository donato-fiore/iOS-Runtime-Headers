// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDUSERMODEL_H
#define HMDUSERMODEL_H

@class NSArray, NSNumber, NSString, HMUserHomeAccessSettings, NSDictionary, CKRecordID;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDBackingStoreModelObject.h"
#import "HMDAccountHandle.h"
#import "HMDAccountIdentifier.h"

@interface HMDUserModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>



@property (retain, nonatomic) NSArray *accessoriesWithListeningHistoryEnabled;
@property (retain, nonatomic) NSArray *accessoriesWithMediaContentProfileEnabled;
@property (retain, nonatomic) NSArray *accessoriesWithPersonalRequestsEnabled;
@property (retain, nonatomic) HMDAccountHandle *accountHandle;
@property (retain, nonatomic) HMDAccountIdentifier *accountIdentifier;
@property (retain, nonatomic) NSNumber *activityNotificationsEnabledForPersonalRequests;
@property (retain, nonatomic) NSNumber *allowExplicitContent;
@property (retain, nonatomic) NSArray *allowedAccessoryCategories;
@property (retain, nonatomic) NSArray *allowedAccessoryUUIDStrings;
@property (retain, nonatomic) NSArray *allowedRoomUUIDStrings;
@property (retain, nonatomic) NSNumber *allowiTunesAccount;
@property (retain, nonatomic) NSNumber *announceAccessAllowed;
@property (retain, nonatomic) NSNumber *announceAccessLevel;
@property (retain, nonatomic) NSNumber *camerasAccessLevel;
@property (retain, nonatomic) NSString *changeTag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *dolbyAtmosEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HMUserHomeAccessSettings *homeAccessSettings;
@property (retain, nonatomic) NSNumber *losslessMusicEnabled;
@property (copy, nonatomic) NSNumber *ownerAddSceneButtonPresentedCount;
@property (retain, nonatomic) NSDictionary *ownerCharacteristicAuthorizationData;
@property (copy, nonatomic) NSNumber *ownerCompletedSwitchingHomesOnboardingUI;
@property (copy, nonatomic) NSNumber *ownerDismissedAccessCodeOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedAccessoryFirmwareUpdateOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedAnnounceOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedCameraRecordingOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedCameraRecordingSetupBanner;
@property (copy, nonatomic) NSNumber *ownerDismissedCameraUpgradeOfferBanner;
@property (copy, nonatomic) NSNumber *ownerDismissedHomeTheaterOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedIdentifyVoiceOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedIdentifyVoiceSetupBanner;
@property (copy, nonatomic) NSNumber *ownerDismissedNaturalLightingOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedTVViewingProfileOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedTVViewingProfileSetupBanner;
@property (copy, nonatomic) NSNumber *ownerDismissedUserSplitMediaAccountWarning;
@property (copy, nonatomic) NSNumber *ownerDismissedWalletKeyExpressModeOnboarding;
@property (copy, nonatomic) NSNumber *ownerDismissedWelcomeUI;
@property (retain, nonatomic) NSDictionary *pairingIdentity;
@property (retain, nonatomic) NSString *photosPersonDataZoneUUIDString;
@property (retain, nonatomic) NSNumber *playbackInfluencesEnabled;
@property (retain, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *remoteAccessAllowed;
@property (retain, nonatomic) CKRecordID *reverseShareID;
@property (retain, nonatomic) NSNumber *sharePhotosFaceClassifications;
@property (retain, nonatomic) NSNumber *siriIdentifyVoiceEnabled;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *userID;


+(Class)cd_entityClass;
+(id)cd_getHMDUserFromMKFUser:(id)arg0 ;
+(id)cd_getMKFUserFromUUID:(id)arg0 ;
+(id)cd_parentReferenceName;
+(id)properties;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;


@end


#endif