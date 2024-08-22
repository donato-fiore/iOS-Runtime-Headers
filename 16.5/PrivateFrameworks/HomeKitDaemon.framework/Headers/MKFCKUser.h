// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFCKUSER_H
#define MKFCKUSER_H

@class NSString, NSSet, NSUUID, NSDictionary, HAPPairingIdentity, CKRecordID, CKDeviceToDeviceShareInvitationToken, NSDate;


#import "MKFCKHomeObject.h"
#import "MKFCKHome.h"
#import "MKFCKOutgoingInvitation.h"

@interface MKFCKUser : MKFCKHomeObject

@property (copy, nonatomic) NSString *accountHandle;
@property (nonatomic) NSInteger analysisAccessSelection;
@property (nonatomic) NSInteger announceAccessLevel;
@property (retain, nonatomic) NSSet *automations;
@property (nonatomic) NSInteger camerasAccessLevel;
@property (copy, nonatomic) NSUUID *flags;
@property (retain, nonatomic) MKFCKHome *home;
@property (copy, nonatomic) NSString *homeAccessCode;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSString *idsMergeIdentifier;
@property (retain, nonatomic) MKFCKOutgoingInvitation *invitation;
@property (copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) MKFCKHome *ownedHome;
@property (nonatomic) BOOL ownerActivityNotificationsEnabledForPersonalRequests;
@property (nonatomic) NSInteger ownerAddSceneButtonPresentedCount;
@property (nonatomic) BOOL ownerAllowExplicitContent;
@property (nonatomic) BOOL ownerAllowiTunesAccount;
@property (retain, nonatomic) NSDictionary *ownerCharacteristicAuthorizationData;
@property (nonatomic) BOOL ownerCompletedSwitchingHomesOnboardingUI;
@property (nonatomic) BOOL ownerDismissedAccessCodeOnboarding;
@property (nonatomic) BOOL ownerDismissedAccessoryFirmwareUpdateOnboarding;
@property (nonatomic) BOOL ownerDismissedAnnounceOnboarding;
@property (nonatomic) BOOL ownerDismissedCameraRecordingOnboarding;
@property (nonatomic) BOOL ownerDismissedCameraRecordingSetupBanner;
@property (nonatomic) BOOL ownerDismissedCameraUpgradeOfferBanner;
@property (nonatomic) BOOL ownerDismissedHomeTheaterOnboarding;
@property (nonatomic) BOOL ownerDismissedIdentifyVoiceOnboarding;
@property (nonatomic) BOOL ownerDismissedIdentifyVoiceSetupBanner;
@property (nonatomic) BOOL ownerDismissedNaturalLightingOnboarding;
@property (nonatomic) BOOL ownerDismissedTVViewingProfileOnboarding;
@property (nonatomic) BOOL ownerDismissedTVViewingProfileSetupBanner;
@property (nonatomic) BOOL ownerDismissedUserSplitMediaAccountWarning;
@property (nonatomic) BOOL ownerDismissedWalletKeyExpressModeOnboarding;
@property (nonatomic) BOOL ownerDismissedWelcomeUI;
@property (nonatomic) BOOL ownerDolbyAtmosEnabled;
@property (nonatomic) BOOL ownerHasUserSeenRMVNewLanguageNotification;
@property (nonatomic) BOOL ownerLosslessMusicEnabled;
@property (nonatomic) BOOL ownerPlaybackInfluencesEnabled;
@property (nonatomic) BOOL ownerSiriIdentifyVoiceEnabled;
@property (retain, nonatomic) HAPPairingIdentity *pairingIdentity;
@property (retain, nonatomic) NSSet *personsFromPhotos;
@property (copy, nonatomic) NSUUID *photosPersonDataZoneUUID;
@property (nonatomic) NSInteger privilege;
@property (nonatomic) BOOL remoteAccessAllowed;
@property (retain, nonatomic) CKRecordID *reverseShareID;
@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *reverseShareToken;
@property (nonatomic) BOOL sharePhotosFaceClassifications;
@property (nonatomic) NSInteger uniqueIDForAccessories;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;


+(id)fetchRequest;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)exportOwnerUserSettingsFromLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importOwnerUserSettingsIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)importSharedUserSettingsIntoLocalModel:(id)arg0 context:(id)arg1 ;
-(BOOL)isOwner;
-(id)_resolveSharedUserDataRootWithContext:(id)arg0 ;


@end


#endif