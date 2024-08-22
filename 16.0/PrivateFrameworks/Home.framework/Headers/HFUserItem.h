// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFUSERITEM_H
#define HFUSERITEM_H

@class NSString, NSSet, HMHome, HMSettings, NSUUID, HMUser;
@protocol HFHomeKitItemProtocol, HFHomeKitSettingsVendor, NSCopying, HFHomeKitObject;


#import "HFItem.h"
#import "HFHomeKitSettingsAdapterManager.h"
#import "HFHomeKitSettingsValueManager.h"
#import "HFUserNameFormatter.h"

@interface HFUserItem : HFItem <HFHomeKitItemProtocol, HFHomeKitSettingsVendor, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasValidSettings;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *hf_dependentHomeKitObjectsForDownstreamItems;
@property (retain, nonatomic) HMHome *hf_home; // ivar: _hf_home
@property (readonly, nonatomic) HFHomeKitSettingsAdapterManager *hf_settingsAdapterManager;
@property (readonly, nonatomic) HFHomeKitSettingsValueManager *hf_settingsValueManager;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) NSSet *homekitObjectIdentifiers;
@property (readonly, nonatomic) BOOL isContainedWithinItemGroup; // ivar: _isContainedWithinItemGroup
@property (readonly, nonatomic) BOOL isItemGroup; // ivar: _isItemGroup
@property (readonly, nonatomic) NSUInteger nameStyle;
@property (readonly, nonatomic) NSUInteger numberOfItemsContainedWithinGroup; // ivar: _numberOfItemsContainedWithinGroup
@property (readonly) HMSettings *settings;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) HMUser *user; // ivar: _user
@property (readonly, nonatomic) HFUserNameFormatter *userNameFormatter; // ivar: _userNameFormatter


+(id)_fakeHMSettings;
+(void)set_fakeHMSettings:(id)arg0 ;
-(BOOL)_getBoolSettingsValueForKeyPath:(id)arg0 defaultValue:(BOOL)arg1 settingsType:(NSUInteger)arg2 ;
-(BOOL)_getFakeBoolSettingsValueForKeyPath:(id)arg0 defaultValue:(BOOL)arg1 ;
-(BOOL)_hasDismissedWalletKeyExpressModeOnboarding;
-(BOOL)_hasValidPrivateSettings;
-(BOOL)_isSettingsValueForKeyPath:(id)arg0 atMaximumValue:(NSInteger)arg1 settingsType:(NSUInteger)arg2 ;
-(BOOL)hasCompletedNonOwnerUserHomeSwitchingUI;
-(BOOL)hasDismissedAccessCodeOnboarding;
-(BOOL)hasDismissedAccessoryFirmwareUpdateOnboarding;
-(BOOL)hasDismissedAnnounceOnboarding;
-(BOOL)hasDismissedCameraRecordingOnboarding;
-(BOOL)hasDismissedCameraRecordingReminderBanner;
-(BOOL)hasDismissedCameraUpgradeBanner;
-(BOOL)hasDismissedHomeTheaterOnboarding;
-(BOOL)hasDismissedIdentifyVoiceReminderBanner;
-(BOOL)hasDismissedNaturalLightingOnboarding;
-(BOOL)hasDismissedTVViewingProfilesOnboarding;
-(BOOL)hasDismissedTVViewingProfilesReminderBanner;
-(BOOL)hasDismissedUserSplitMediaAccountWarning;
-(BOOL)hasDismissedVoiceProfileOnboarding;
-(BOOL)hasDismissedWelcomeUIBanner;
-(BOOL)isAllowiTunesAccountEnabled;
-(BOOL)isAnnounceEnabled;
-(BOOL)isIdentifyVoiceEnabled;
-(BOOL)isPlaybackInfluencesForYouEnabled;
-(BOOL)shouldHideAddSceneButton;
-(id)_accessDescription;
-(id)_getSettingsValueForKeyPath:(id)arg0 defaultValue:(id)arg1 settingsType:(NSUInteger)arg2 block:(id)arg3 ;
-(id)_incrementSettingsValueForKeyPath:(id)arg0 stepValue:(NSInteger)arg1 maximumValue:(NSInteger)arg2 settingsType:(NSUInteger)arg3 ;
-(id)_privateSettings;
-(id)_privateSettingsValueManager;
-(id)_setBoolSettingsValueForKeyPath:(id)arg0 newValue:(BOOL)arg1 settingsType:(NSUInteger)arg2 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hasDismissedWalletKeyExpressModeOnboardingOnThisDevice;
-(id)incrementAddSceneButtonPresentedCount;
-(id)init;
-(id)initWithHome:(id)arg0 user:(id)arg1 nameStyle:(NSUInteger)arg2 ;
-(id)setAllowiTunesAccount:(BOOL)arg0 ;
-(id)setCompletedNonOwnerUserHomeSwitchingUI:(BOOL)arg0 ;
-(id)setDismissAccessCodeOnboarding:(BOOL)arg0 ;
-(id)setDismissAccessoryFirmwareUpdateOnboarding:(BOOL)arg0 ;
-(id)setDismissAnnounceOnboarding:(BOOL)arg0 ;
-(id)setDismissCameraRecordingOnboarding:(BOOL)arg0 ;
-(id)setDismissCameraRecordingReminderBanner:(BOOL)arg0 ;
-(id)setDismissCameraUpgradeBanner:(BOOL)arg0 ;
-(id)setDismissHomeTheaterOnboarding:(BOOL)arg0 ;
-(id)setDismissIdentifyVoiceOnboarding:(BOOL)arg0 ;
-(id)setDismissIdentifyVoiceReminderBanner:(BOOL)arg0 ;
-(id)setDismissNaturalLightingOnboarding:(BOOL)arg0 ;
-(id)setDismissTVViewingProfilesOnboarding:(BOOL)arg0 ;
-(id)setDismissTVViewingProfilesReminderBanner:(BOOL)arg0 ;
-(id)setDismissUserSplitMediaAccountWarning:(BOOL)arg0 ;
-(id)setDismissWalletKeyExpressModeOnboarding:(BOOL)arg0 forWalletKeyUUID:(id)arg1 ;
-(id)setDismissedWelcomeUIBanner:(BOOL)arg0 ;
-(id)setEnableAnnounce:(BOOL)arg0 ;
-(id)setEnableIdentifyVoice:(BOOL)arg0 ;
-(id)setPlaybackInfluencesForYou:(BOOL)arg0 ;
-(void)_setFakeBoolSettingsValueForKeyPath:(id)arg0 newValue:(BOOL)arg1 ;


@end


#endif