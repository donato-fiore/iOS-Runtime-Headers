// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCPAIDBUNDLECONFIGURATION_H
#define FCPAIDBUNDLECONFIGURATION_H

@class NSString, NSArray, NSDictionary, NSMutableDictionary, NFUnfairLock;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCPaidBundleConfiguration : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *appLaunchUpsellArticleID;
@property (readonly, nonatomic) NSUInteger appLaunchUpsellBundleTrialVisibility;
@property (readonly, nonatomic) NSString *appLaunchUpsellCampaignID;
@property (readonly, nonatomic) NSString *appLaunchUpsellInstanceID;
@property (readonly, nonatomic) BOOL appLaunchUpsellLastSeenDateSyncEnabled;
@property (readonly, nonatomic) BOOL appLaunchUpsellLastShownCampaignIDSyncEnabled;
@property (readonly, nonatomic) NSInteger appLaunchUpsellNewSessionBackgroundTimeInterval;
@property (readonly, nonatomic) NSUInteger appLaunchUpsellPaidVisibility;
@property (readonly, nonatomic) NSInteger appLaunchUpsellQuiescenceInterval;
@property (readonly, nonatomic) NSInteger appLaunchUpsellRequiredAppLaunchCount;
@property (readonly, nonatomic) NSUInteger articleHardPaywallType;
@property (readonly, nonatomic) NSString *audioArticlesChannelId;
@property (readonly, nonatomic) NSArray *audioChannelPaywallOverrideAllowedTagIDs;
@property (readonly, nonatomic) NSInteger audioCloseIdlePlayerAfterTime;
@property (readonly, nonatomic) NSString *audioDailyBriefingFeatureName;
@property (readonly, nonatomic) NSArray *audioFeedPaywallPositions;
@property (readonly, nonatomic) NSUInteger audioFeedPaywallSubtype;
@property (readonly, nonatomic) NSInteger audioFinishedAtTimeFromEnd;
@property (readonly, nonatomic) NSInteger audioOfflineArticlesMaxCountCriticalStorage;
@property (readonly, nonatomic) NSInteger audioOfflineArticlesMaxCountLowStorage;
@property (readonly, nonatomic) NSInteger audioOfflineArticlesMaxCountNormalStorage;
@property (readonly, nonatomic) NSDictionary *audioPaywallConfigurationsByType;
@property (readonly, nonatomic) NSInteger audioRecentlyPlayedMaxCount;
@property (readonly, nonatomic) BOOL audioRefreshForceWakeEnabled;
@property (readonly, nonatomic) NSInteger audioRefreshForceWakeRandomizationWindow;
@property (readonly, nonatomic) NSInteger audioRefreshTimeGMT;
@property (readonly, nonatomic) NSInteger audioRewindToParagraphStartAfterTime;
@property (readonly, nonatomic) NSDictionary *audioServicesBundlePaywallConfigurationsByType;
@property (readonly, nonatomic) NSInteger audioSuggestionsHighlyPersonalizedCount;
@property (readonly, nonatomic) NSInteger audioSuggestionsMaxAge;
@property (readonly, nonatomic) NSInteger audioSuggestionsMaxCount;
@property (readonly, nonatomic) NSInteger audioSuggestionsMaxIgnoreCount;
@property (readonly, nonatomic) NSInteger audioSuggestionsRecycleAfterTime;
@property (readonly, nonatomic) NSString *audioUpsellArticleID;
@property (retain, nonatomic) NSDictionary *audioUpsellConfigurationsByID; // ivar: _audioUpsellConfigurationsByID
@property (readonly, nonatomic) NSString *audioUpsellInstanceID;
@property (readonly, nonatomic) NSInteger audioUpsellMaxDisplayCount;
@property (readonly, nonatomic) NSInteger bundleSubscriptionsGlobalMeteredCount;
@property (readonly, nonatomic, getter=isCategoriesDownloadButtonEnabled) BOOL categoriesDownloadButtonEnabled;
@property (retain, nonatomic) NSDictionary *configDict; // ivar: _configDict
@property (readonly, nonatomic) NSInteger criticalStorageAutomaticIssueDownloadTTL;
@property (readonly, nonatomic) NSInteger criticalStorageManualIssueDownloadTTL;
@property (readonly, nonatomic) NSString *defaultLandingPageArticleID;
@property (readonly, nonatomic) NSString *defaultServicesBundleLandingPageArticleID;
@property (readonly, copy, nonatomic) NSArray *defaultSupportedStoreFronts; // ivar: _defaultSupportedStoreFronts
@property (readonly, nonatomic) NSString *endOfPurchaseFamilySharingSetupArticleID;
@property (readonly, nonatomic) NSString *endOfPurchaseNoFamilySharingSetupArticleID;
@property (readonly, nonatomic) NSString *endOfPurchaseServicesBundleFamilySharingSetupArticleID;
@property (readonly, nonatomic) NSString *endOfPurchaseServicesBundleNoFamilySharingSetupArticleID;
@property (readonly, nonatomic) NSInteger entitlementsCacheExpiredGracePeriodInSeconds;
@property (readonly, nonatomic) NSInteger entitlementsGracePeriodInSeconds;
@property (readonly, nonatomic) NSString *expirationAlertDescription;
@property (readonly, nonatomic) NSString *familySharingLandingPageArticleID;
@property (readonly, nonatomic, getter=isFamilySharingSetupEnabled) BOOL familySharingSetupEnabled;
@property (readonly, nonatomic) NSInteger featuredArticlesFetchLimit;
@property (readonly, nonatomic) NSString *featuredArticlesTagList;
@property (readonly, nonatomic) NSInteger feedAutoRefreshMinimumInterval;
@property (readonly, nonatomic) NSDictionary *flexiblePaywallConfig;
@property (readonly, nonatomic) NSInteger forYouMaxDailyPaidArticlesForFreeUsers;
@property (readonly, nonatomic) NSInteger forYouMaxMagazineGroupsForFreeUsers;
@property (readonly, nonatomic) NSInteger forYouMaxMagazineGroupsForPaidUsers;
@property (readonly, nonatomic) NSInteger forYouMaxMagazineGroupsForTrialUsers;
@property (readonly, nonatomic, getter=isFreeBadgeEnabled) BOOL freeBadgeEnabled;
@property (readonly, nonatomic, getter=isFreeBadgeEnabledForNonSubscribers) BOOL freeBadgeEnabledForNonSubscribers;
@property (readonly, nonatomic, getter=isFreeBadgeEnabledForSubscribers) BOOL freeBadgeEnabledForSubscribers;
@property (readonly, nonatomic) NSString *freeBadgeTitle;
@property (readonly, nonatomic) NSArray *groupWhitelistedTagIds;
@property (retain, nonatomic) NSMutableDictionary *keyedPaywallConfigurationsByType; // ivar: _keyedPaywallConfigurationsByType
@property (retain, nonatomic) NSMutableDictionary *keyedPostPurchaseOnboardingConfigurationsByType; // ivar: _keyedPostPurchaseOnboardingConfigurationsByType
@property (retain, nonatomic) NSMutableDictionary *keyedSubscriptionButtonConfigurationsByType; // ivar: _keyedSubscriptionButtonConfigurationsByType
@property (readonly, copy, nonatomic) NSString *localizedStorefrontID; // ivar: _localizedStorefrontID
@property (readonly, nonatomic) NFUnfairLock *lock; // ivar: _lock
@property (readonly, nonatomic) NSInteger lowStorageAutomaticIssueDownloadTTL;
@property (readonly, nonatomic) NSInteger lowStorageManualIssueDownloadTTL;
@property (readonly, nonatomic) NSUInteger magazineFeedPaywallSubtype;
@property (retain, nonatomic) NSDictionary *magazineGenresByGenre; // ivar: _magazineGenresByGenre
@property (readonly, nonatomic, getter=areMagazinesEnabled) BOOL magazinesEnabled;
@property (readonly, nonatomic) CGFloat maxPriceDeltaThreshold;
@property (readonly, nonatomic) NSInteger maximumArticlesWithSoftPaywallPerSession;
@property (readonly, nonatomic) NSInteger minFollowedMagazinesToHideSuggestionsCompact;
@property (readonly, nonatomic) NSInteger minFollowedMagazinesToHideSuggestionsRegular;
@property (readonly, nonatomic) NSInteger minimumArticlesBeforeArticleSoftPaywall;
@property (readonly, nonatomic) NSInteger minimumArticlesInANFIssueBeforeRead;
@property (readonly, nonatomic) NSInteger minimumPagesInPDFIssueBeforeRead;
@property (readonly, nonatomic) NSInteger minimumReadIssuesInMyMagazines;
@property (readonly, nonatomic, getter=isNarrativeAudioEnabled) BOOL narrativeAudioEnabled;
@property (readonly, nonatomic) NSInteger newIssuesCheckLocalTime;
@property (readonly, nonatomic) NSInteger newIssuesNotificationDeliveryLocalTime;
@property (readonly, nonatomic) NSInteger normalStorageAutomaticIssueDownloadTTL;
@property (readonly, nonatomic) NSInteger normalStorageManualIssueDownloadTTL;
@property (readonly, nonatomic) NSArray *offeredBundlePurchaseIDs;
@property (readonly, nonatomic, getter=isPaidBadgeEnabled) BOOL paidBadgeEnabled;
@property (readonly, nonatomic, getter=isPaidBadgeEnabledForNonSubscribers) BOOL paidBadgeEnabledForNonSubscribers;
@property (readonly, nonatomic, getter=isPaidBadgeEnabledForSubscribers) BOOL paidBadgeEnabledForSubscribers;
@property (readonly, nonatomic) NSString *paidBadgeTitle;
@property (readonly, nonatomic, getter=isPaidBundleVisible) BOOL paidBundleVisible;
@property (readonly, nonatomic) NSString *paidFeedID;
@property (readonly, nonatomic) NSUInteger paywallConfigsOfferType;
@property (readonly, nonatomic) NSDictionary *paywallConfigurationsByType;
@property (readonly, nonatomic) NSDictionary *postPurchaseOnboardingConfigurationsByType;
@property (readonly, nonatomic) NSInteger recentIssuesMaxAge;
@property (readonly, nonatomic) NSString *recommendableIssuesTagList;
@property (readonly, nonatomic) NSString *renewalLandingPageArticleID;
@property (readonly, nonatomic) NSArray *restorableBundlePurchaseIDs;
@property (readonly, nonatomic) NSString *servicesBundleMetricsTopicName;
@property (readonly, nonatomic) NSDictionary *servicesBundlePaywallConfigurationsByType;
@property (readonly, nonatomic) NSDictionary *servicesBundleSubscriptionButtonConfigurationsByType;
@property (readonly, nonatomic, getter=isSharingIssuesEnabled) BOOL sharingIssuesEnabled;
@property (readonly, copy, nonatomic) NSString *storefrontID; // ivar: _storefrontID
@property (readonly, nonatomic) NSDictionary *subscriptionButtonConfigurationsByType;
@property (readonly, nonatomic) NSUInteger subscriptionLinkTargetType;
@property (readonly, nonatomic, getter=isTemporaryAccessEnabled) BOOL temporaryAccessEnabled;
@property (readonly, nonatomic) NSInteger vanityURLMappingRefreshRate;
@property (readonly, nonatomic) NSString *vanityURLMappingResourceID;


