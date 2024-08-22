// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKFCKSHAREDUSERPRIVATEROOT_H
#define MKFCKSHAREDUSERPRIVATEROOT_H

@class NSDictionary;


#import "MKFCKSharedUserData.h"

@interface MKFCKSharedUserPrivateRoot : MKFCKSharedUserData

@property (nonatomic) NSInteger addSceneButtonPresentedCount;
@property (retain, nonatomic) NSDictionary *characteristicAuthorizationData;
@property (nonatomic) BOOL completedSwitchingHomesOnboardingUI;
@property (nonatomic) BOOL dismissedAccessCodeOnboarding;
@property (nonatomic) BOOL dismissedAccessoryFirmwareUpdateOnboarding;
@property (nonatomic) BOOL dismissedAnnounceOnboarding;
@property (nonatomic) BOOL dismissedCameraRecordingOnboarding;
@property (nonatomic) BOOL dismissedCameraRecordingSetupBanner;
@property (nonatomic) BOOL dismissedCameraUpgradeOfferBanner;
@property (nonatomic) BOOL dismissedHomeTheaterOnboarding;
@property (nonatomic) BOOL dismissedIdentifyVoiceOnboarding;
@property (nonatomic) BOOL dismissedIdentifyVoiceSetupBanner;
@property (nonatomic) BOOL dismissedNaturalLightingOnboarding;
@property (nonatomic) BOOL dismissedTVViewingProfileOnboarding;
@property (nonatomic) BOOL dismissedTVViewingProfileSetupBanner;
@property (nonatomic) BOOL dismissedUserSplitMediaAccountWarning;
@property (nonatomic) BOOL dismissedWalletKeyExpressModeOnboarding;
@property (nonatomic) BOOL dismissedWelcomeUI;
@property (nonatomic) BOOL hasUserSeenRMVNewLanguageNotification;


+(id)createWithHomeModelID:(id)arg0 persistentStore:(id)arg1 context:(id)arg2 ;
+(id)fetchRequest;


@end


#endif