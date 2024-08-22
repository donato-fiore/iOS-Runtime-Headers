// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBCONFIG_H
#define NTPBCONFIG_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "NTPBWidgetConfig.h"
#import "NTPBBinningConfig.h"
#import "NTPBVideoGroupsConfig.h"
#import "NTPBIAdConfig.h"
#import "NTPBPaidSubscriptionConfig.h"
#import "NTPBPersonalizationConfig.h"
#import "NTPBPersonalizationTreatment.h"
#import "NTPBPrefetchConfig.h"
#import "NTPBUserSegmentationApiConfiguration.h"

@interface NTPBConfig : PBCodable <NSCopying>

 {
    ? _topStoriesPublishTimeIntervals;
    ? _has;
}


@property (retain, nonatomic) NTPBWidgetConfig *alternativeButlerWidgetConfig; // ivar: _alternativeButlerWidgetConfig
@property (nonatomic) BOOL alternativeButlerWidgetConfigEnabled; // ivar: _alternativeButlerWidgetConfigEnabled
@property (nonatomic) NSInteger analyticsEndpointMaxPayloadSize; // ivar: _analyticsEndpointMaxPayloadSize
@property (retain, nonatomic) NSString *anfEmbedConfigurationAsset; // ivar: _anfEmbedConfigurationAsset
@property (nonatomic) NSInteger appConfigRefreshRate; // ivar: _appConfigRefreshRate
@property (nonatomic) CGFloat articleDiversitySimilarityExpectationEnd; // ivar: _articleDiversitySimilarityExpectationEnd
@property (nonatomic) CGFloat articleDiversitySimilarityExpectationStart; // ivar: _articleDiversitySimilarityExpectationStart
@property (nonatomic) NSInteger articleRapidUpdatesTimeout; // ivar: _articleRapidUpdatesTimeout
@property (retain, nonatomic) NSString *articleRecirculationComponentPlacementConfig; // ivar: _articleRecirculationComponentPlacementConfig
@property (retain, nonatomic) NSString *articleRecirculationConfig; // ivar: _articleRecirculationConfig
@property (nonatomic) NSInteger articleRecirculationPopularFeedQueryTimeRange; // ivar: _articleRecirculationPopularFeedQueryTimeRange
@property (nonatomic) BOOL articleSearchEnabled; // ivar: _articleSearchEnabled
@property (nonatomic) NSInteger autoRefreshMinimumInterval; // ivar: _autoRefreshMinimumInterval
@property (nonatomic) NSInteger autoScrollToTopFeedTimeout; // ivar: _autoScrollToTopFeedTimeout
@property (nonatomic) CGFloat batchedFeedTimeout; // ivar: _batchedFeedTimeout
@property (retain, nonatomic) NTPBBinningConfig *binningConfig; // ivar: _binningConfig
@property (retain, nonatomic) NTPBWidgetConfig *butlerWidgetConfig; // ivar: _butlerWidgetConfig
@property (nonatomic) BOOL corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers; // ivar: _corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers
@property (nonatomic) NSInteger corryBarMaxArticleCountForArticleList; // ivar: _corryBarMaxArticleCountForArticleList
@property (nonatomic) NSInteger corryBarMaxArticleCountForSingleArticle; // ivar: _corryBarMaxArticleCountForSingleArticle
@property (nonatomic) BOOL disableThumbnailsForArticleRecirculation; // ivar: _disableThumbnailsForArticleRecirculation
@property (nonatomic) BOOL diversifyOptionalTopStories; // ivar: _diversifyOptionalTopStories
@property (nonatomic) unsigned int enabledPrivateDataEncryptionLevel; // ivar: _enabledPrivateDataEncryptionLevel
@property (nonatomic) NSInteger endOfArticleMaxInaccessiblePaidArticles; // ivar: _endOfArticleMaxInaccessiblePaidArticles
@property (nonatomic) CGFloat endOfArticleMinPaidHeadlineRatio; // ivar: _endOfArticleMinPaidHeadlineRatio
@property (retain, nonatomic) NSMutableArray *endpointConfigs; // ivar: _endpointConfigs
@property (retain, nonatomic) NSString *experimentalizableFieldPostfix; // ivar: _experimentalizableFieldPostfix
@property (nonatomic) NSInteger expirePinnedArticlesAfter; // ivar: _expirePinnedArticlesAfter
@property (nonatomic) NSInteger expiredPaidSubscriptionGroupCutoffTime; // ivar: _expiredPaidSubscriptionGroupCutoffTime
@property (retain, nonatomic) NSMutableArray *externalAnalyticsConfigs; // ivar: _externalAnalyticsConfigs
@property (retain, nonatomic) NSString *fallbackLanguageTag; // ivar: _fallbackLanguageTag
@property (retain, nonatomic) NSString *forYouNonPersonalizedGroupsOrder; // ivar: _forYouNonPersonalizedGroupsOrder
@property (retain, nonatomic) NTPBVideoGroupsConfig *forYouVideoGroupsConfig; // ivar: _forYouVideoGroupsConfig
@property (readonly, nonatomic) BOOL hasAlternativeButlerWidgetConfig;
@property (nonatomic) BOOL hasAlternativeButlerWidgetConfigEnabled;
@property (nonatomic) BOOL hasAnalyticsEndpointMaxPayloadSize;
@property (readonly, nonatomic) BOOL hasAnfEmbedConfigurationAsset;
@property (nonatomic) BOOL hasAppConfigRefreshRate;
@property (nonatomic) BOOL hasArticleDiversitySimilarityExpectationEnd;
@property (nonatomic) BOOL hasArticleDiversitySimilarityExpectationStart;
@property (nonatomic) BOOL hasArticleRapidUpdatesTimeout;
@property (readonly, nonatomic) BOOL hasArticleRecirculationComponentPlacementConfig;
@property (readonly, nonatomic) BOOL hasArticleRecirculationConfig;
@property (nonatomic) BOOL hasArticleRecirculationPopularFeedQueryTimeRange;
@property (nonatomic) BOOL hasArticleSearchEnabled;
@property (nonatomic) BOOL hasAutoRefreshMinimumInterval;
@property (nonatomic) BOOL hasAutoScrollToTopFeedTimeout;
@property (nonatomic) BOOL hasBatchedFeedTimeout;
@property (readonly, nonatomic) BOOL hasBinningConfig;
@property (readonly, nonatomic) BOOL hasButlerWidgetConfig;
@property (nonatomic) BOOL hasCorryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
@property (nonatomic) BOOL hasCorryBarMaxArticleCountForArticleList;
@property (nonatomic) BOOL hasCorryBarMaxArticleCountForSingleArticle;
@property (nonatomic) BOOL hasDisableThumbnailsForArticleRecirculation;
@property (nonatomic) BOOL hasDiversifyOptionalTopStories;
@property (nonatomic) BOOL hasEnabledPrivateDataEncryptionLevel;
@property (nonatomic) BOOL hasEndOfArticleMaxInaccessiblePaidArticles;
@property (nonatomic) BOOL hasEndOfArticleMinPaidHeadlineRatio;
@property (readonly, nonatomic) BOOL hasExperimentalizableFieldPostfix;
@property (nonatomic) BOOL hasExpirePinnedArticlesAfter;
@property (nonatomic) BOOL hasExpiredPaidSubscriptionGroupCutoffTime;
@property (readonly, nonatomic) BOOL hasFallbackLanguageTag;
@property (readonly, nonatomic) BOOL hasForYouNonPersonalizedGroupsOrder;
@property (readonly, nonatomic) BOOL hasForYouVideoGroupsConfig;
@property (readonly, nonatomic) BOOL hasIadConfig;
@property (nonatomic) BOOL hasInitialArticlesFromNewFavorite;
@property (nonatomic) BOOL hasInterstitialAdLoadDelay;
@property (nonatomic) BOOL hasLongReminderTime;
@property (nonatomic) BOOL hasMaxExpiredPaidSubscriptionGroupCount;
@property (nonatomic) BOOL hasMaxPaidSubscriptionGroupSizeIPad;
@property (nonatomic) BOOL hasMaxPaidSubscriptionGroupSizeIPhone;
@property (nonatomic) BOOL hasMaxTimesHeadlineInPaidSubscriptionGroup;
@property (nonatomic) BOOL hasMaximumRatioOfArticlesInForYouGroup;
@property (nonatomic) BOOL hasMinimumArticleUpdateInterval;
@property (nonatomic) BOOL hasMinimumDistanceBetweenImageOnTopTiles;
@property (nonatomic) BOOL hasMinimumDurationBetweenForYouGroupsWeekday;
@property (nonatomic) BOOL hasMinimumDurationBetweenForYouGroupsWeekend;
@property (nonatomic) BOOL hasMinimumDurationBetweenTrendingGroupsWeekday;
@property (nonatomic) BOOL hasMinimumDurationBetweenTrendingGroupsWeekend;
@property (nonatomic) BOOL hasMinimumFollowCountToRemovePersonalizePlacardInFollowing;
@property (nonatomic) BOOL hasMinimumTrendingUnseenRatio;
@property (nonatomic) BOOL hasNewFavoriteNotificationAlertsFrequency;
@property (nonatomic) BOOL hasNewsletterSubscriptionChecked;
@property (nonatomic) BOOL hasNotificationArticleCacheTimeout;
@property (nonatomic) BOOL hasNotificationArticleWithRapidUpdatesCacheTimeout;
@property (nonatomic) BOOL hasNotificationEnabledChannelsRefreshFrequency;
@property (nonatomic) BOOL hasNumberOfScreenfulsScrolledToBypassWidgetTimeLimit;
@property (nonatomic) BOOL hasOptionalTopStoriesRefreshRate;
@property (nonatomic) BOOL hasOrderFeedEnabledLevel;
@property (nonatomic) BOOL hasOrderFeedEnabledLevelDeprecated;
@property (nonatomic) BOOL hasOrderFeedEndpointEnabled;
@property (readonly, nonatomic) BOOL hasPaidSubscriptionConfig;
@property (readonly, nonatomic) BOOL hasPersonalizationBundleIdMappingResourceId;
@property (readonly, nonatomic) BOOL hasPersonalizationConfig;
@property (readonly, nonatomic) BOOL hasPersonalizationPortraitConfigResourceId;
@property (readonly, nonatomic) BOOL hasPersonalizationPublisherFavorabilityScoresResourceId;
@property (readonly, nonatomic) BOOL hasPersonalizationTreatment;
@property (readonly, nonatomic) BOOL hasPersonalizationUrlMappingResourceId;
@property (readonly, nonatomic) BOOL hasPersonalizationWhitelistResourceId;
@property (readonly, nonatomic) BOOL hasPersonalizationWidgetSectionMappingResourceId;
@property (readonly, nonatomic) BOOL hasPrefetchConfig;
@property (nonatomic) BOOL hasPrerollLoadingTimeout;
@property (nonatomic) BOOL hasPrivateDataMigrationCleanupLevel;
@property (nonatomic) BOOL hasPublisherDiversitySlope;
@property (nonatomic) BOOL hasPublisherDiversityYIntercept;
@property (nonatomic) BOOL hasSavedArticlesCutoffTime;
@property (nonatomic) BOOL hasSavedArticlesMaximumCountCellular;
@property (nonatomic) BOOL hasSavedArticlesMaximumCountWifi;
@property (nonatomic) BOOL hasSavedArticlesOpenedCutoffTime;
@property (nonatomic) BOOL hasShortReminderTime;
@property (nonatomic) BOOL hasStateRestorationAllowedTimeWindow;
@property (nonatomic) BOOL hasSubscriptionsGlobalMeteredCount;
@property (nonatomic) BOOL hasSubscriptionsGracePeriodForTokenVerificationSeconds;
@property (nonatomic) BOOL hasSubscriptionsPlacardGlobalMaxPerDay;
@property (nonatomic) BOOL hasSubscriptionsPlacardPublisherFrequencyDays;
@property (nonatomic) BOOL hasSubscriptionsPlacardPublisherFrequencySeconds;
@property (nonatomic) BOOL hasTerminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
@property (nonatomic) BOOL hasTileProminenceScoreBalanceValue;
@property (nonatomic) BOOL hasTimeBetweenSameWidgetReinsertion;
@property (nonatomic) BOOL hasTimeBetweenWidgetInsertions;
@property (nonatomic) BOOL hasTreatmentId;
@property (nonatomic) BOOL hasTrendingStyle;
@property (nonatomic) BOOL hasTrendingTopicsRefreshRate;
@property (nonatomic) BOOL hasUniversalLinksEnabled;
@property (nonatomic) BOOL hasUsUkUseAuWhatsNewFeatures;
@property (nonatomic) BOOL hasUseSecureConnectionForAssets;
@property (readonly, nonatomic) BOOL hasUserSegmentationApiConfiguration;
@property (nonatomic) BOOL hasUserSegmentationApiModMax;
@property (nonatomic) BOOL hasUserSegmentationApiModThreshold;
@property (readonly, nonatomic) BOOL hasWidgetConfig;
@property (readonly, nonatomic) BOOL hasWidgetConfig2;
@property (nonatomic) BOOL hasWidgetEventImmediateUploadModuloForHashing;
@property (nonatomic) BOOL hasWidgetEventImmediateUploadPopulationCeiling;
@property (nonatomic) BOOL hasWidgetEventImmediateUploadPopulationFloor;
@property (retain, nonatomic) NTPBIAdConfig *iadConfig; // ivar: _iadConfig
@property (nonatomic) NSInteger initialArticlesFromNewFavorite; // ivar: _initialArticlesFromNewFavorite
@property (nonatomic) CGFloat interstitialAdLoadDelay; // ivar: _interstitialAdLoadDelay
@property (retain, nonatomic) NSMutableArray *languageConfigs; // ivar: _languageConfigs
@property (nonatomic) NSInteger longReminderTime; // ivar: _longReminderTime
@property (nonatomic) NSInteger maxExpiredPaidSubscriptionGroupCount; // ivar: _maxExpiredPaidSubscriptionGroupCount
@property (nonatomic) NSInteger maxPaidSubscriptionGroupSizeIPad; // ivar: _maxPaidSubscriptionGroupSizeIPad
@property (nonatomic) NSInteger maxPaidSubscriptionGroupSizeIPhone; // ivar: _maxPaidSubscriptionGroupSizeIPhone
@property (nonatomic) NSInteger maxTimesHeadlineInPaidSubscriptionGroup; // ivar: _maxTimesHeadlineInPaidSubscriptionGroup
@property (nonatomic) CGFloat maximumRatioOfArticlesInForYouGroup; // ivar: _maximumRatioOfArticlesInForYouGroup
@property (nonatomic) NSInteger minimumArticleUpdateInterval; // ivar: _minimumArticleUpdateInterval
@property (nonatomic) NSInteger minimumDistanceBetweenImageOnTopTiles; // ivar: _minimumDistanceBetweenImageOnTopTiles
@property (nonatomic) NSInteger minimumDurationBetweenForYouGroupsWeekday; // ivar: _minimumDurationBetweenForYouGroupsWeekday
@property (nonatomic) NSInteger minimumDurationBetweenForYouGroupsWeekend; // ivar: _minimumDurationBetweenForYouGroupsWeekend
@property (nonatomic) NSInteger minimumDurationBetweenTrendingGroupsWeekday; // ivar: _minimumDurationBetweenTrendingGroupsWeekday
@property (nonatomic) NSInteger minimumDurationBetweenTrendingGroupsWeekend; // ivar: _minimumDurationBetweenTrendingGroupsWeekend
@property (nonatomic) NSInteger minimumFollowCountToRemovePersonalizePlacardInFollowing; // ivar: _minimumFollowCountToRemovePersonalizePlacardInFollowing
@property (nonatomic) CGFloat minimumTrendingUnseenRatio; // ivar: _minimumTrendingUnseenRatio
@property (nonatomic) NSInteger newFavoriteNotificationAlertsFrequency; // ivar: _newFavoriteNotificationAlertsFrequency
@property (nonatomic) BOOL newsletterSubscriptionChecked; // ivar: _newsletterSubscriptionChecked
@property (nonatomic) NSInteger notificationArticleCacheTimeout; // ivar: _notificationArticleCacheTimeout
@property (nonatomic) NSInteger notificationArticleWithRapidUpdatesCacheTimeout; // ivar: _notificationArticleWithRapidUpdatesCacheTimeout
@property (nonatomic) NSInteger notificationEnabledChannelsRefreshFrequency; // ivar: _notificationEnabledChannelsRefreshFrequency
@property (nonatomic) NSInteger numberOfScreenfulsScrolledToBypassWidgetTimeLimit; // ivar: _numberOfScreenfulsScrolledToBypassWidgetTimeLimit
@property (nonatomic) NSInteger optionalTopStoriesRefreshRate; // ivar: _optionalTopStoriesRefreshRate
@property (nonatomic) unsigned int orderFeedEnabledLevel; // ivar: _orderFeedEnabledLevel
@property (nonatomic) int orderFeedEnabledLevelDeprecated; // ivar: _orderFeedEnabledLevelDeprecated
@property (nonatomic) BOOL orderFeedEndpointEnabled; // ivar: _orderFeedEndpointEnabled
@property (retain, nonatomic) NTPBPaidSubscriptionConfig *paidSubscriptionConfig; // ivar: _paidSubscriptionConfig
@property (retain, nonatomic) NSString *personalizationBundleIdMappingResourceId; // ivar: _personalizationBundleIdMappingResourceId
@property (retain, nonatomic) NTPBPersonalizationConfig *personalizationConfig; // ivar: _personalizationConfig
@property (retain, nonatomic) NSString *personalizationPortraitConfigResourceId; // ivar: _personalizationPortraitConfigResourceId
@property (retain, nonatomic) NSString *personalizationPublisherFavorabilityScoresResourceId; // ivar: _personalizationPublisherFavorabilityScoresResourceId
@property (retain, nonatomic) NTPBPersonalizationTreatment *personalizationTreatment; // ivar: _personalizationTreatment
@property (retain, nonatomic) NSString *personalizationUrlMappingResourceId; // ivar: _personalizationUrlMappingResourceId
@property (retain, nonatomic) NSString *personalizationWhitelistResourceId; // ivar: _personalizationWhitelistResourceId
@property (retain, nonatomic) NSString *personalizationWidgetSectionMappingResourceId; // ivar: _personalizationWidgetSectionMappingResourceId
@property (retain, nonatomic) NTPBPrefetchConfig *prefetchConfig; // ivar: _prefetchConfig
@property (nonatomic) CGFloat prerollLoadingTimeout; // ivar: _prerollLoadingTimeout
@property (nonatomic) unsigned int privateDataMigrationCleanupLevel; // ivar: _privateDataMigrationCleanupLevel
@property (nonatomic) CGFloat publisherDiversitySlope; // ivar: _publisherDiversitySlope
@property (nonatomic) CGFloat publisherDiversityYIntercept; // ivar: _publisherDiversityYIntercept
@property (nonatomic) NSInteger savedArticlesCutoffTime; // ivar: _savedArticlesCutoffTime
@property (nonatomic) NSInteger savedArticlesMaximumCountCellular; // ivar: _savedArticlesMaximumCountCellular
@property (nonatomic) NSInteger savedArticlesMaximumCountWifi; // ivar: _savedArticlesMaximumCountWifi
@property (nonatomic) NSInteger savedArticlesOpenedCutoffTime; // ivar: _savedArticlesOpenedCutoffTime
@property (nonatomic) NSInteger shortReminderTime; // ivar: _shortReminderTime
@property (nonatomic) NSInteger stateRestorationAllowedTimeWindow; // ivar: _stateRestorationAllowedTimeWindow
@property (nonatomic) NSInteger subscriptionsGlobalMeteredCount; // ivar: _subscriptionsGlobalMeteredCount
@property (nonatomic) NSInteger subscriptionsGracePeriodForTokenVerificationSeconds; // ivar: _subscriptionsGracePeriodForTokenVerificationSeconds
@property (nonatomic) NSInteger subscriptionsPlacardGlobalMaxPerDay; // ivar: _subscriptionsPlacardGlobalMaxPerDay
@property (nonatomic) NSInteger subscriptionsPlacardPublisherFrequencyDays; // ivar: _subscriptionsPlacardPublisherFrequencyDays
@property (nonatomic) NSInteger subscriptionsPlacardPublisherFrequencySeconds; // ivar: _subscriptionsPlacardPublisherFrequencySeconds
@property (nonatomic) BOOL terminateAppOnBackgroundAfterJoiningOrLeavingExperiment; // ivar: _terminateAppOnBackgroundAfterJoiningOrLeavingExperiment
@property (nonatomic) CGFloat tileProminenceScoreBalanceValue; // ivar: _tileProminenceScoreBalanceValue
@property (nonatomic) NSInteger timeBetweenSameWidgetReinsertion; // ivar: _timeBetweenSameWidgetReinsertion
@property (nonatomic) NSInteger timeBetweenWidgetInsertions; // ivar: _timeBetweenWidgetInsertions
@property (readonly, nonatomic) *NSInteger topStoriesPublishTimeIntervals;
@property (readonly, nonatomic) NSUInteger topStoriesPublishTimeIntervalsCount;
@property (nonatomic) NSInteger treatmentId; // ivar: _treatmentId
@property (nonatomic) int trendingStyle; // ivar: _trendingStyle
@property (nonatomic) NSInteger trendingTopicsRefreshRate; // ivar: _trendingTopicsRefreshRate
@property (nonatomic) BOOL universalLinksEnabled; // ivar: _universalLinksEnabled
@property (nonatomic) BOOL usUkUseAuWhatsNewFeatures; // ivar: _usUkUseAuWhatsNewFeatures
@property (nonatomic) BOOL useSecureConnectionForAssets; // ivar: _useSecureConnectionForAssets
@property (retain, nonatomic) NTPBUserSegmentationApiConfiguration *userSegmentationApiConfiguration; // ivar: _userSegmentationApiConfiguration
@property (nonatomic) NSInteger userSegmentationApiModMax; // ivar: _userSegmentationApiModMax
@property (nonatomic) NSInteger userSegmentationApiModThreshold; // ivar: _userSegmentationApiModThreshold
@property (retain, nonatomic) NTPBWidgetConfig *widgetConfig; // ivar: _widgetConfig
@property (retain, nonatomic) NTPBWidgetConfig *widgetConfig2; // ivar: _widgetConfig2
@property (nonatomic) NSInteger widgetEventImmediateUploadModuloForHashing; // ivar: _widgetEventImmediateUploadModuloForHashing
@property (nonatomic) NSInteger widgetEventImmediateUploadPopulationCeiling; // ivar: _widgetEventImmediateUploadPopulationCeiling
@property (nonatomic) NSInteger widgetEventImmediateUploadPopulationFloor; // ivar: _widgetEventImmediateUploadPopulationFloor


+(Class)externalAnalyticsConfigType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)topStoriesPublishTimeIntervalsAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)endpointConfigsAtIndex:(NSUInteger)arg0 ;
-(id)externalAnalyticsConfigAtIndex:(NSUInteger)arg0 ;
-(id)languageConfigsAtIndex:(NSUInteger)arg0 ;
-(void)addEndpointConfigs:(id)arg0 ;
-(void)addExternalAnalyticsConfig:(id)arg0 ;
-(void)addLanguageConfigs:(id)arg0 ;
-(void)addTopStoriesPublishTimeIntervals:(NSInteger)arg0 ;
-(void)clearEndpointConfigs;
-(void)clearExternalAnalyticsConfigs;
-(void)clearLanguageConfigs;
-(void)clearTopStoriesPublishTimeIntervals;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif