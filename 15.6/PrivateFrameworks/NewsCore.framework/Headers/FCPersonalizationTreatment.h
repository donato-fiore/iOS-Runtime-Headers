// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCPERSONALIZATIONTREATMENT_H
#define FCPERSONALIZATIONTREATMENT_H

@class NTPBPersonalizationTreatment, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "FCPersonalizationScoringConfig.h"
#import "FCPersonalizationTopicsConfig.h"
#import "FCPersonalizationTagScoringConfig.h"

@interface FCPersonalizationTreatment : NSObject <NSSecureCoding, NSCopying>

 {
    NTPBPersonalizationTreatment *_pbTreatment;
    NSDictionary *_treatmentDictionary;
    CGFloat _featureClicksByAction;
    CGFloat _featureImpressionsByAction;
    CGFloat _baselineClicksByAction;
    CGFloat _baselineImpressionsByAction;
}


@property (readonly, nonatomic) CGFloat appInFocusBaselineClickValue; // ivar: _appInFocusBaselineClickValue
@property (readonly, nonatomic) CGFloat appInFocusBaselineImpressionValue; // ivar: _appInFocusBaselineImpressionValue
@property (readonly, nonatomic) CGFloat appInFocusClickValue; // ivar: _appInFocusClickValue
@property (readonly, nonatomic) CGFloat appInFocusImpressionValue; // ivar: _appInFocusImpressionValue
@property (readonly, nonatomic) CGFloat appInstallBaselineClickValue; // ivar: _appInstallBaselineClickValue
@property (readonly, nonatomic) CGFloat appInstallBaselineImpressionValue; // ivar: _appInstallBaselineImpressionValue
@property (readonly, nonatomic) CGFloat appInstallClickValue; // ivar: _appInstallClickValue
@property (readonly, nonatomic) CGFloat appInstallImpressionValue; // ivar: _appInstallImpressionValue
@property (readonly, nonatomic) CGFloat appUsageOccurrenceDecayMultiplier; // ivar: _appUsageOccurrenceDecayMultiplier
@property (readonly, nonatomic) CGFloat appUsagePriorFactorExponent; // ivar: _appUsagePriorFactorExponent
@property (readonly, nonatomic) CGFloat appUsageSignalWeight; // ivar: _appUsageSignalWeight
@property (readonly, nonatomic) CGFloat appUsageTagFavorabilityExponent; // ivar: _appUsageTagFavorabilityExponent
@property (readonly, nonatomic) CGFloat appUsageTimeDecayMultiplier; // ivar: _appUsageTimeDecayMultiplier
@property (readonly, nonatomic) CGFloat articleLengthLongThreshold; // ivar: _articleLengthLongThreshold
@property (readonly, nonatomic) CGFloat articleLengthMediumThreshold; // ivar: _articleLengthMediumThreshold
@property (readonly, nonatomic) FCPersonalizationScoringConfig *articleListTagFeedGroupScoringConfig; // ivar: _articleListTagFeedGroupScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *articleListTagFeedGroupTopicsConfig; // ivar: _articleListTagFeedGroupTopicsConfig
@property (readonly, nonatomic) FCPersonalizationScoringConfig *articleRecirculationPrimaryScoringConfig; // ivar: _articleRecirculationPrimaryScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *articleRecirculationPrimaryTopicsConfig; // ivar: _articleRecirculationPrimaryTopicsConfig
@property (readonly, nonatomic) FCPersonalizationScoringConfig *articleRecirculationSecondaryScoringConfig; // ivar: _articleRecirculationSecondaryScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *articleRecirculationSecondaryTopicsConfig; // ivar: _articleRecirculationSecondaryTopicsConfig
@property (readonly, nonatomic) FCPersonalizationScoringConfig *articleRecirculationTertiaryScoringConfig; // ivar: _articleRecirculationTertiaryScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *articleRecirculationTertiaryTopicsConfig; // ivar: _articleRecirculationTertiaryTopicsConfig
@property (readonly, nonatomic) CGFloat audioFeedGroupScoreWeight; // ivar: _audioFeedGroupScoreWeight
@property (readonly, nonatomic) FCPersonalizationScoringConfig *audioFeedScoringConfig; // ivar: _audioFeedScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *audioFeedTopicsConfig; // ivar: _audioFeedTopicsConfig
@property (readonly, nonatomic) NSInteger auditionedAutoFavoritesEmitterLimit; // ivar: _auditionedAutoFavoritesEmitterLimit
@property (readonly, nonatomic) CGFloat autoFavoriteMaxIdleTime; // ivar: _autoFavoriteMaxIdleTime
@property (readonly, nonatomic) CGFloat autoFavoriteMinClicks; // ivar: _autoFavoriteMinClicks
@property (readonly, nonatomic) CGFloat autoFavoriteMinEvents; // ivar: _autoFavoriteMinEvents
@property (readonly, nonatomic) CGFloat autoFavoriteMinObservationsExtAppUsage; // ivar: _autoFavoriteMinObservationsExtAppUsage
@property (readonly, nonatomic) CGFloat autoFavoriteMinObservationsSafari; // ivar: _autoFavoriteMinObservationsSafari
@property (readonly, nonatomic) CGFloat autoFavoriteMinRate; // ivar: _autoFavoriteMinRate
@property (readonly, nonatomic) CGFloat autoFavoriteMinRelativeRate; // ivar: _autoFavoriteMinRelativeRate
@property (readonly, nonatomic) CGFloat autoFavoriteMinScoreExtAppUsage; // ivar: _autoFavoriteMinScoreExtAppUsage
@property (readonly, nonatomic) CGFloat autoFavoriteMinScoreSafari; // ivar: _autoFavoriteMinScoreSafari
@property (readonly, nonatomic) CGFloat autoFavoritePriorFactorExponent; // ivar: _autoFavoritePriorFactorExponent
@property (readonly, nonatomic) CGFloat autoFavoriteTagFavorabilityExponent; // ivar: _autoFavoriteTagFavorabilityExponent
@property (readonly, nonatomic) CGFloat autoGroupableFactor; // ivar: _autoGroupableFactor
@property (readonly, nonatomic) CGFloat autoUnfavoriteFactor; // ivar: _autoUnfavoriteFactor
@property (readonly, nonatomic) *CGFloat baselineClicksByAction;
@property (readonly, nonatomic) CGFloat baselineImpressionPrior; // ivar: _baselineImpressionPrior
@property (readonly, nonatomic) *CGFloat baselineImpressionsByAction;
@property (readonly, nonatomic) FCPersonalizationScoringConfig *bestOfBundleScoringConfig; // ivar: _bestOfBundleScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *bestOfBundleTopicsConfig; // ivar: _bestOfBundleTopicsConfig
@property (readonly, nonatomic) CGFloat clicksToImpressionsRatioMaximum; // ivar: _clicksToImpressionsRatioMaximum
@property (readonly, nonatomic) FCPersonalizationScoringConfig *curatedIssuesScoringConfig; // ivar: _curatedIssuesScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *curatedIssuesTopicsConfig; // ivar: _curatedIssuesTopicsConfig
@property (readonly, nonatomic) FCPersonalizationScoringConfig *curatedScoringConfig; // ivar: _curatedScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *curatedTopicsConfig; // ivar: _curatedTopicsConfig
@property (readonly, nonatomic) FCPersonalizationScoringConfig *defaultScoringConfig; // ivar: _defaultScoringConfig
@property (readonly, nonatomic) FCPersonalizationTagScoringConfig *defaultTagScoringConfig; // ivar: _defaultTagScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *defaultTopicsConfig; // ivar: _defaultTopicsConfig
@property (readonly, nonatomic) CGFloat dislikeBaselineClickValue; // ivar: _dislikeBaselineClickValue
@property (readonly, nonatomic) CGFloat dislikeBaselineImpressionValue; // ivar: _dislikeBaselineImpressionValue
@property (readonly, nonatomic) CGFloat dislikeClickValue; // ivar: _dislikeClickValue
@property (readonly, nonatomic) CGFloat dislikeImpressionValue; // ivar: _dislikeImpressionValue
@property (readonly, nonatomic) BOOL enableOptimizedLayoutIPad; // ivar: _enableOptimizedLayoutIPad
@property (readonly, nonatomic) BOOL enableOptimizedLayoutIPhone; // ivar: _enableOptimizedLayoutIPhone
@property (readonly, nonatomic) CGFloat existingSubscriptionBaselineClickValue; // ivar: _existingSubscriptionBaselineClickValue
@property (readonly, nonatomic) CGFloat existingSubscriptionBaselineImpressionValue; // ivar: _existingSubscriptionBaselineImpressionValue
@property (readonly, nonatomic) CGFloat existingSubscriptionClickValue; // ivar: _existingSubscriptionClickValue
@property (readonly, nonatomic) CGFloat existingSubscriptionImpressionValue; // ivar: _existingSubscriptionImpressionValue
@property (readonly, nonatomic) CGFloat existingSubscriptionRelatedBaselineClickValue; // ivar: _existingSubscriptionRelatedBaselineClickValue
@property (readonly, nonatomic) CGFloat existingSubscriptionRelatedBaselineImpressionValue; // ivar: _existingSubscriptionRelatedBaselineImpressionValue
@property (readonly, nonatomic) CGFloat existingSubscriptionRelatedClickValue; // ivar: _existingSubscriptionRelatedClickValue
@property (readonly, nonatomic) CGFloat existingSubscriptionRelatedImpressionValue; // ivar: _existingSubscriptionRelatedImpressionValue
@property (readonly, nonatomic) CGFloat expandedAutofavoriteClusterMaxSizeMultiplier; // ivar: _expandedAutofavoriteClusterMaxSizeMultiplier
@property (readonly, nonatomic) CGFloat expandedAutofavoriteClusterMinSizeMultiplier; // ivar: _expandedAutofavoriteClusterMinSizeMultiplier
@property (readonly, nonatomic) NSInteger extraArticlesToShowUser; // ivar: _extraArticlesToShowUser
@property (readonly, nonatomic) *CGFloat featureClicksByAction;
@property (readonly, nonatomic) CGFloat featureImpressionPrior; // ivar: _featureImpressionPrior
@property (readonly, nonatomic) *CGFloat featureImpressionsByAction;
@property (readonly, nonatomic) CGFloat filterableNotificationThresholdMultiplier; // ivar: _filterableNotificationThresholdMultiplier
@property (readonly, nonatomic) BOOL forYouGroupAllowUnfilteredArticles; // ivar: _forYouGroupAllowUnfilteredArticles
@property (readonly, nonatomic) NSInteger forYouGroupFilteredSubsetCount; // ivar: _forYouGroupFilteredSubsetCount
@property (readonly, nonatomic) FCPersonalizationScoringConfig *forYouScoringConfig; // ivar: _forYouScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *forYouTopicsConfig; // ivar: _forYouTopicsConfig
@property (readonly, nonatomic) FCPersonalizationScoringConfig *greatStoriesYouMissedScoringConfig; // ivar: _greatStoriesYouMissedScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *greatStoriesYouMissedTopicsConfig; // ivar: _greatStoriesYouMissedTopicsConfig
@property (readonly, nonatomic) CGFloat groupImpressionBiasCorrectionFactor; // ivar: _groupImpressionBiasCorrectionFactor
@property (readonly, nonatomic) CGFloat heavyClickBaselineClickValue; // ivar: _heavyClickBaselineClickValue
@property (readonly, nonatomic) CGFloat heavyClickBaselineImpressionValue; // ivar: _heavyClickBaselineImpressionValue
@property (readonly, nonatomic) CGFloat heavyClickClickValue; // ivar: _heavyClickClickValue
@property (readonly, nonatomic) CGFloat heavyClickImpressionValue; // ivar: _heavyClickImpressionValue
@property (readonly, nonatomic) CGFloat heavyClickMinimumDuration; // ivar: _heavyClickMinimumDuration
@property (readonly, nonatomic) NSInteger heuristicOptionIPad; // ivar: _heuristicOptionIPad
@property (readonly, nonatomic) NSInteger heuristicOptionIPhone; // ivar: _heuristicOptionIPhone
@property (readonly, nonatomic) NSInteger heuristicSampleSizeIPad; // ivar: _heuristicSampleSizeIPad
@property (readonly, nonatomic) NSInteger heuristicSampleSizeIPhone; // ivar: _heuristicSampleSizeIPhone
@property (readonly, nonatomic) FCPersonalizationScoringConfig *highlightsGroupScoringConfig; // ivar: _highlightsGroupScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *highlightsGroupTopicsConfig; // ivar: _highlightsGroupTopicsConfig
@property (readonly, nonatomic) CGFloat hourlyFlowRateAlpha; // ivar: _hourlyFlowRateAlpha
@property (readonly, nonatomic) CGFloat hourlyFlowRateBeta; // ivar: _hourlyFlowRateBeta
@property (readonly, nonatomic) CGFloat hourlyFlowRateCeiling; // ivar: _hourlyFlowRateCeiling
@property (readonly, nonatomic) CGFloat hourlyFlowRateDampeningFactor; // ivar: _hourlyFlowRateDampeningFactor
@property (readonly, nonatomic) CGFloat hourlyFlowRateDecayFactor; // ivar: _hourlyFlowRateDecayFactor
@property (readonly, nonatomic) CGFloat hourlyFlowRateFloor; // ivar: _hourlyFlowRateFloor
@property (readonly, nonatomic) CGFloat hourlyFlowRateGamma; // ivar: _hourlyFlowRateGamma
@property (readonly, nonatomic) CGFloat hourlyFlowRateMinimum; // ivar: _hourlyFlowRateMinimum
@property (readonly, nonatomic) CGFloat hourlyFlowRatePerSubscription; // ivar: _hourlyFlowRatePerSubscription
@property (readonly, nonatomic) CGFloat hourlyFlowRatePriorWeight; // ivar: _hourlyFlowRatePriorWeight
@property (readonly, nonatomic) CGFloat hourlyFlowRateSubscriptionCountBuffer; // ivar: _hourlyFlowRateSubscriptionCountBuffer
@property (readonly, nonatomic) CGFloat indexImpressionBiasCorrectionFactor; // ivar: _indexImpressionBiasCorrectionFactor
@property (readonly, nonatomic) CGFloat internalUsageSignalWeight; // ivar: _internalUsageSignalWeight
@property (readonly, nonatomic) FCPersonalizationScoringConfig *introToSportsGroupScoringConfig; // ivar: _introToSportsGroupScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *introToSportsGroupTopicsConfig; // ivar: _introToSportsGroupTopicsConfig
@property (readonly, nonatomic) FCPersonalizationScoringConfig *latestStoriesScoringConfig; // ivar: _latestStoriesScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *latestStoriesTopicsConfig; // ivar: _latestStoriesTopicsConfig
@property (readonly, nonatomic) FCPersonalizationScoringConfig *legacyAudioFeedScoringConfig; // ivar: _legacyAudioFeedScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *legacyAudioFeedTopicsConfig; // ivar: _legacyAudioFeedTopicsConfig
@property (readonly, nonatomic) CGFloat likeBaselineClickValue; // ivar: _likeBaselineClickValue
@property (readonly, nonatomic) CGFloat likeBaselineImpressionValue; // ivar: _likeBaselineImpressionValue
@property (readonly, nonatomic) CGFloat likeClickValue; // ivar: _likeClickValue
@property (readonly, nonatomic) CGFloat likeImpressionValue; // ivar: _likeImpressionValue
@property (readonly, nonatomic) FCPersonalizationScoringConfig *localNewsScoringConfig; // ivar: _localNewsScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *localNewsTopicsConfig; // ivar: _localNewsTopicsConfig
@property (readonly, nonatomic) CGFloat lowQualityContentThreshold; // ivar: _lowQualityContentThreshold
@property (readonly, nonatomic) FCPersonalizationScoringConfig *magazineFeedArticleScoringConfig; // ivar: _magazineFeedArticleScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *magazineFeedArticleTopicsConfig; // ivar: _magazineFeedArticleTopicsConfig
@property (readonly, nonatomic) CGFloat magazineFeedGroupScoreWeight; // ivar: _magazineFeedGroupScoreWeight
@property (readonly, nonatomic) FCPersonalizationScoringConfig *magazineFeedIssueScoringConfig; // ivar: _magazineFeedIssueScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *magazineFeedIssueTopicsConfig; // ivar: _magazineFeedIssueTopicsConfig
@property (readonly, nonatomic) CGFloat managedTopicMultiplier; // ivar: _managedTopicMultiplier
@property (readonly, nonatomic) CGFloat managedWinnerTopicMultiplier; // ivar: _managedWinnerTopicMultiplier
@property (readonly, nonatomic) NSInteger maxClusterSizeIPad; // ivar: _maxClusterSizeIPad
@property (readonly, nonatomic) NSInteger maxClusterSizeIPadAutoFavorite; // ivar: _maxClusterSizeIPadAutoFavorite
@property (readonly, nonatomic) NSInteger maxClusterSizeIPhone; // ivar: _maxClusterSizeIPhone
@property (readonly, nonatomic) NSInteger maxClusterSizeIPhoneAutoFavorite; // ivar: _maxClusterSizeIPhoneAutoFavorite
@property (readonly, nonatomic) NSInteger maxEvergreenArticlesPerGroup; // ivar: _maxEvergreenArticlesPerGroup
@property (readonly, nonatomic) CGFloat maxExpandedAutofavoriteGroupCandidateRatio; // ivar: _maxExpandedAutofavoriteGroupCandidateRatio
@property (readonly, nonatomic) NSInteger maxIdealClusterSizeIPad; // ivar: _maxIdealClusterSizeIPad
@property (readonly, nonatomic) NSInteger maxIdealClusterSizeIPadAutoFavorite; // ivar: _maxIdealClusterSizeIPadAutoFavorite
@property (readonly, nonatomic) NSInteger maxIdealClusterSizeIPhone; // ivar: _maxIdealClusterSizeIPhone
@property (readonly, nonatomic) NSInteger maxIdealClusterSizeIPhoneAutoFavorite; // ivar: _maxIdealClusterSizeIPhoneAutoFavorite
@property (readonly, nonatomic) NSInteger maxMoreForYouSizeIPad; // ivar: _maxMoreForYouSizeIPad
@property (readonly, nonatomic) NSInteger maxMoreForYouSizeIPhone; // ivar: _maxMoreForYouSizeIPhone
@property (readonly, nonatomic) NSInteger maxNativeAdCountIPad; // ivar: _maxNativeAdCountIPad
@property (readonly, nonatomic) NSInteger maxNativeAdCountIPadBestOfBundle; // ivar: _maxNativeAdCountIPadBestOfBundle
@property (readonly, nonatomic) NSInteger maxNativeAdCountIPadForYouGroup; // ivar: _maxNativeAdCountIPadForYouGroup
@property (readonly, nonatomic) NSInteger maxNativeAdCountIPadGreatStoriesYouMissed; // ivar: _maxNativeAdCountIPadGreatStoriesYouMissed
@property (readonly, nonatomic) NSInteger maxNativeAdCountIPhone; // ivar: _maxNativeAdCountIPhone
@property (readonly, nonatomic) NSInteger maxNativeAdCountIPhoneBestOfBundle; // ivar: _maxNativeAdCountIPhoneBestOfBundle
@property (readonly, nonatomic) NSInteger maxNativeAdCountIPhoneForYouGroup; // ivar: _maxNativeAdCountIPhoneForYouGroup
@property (readonly, nonatomic) NSInteger maxNativeAdCountIPhoneGreatStoriesYouMissed; // ivar: _maxNativeAdCountIPhoneGreatStoriesYouMissed
@property (readonly, nonatomic) NSInteger maxNumberOfSuggestions; // ivar: _maxNumberOfSuggestions
@property (readonly, nonatomic) NSInteger maxPublisherOccurrencesIPad; // ivar: _maxPublisherOccurrencesIPad
@property (readonly, nonatomic) NSInteger maxPublisherOccurrencesIPadBestOfBundle; // ivar: _maxPublisherOccurrencesIPadBestOfBundle
@property (readonly, nonatomic) NSInteger maxPublisherOccurrencesIPadForYouGroup; // ivar: _maxPublisherOccurrencesIPadForYouGroup
@property (readonly, nonatomic) NSInteger maxPublisherOccurrencesIPadGreatStoriesYouMissed; // ivar: _maxPublisherOccurrencesIPadGreatStoriesYouMissed
@property (readonly, nonatomic) NSInteger maxPublisherOccurrencesIPhone; // ivar: _maxPublisherOccurrencesIPhone
@property (readonly, nonatomic) NSInteger maxPublisherOccurrencesIPhoneBestOfBundle; // ivar: _maxPublisherOccurrencesIPhoneBestOfBundle
@property (readonly, nonatomic) NSInteger maxPublisherOccurrencesIPhoneForYouGroup; // ivar: _maxPublisherOccurrencesIPhoneForYouGroup
@property (readonly, nonatomic) NSInteger maxPublisherOccurrencesIPhoneGreatStoriesYouMissed; // ivar: _maxPublisherOccurrencesIPhoneGreatStoriesYouMissed
@property (readonly, nonatomic) NSInteger maxUnpaidArticlesIPad; // ivar: _maxUnpaidArticlesIPad
@property (readonly, nonatomic) NSInteger maxUnpaidArticlesIPadBestOfBundle; // ivar: _maxUnpaidArticlesIPadBestOfBundle
@property (readonly, nonatomic) NSInteger maxUnpaidArticlesIPadForYouGroup; // ivar: _maxUnpaidArticlesIPadForYouGroup
@property (readonly, nonatomic) NSInteger maxUnpaidArticlesIPadGreatStoriesYouMissed; // ivar: _maxUnpaidArticlesIPadGreatStoriesYouMissed
@property (readonly, nonatomic) NSInteger maxUnpaidArticlesIPhone; // ivar: _maxUnpaidArticlesIPhone
@property (readonly, nonatomic) NSInteger maxUnpaidArticlesIPhoneBestOfBundle; // ivar: _maxUnpaidArticlesIPhoneBestOfBundle
@property (readonly, nonatomic) NSInteger maxUnpaidArticlesIPhoneForYouGroup; // ivar: _maxUnpaidArticlesIPhoneForYouGroup
@property (readonly, nonatomic) NSInteger maxUnpaidArticlesIPhoneGreatStoriesYouMissed; // ivar: _maxUnpaidArticlesIPhoneGreatStoriesYouMissed
@property (readonly, nonatomic) CGFloat metaGroupingHighestScoringRelativeScoreMultiplier; // ivar: _metaGroupingHighestScoringRelativeScoreMultiplier
@property (readonly, nonatomic) CGFloat metaGroupingRelatednessKWeight; // ivar: _metaGroupingRelatednessKWeight
@property (readonly, nonatomic) CGFloat metaGroupingRelatednessThreshold; // ivar: _metaGroupingRelatednessThreshold
@property (readonly, nonatomic) CGFloat metaGroupingSubscribedTopicMultiplier; // ivar: _metaGroupingSubscribedTopicMultiplier
@property (readonly, nonatomic) CGFloat metaGroupingTopicScoreWeight; // ivar: _metaGroupingTopicScoreWeight
@property (readonly, nonatomic) NSInteger minBaselineEventsToSubmitUserVector; // ivar: _minBaselineEventsToSubmitUserVector
@property (readonly, nonatomic) NSInteger minClusterSizeIPad; // ivar: _minClusterSizeIPad
@property (readonly, nonatomic) NSInteger minClusterSizeIPadAutoFavorite; // ivar: _minClusterSizeIPadAutoFavorite
@property (readonly, nonatomic) NSInteger minClusterSizeIPhone; // ivar: _minClusterSizeIPhone
@property (readonly, nonatomic) NSInteger minClusterSizeIPhoneAutoFavorite; // ivar: _minClusterSizeIPhoneAutoFavorite
@property (readonly, nonatomic) NSInteger minIdealClusterSizeIPad; // ivar: _minIdealClusterSizeIPad
@property (readonly, nonatomic) NSInteger minIdealClusterSizeIPadAutoFavorite; // ivar: _minIdealClusterSizeIPadAutoFavorite
@property (readonly, nonatomic) NSInteger minIdealClusterSizeIPhone; // ivar: _minIdealClusterSizeIPhone
@property (readonly, nonatomic) NSInteger minIdealClusterSizeIPhoneAutoFavorite; // ivar: _minIdealClusterSizeIPhoneAutoFavorite
@property (readonly, nonatomic) NSInteger minMoreForYouSizeIPad; // ivar: _minMoreForYouSizeIPad
@property (readonly, nonatomic) NSInteger minMoreForYouSizeIPhone; // ivar: _minMoreForYouSizeIPhone
@property (readonly, nonatomic) CGFloat minimumMyMagazinesIssueScoreBaselineMultiplier; // ivar: _minimumMyMagazinesIssueScoreBaselineMultiplier
@property (readonly, nonatomic) CGFloat muteBaselineClickValue; // ivar: _muteBaselineClickValue
@property (readonly, nonatomic) CGFloat muteBaselineImpressionValue; // ivar: _muteBaselineImpressionValue
@property (readonly, nonatomic) CGFloat muteClickValue; // ivar: _muteClickValue
@property (readonly, nonatomic) CGFloat muteImpressionValue; // ivar: _muteImpressionValue
@property (readonly, nonatomic) FCPersonalizationScoringConfig *mySportsGroupScoringConfig; // ivar: _mySportsGroupScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *mySportsGroupTopicsConfig; // ivar: _mySportsGroupTopicsConfig
@property (readonly, nonatomic) CGFloat newsTodayWidgetClickBaselineClickValue; // ivar: _newsTodayWidgetClickBaselineClickValue
@property (readonly, nonatomic) CGFloat newsTodayWidgetClickBaselineImpressionValue; // ivar: _newsTodayWidgetClickBaselineImpressionValue
@property (readonly, nonatomic) CGFloat newsTodayWidgetClickClickValue; // ivar: _newsTodayWidgetClickClickValue
@property (readonly, nonatomic) CGFloat newsTodayWidgetClickImpressionValue; // ivar: _newsTodayWidgetClickImpressionValue
@property (readonly, nonatomic) CGFloat newsTodayWidgetPresentationBaselineClickValue; // ivar: _newsTodayWidgetPresentationBaselineClickValue
@property (readonly, nonatomic) CGFloat newsTodayWidgetPresentationBaselineImpressionValue; // ivar: _newsTodayWidgetPresentationBaselineImpressionValue
@property (readonly, nonatomic) CGFloat newsTodayWidgetPresentationClickValue; // ivar: _newsTodayWidgetPresentationClickValue
@property (readonly, nonatomic) CGFloat newsTodayWidgetPresentationImpressionValue; // ivar: _newsTodayWidgetPresentationImpressionValue
@property (readonly, nonatomic) CGFloat newsTodayWidgetVideoPlaybackBaselineClickValue; // ivar: _newsTodayWidgetVideoPlaybackBaselineClickValue
@property (readonly, nonatomic) CGFloat newsTodayWidgetVideoPlaybackBaselineImpressionValue; // ivar: _newsTodayWidgetVideoPlaybackBaselineImpressionValue
@property (readonly, nonatomic) CGFloat newsTodayWidgetVideoPlaybackClickValue; // ivar: _newsTodayWidgetVideoPlaybackClickValue
@property (readonly, nonatomic) CGFloat newsTodayWidgetVideoPlaybackImpressionValue; // ivar: _newsTodayWidgetVideoPlaybackImpressionValue
@property (readonly, nonatomic) FCPersonalizationScoringConfig *newspaperMagazineFeedScoringConfig; // ivar: _newspaperMagazineFeedScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *newspaperMagazineFeedTopicsConfig; // ivar: _newspaperMagazineFeedTopicsConfig
@property (readonly, nonatomic) FCPersonalizationScoringConfig *notificationScoringConfig; // ivar: _notificationScoringConfig
@property (readonly, nonatomic) NSInteger numEventsToDisableDefaultTopics; // ivar: _numEventsToDisableDefaultTopics
@property (readonly, nonatomic) NSInteger numSubscriptionsToDisableDefaultTopics; // ivar: _numSubscriptionsToDisableDefaultTopics
@property (readonly, nonatomic) BOOL onlyConsiderBestSourceFeedsInForYouGroup; // ivar: _onlyConsiderBestSourceFeedsInForYouGroup
@property (readonly, nonatomic) NSUInteger optimizedLayoutIncrementUnitIPad; // ivar: _optimizedLayoutIncrementUnitIPad
@property (readonly, nonatomic) NSUInteger optimizedLayoutIncrementUnitIPhone; // ivar: _optimizedLayoutIncrementUnitIPhone
@property (readonly, nonatomic) NSUInteger optimizedLayoutSizeThresholdIPad; // ivar: _optimizedLayoutSizeThresholdIPad
@property (readonly, nonatomic) NSUInteger optimizedLayoutSizeThresholdIPhone; // ivar: _optimizedLayoutSizeThresholdIPhone
@property (readonly, nonatomic) CGFloat optionalTagSpecificityScore; // ivar: _optionalTagSpecificityScore
@property (readonly, nonatomic) CGFloat portraitDecayRate; // ivar: _portraitDecayRate
@property (readonly, nonatomic) CGFloat portraitGlobalThreshold; // ivar: _portraitGlobalThreshold
@property (readonly, nonatomic) CGFloat portraitPriorFactorExponent; // ivar: _portraitPriorFactorExponent
@property (readonly, nonatomic) CGFloat portraitSignalWeight; // ivar: _portraitSignalWeight
@property (readonly, nonatomic) CGFloat portraitTagFavorabilityExponent; // ivar: _portraitTagFavorabilityExponent
@property (readonly, nonatomic) CGFloat premiumSubscriptionActivationBaselineClickValue; // ivar: _premiumSubscriptionActivationBaselineClickValue
@property (readonly, nonatomic) CGFloat premiumSubscriptionActivationBaselineImpressionValue; // ivar: _premiumSubscriptionActivationBaselineImpressionValue
@property (readonly, nonatomic) CGFloat premiumSubscriptionActivationClickValue; // ivar: _premiumSubscriptionActivationClickValue
@property (readonly, nonatomic) CGFloat premiumSubscriptionActivationImpressionValue; // ivar: _premiumSubscriptionActivationImpressionValue
@property (readonly, nonatomic) CGFloat presentationBaselineClickValue; // ivar: _presentationBaselineClickValue
@property (readonly, nonatomic) CGFloat presentationBaselineImpressionValue; // ivar: _presentationBaselineImpressionValue
@property (readonly, nonatomic) CGFloat presentationClickValue; // ivar: _presentationClickValue
@property (readonly, nonatomic) CGFloat presentationImpressionValue; // ivar: _presentationImpressionValue
@property (readonly, nonatomic) CGFloat publisherBoostForIssueOpenBaselineClickValue; // ivar: _publisherBoostForIssueOpenBaselineClickValue
@property (readonly, nonatomic) CGFloat publisherBoostForIssueOpenBaselineImpressionValue; // ivar: _publisherBoostForIssueOpenBaselineImpressionValue
@property (readonly, nonatomic) CGFloat publisherBoostForIssueOpenClickValue; // ivar: _publisherBoostForIssueOpenClickValue
@property (readonly, nonatomic) CGFloat publisherBoostForIssueOpenImpressionValue; // ivar: _publisherBoostForIssueOpenImpressionValue
@property (readonly, nonatomic) CGFloat publisherBoostForSourceMoreFromFeedBaselineClickValue; // ivar: _publisherBoostForSourceMoreFromFeedBaselineClickValue
@property (readonly, nonatomic) CGFloat publisherBoostForSourceMoreFromFeedBaselineImpressionValue; // ivar: _publisherBoostForSourceMoreFromFeedBaselineImpressionValue
@property (readonly, nonatomic) CGFloat publisherBoostForSourceMoreFromFeedClickValue; // ivar: _publisherBoostForSourceMoreFromFeedClickValue
@property (readonly, nonatomic) CGFloat publisherBoostForSourceMoreFromFeedImpressionValue; // ivar: _publisherBoostForSourceMoreFromFeedImpressionValue
@property (readonly, nonatomic) CGFloat publisherDiversificationInitialPenalty; // ivar: _publisherDiversificationInitialPenalty
@property (readonly, nonatomic) CGFloat publisherDiversificationPenalty; // ivar: _publisherDiversificationPenalty
@property (readonly, nonatomic) CGFloat publisherDiversificationPenaltyHalfLife; // ivar: _publisherDiversificationPenaltyHalfLife
@property (readonly, nonatomic) CGFloat publisherDiversityMaxArticleFilter; // ivar: _publisherDiversityMaxArticleFilter
@property (readonly, nonatomic) NSUInteger publisherDiversityMaxPublisherCount; // ivar: _publisherDiversityMaxPublisherCount
@property (readonly, nonatomic) NSUInteger publisherDiversityMinPublisherCount; // ivar: _publisherDiversityMinPublisherCount
@property (readonly, nonatomic) NSInteger publisherTopicIDEventCountMinimum; // ivar: _publisherTopicIDEventCountMinimum
@property (readonly, nonatomic) CGFloat recommendationPresentationExploreBaselineClickValue; // ivar: _recommendationPresentationExploreBaselineClickValue
@property (readonly, nonatomic) CGFloat recommendationPresentationExploreBaselineImpressionValue; // ivar: _recommendationPresentationExploreBaselineImpressionValue
@property (readonly, nonatomic) CGFloat recommendationPresentationExploreClickValue; // ivar: _recommendationPresentationExploreClickValue
@property (readonly, nonatomic) CGFloat recommendationPresentationExploreImpressionValue; // ivar: _recommendationPresentationExploreImpressionValue
@property (readonly, nonatomic) CGFloat recommendationPresentationFeedBaselineClickValue; // ivar: _recommendationPresentationFeedBaselineClickValue
@property (readonly, nonatomic) CGFloat recommendationPresentationFeedBaselineImpressionValue; // ivar: _recommendationPresentationFeedBaselineImpressionValue
@property (readonly, nonatomic) CGFloat recommendationPresentationFeedClickValue; // ivar: _recommendationPresentationFeedClickValue
@property (readonly, nonatomic) CGFloat recommendationPresentationFeedImpressionValue; // ivar: _recommendationPresentationFeedImpressionValue
@property (readonly, nonatomic) CGFloat relatedTopicMultiplier; // ivar: _relatedTopicMultiplier
@property (readonly, nonatomic) CGFloat relatedTopicRatioFilter; // ivar: _relatedTopicRatioFilter
@property (readonly, nonatomic) CGFloat safariEventBlackoutSeconds; // ivar: _safariEventBlackoutSeconds
@property (readonly, nonatomic) CGFloat safariHistoryBaselineClickValue; // ivar: _safariHistoryBaselineClickValue
@property (readonly, nonatomic) CGFloat safariHistoryBaselineImpressionValue; // ivar: _safariHistoryBaselineImpressionValue
@property (readonly, nonatomic) CGFloat safariHistoryClickValue; // ivar: _safariHistoryClickValue
@property (readonly, nonatomic) CGFloat safariHistoryImpressionValue; // ivar: _safariHistoryImpressionValue
@property (readonly, nonatomic) CGFloat safariOccurrenceDecayMultiplier; // ivar: _safariOccurrenceDecayMultiplier
@property (readonly, nonatomic) CGFloat safariPriorFactorExponent; // ivar: _safariPriorFactorExponent
@property (readonly, nonatomic) CGFloat safariSignalWeight; // ivar: _safariSignalWeight
@property (readonly, nonatomic) CGFloat safariTagFavorabilityExponent; // ivar: _safariTagFavorabilityExponent
@property (readonly, nonatomic) CGFloat safariTimeDecayMultiplier; // ivar: _safariTimeDecayMultiplier
@property (readonly, nonatomic) CGFloat savedBaselineClickValue; // ivar: _savedBaselineClickValue
@property (readonly, nonatomic) CGFloat savedBaselineImpressionValue; // ivar: _savedBaselineImpressionValue
@property (readonly, nonatomic) CGFloat savedClickValue; // ivar: _savedClickValue
@property (readonly, nonatomic) CGFloat savedImpressionValue; // ivar: _savedImpressionValue
@property (readonly, nonatomic) CGFloat searchBranchDecayIPad; // ivar: _searchBranchDecayIPad
@property (readonly, nonatomic) CGFloat searchBranchDecayIPhone; // ivar: _searchBranchDecayIPhone
@property (readonly, nonatomic) NSInteger searchBranchMultiplierIPad; // ivar: _searchBranchMultiplierIPad
@property (readonly, nonatomic) NSInteger searchBranchMultiplierIPhone; // ivar: _searchBranchMultiplierIPhone
@property (readonly, nonatomic) CGFloat searchTimeLimit; // ivar: _searchTimeLimit
@property (readonly, nonatomic) CGFloat shareBaselineClickValue; // ivar: _shareBaselineClickValue
@property (readonly, nonatomic) CGFloat shareBaselineImpressionValue; // ivar: _shareBaselineImpressionValue
@property (readonly, nonatomic) CGFloat shareClickValue; // ivar: _shareClickValue
@property (readonly, nonatomic) CGFloat shareImpressionValue; // ivar: _shareImpressionValue
@property (readonly, nonatomic) FCPersonalizationScoringConfig *sportsFeedScoringConfig; // ivar: _sportsFeedScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *sportsFeedTopicsConfig; // ivar: _sportsFeedTopicsConfig
@property (readonly, nonatomic) FCPersonalizationTagScoringConfig *sportsTagScoringConfig; // ivar: _sportsTagScoringConfig
@property (readonly, nonatomic) CGFloat subscribeBaselineClickValue; // ivar: _subscribeBaselineClickValue
@property (readonly, nonatomic) CGFloat subscribeBaselineImpressionValue; // ivar: _subscribeBaselineImpressionValue
@property (readonly, nonatomic) CGFloat subscribeClickValue; // ivar: _subscribeClickValue
@property (readonly, nonatomic) CGFloat subscribeImpressionValue; // ivar: _subscribeImpressionValue
@property (readonly, nonatomic) CGFloat subscribeRelatedBaselineClickValue; // ivar: _subscribeRelatedBaselineClickValue
@property (readonly, nonatomic) CGFloat subscribeRelatedBaselineImpressionValue; // ivar: _subscribeRelatedBaselineImpressionValue
@property (readonly, nonatomic) CGFloat subscribeRelatedClickValue; // ivar: _subscribeRelatedClickValue
@property (readonly, nonatomic) CGFloat subscribeRelatedImpressionValue; // ivar: _subscribeRelatedImpressionValue
@property (readonly, nonatomic) CGFloat swipeToArticleHeavyClickMinimumDuration; // ivar: _swipeToArticleHeavyClickMinimumDuration
@property (readonly, nonatomic) CGFloat swipeToArticleWeakClickMinimumDuration; // ivar: _swipeToArticleWeakClickMinimumDuration
@property (readonly, nonatomic) CGFloat tagArticleScoreCoeffIPad; // ivar: _tagArticleScoreCoeffIPad
@property (readonly, nonatomic) CGFloat tagArticleScoreCoeffIPhone; // ivar: _tagArticleScoreCoeffIPhone
@property (readonly, nonatomic) CGFloat tagAutoFavoritedCoeffIPad; // ivar: _tagAutoFavoritedCoeffIPad
@property (readonly, nonatomic) CGFloat tagAutoFavoritedCoeffIPhone; // ivar: _tagAutoFavoritedCoeffIPhone
@property (readonly, nonatomic) CGFloat tagFavoritedCoeffIPad; // ivar: _tagFavoritedCoeffIPad
@property (readonly, nonatomic) CGFloat tagFavoritedCoeffIPhone; // ivar: _tagFavoritedCoeffIPhone
@property (readonly, nonatomic) FCPersonalizationScoringConfig *tagFeedScoringConfig; // ivar: _tagFeedScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *tagFeedTopicsConfig; // ivar: _tagFeedTopicsConfig
@property (readonly, nonatomic) CGFloat tagGroupableCoeffIPad; // ivar: _tagGroupableCoeffIPad
@property (readonly, nonatomic) CGFloat tagGroupableCoeffIPhone; // ivar: _tagGroupableCoeffIPhone
@property (readonly, nonatomic) CGFloat tagPersonalizationCoeffIPad; // ivar: _tagPersonalizationCoeffIPad
@property (readonly, nonatomic) CGFloat tagPersonalizationCoeffIPhone; // ivar: _tagPersonalizationCoeffIPhone
@property (readonly, nonatomic) CGFloat tagSizeCoeffIPad; // ivar: _tagSizeCoeffIPad
@property (readonly, nonatomic) CGFloat tagSizeCoeffIPhone; // ivar: _tagSizeCoeffIPhone
@property (readonly, nonatomic) CGFloat tagSpecificityCoeffIPad; // ivar: _tagSpecificityCoeffIPad
@property (readonly, nonatomic) CGFloat tagSpecificityCoeffIPhone; // ivar: _tagSpecificityCoeffIPhone
@property (readonly, nonatomic) FCPersonalizationScoringConfig *tagWidgetScoringConfig; // ivar: _tagWidgetScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *tagWidgetTopicsConfig; // ivar: _tagWidgetTopicsConfig
@property (readonly, nonatomic) CGFloat tappedBaselineClickValue; // ivar: _tappedBaselineClickValue
@property (readonly, nonatomic) CGFloat tappedBaselineImpressionValue; // ivar: _tappedBaselineImpressionValue
@property (readonly, nonatomic) CGFloat tappedClickValue; // ivar: _tappedClickValue
@property (readonly, nonatomic) CGFloat tappedImpressionValue; // ivar: _tappedImpressionValue
@property (readonly, nonatomic) FCPersonalizationScoringConfig *todayWidgetScoringConfig; // ivar: _todayWidgetScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *todayWidgetTopicsConfig; // ivar: _todayWidgetTopicsConfig
@property (readonly, nonatomic) CGFloat topStoriesGroupAggregatesGroupBias; // ivar: _topStoriesGroupAggregatesGroupBias
@property (readonly, nonatomic) CGFloat topicAutofavoritedMultiplier; // ivar: _topicAutofavoritedMultiplier
@property (readonly, nonatomic) CGFloat topicBoostForSourceRelatedFeedBaselineClickValue; // ivar: _topicBoostForSourceRelatedFeedBaselineClickValue
@property (readonly, nonatomic) CGFloat topicBoostForSourceRelatedFeedBaselineImpressionValue; // ivar: _topicBoostForSourceRelatedFeedBaselineImpressionValue
@property (readonly, nonatomic) CGFloat topicBoostForSourceRelatedFeedClickValue; // ivar: _topicBoostForSourceRelatedFeedClickValue
@property (readonly, nonatomic) CGFloat topicBoostForSourceRelatedFeedImpressionValue; // ivar: _topicBoostForSourceRelatedFeedImpressionValue
@property (readonly, nonatomic) CGFloat topicDiversityThreshold; // ivar: _topicDiversityThreshold
@property (readonly, nonatomic) NSInteger topicDiversityWindowSize; // ivar: _topicDiversityWindowSize
@property (readonly, nonatomic) CGFloat topicFavoritedMultiplier; // ivar: _topicFavoritedMultiplier
@property (readonly, nonatomic) CGFloat topicFeedFilterMutedTopics; // ivar: _topicFeedFilterMutedTopics
@property (readonly, nonatomic) FCPersonalizationScoringConfig *topicFeedScoringConfig; // ivar: _topicFeedScoringConfig
@property (readonly, nonatomic) FCPersonalizationTopicsConfig *topicFeedTopicsConfig; // ivar: _topicFeedTopicsConfig
@property (readonly, nonatomic) CGFloat topicGroupSizeMultiplier; // ivar: _topicGroupSizeMultiplier
@property (readonly, nonatomic) CGFloat topicGroupableMultiplier; // ivar: _topicGroupableMultiplier
@property (readonly, nonatomic) CGFloat topicScoreWeight; // ivar: _topicScoreWeight
@property (readonly, nonatomic) CGFloat topicSpecificityMultiplier; // ivar: _topicSpecificityMultiplier
@property (readonly, nonatomic) CGFloat trackFinishedBaselineClickValue; // ivar: _trackFinishedBaselineClickValue
@property (readonly, nonatomic) CGFloat trackFinishedBaselineImpressionValue; // ivar: _trackFinishedBaselineImpressionValue
@property (readonly, nonatomic) CGFloat trackFinishedClickValue; // ivar: _trackFinishedClickValue
@property (readonly, nonatomic) CGFloat trackFinishedImpressionValue; // ivar: _trackFinishedImpressionValue
@property (readonly, nonatomic) CGFloat trackListenedBaselineClickValue; // ivar: _trackListenedBaselineClickValue
@property (readonly, nonatomic) CGFloat trackListenedBaselineImpressionValue; // ivar: _trackListenedBaselineImpressionValue
@property (readonly, nonatomic) CGFloat trackListenedClickValue; // ivar: _trackListenedClickValue
@property (readonly, nonatomic) CGFloat trackListenedImpressionValue; // ivar: _trackListenedImpressionValue
@property (readonly, nonatomic) NSInteger trackListenedMinimumDuration; // ivar: _trackListenedMinimumDuration
@property (readonly, nonatomic) CGFloat trackVisitedBaselineClickValue; // ivar: _trackVisitedBaselineClickValue
@property (readonly, nonatomic) CGFloat trackVisitedBaselineImpressionValue; // ivar: _trackVisitedBaselineImpressionValue
@property (readonly, nonatomic) CGFloat trackVisitedClickValue; // ivar: _trackVisitedClickValue
@property (readonly, nonatomic) CGFloat trackVisitedImpressionValue; // ivar: _trackVisitedImpressionValue
@property (readonly, nonatomic) NSInteger trackVisitedMinimumDuration; // ivar: _trackVisitedMinimumDuration
@property (readonly, nonatomic) NSInteger treatmentID; // ivar: _treatmentID
@property (readonly, nonatomic) CGFloat trendingGroupAggregatesGroupBias; // ivar: _trendingGroupAggregatesGroupBias
@property (readonly, nonatomic) CGFloat uGroupMinimumSubscribedChannelSourceFeedArticleRatio; // ivar: _uGroupMinimumSubscribedChannelSourceFeedArticleRatio
@property (readonly, nonatomic) CGFloat unmuteBaselineClickValue; // ivar: _unmuteBaselineClickValue
@property (readonly, nonatomic) CGFloat unmuteBaselineImpressionValue; // ivar: _unmuteBaselineImpressionValue
@property (readonly, nonatomic) CGFloat unmuteClickValue; // ivar: _unmuteClickValue
@property (readonly, nonatomic) CGFloat unmuteImpressionValue; // ivar: _unmuteImpressionValue
@property (readonly, nonatomic) CGFloat unsubscribeBaselineClickValue; // ivar: _unsubscribeBaselineClickValue
@property (readonly, nonatomic) CGFloat unsubscribeBaselineImpressionValue; // ivar: _unsubscribeBaselineImpressionValue
@property (readonly, nonatomic) CGFloat unsubscribeClickValue; // ivar: _unsubscribeClickValue
@property (readonly, nonatomic) CGFloat unsubscribeImpressionValue; // ivar: _unsubscribeImpressionValue
@property (readonly, nonatomic) CGFloat videoComplete25BaselineClickValue; // ivar: _videoComplete25BaselineClickValue
@property (readonly, nonatomic) CGFloat videoComplete25BaselineImpressionValue; // ivar: _videoComplete25BaselineImpressionValue
@property (readonly, nonatomic) CGFloat videoComplete25ClickValue; // ivar: _videoComplete25ClickValue
@property (readonly, nonatomic) CGFloat videoComplete25ImpressionValue; // ivar: _videoComplete25ImpressionValue
@property (readonly, nonatomic) CGFloat videoComplete50BaselineClickValue; // ivar: _videoComplete50BaselineClickValue
@property (readonly, nonatomic) CGFloat videoComplete50BaselineImpressionValue; // ivar: _videoComplete50BaselineImpressionValue
@property (readonly, nonatomic) CGFloat videoComplete50ClickValue; // ivar: _videoComplete50ClickValue
@property (readonly, nonatomic) CGFloat videoComplete50ImpressionValue; // ivar: _videoComplete50ImpressionValue
@property (readonly, nonatomic) CGFloat videoComplete75BaselineClickValue; // ivar: _videoComplete75BaselineClickValue
@property (readonly, nonatomic) CGFloat videoComplete75BaselineImpressionValue; // ivar: _videoComplete75BaselineImpressionValue
@property (readonly, nonatomic) CGFloat videoComplete75ClickValue; // ivar: _videoComplete75ClickValue
@property (readonly, nonatomic) CGFloat videoComplete75ImpressionValue; // ivar: _videoComplete75ImpressionValue
@property (readonly, nonatomic) CGFloat videoCompletePlaybackBaselineClickValue; // ivar: _videoCompletePlaybackBaselineClickValue
@property (readonly, nonatomic) CGFloat videoCompletePlaybackBaselineImpressionValue; // ivar: _videoCompletePlaybackBaselineImpressionValue
@property (readonly, nonatomic) CGFloat videoCompletePlaybackClickValue; // ivar: _videoCompletePlaybackClickValue
@property (readonly, nonatomic) CGFloat videoCompletePlaybackImpressionValue; // ivar: _videoCompletePlaybackImpressionValue
@property (readonly, nonatomic) CGFloat videoInitiatePlaybackBaselineClickValue; // ivar: _videoInitiatePlaybackBaselineClickValue
@property (readonly, nonatomic) CGFloat videoInitiatePlaybackBaselineImpressionValue; // ivar: _videoInitiatePlaybackBaselineImpressionValue
@property (readonly, nonatomic) CGFloat videoInitiatePlaybackClickValue; // ivar: _videoInitiatePlaybackClickValue
@property (readonly, nonatomic) CGFloat videoInitiatePlaybackImpressionValue; // ivar: _videoInitiatePlaybackImpressionValue
@property (readonly, nonatomic) CGFloat visitBaselineClickValue; // ivar: _visitBaselineClickValue
@property (readonly, nonatomic) CGFloat visitBaselineImpressionValue; // ivar: _visitBaselineImpressionValue
@property (readonly, nonatomic) CGFloat visitClickValue; // ivar: _visitClickValue
@property (readonly, nonatomic) CGFloat visitImpressionValue; // ivar: _visitImpressionValue
@property (readonly, nonatomic) CGFloat weakClickBaselineClickValue; // ivar: _weakClickBaselineClickValue
@property (readonly, nonatomic) CGFloat weakClickBaselineImpressionValue; // ivar: _weakClickBaselineImpressionValue
@property (readonly, nonatomic) CGFloat weakClickClickValue; // ivar: _weakClickClickValue
@property (readonly, nonatomic) CGFloat weakClickImpressionValue; // ivar: _weakClickImpressionValue


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersonalizationTreatmentDictionary:(id)arg0 ;
-(id)treatmentDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif