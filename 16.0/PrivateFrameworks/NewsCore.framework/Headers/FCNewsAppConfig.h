// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCNEWSAPPCONFIG_H
#define FCNEWSAPPCONFIG_H

@class NSDictionary, NSString, NSArray, NSNumber, NTPBDiscoverMoreVideosInfo;
@protocol FCNewsAppConfiguration, FCCoreConfiguration, FCJSONEncodableObjectProviding;

#import <Foundation/Foundation.h>

#import "FCPersonalizationTreatment.h"
#import "FCWidgetConfig.h"
#import "FCAppReviewRequestConfig.h"
#import "FCEmbedProxyConfiguration.h"
#import "FCForYouGroupsConfiguration.h"
#import "FCVideoGroupsConfig.h"
#import "FCIAdConfiguration.h"
#import "FCLaunchPresentationConfig.h"
#import "FCNewsPersonalizationConfiguration.h"
#import "FCNotificationsConfiguration.h"
#import "FCPaidBundleConfiguration.h"
#import "FCPrefetchConfiguration.h"
#import "FCSmarterMessagingConfig.h"
#import "FCSportsPrivacyConfiguration.h"
#import "FCSportsUpsellConfig.h"
#import "FCTimesOfDayConfiguration.h"
#import "FCTopStoriesConfiguration.h"

@interface FCNewsAppConfig : NSObject <FCNewsAppConfiguration, FCCoreConfiguration, FCJSONEncodableObjectProviding>

 {
    NSDictionary *_configDictionary;
    NSString *_storefrontID;
    NSDictionary *_languageConfigDictionary;
    FCPersonalizationTreatment *_cachedPersonalizationTreatment;
    NSDictionary *_analyticsContentTypeConfigsByContentTypeByEnvironment;
    FCWidgetConfig *_widgetConfig;
    NSDictionary *_cachedPaidALaCartePaywallConfigs;
}