+(id)defaultConfigurationForStorefrontID:(id)arg0 ;
+(id)defaultEndOfPurchaseFamilySharingSetupArticleIDByLocalizedStorefrontID;
+(id)defaultEndOfPurchaseNoFamilySharingSetupArticleIDByLocalizedStorefrontID;
+(id)defaultFamilySharingLandingPageByLocalizedStorefrontID;
+(id)defaultLandingPageByLocalizedStorefrontID;
+(id)defaultPaidFeedIDByLocalizedStorefrontID;
+(id)defaultServicesBundleLandingPageByLocalizedStorefrontID;
+(id)defaultTagListIDByLocalizedStorefrontID;
+(id)defaultVanityURLMappingResourceIDByLocalizedStorefrontID;
+(id)renewalLandingPageByLocalizedStorefrontID;
-(BOOL)arePaywallConfigsEqualToOtherPaidBundleConfig:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultAudioPaywallConfigs;
-(id)defaultMagazineGenres;
-(id)defaultPaywallConfigs;
-(id)defaultServicesBundleSubscriptionButtonConfigs;
-(id)defaultSubscriptionButtonConfigs;
-(id)init;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 storefrontID:(id)arg1 ;
-(id)initWithConfigDictionary:(id)arg0 storefrontID:(id)arg1 localizedStorefrontID:(id)arg2 defaultSupportedStoreFronts:(id)arg3 ;
-(id)paywallConfigurationsByTypeForKey:(id)arg0 ;
-(id)postPurchaseOnboardingConfigurationsByTypeForKey:(id)arg0 ;
-(id)subscriptionButtonConfigurationsByTypeForKey:(id)arg0 ;


@end


#endif