// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCUSERINFO_H
#define FCUSERINFO_H

@class NSDictionary, NSDate, NSString, NSNumber;
@protocol FCTagSettingsDelegate;


#import "FCPrivateDataController.h"
#import "FCMTWriterLock.h"
#import "FCTagSettings.h"

@interface FCUserInfo : FCPrivateDataController <FCTagSettingsDelegate>

 {
    NSDictionary *_readOnlyUserInfo;
    FCMTWriterLock *_userInfoLock;
}


@property (copy, nonatomic) NSDate *aLaCarteSubscriptionMeteredCountLastResetDate;
@property (copy, nonatomic) NSString *adsUserID;
@property (copy, nonatomic) NSDate *appLaunchUpsellLastSeenDate;
@property (copy, nonatomic) NSDate *bundleSubscriptionMeteredCountLastResetDate;
@property (copy, nonatomic) NSString *canonicalLanguage;
@property (copy, nonatomic) NSDate *dateLastOpened;
@property (readonly, nonatomic) NSDate *dateLastViewedSaved;
@property (readonly, nonatomic) NSDate *dateLastViewedSharedWithYou;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *editorialArticleVersion;
@property (nonatomic) BOOL endOfAudioTrackNotificationsEnabled;
@property (copy, nonatomic) NSString *feldsparID;
@property (nonatomic) BOOL hasShownProgressivePersonalizationWelcomeBrick;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *issuesNewsletterOptinLastSeenDate;
@property (copy, nonatomic) NSString *lastAppLaunchUpsellInstanceID;
@property (nonatomic) BOOL marketingNotificationsEnabled;
@property (readonly, nonatomic) BOOL mightNeedToUpdateOnboardingVersion;
@property (copy, nonatomic) NSNumber *monthlyALaCarteSubscriptionMeteredCount;
@property (copy, nonatomic) NSNumber *monthlyBundleSubscriptionMeteredCount;
@property (nonatomic) BOOL newIssueNotificationsEnabled;
@property (copy, nonatomic) NSDate *newsletterSignupLastSeenDate;
@property (readonly, copy, nonatomic) NSString *notificationsUserID;
@property (copy, nonatomic) NSNumber *onboardingVersionNumber;
@property (copy, nonatomic) NSDate *personalizedNewsletterSignupLastSeenDate;
@property (readonly, nonatomic) NSUInteger progressivePersonalization;
@property (readonly, nonatomic) BOOL shouldShowDefaultForYou;
@property (readonly) Class superclass;
@property (retain, nonatomic) FCTagSettings *tagSettings; // ivar: _tagSettings
@property (copy, nonatomic) NSNumber *upsellAppLaunchCount;
@property (readonly, nonatomic) BOOL useParsecResults; // ivar: _useParsecResults
@property (nonatomic) BOOL userHasCompletedFavoritesSetup;
@property (copy, nonatomic) NSDate *userStartDate;


+(BOOL)requiresBatchedSync;
+(BOOL)requiresHighPriorityFirstSync;
+(BOOL)requiresPushNotificationSupport;
+(NSInteger)commandQueueUrgency;
+(NSUInteger)localStoreVersion;
+(id)backingRecordIDs;
+(id)backingRecordZoneIDs;
+(id)commandStoreFileName;
+(id)commandsToMergeLocalDataToCloud:(id)arg0 ;
+(id)desiredKeys;
+(id)localStoreFilename;
+(id)overrideFeldsparID;
-(BOOL)canHelpRestoreZoneName:(id)arg0 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg0 ;
-(id)initWithContext:(id)arg0 pushNotificationCenter:(id)arg1 storeDirectory:(id)arg2 ;
-(id)recordsForRestoringZoneName:(id)arg0 ;
-(void)accessTokenDidChangeForTagID:(id)arg0 ;
-(void)accessTokenRemovedForTagID:(id)arg0 userInitiated:(BOOL)arg1 ;
-(void)addModifyTagSettingsCommandToCommandQueue:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)handleSyncWithChangedRecords:(id)arg0 deletedRecordNames:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)markSavedAsViewed;
-(void)markSharedWithYouAsViewed;
-(void)maybeUpdateOnboardingVersion:(id)arg0 ;
-(void)prepareForUse;
-(void)refreshOnboardingVersion:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)syncWithCompletion:(id)arg0 ;
-(void)updateOnboardingVersion;


@end


#endif