@property (readonly, nonatomic) NSArray *aLaCartePaidSubscriptionGroupWhitelistedChannelIDs;
@property (readonly, nonatomic) BOOL adInstrumentationEnabled;
@property (readonly, nonatomic) NSInteger alternateUniversalLinksResourceRefreshRate;
@property (readonly, copy, nonatomic) NSArray *analyticsDenylistDescriptorsInternal;
@property (readonly, copy, nonatomic) NSArray *analyticsDenylistDescriptorsPublic;
@property (readonly, copy, nonatomic) NSArray *analyticsDenylistDescriptorsSeed;
@property (readonly, nonatomic) NSInteger analyticsEndpointMaxPayloadSize;
@property (readonly, copy, nonatomic) NSArray *analyticsEventNamesInternalAllowlist;
@property (readonly, copy, nonatomic) NSArray *analyticsEventNamesPublicAllowlist;
@property (readonly, copy, nonatomic) NSArray *analyticsEventNamesSeedAllowlist;
@property (readonly, nonatomic) CGFloat analyticsJitterLowerBound;
@property (readonly, nonatomic) CGFloat analyticsJitterUpperBound;
@property (readonly, nonatomic) NSString *anfRenderingConfiguration;
@property (readonly, nonatomic) NSInteger appConfigRefreshRate;
@property (readonly, nonatomic) FCAppReviewRequestConfig *appReviewRequestConfig;
@property (readonly, nonatomic) BOOL appReviewRequestEnabled;
@property (readonly, nonatomic) NSArray *appleNewsNotificationChannelIDs;
@property (readonly, nonatomic) NSInteger articleAdPrefetchLimit;
@property (readonly, nonatomic) CGFloat articleBannerAdRequestThrottle;
@property (readonly, nonatomic) CGFloat articleDiversificationSimilarityExpectationEnd;
@property (readonly, nonatomic) CGFloat articleDiversificationSimilarityExpectationStart;
@property (readonly, nonatomic) CGFloat articleDiversificationUniquePublisherExpectationSlope;
@property (readonly, nonatomic) CGFloat articleDiversificationUniquePublisherExpectationYIntercept;
@property (readonly, nonatomic) NSInteger articleRapidUpdatesTimeout;
@property (readonly, nonatomic) NSInteger articleReadCountThreshold;
@property (readonly, nonatomic) NSString *articleRecirculationComponentPlacementConfigJSON;
@property (readonly, nonatomic) NSString *articleRecirculationConfigJSON;
@property (readonly, nonatomic) NSInteger articleRecirculationPopularFeedQueryTimeRange;
@property (readonly, nonatomic, getter=isArticleToolbarCompressionEnabled) BOOL articleToolbarCompressionEnabled;
@property (readonly, nonatomic) NSString *audioConfigRecordID;
@property (readonly, nonatomic) BOOL audioFeedConfigRequestsEnabled;
@property (readonly, nonatomic) NSString *audioHistoryFeedConfigurationResourceId;
@property (readonly, nonatomic) NSString *audioPlaylistFeedConfigurationResourceId;
@property (readonly, nonatomic) BOOL autoOnboardShortcuts;
@property (readonly, nonatomic) NSInteger autoRefreshMinimumInterval;
@property (readonly, nonatomic) NSInteger autoScrollToTopFeedTimeout;
@property (readonly, nonatomic) NSUInteger bestOfBundleFeedGroupKind;
@property (readonly, nonatomic) NSInteger bestOfferRequestTimeoutDurationInSeconds;
@property (readonly, nonatomic) NSString *breakingNewsChannelID;
@property (readonly, nonatomic) NSString *briefingsTagID;
@property (readonly, nonatomic) NSString *businessAudioTagID;
@property (readonly, nonatomic) NSDictionary *campaignReferralConfigsByID; // ivar: _campaignReferralConfigsByID
@property (readonly, nonatomic) NSDictionary *channelPickerConfigsByName; // ivar: _channelPickerConfigsByName
@property (readonly, nonatomic) NSDictionary *channelUpsellConfigsByChannelID; // ivar: _channelUpsellConfigsByChannelID
@property (readonly, nonatomic) BOOL checkForPaywallConfigChangesEnabled;
@property (readonly, nonatomic) BOOL clientSideEngagementBoostEnabled;
@property (readonly, nonatomic) BOOL considerAutofavoritesInMappingCandidates;
@property (readonly, nonatomic) CGFloat continueReadingDismissalInterval;
@property (readonly, nonatomic) NSString *conversionCohortsExpField;
@property (readonly, nonatomic) BOOL corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
@property (readonly, nonatomic) NSInteger corryBarMaxArticleCountForArticleList;
@property (readonly, nonatomic) NSInteger corryBarMaxArticleCountForSingleArticle;
@property (readonly, nonatomic) NSInteger criticalStorageThreshold;
@property (readonly, nonatomic) NSNumber *currentTreatment;
@property (readonly, nonatomic) NSInteger dailyChannelUpsellsCountLimit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat delayBeforeRetryingDroppedFeeds;
@property (readonly, copy, nonatomic) NSArray *deprecatedSportsTopicTagIds;
@property (readonly, nonatomic) CGFloat derivedPersonalizationDataBalanceValue;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableThumbnailsForArticleRecirculation;
@property (readonly, nonatomic) NSArray *discoverNewsPlusChannelIDs;
@property (readonly, nonatomic) BOOL diversifyOptionalTopStories;
@property (readonly, copy, nonatomic) NSArray *editoralRecommendedSportsTopicTagIds;
@property (readonly, nonatomic) NSString *editorialChannelID;
@property (readonly, copy, nonatomic) NSArray *editorialFallbackSportsTopicTagIds;
@property (readonly, nonatomic) NSString *editorialGemsSectionID;
@property (readonly, copy, nonatomic) NSDictionary *editorialTopicEventMapping;
@property (readonly, nonatomic) NSInteger emailSignupRequiredAppLaunchCount;
@property (readonly, nonatomic) NSString *embedConfigurationAssetID;
@property (readonly, nonatomic) FCEmbedProxyConfiguration *embedProxyConfiguration;
@property (readonly, nonatomic) BOOL enableBadgeInSpotlightTabBar;
@property (readonly, nonatomic) BOOL enableCacheFallbackForArticleRecirculation;
@property (readonly, nonatomic) BOOL enableLocationBasedAutofavorites;
@property (readonly, nonatomic) NSInteger endOfArticleExpireArticlesAfter;
@property (readonly, nonatomic) NSString *endOfArticleFeedConfigurationResourceId;
@property (readonly, nonatomic) NSInteger endOfArticleMaxInaccessiblePaidArticleCount;
@property (readonly, nonatomic) CGFloat endOfArticleMinPaidHeadlineRatio;
@property (readonly, nonatomic) NSDictionary *endpointConfigsByEnvironment; // ivar: _endpointConfigsByEnvironment
@property (readonly, nonatomic) NSString *engagementCohortsExpField;
@property (readonly, nonatomic) NSInteger entitlementsCacheRecoveryAttemptDurationInSeconds;
@property (readonly, nonatomic) NSInteger entitlementsRequestTimeoutDurationInSeconds;
@property (readonly, nonatomic) NSString *experimentalizableFieldPostfix;
@property (readonly, nonatomic) NSInteger expirePinnedArticlesAfter;
@property (readonly, nonatomic) NSInteger expiredPaidSubscriptionGroupCutoffTime;
@property (readonly, nonatomic) NSString *exploreArticleID;
@property (readonly, nonatomic) NSArray *externalAnalyticsConfigurations; // ivar: _externalAnalyticsConfigurations
@property (readonly, nonatomic) NSString *featuredStoriesTagID;
@property (readonly, nonatomic) NSInteger feedAdScreenfulsToPrefetch;
@property (readonly, nonatomic) CGFloat feedBannerAdRequestThrottle;
@property (readonly, nonatomic) NSInteger feedContentExposureTestMaximumInterval;
@property (readonly, nonatomic) CGFloat feedLineHeightMultiplier;
@property (readonly, nonatomic) NSString *feedNavigationConfigJSON;
@property (readonly, nonatomic) BOOL forYouGroupShouldPromoteAccessibleHeadline;
@property (readonly, nonatomic) FCForYouGroupsConfiguration *forYouGroupsConfiguration; // ivar: _forYouGroupsConfiguration
@property (readonly, nonatomic) NSInteger forYouMaxDailyEvergreenArticlesForFreeUsers;
@property (readonly, nonatomic) NSInteger forYouMaxDailyEvergreenArticlesForPaidUsers;
@property (readonly, nonatomic) NSString *forYouPremiumRecordConfigID;
@property (readonly, nonatomic) NSString *forYouRecordConfigID;
@property (readonly, copy, nonatomic) FCVideoGroupsConfig *forYouVideoGroupsConfig; // ivar: _forYouVideoGroupsConfig
@property (readonly, nonatomic) NSString *freeEvergreenArticleListID;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *hiddenFeedIDs;
@property (readonly, nonatomic) BOOL hideAlacartePaywalls;
@property (readonly, nonatomic) BOOL hideAllPaywalls;
@property (readonly, nonatomic) NSString *historyFeedConfigurationResourceId;
@property (readonly, nonatomic) FCIAdConfiguration *iAdConfig; // ivar: _iAdConfig
@property (readonly, nonatomic) BOOL immersiveSidebar;
@property (readonly, nonatomic) BOOL inAppMessagesEnabled;
@property (readonly, nonatomic) NSString *inConversationsAudioTagID;
@property (readonly, nonatomic) CGFloat interstitialAdLoadDelay;
@property (readonly, nonatomic) CGFloat interstitialAdRequestThrottle;
@property (readonly, nonatomic) BOOL isAnalyticsJitterEnabled;
@property (readonly, nonatomic) BOOL isCardFeedRedesignEnabled;
@property (readonly, nonatomic) BOOL isLocalNewsInTopStoriesEnabled;
@property (readonly, nonatomic) BOOL isSIWAOnMacEnabled;
@property (readonly, nonatomic) BOOL isSportsSyncingSupported;
@property (readonly, nonatomic) NSString *issueArticleRecirculationConfigJSON;
@property (readonly, nonatomic) BOOL issuesNewsletterOptinEnabled;
@property (readonly, nonatomic) FCLaunchPresentationConfig *launchPresentationConfig; // ivar: _launchPresentationConfig
@property (readonly, nonatomic) NSUInteger likeDislikeBehavior;
@property (readonly, nonatomic) NSString *localAreasMappingResourceId;
@property (readonly, nonatomic) NSString *locationRecommendationMappingsResourceId;
@property (readonly, nonatomic) NSInteger lowStorageThreshold;
@property (readonly, nonatomic) NSString *magazinesConfigRecordID;
@property (readonly, nonatomic) NSInteger maxRetriesForDroppedFeeds;
@property (readonly, nonatomic) NSInteger maxSportRecommendationsPerSport;
@property (readonly, nonatomic) NSInteger maxSportRecommendationsWithLeagueTypeCollege;
@property (readonly, nonatomic) NSInteger maximumNumberOfExpiredPaidSubscriptionGroups;
@property (readonly, nonatomic) NSInteger maximumPaidSubscriptionGroupSizeiPad;
@property (readonly, nonatomic) NSInteger maximumPaidSubscriptionGroupSizeiPhone;
@property (readonly, nonatomic) NSInteger maximumRetryAfterForCK;
@property (readonly, nonatomic) NSInteger maximumTimesHeadlineInPaidSubscriptionGroup;
@property (readonly, nonatomic) NSInteger maximumTrendingGroupSizeiPad;
@property (readonly, nonatomic) NSInteger maximumTrendingGroupSizeiPhone;
@property (readonly, nonatomic) NSArray *mediaSharingBlacklistedChannelIDs;
@property (readonly, nonatomic) CGFloat minMembershipForTaxonomyCandidates;
@property (readonly, nonatomic) CGFloat minMembershipThreshold;
@property (readonly, nonatomic) CGFloat minMembershipThresholdForLocalRecommendation;
@property (readonly, nonatomic) CGFloat minScoreThresholdForSportsRecommendations;
@property (readonly, nonatomic) NSInteger minShortcutsOnboardCount;
@property (readonly, nonatomic) NSInteger minimumBucketGroupConfigVersion;
@property (readonly, nonatomic) NSInteger minimumDistanceBetweenImageOnTopTiles;
@property (readonly, nonatomic) NSInteger minimumDurationBetweenForYouGroupsWeekday;
@property (readonly, nonatomic) NSInteger minimumDurationBetweenForYouGroupsWeekend;
@property (readonly, nonatomic) NSInteger minimumDurationBetweenTrendingGroupsWeekday;
@property (readonly, nonatomic) NSInteger minimumDurationBetweenTrendingGroupsWeekend;
@property (readonly, nonatomic) CGFloat minimumTrendingUnseenRatio;
@property (readonly, nonatomic) NSString *myMagazinesTagID; // ivar: _myMagazinesTagID
@property (readonly, nonatomic) NSString *mySportsHighlightsTagID; // ivar: _mySportsHighlightsTagID
@property (readonly, nonatomic) NSString *mySportsScoresTagID; // ivar: _mySportsScoresTagID
@property (readonly, nonatomic) NSString *mySportsTagID; // ivar: _mySportsTagID
@property (readonly, nonatomic) CGFloat nativeInArticleAdRequestThrottle;
@property (readonly, nonatomic) CGFloat nativeInFeedAdRequestThrottle;
@property (readonly, nonatomic) NSInteger newFavoriteNotificationAlertsFrequency;
@property (readonly, nonatomic) BOOL newNotificationHandlingEnabled;
@property (readonly, nonatomic) BOOL newPersonalizationEnabled;
@property (readonly, copy, nonatomic) FCNewsPersonalizationConfiguration *newsPersonalizationConfiguration; // ivar: _newsPersonalizationConfiguration
@property (readonly, nonatomic) CGFloat newsletterSubscriptionStatusCacheTimeout;
@property (readonly, nonatomic) NSInteger newsletterSubscriptionType;
@property (readonly, nonatomic) NSInteger notificationArticleCacheTimeout;
@property (readonly, nonatomic) NSInteger notificationArticleWithRapidUpdatesCacheTimeout;
@property (readonly, nonatomic) BOOL notificationAssetPrefetchingRequiresWatch;
@property (readonly, nonatomic) BOOL notificationEnableAssetPrefetching;
@property (readonly, nonatomic) NSInteger notificationEnabledChannelsRefreshFrequency;
@property (readonly, nonatomic) FCNotificationsConfiguration *notificationsConfig; // ivar: _notificationsConfig
@property (readonly, nonatomic) NSArray *onboardingFeedIDs;
@property (readonly, nonatomic) NSInteger optionalTopStoriesRefreshRate;
@property (readonly, nonatomic, getter=isOrderFeedEndpointEnabled) BOOL orderFeedEndpointEnabled;
@property (readonly, nonatomic) FCPaidBundleConfiguration *paidBundleConfig; // ivar: _paidBundleConfig
@property (readonly, nonatomic) NSString *paidEvergreenArticleListID;
@property (readonly, nonatomic) CGFloat parsecPopulationCeiling;
@property (readonly, nonatomic) CGFloat parsecPopulationFloor;
@property (readonly, nonatomic) NSArray *permanentChannelIDs;
@property (readonly, nonatomic) NSString *personalizationBundleIdMappingResourceId;
@property (readonly, nonatomic) BOOL personalizationEventTrackingEnabled;
@property (readonly, nonatomic) NSString *personalizationFavorabilityResourceId;
@property (readonly, nonatomic) NSString *personalizationUrlMappingResourceId;
@property (readonly, nonatomic) NSString *personalizationWhitelistResourceId;
@property (readonly, nonatomic) FCPrefetchConfiguration *prefetchConfig; // ivar: _prefetchConfig
@property (readonly, nonatomic) CGFloat prerollAdRequestThrottle;
@property (readonly, nonatomic) CGFloat prerollLoadingTimeout;
@property (readonly, nonatomic) NSArray *presubscribedFeedIDs;
@property (readonly, nonatomic, getter=isPrivateDataEncryptionAllowed) BOOL privateDataEncryptionAllowed; // ivar: _privateDataEncryptionAllowed
@property (readonly, nonatomic, getter=isPrivateDataEncryptionMigrationDesired) BOOL privateDataEncryptionMigrationDesired; // ivar: _privateDataEncryptionMigrationDesired
@property (readonly, nonatomic, getter=isPrivateDataEncryptionRequired) BOOL privateDataEncryptionRequired; // ivar: _privateDataEncryptionRequired
@property (readonly, nonatomic, getter=isPrivateDataMigrationCleanupEnabled) BOOL privateDataMigrationCleanupEnabled; // ivar: _privateDataMigrationCleanupEnabled
@property (readonly, nonatomic) BOOL privateDataShouldSecureSubscriptions; // ivar: _privateDataShouldSecureSubscriptions
@property (readonly, nonatomic, getter=shouldProxyURLBucketFetch) BOOL proxyURLBucketFetch;
@property (readonly, nonatomic) BOOL recordBothPersonalizationVectors;
@property (readonly, nonatomic) NSInteger savedArticlesCutoffTime;
@property (readonly, nonatomic) NSInteger savedArticlesMaximumCountCellular;
@property (readonly, nonatomic) NSInteger savedArticlesMaximumCountWiFi;
@property (readonly, nonatomic) NSInteger savedArticlesOpenedCutoffTime;
@property (readonly, nonatomic) NSString *savedFeedConfigurationResourceId;
@property (readonly, nonatomic) NSString *savedStoriesTagID;
@property (readonly, nonatomic) NSArray *searchConfigurationProfiles;
@property (readonly, nonatomic) BOOL searchFeaturedStoriesEnabled;
@property (readonly, nonatomic) NSString *searchFeedConfigurationResourceId;
@property (readonly, nonatomic) BOOL searchFeedEnabled;
@property (readonly, nonatomic) NSString *searchMoreFeedConfigurationResourceId;
@property (readonly, nonatomic) BOOL servicesBundleCIPActivationEnabled;
@property (readonly, nonatomic) NTPBDiscoverMoreVideosInfo *shareDiscoverMoreVideosInfo; // ivar: _shareDiscoverMoreVideosInfo
@property (readonly, nonatomic) NSString *sharedWithYouFeedLayoutConfigurationResourceId;
@property (readonly, nonatomic) NSString *sharedWithYouTagID; // ivar: _sharedWithYouTagID
@property (readonly, nonatomic) NSInteger shortcutsMaxCount;
@property (readonly, nonatomic) NSInteger shortcutsOnboardCount;
@property (readonly, nonatomic) NSString *shortcutsTagID; // ivar: _shortcutsTagID
@property (readonly, nonatomic) BOOL shouldShowAlternateHeadlines;
@property (readonly, nonatomic) NSInteger singleChannelFeedMinFeedItemsPerRequest;
@property (readonly, nonatomic) NSInteger singleTopicFeedMinFeedItemsPerRequest;
@property (readonly, nonatomic) NSInteger smallWidgetSystemHoneymoonDuration;
@property (readonly, nonatomic) NSInteger smallWidgetSystemReloadInterval;
@property (readonly, nonatomic) NSInteger smallWidgetSystemReloadIntervalHoneymoon;
@property (readonly, nonatomic) NSInteger smallWidgetSystemReloadJitterMax;
@property (readonly, nonatomic) NSInteger smallWidgetSystemReloadJitterMaxHoneymoon;
@property (readonly, nonatomic) FCSmarterMessagingConfig *smarterMessagingConfig;
@property (readonly, nonatomic) BOOL smarterMessagingEnabled;
@property (readonly, nonatomic) BOOL splitTopicGroups;
@property (readonly, nonatomic) BOOL splitTopicGroupsForYouAndPopular;
@property (readonly, nonatomic) NSString *sportHighlightsTagID; // ivar: _sportHighlightsTagID
@property (readonly, nonatomic) NSString *sportLeagueHighlightsTagID; // ivar: _sportLeagueHighlightsTagID
@property (readonly, nonatomic) NSString *sportLeagueScoresTagID; // ivar: _sportLeagueScoresTagID
@property (readonly, nonatomic) NSString *sportScoresTagID; // ivar: _sportScoresTagID
@property (readonly, nonatomic) NSString *sportTeamHighlightsTagID; // ivar: _sportTeamHighlightsTagID
@property (readonly, nonatomic) NSString *sportTeamScoresTagID; // ivar: _sportTeamScoresTagID
@property (readonly, nonatomic) NSString *sportsConfigurationResourceId;
@property (readonly, nonatomic) NSString *sportsFeaturedEventsResourceId;
@property (readonly, nonatomic) NSInteger sportsManagementMinChildItemsCount;
@property (readonly, nonatomic) NSInteger sportsManagementRecommendedItemsCount;
@property (readonly, nonatomic) BOOL sportsNativeAdsEnabled;
@property (readonly, nonatomic) FCSportsPrivacyConfiguration *sportsPrivacyConfiguration; // ivar: _sportsPrivacyConfiguration
@property (readonly, nonatomic) BOOL sportsRecommendationHidesIgnoredTags;
@property (readonly, nonatomic) BOOL sportsRecordEnabled;
@property (readonly, nonatomic) NSArray *sportsSearchConfigurationProfiles;
@property (readonly, nonatomic) NSString *sportsStandingConfigurationResourceId;
@property (readonly, nonatomic) NSArray *sportsStandingsDisallowedLeagueIds;
@property (readonly, nonatomic) BOOL sportsStandingsEnabled;
@property (readonly, nonatomic) NSString *sportsStandingsTagID;
@property (readonly, nonatomic) NSString *sportsSyncingConfigurationResourceId;
@property (readonly, nonatomic) NSString *sportsTaxonomyResourceId;
@property (readonly, nonatomic) FCSportsUpsellConfig *sportsUpsellConfig; // ivar: _sportsUpsellConfig
@property (readonly, nonatomic) NSString *spotlightChannelID;
@property (readonly, nonatomic) NSInteger stateRestorationAllowedTimeWindow;
@property (readonly, nonatomic) BOOL statelessPersonalizationEnabled;
@property (readonly, nonatomic) NSInteger subscriptionsGlobalMeteredCount;
@property (readonly, nonatomic) NSInteger subscriptionsGracePeriodForTokenVerificationSeconds;
@property (readonly, nonatomic) NSInteger subscriptionsPlacardGlobalMaximumPerDay;
@property (readonly, nonatomic) NSInteger subscriptionsPlacardPublisherFrequencyInSeconds;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDictionary *superfeedConfigOverrideResourceIDs; // ivar: _superfeedConfigOverrideResourceIDs
@property (readonly, nonatomic) BOOL tagFeedEnabled;
@property (readonly, nonatomic) NSString *tagFeedLayoutConfigurationResourceId;
@property (readonly, nonatomic) BOOL terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
@property (readonly, copy, nonatomic) FCTimesOfDayConfiguration *timesOfDayConfiguration; // ivar: _timesOfDayConfiguration
@property (readonly, nonatomic) BOOL todayFeedConfigRequestsEnabled;
@property (readonly, nonatomic) BOOL todayFeedEnabled;
@property (readonly, copy, nonatomic) NSDictionary *todayFeedGroupClusteringKnobOverrides;
@property (readonly, nonatomic) NSString *todayFeedKnobs;
@property (readonly, nonatomic) NSInteger todayFeedLoadToCacheTimeWindow;
@property (readonly, nonatomic) FCTopStoriesConfiguration *topStoriesConfig; // ivar: _topStoriesConfig
@property (readonly, nonatomic) NSInteger topStoriesLocalNewsExpiration;
@property (readonly, copy, nonatomic) NSArray *topStoriesPublishDates;
@property (readonly, nonatomic) NSString *translationMapResourceID;
@property (readonly, nonatomic) NSUInteger trendingStyle;
@property (readonly, nonatomic) NSString *trendingTagID;
@property (readonly, nonatomic) NSInteger trendingTopicsRefreshRate;
@property (readonly, nonatomic) BOOL universalLinksEnabled;
@property (readonly, nonatomic) BOOL useAltSportsRecommendationMapping;
@property (readonly, nonatomic) BOOL useFasterSearch;
@property (readonly, nonatomic) BOOL useNewsArticleSearch;
@property (readonly, nonatomic) BOOL usePersonalizationVectorAlt;
@property (readonly, nonatomic) BOOL useSecureConnectionForAssets;
@property (readonly, nonatomic) BOOL userSegmentationInWidgetAllowed;
@property (readonly, nonatomic) NSString *userVectorModelResourceId;
@property (readonly, nonatomic) NSString *userVectorWhitelistResourceId;
@property (readonly, nonatomic) NSString *webEmbedContentBlockerOverrides;
@property (readonly, nonatomic) NSString *webEmbedContentBlockers;
@property (readonly, nonatomic) BOOL widgetAnalyticsEnabled;
@property (readonly, nonatomic) NSString *widgetConfigID;
@property (readonly, nonatomic) BOOL widgetContentPrefetchEnabled;
@property (readonly, nonatomic) NSInteger widgetForYouBackgroundMinimumUpdateInterval;
@property (readonly, nonatomic) NSInteger widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
@property (readonly, nonatomic) unsigned int widgetMinimumNumberOfTimesPreseenToBeSeen;
@property (readonly, nonatomic) NSInteger widgetSystemHoneymoonDuration;
@property (readonly, nonatomic) NSInteger widgetSystemReloadInterval;
@property (readonly, nonatomic) NSInteger widgetSystemReloadIntervalHoneymoon;
@property (readonly, nonatomic) NSInteger widgetSystemReloadJitterMax;
@property (readonly, nonatomic) NSInteger widgetSystemReloadJitterMaxHoneymoon;
@property (readonly, nonatomic) BOOL xavierClusteringEnabled;
@property (readonly, nonatomic) BOOL xavierEnabled;


-(id)analyticsEnvelopeContentTypeConfigsForEnvironment:(NSUInteger)arg0 ;
-(id)appAnalyticsAppHealthEndpointUrlForEnvironment:(NSUInteger)arg0 ;
-(id)appAnalyticsEndpointUrlForEnvironment:(NSUInteger)arg0 ;
-(id)appAnalyticsNotificationReceiptEndpointUrlForEnvironment:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)jsonEncodableObject;
-(id)paidALaCartePaywallConfigForChannelID:(id)arg0 ;
-(id)personalizationTreatment;
-(id)todayConfigWithIdentifier:(id)arg0 queueConfigs:(id)arg1 backgroundColorLight:(id)arg2 backgroundColorDark:(id)arg3 audioIndicatorColor:(id)arg4 ;


@end


#endif