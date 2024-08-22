// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBPERSONALIZATIONTREATMENT_H
#define NTPBPERSONALIZATIONTREATMENT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBPersonalizationTreatment : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat appInFocusBaselineClickValue; // ivar: _appInFocusBaselineClickValue
@property (nonatomic) CGFloat appInFocusBaselineImpressionValue; // ivar: _appInFocusBaselineImpressionValue
@property (nonatomic) CGFloat appInFocusClickValue; // ivar: _appInFocusClickValue
@property (nonatomic) CGFloat appInFocusImpressionValue; // ivar: _appInFocusImpressionValue
@property (nonatomic) CGFloat appInstallBaselineClickValue; // ivar: _appInstallBaselineClickValue
@property (nonatomic) CGFloat appInstallBaselineImpressionValue; // ivar: _appInstallBaselineImpressionValue
@property (nonatomic) CGFloat appInstallClickValue; // ivar: _appInstallClickValue
@property (nonatomic) CGFloat appInstallImpressionValue; // ivar: _appInstallImpressionValue
@property (nonatomic) CGFloat appUsageOccurrenceDecayMultiplier; // ivar: _appUsageOccurrenceDecayMultiplier
@property (nonatomic) CGFloat appUsagePriorFactorExponent; // ivar: _appUsagePriorFactorExponent
@property (nonatomic) CGFloat appUsageSignalWeight; // ivar: _appUsageSignalWeight
@property (nonatomic) CGFloat appUsageTagFavorabilityExponent; // ivar: _appUsageTagFavorabilityExponent
@property (nonatomic) CGFloat appUsageTimeDecayMultiplier; // ivar: _appUsageTimeDecayMultiplier
@property (nonatomic) CGFloat articleEntityScoreWeightRatioIPad; // ivar: _articleEntityScoreWeightRatioIPad
@property (nonatomic) CGFloat articleEntityScoreWeightRatioIPhone; // ivar: _articleEntityScoreWeightRatioIPhone
@property (nonatomic) unsigned int auditionedAutoFavoritesEmitterLimit; // ivar: _auditionedAutoFavoritesEmitterLimit
@property (nonatomic) CGFloat autoFavoriteFetchableMinImpressions; // ivar: _autoFavoriteFetchableMinImpressions
@property (nonatomic) CGFloat autoFavoriteFetchableMinRate; // ivar: _autoFavoriteFetchableMinRate
@property (nonatomic) CGFloat autoFavoriteFetchableMinRelativeRate; // ivar: _autoFavoriteFetchableMinRelativeRate
@property (nonatomic) CGFloat autoFavoriteGroupableMinImpressions; // ivar: _autoFavoriteGroupableMinImpressions
@property (nonatomic) CGFloat autoFavoriteGroupableMinRate; // ivar: _autoFavoriteGroupableMinRate
@property (nonatomic) CGFloat autoFavoriteGroupableMinRelativeRate; // ivar: _autoFavoriteGroupableMinRelativeRate
@property (nonatomic) CGFloat autoFavoriteMaxIdleTime; // ivar: _autoFavoriteMaxIdleTime
@property (nonatomic) CGFloat autoFavoriteMinClicks; // ivar: _autoFavoriteMinClicks
@property (nonatomic) CGFloat autoFavoriteMinImpressions; // ivar: _autoFavoriteMinImpressions
@property (nonatomic) CGFloat autoFavoriteMinObservationsExtAppUsage; // ivar: _autoFavoriteMinObservationsExtAppUsage
@property (nonatomic) CGFloat autoFavoriteMinObservationsSafari; // ivar: _autoFavoriteMinObservationsSafari
@property (nonatomic) CGFloat autoFavoriteMinRate; // ivar: _autoFavoriteMinRate
@property (nonatomic) CGFloat autoFavoriteMinRelativeRate; // ivar: _autoFavoriteMinRelativeRate
@property (nonatomic) CGFloat autoFavoriteMinScoreExtAppUsage; // ivar: _autoFavoriteMinScoreExtAppUsage
@property (nonatomic) CGFloat autoFavoriteMinScoreSafari; // ivar: _autoFavoriteMinScoreSafari
@property (nonatomic) CGFloat autoFavoritePriorFactorExponent; // ivar: _autoFavoritePriorFactorExponent
@property (nonatomic) CGFloat autoFavoriteTagFavorabilityExponent; // ivar: _autoFavoriteTagFavorabilityExponent
@property (nonatomic) CGFloat autoGroupableFactor; // ivar: _autoGroupableFactor
@property (nonatomic) CGFloat autoUnfavoriteFactor; // ivar: _autoUnfavoriteFactor
@property (nonatomic) CGFloat autofavoritedVoteCoefficient; // ivar: _autofavoritedVoteCoefficient
@property (nonatomic) CGFloat averageSafariVisitsPerDay; // ivar: _averageSafariVisitsPerDay
@property (nonatomic) CGFloat baselineArticleScore; // ivar: _baselineArticleScore
@property (nonatomic) CGFloat baselineImpressionPrior; // ivar: _baselineImpressionPrior
@property (nonatomic) CGFloat baselineRatePrior; // ivar: _baselineRatePrior
@property (nonatomic) CGFloat channelTopicDiversificationInitialPenalty; // ivar: _channelTopicDiversificationInitialPenalty
@property (nonatomic) CGFloat channelTopicDiversificationPenalty; // ivar: _channelTopicDiversificationPenalty
@property (nonatomic) CGFloat channelTopicDiversificationPenaltyHalfLife; // ivar: _channelTopicDiversificationPenaltyHalfLife
@property (nonatomic) CGFloat cohortMembershipBaselineCtrWeight; // ivar: _cohortMembershipBaselineCtrWeight
@property (nonatomic) CGFloat cohortMembershipCtrCeiling; // ivar: _cohortMembershipCtrCeiling
@property (nonatomic) CGFloat cohortMembershipCurvature; // ivar: _cohortMembershipCurvature
@property (nonatomic) CGFloat cohortMembershipCurveSteepness; // ivar: _cohortMembershipCurveSteepness
@property (nonatomic) CGFloat cohortMembershipFavoritedBoost; // ivar: _cohortMembershipFavoritedBoost
@property (nonatomic) CGFloat cohortMembershipMinWeightedImpressions; // ivar: _cohortMembershipMinWeightedImpressions
@property (nonatomic) CGFloat ctrWithOneAutofavorited; // ivar: _ctrWithOneAutofavorited
@property (nonatomic) CGFloat ctrWithOneMuted; // ivar: _ctrWithOneMuted
@property (nonatomic) CGFloat ctrWithOneSubscribed; // ivar: _ctrWithOneSubscribed
@property (nonatomic) CGFloat ctrWithSubscribedChannel; // ivar: _ctrWithSubscribedChannel
@property (nonatomic) CGFloat ctrWithThreeAutofavorited; // ivar: _ctrWithThreeAutofavorited
@property (nonatomic) CGFloat ctrWithThreeMuted; // ivar: _ctrWithThreeMuted
@property (nonatomic) CGFloat ctrWithThreeSubscribed; // ivar: _ctrWithThreeSubscribed
@property (nonatomic) CGFloat ctrWithTwoAutofavorited; // ivar: _ctrWithTwoAutofavorited
@property (nonatomic) CGFloat ctrWithTwoMuted; // ivar: _ctrWithTwoMuted
@property (nonatomic) CGFloat ctrWithTwoSubscribed; // ivar: _ctrWithTwoSubscribed
@property (nonatomic) CGFloat ctrWithZeroAutofavorited; // ivar: _ctrWithZeroAutofavorited
@property (nonatomic) CGFloat ctrWithZeroMuted; // ivar: _ctrWithZeroMuted
@property (nonatomic) CGFloat ctrWithZeroSubscribed; // ivar: _ctrWithZeroSubscribed
@property (nonatomic) CGFloat decayFactor; // ivar: _decayFactor
@property (nonatomic) BOOL deleteOrphansFromOverflow; // ivar: _deleteOrphansFromOverflow
@property (nonatomic) CGFloat democratizationFactor; // ivar: _democratizationFactor
@property (nonatomic) CGFloat dislikeClickValue; // ivar: _dislikeClickValue
@property (nonatomic) CGFloat dislikeClickValueBaseline; // ivar: _dislikeClickValueBaseline
@property (nonatomic) CGFloat dislikeImpressionValue; // ivar: _dislikeImpressionValue
@property (nonatomic) CGFloat dislikeImpressionValueBaseline; // ivar: _dislikeImpressionValueBaseline
@property (nonatomic) CGFloat diversificationInitialPenalty; // ivar: _diversificationInitialPenalty
@property (nonatomic) CGFloat diversificationPenalty; // ivar: _diversificationPenalty
@property (nonatomic) CGFloat diversificationPenaltyHalfLife; // ivar: _diversificationPenaltyHalfLife
@property (nonatomic) unsigned int dynamicMaxArticleSetSizeIPad; // ivar: _dynamicMaxArticleSetSizeIPad
@property (nonatomic) unsigned int dynamicMaxArticleSetSizeIPhone; // ivar: _dynamicMaxArticleSetSizeIPhone
@property (nonatomic) unsigned int dynamicMaxClusterSizeIPad; // ivar: _dynamicMaxClusterSizeIPad
@property (nonatomic) unsigned int dynamicMaxClusterSizeIPhone; // ivar: _dynamicMaxClusterSizeIPhone
@property (nonatomic) unsigned int dynamicMinArticleSetSizeIPad; // ivar: _dynamicMinArticleSetSizeIPad
@property (nonatomic) unsigned int dynamicMinArticleSetSizeIPhone; // ivar: _dynamicMinArticleSetSizeIPhone
@property (nonatomic) BOOL enableOptimizedLayoutIPad; // ivar: _enableOptimizedLayoutIPad
@property (nonatomic) BOOL enableOptimizedLayoutIPhone; // ivar: _enableOptimizedLayoutIPhone
@property (nonatomic) BOOL enablePreTigrisArticleScoring; // ivar: _enablePreTigrisArticleScoring
@property (nonatomic) CGFloat existingSubscriptionClickValue; // ivar: _existingSubscriptionClickValue
@property (nonatomic) CGFloat existingSubscriptionClickValueBaseline; // ivar: _existingSubscriptionClickValueBaseline
@property (nonatomic) CGFloat existingSubscriptionImpressionValue; // ivar: _existingSubscriptionImpressionValue
@property (nonatomic) CGFloat existingSubscriptionImpressionValueBaseline; // ivar: _existingSubscriptionImpressionValueBaseline
@property (nonatomic) CGFloat existingSubscriptionRelatedClickValue; // ivar: _existingSubscriptionRelatedClickValue
@property (nonatomic) CGFloat existingSubscriptionRelatedClickValueBaseline; // ivar: _existingSubscriptionRelatedClickValueBaseline
@property (nonatomic) CGFloat existingSubscriptionRelatedImpressionValue; // ivar: _existingSubscriptionRelatedImpressionValue
@property (nonatomic) CGFloat existingSubscriptionRelatedImpressionValueBaseline; // ivar: _existingSubscriptionRelatedImpressionValueBaseline
@property (nonatomic) CGFloat expandedAutofavoriteClusterMaxSizeMultiplier; // ivar: _expandedAutofavoriteClusterMaxSizeMultiplier
@property (nonatomic) CGFloat expandedAutofavoriteClusterMinSizeMultiplier; // ivar: _expandedAutofavoriteClusterMinSizeMultiplier
@property (nonatomic) NSInteger extraHeadlinesToShowTheUser; // ivar: _extraHeadlinesToShowTheUser
@property (nonatomic) CGFloat featureImpressionPrior; // ivar: _featureImpressionPrior
@property (nonatomic) NSInteger flowRateDampeningSliceCount; // ivar: _flowRateDampeningSliceCount
@property (nonatomic) CGFloat flowRateDecayFactor; // ivar: _flowRateDecayFactor
@property (nonatomic) CGFloat flowRateDegreeOfDynamism; // ivar: _flowRateDegreeOfDynamism
@property (nonatomic) CGFloat flowRateMinimumDampeningFactor; // ivar: _flowRateMinimumDampeningFactor
@property (nonatomic) CGFloat flowRatePriorWeight; // ivar: _flowRatePriorWeight
@property (nonatomic) CGFloat globalScoreBump; // ivar: _globalScoreBump
@property (nonatomic) CGFloat globalScoreCoefficient; // ivar: _globalScoreCoefficient
@property (nonatomic) CGFloat globalScoreCoefficientHalfLife; // ivar: _globalScoreCoefficientHalfLife
@property (nonatomic) CGFloat globalScoreCoefficientInitialMultiplier; // ivar: _globalScoreCoefficientInitialMultiplier
@property (nonatomic) BOOL globalScoreRankingEnabled; // ivar: _globalScoreRankingEnabled
@property (nonatomic) CGFloat globalScoreStretchingFactor; // ivar: _globalScoreStretchingFactor
@property (nonatomic) CGFloat globalScoreToCtrIntercept; // ivar: _globalScoreToCtrIntercept
@property (nonatomic) CGFloat globalScoreToCtrSlope; // ivar: _globalScoreToCtrSlope
@property (nonatomic) CGFloat groupImpressionBiasCorrectionFactor; // ivar: _groupImpressionBiasCorrectionFactor
@property (nonatomic) BOOL groupingBoolParam1; // ivar: _groupingBoolParam1
@property (nonatomic) BOOL groupingBoolParam2; // ivar: _groupingBoolParam2
@property (nonatomic) CGFloat groupingDoubleParam1; // ivar: _groupingDoubleParam1
@property (nonatomic) CGFloat groupingDoubleParam2; // ivar: _groupingDoubleParam2
@property (nonatomic) CGFloat groupingDoubleParam3; // ivar: _groupingDoubleParam3
@property (nonatomic) CGFloat groupingDoubleParam4; // ivar: _groupingDoubleParam4
@property (nonatomic) CGFloat groupingDoubleParam5; // ivar: _groupingDoubleParam5
@property (nonatomic) CGFloat groupingDoubleParam6; // ivar: _groupingDoubleParam6
@property (nonatomic) unsigned int groupingIntParam1; // ivar: _groupingIntParam1
@property (nonatomic) unsigned int groupingIntParam2; // ivar: _groupingIntParam2
@property (nonatomic) unsigned int groupingIntParam3; // ivar: _groupingIntParam3
@property (nonatomic) unsigned int groupingIntParam4; // ivar: _groupingIntParam4
@property (nonatomic) CGFloat halfLifeCoefficient; // ivar: _halfLifeCoefficient
@property (nonatomic) BOOL hardAgeBeforePublisherDiversification; // ivar: _hardAgeBeforePublisherDiversification
@property (nonatomic) BOOL hasAppInFocusBaselineClickValue;
@property (nonatomic) BOOL hasAppInFocusBaselineImpressionValue;
@property (nonatomic) BOOL hasAppInFocusClickValue;
@property (nonatomic) BOOL hasAppInFocusImpressionValue;
@property (nonatomic) BOOL hasAppInstallBaselineClickValue;
@property (nonatomic) BOOL hasAppInstallBaselineImpressionValue;
@property (nonatomic) BOOL hasAppInstallClickValue;
@property (nonatomic) BOOL hasAppInstallImpressionValue;
@property (nonatomic) BOOL hasAppUsageOccurrenceDecayMultiplier;
@property (nonatomic) BOOL hasAppUsagePriorFactorExponent;
@property (nonatomic) BOOL hasAppUsageSignalWeight;
@property (nonatomic) BOOL hasAppUsageTagFavorabilityExponent;
@property (nonatomic) BOOL hasAppUsageTimeDecayMultiplier;
@property (nonatomic) BOOL hasArticleEntityScoreWeightRatioIPad;
@property (nonatomic) BOOL hasArticleEntityScoreWeightRatioIPhone;
@property (nonatomic) BOOL hasAuditionedAutoFavoritesEmitterLimit;
@property (nonatomic) BOOL hasAutoFavoriteFetchableMinImpressions;
@property (nonatomic) BOOL hasAutoFavoriteFetchableMinRate;
@property (nonatomic) BOOL hasAutoFavoriteFetchableMinRelativeRate;
@property (nonatomic) BOOL hasAutoFavoriteGroupableMinImpressions;
@property (nonatomic) BOOL hasAutoFavoriteGroupableMinRate;
@property (nonatomic) BOOL hasAutoFavoriteGroupableMinRelativeRate;
@property (nonatomic) BOOL hasAutoFavoriteMaxIdleTime;
@property (nonatomic) BOOL hasAutoFavoriteMinClicks;
@property (nonatomic) BOOL hasAutoFavoriteMinImpressions;
@property (nonatomic) BOOL hasAutoFavoriteMinObservationsExtAppUsage;
@property (nonatomic) BOOL hasAutoFavoriteMinObservationsSafari;
@property (nonatomic) BOOL hasAutoFavoriteMinRate;
@property (nonatomic) BOOL hasAutoFavoriteMinRelativeRate;
@property (nonatomic) BOOL hasAutoFavoriteMinScoreExtAppUsage;
@property (nonatomic) BOOL hasAutoFavoriteMinScoreSafari;
@property (nonatomic) BOOL hasAutoFavoritePriorFactorExponent;
@property (nonatomic) BOOL hasAutoFavoriteTagFavorabilityExponent;
@property (nonatomic) BOOL hasAutoGroupableFactor;
@property (nonatomic) BOOL hasAutoUnfavoriteFactor;
@property (nonatomic) BOOL hasAutofavoritedVoteCoefficient;
@property (nonatomic) BOOL hasAverageSafariVisitsPerDay;
@property (nonatomic) BOOL hasBaselineArticleScore;
@property (nonatomic) BOOL hasBaselineImpressionPrior;
@property (nonatomic) BOOL hasBaselineRatePrior;
@property (nonatomic) BOOL hasChannelTopicDiversificationInitialPenalty;
@property (nonatomic) BOOL hasChannelTopicDiversificationPenalty;
@property (nonatomic) BOOL hasChannelTopicDiversificationPenaltyHalfLife;
@property (nonatomic) BOOL hasCohortMembershipBaselineCtrWeight;
@property (nonatomic) BOOL hasCohortMembershipCtrCeiling;
@property (nonatomic) BOOL hasCohortMembershipCurvature;
@property (nonatomic) BOOL hasCohortMembershipCurveSteepness;
@property (nonatomic) BOOL hasCohortMembershipFavoritedBoost;
@property (nonatomic) BOOL hasCohortMembershipMinWeightedImpressions;
@property (nonatomic) BOOL hasCtrWithOneAutofavorited;
@property (nonatomic) BOOL hasCtrWithOneMuted;
@property (nonatomic) BOOL hasCtrWithOneSubscribed;
@property (nonatomic) BOOL hasCtrWithSubscribedChannel;
@property (nonatomic) BOOL hasCtrWithThreeAutofavorited;
@property (nonatomic) BOOL hasCtrWithThreeMuted;
@property (nonatomic) BOOL hasCtrWithThreeSubscribed;
@property (nonatomic) BOOL hasCtrWithTwoAutofavorited;
@property (nonatomic) BOOL hasCtrWithTwoMuted;
@property (nonatomic) BOOL hasCtrWithTwoSubscribed;
@property (nonatomic) BOOL hasCtrWithZeroAutofavorited;
@property (nonatomic) BOOL hasCtrWithZeroMuted;
@property (nonatomic) BOOL hasCtrWithZeroSubscribed;
@property (nonatomic) BOOL hasDecayFactor;
@property (nonatomic) BOOL hasDeleteOrphansFromOverflow;
@property (nonatomic) BOOL hasDemocratizationFactor;
@property (nonatomic) BOOL hasDislikeClickValue;
@property (nonatomic) BOOL hasDislikeClickValueBaseline;
@property (nonatomic) BOOL hasDislikeImpressionValue;
@property (nonatomic) BOOL hasDislikeImpressionValueBaseline;
@property (nonatomic) BOOL hasDiversificationInitialPenalty;
@property (nonatomic) BOOL hasDiversificationPenalty;
@property (nonatomic) BOOL hasDiversificationPenaltyHalfLife;
@property (nonatomic) BOOL hasDynamicMaxArticleSetSizeIPad;
@property (nonatomic) BOOL hasDynamicMaxArticleSetSizeIPhone;
@property (nonatomic) BOOL hasDynamicMaxClusterSizeIPad;
@property (nonatomic) BOOL hasDynamicMaxClusterSizeIPhone;
@property (nonatomic) BOOL hasDynamicMinArticleSetSizeIPad;
@property (nonatomic) BOOL hasDynamicMinArticleSetSizeIPhone;
@property (nonatomic) BOOL hasEnableOptimizedLayoutIPad;
@property (nonatomic) BOOL hasEnableOptimizedLayoutIPhone;
@property (nonatomic) BOOL hasEnablePreTigrisArticleScoring;
@property (nonatomic) BOOL hasExistingSubscriptionClickValue;
@property (nonatomic) BOOL hasExistingSubscriptionClickValueBaseline;
@property (nonatomic) BOOL hasExistingSubscriptionImpressionValue;
@property (nonatomic) BOOL hasExistingSubscriptionImpressionValueBaseline;
@property (nonatomic) BOOL hasExistingSubscriptionRelatedClickValue;
@property (nonatomic) BOOL hasExistingSubscriptionRelatedClickValueBaseline;
@property (nonatomic) BOOL hasExistingSubscriptionRelatedImpressionValue;
@property (nonatomic) BOOL hasExistingSubscriptionRelatedImpressionValueBaseline;
@property (nonatomic) BOOL hasExpandedAutofavoriteClusterMaxSizeMultiplier;
@property (nonatomic) BOOL hasExpandedAutofavoriteClusterMinSizeMultiplier;
@property (nonatomic) BOOL hasExtraHeadlinesToShowTheUser;
@property (nonatomic) BOOL hasFeatureImpressionPrior;
@property (nonatomic) BOOL hasFlowRateDampeningSliceCount;
@property (nonatomic) BOOL hasFlowRateDecayFactor;
@property (nonatomic) BOOL hasFlowRateDegreeOfDynamism;
@property (nonatomic) BOOL hasFlowRateMinimumDampeningFactor;
@property (nonatomic) BOOL hasFlowRatePriorWeight;
@property (nonatomic) BOOL hasGlobalScoreBump;
@property (nonatomic) BOOL hasGlobalScoreCoefficient;
@property (nonatomic) BOOL hasGlobalScoreCoefficientHalfLife;
@property (nonatomic) BOOL hasGlobalScoreCoefficientInitialMultiplier;
@property (nonatomic) BOOL hasGlobalScoreRankingEnabled;
@property (nonatomic) BOOL hasGlobalScoreStretchingFactor;
@property (nonatomic) BOOL hasGlobalScoreToCtrIntercept;
@property (nonatomic) BOOL hasGlobalScoreToCtrSlope;
@property (nonatomic) BOOL hasGroupImpressionBiasCorrectionFactor;
@property (nonatomic) BOOL hasGroupingBoolParam1;
@property (nonatomic) BOOL hasGroupingBoolParam2;
@property (nonatomic) BOOL hasGroupingDoubleParam1;
@property (nonatomic) BOOL hasGroupingDoubleParam2;
@property (nonatomic) BOOL hasGroupingDoubleParam3;
@property (nonatomic) BOOL hasGroupingDoubleParam4;
@property (nonatomic) BOOL hasGroupingDoubleParam5;
@property (nonatomic) BOOL hasGroupingDoubleParam6;
@property (nonatomic) BOOL hasGroupingIntParam1;
@property (nonatomic) BOOL hasGroupingIntParam2;
@property (nonatomic) BOOL hasGroupingIntParam3;
@property (nonatomic) BOOL hasGroupingIntParam4;
@property (nonatomic) BOOL hasHalfLifeCoefficient;
@property (nonatomic) BOOL hasHardAgeBeforePublisherDiversification;
@property (nonatomic) BOOL hasHeavyClickClickValue;
@property (nonatomic) BOOL hasHeavyClickClickValueBaseline;
@property (nonatomic) BOOL hasHeavyClickImpressionValue;
@property (nonatomic) BOOL hasHeavyClickImpressionValueBaseline;
@property (nonatomic) BOOL hasHeavyClickMinimumDuration;
@property (nonatomic) BOOL hasHeuristicOption;
@property (nonatomic) BOOL hasHeuristicOptionIPad;
@property (nonatomic) BOOL hasHeuristicOptionIPhone;
@property (nonatomic) BOOL hasHeuristicOrder;
@property (nonatomic) BOOL hasHeuristicSampleSize;
@property (nonatomic) BOOL hasHeuristicSampleSizeIPad;
@property (nonatomic) BOOL hasHeuristicSampleSizeIPhone;
@property (nonatomic) BOOL hasHourlyFlowRateAlpha;
@property (nonatomic) BOOL hasHourlyFlowRateBeta;
@property (nonatomic) BOOL hasHourlyFlowRateCeiling;
@property (nonatomic) BOOL hasHourlyFlowRateDampeningFactor;
@property (nonatomic) BOOL hasHourlyFlowRateFloor;
@property (nonatomic) BOOL hasHourlyFlowRateGamma;
@property (nonatomic) BOOL hasHourlyFlowRateMinimum;
@property (nonatomic) BOOL hasHourlyFlowRatePerSubscription;
@property (nonatomic) BOOL hasHourlyFlowRateSubscriptionCountBuffer;
@property (nonatomic) BOOL hasImportanceScalar;
@property (nonatomic) BOOL hasIndexImpressionBiasCorrectionFactor;
@property (nonatomic) BOOL hasInternalUsageSignalWeight;
@property (nonatomic) BOOL hasLikeClickValue;
@property (nonatomic) BOOL hasLikeClickValueBaseline;
@property (nonatomic) BOOL hasLikeImpressionValue;
@property (nonatomic) BOOL hasLikeImpressionValueBaseline;
@property (nonatomic) BOOL hasLowQualityArticleRatio;
@property (nonatomic) BOOL hasMaxArticleCombos;
@property (nonatomic) BOOL hasMaxArticleCombosIPad;
@property (nonatomic) BOOL hasMaxArticleCombosIPhone;
@property (nonatomic) BOOL hasMaxClusterSize;
@property (nonatomic) BOOL hasMaxClusterSizeIPad;
@property (nonatomic) BOOL hasMaxClusterSizeIPadAutoFavorite;
@property (nonatomic) BOOL hasMaxClusterSizeIPhone;
@property (nonatomic) BOOL hasMaxClusterSizeIPhoneAutoFavorite;
@property (nonatomic) BOOL hasMaxExpandedAutofavoriteGroupCandidateRatio;
@property (nonatomic) BOOL hasMaxIdealClusterSizeIPad;
@property (nonatomic) BOOL hasMaxIdealClusterSizeIPadAutoFavorite;
@property (nonatomic) BOOL hasMaxIdealClusterSizeIPhone;
@property (nonatomic) BOOL hasMaxIdealClusterSizeIPhoneAutoFavorite;
@property (nonatomic) BOOL hasMaxSuggestionsCount;
@property (nonatomic) BOOL hasMetaGroupingHighestScoringRelativeScoreMultiplier;
@property (nonatomic) BOOL hasMetaGroupingRelatednessKWeight;
@property (nonatomic) BOOL hasMetaGroupingRelatednessThreshold;
@property (nonatomic) BOOL hasMetaGroupingSubscribedTopicMultiplier;
@property (nonatomic) BOOL hasMetaGroupingTopicScoreWeight;
@property (nonatomic) BOOL hasMinClusterSize;
@property (nonatomic) BOOL hasMinClusterSizeIPad;
@property (nonatomic) BOOL hasMinClusterSizeIPadAutoFavorite;
@property (nonatomic) BOOL hasMinClusterSizeIPhone;
@property (nonatomic) BOOL hasMinClusterSizeIPhoneAutoFavorite;
@property (nonatomic) BOOL hasMinIdealClusterSizeIPad;
@property (nonatomic) BOOL hasMinIdealClusterSizeIPadAutoFavorite;
@property (nonatomic) BOOL hasMinIdealClusterSizeIPhone;
@property (nonatomic) BOOL hasMinIdealClusterSizeIPhoneAutoFavorite;
@property (nonatomic) BOOL hasMinimumGlobalScoreThreshold;
@property (nonatomic) BOOL hasMinimumGlobalScoreThresholdForSubscribedChannel;
@property (nonatomic) BOOL hasMoveAboutnessNoiseStdIPad;
@property (nonatomic) BOOL hasMoveAboutnessNoiseStdIPhone;
@property (nonatomic) BOOL hasMoveAboutnessWeightRatioIPad;
@property (nonatomic) BOOL hasMoveAboutnessWeightRatioIPhone;
@property (nonatomic) BOOL hasMoveNewOrphansCoeffIPad;
@property (nonatomic) BOOL hasMoveNewOrphansCoeffIPhone;
@property (nonatomic) BOOL hasMoveOrder;
@property (nonatomic) BOOL hasMoveSizeCoeffIPad;
@property (nonatomic) BOOL hasMoveSizeCoeffIPhone;
@property (nonatomic) BOOL hasMuteClickValue;
@property (nonatomic) BOOL hasMuteClickValueBaseline;
@property (nonatomic) BOOL hasMuteImpressionValue;
@property (nonatomic) BOOL hasMuteImpressionValueBaseline;
@property (nonatomic) BOOL hasMutedVoteCoefficient;
@property (nonatomic) BOOL hasNewsTodayWidgetClickBaselineClickValue;
@property (nonatomic) BOOL hasNewsTodayWidgetClickBaselineImpressionValue;
@property (nonatomic) BOOL hasNewsTodayWidgetClickClickValue;
@property (nonatomic) BOOL hasNewsTodayWidgetClickImpressionValue;
@property (nonatomic) BOOL hasNewsTodayWidgetPresentationBaselineClickValue;
@property (nonatomic) BOOL hasNewsTodayWidgetPresentationBaselineImpressionValue;
@property (nonatomic) BOOL hasNewsTodayWidgetPresentationClickValue;
@property (nonatomic) BOOL hasNewsTodayWidgetPresentationImpressionValue;
@property (nonatomic) BOOL hasNewsTodayWidgetVideoPlaybackBaselineClickValue;
@property (nonatomic) BOOL hasNewsTodayWidgetVideoPlaybackBaselineImpressionValue;
@property (nonatomic) BOOL hasNewsTodayWidgetVideoPlaybackClickValue;
@property (nonatomic) BOOL hasNewsTodayWidgetVideoPlaybackImpressionValue;
@property (nonatomic) BOOL hasNumEventsToDisableDefaultTopics;
@property (nonatomic) BOOL hasNumSubscriptionsToDisableDefaultTopics;
@property (nonatomic) BOOL hasOnlyConsiderBestSourceFeedsInForYouGroup;
@property (nonatomic) BOOL hasOptimizedLayoutIncrementUnitIPad;
@property (nonatomic) BOOL hasOptimizedLayoutIncrementUnitIPhone;
@property (nonatomic) BOOL hasOptimizedLayoutSizeThresholdIPad;
@property (nonatomic) BOOL hasOptimizedLayoutSizeThresholdIPhone;
@property (nonatomic) BOOL hasOptionalTagSpecificityScore;
@property (nonatomic) BOOL hasOverflownOrphansFilterCoeff;
@property (nonatomic) BOOL hasPersonalizationCoefficient;
@property (nonatomic) BOOL hasPortraitDecayRate;
@property (nonatomic) BOOL hasPortraitGlobalThreshold;
@property (nonatomic) BOOL hasPortraitImpressionIntercept;
@property (nonatomic) BOOL hasPortraitImpressionSlope;
@property (nonatomic) BOOL hasPortraitPriorFactorExponent;
@property (nonatomic) BOOL hasPortraitRateIntercept;
@property (nonatomic) BOOL hasPortraitRateSlope;
@property (nonatomic) BOOL hasPortraitTagFavorabilityExponent;
@property (nonatomic) BOOL hasPortraitUsageSignalWeight;
@property (nonatomic) BOOL hasPremiumSubscriptionActivationClickValue;
@property (nonatomic) BOOL hasPremiumSubscriptionActivationClickValueBaseline;
@property (nonatomic) BOOL hasPremiumSubscriptionActivationImpressionValue;
@property (nonatomic) BOOL hasPremiumSubscriptionActivationImpressionValueBaseline;
@property (nonatomic) BOOL hasPresentationClickValue;
@property (nonatomic) BOOL hasPresentationClickValueBaseline;
@property (nonatomic) BOOL hasPresentationImpressionValue;
@property (nonatomic) BOOL hasPresentationImpressionValueBaseline;
@property (nonatomic) BOOL hasPublisherAggregateWeight;
@property (nonatomic) BOOL hasPublisherDiversificationInitialPenalty;
@property (nonatomic) BOOL hasPublisherDiversificationPenalty;
@property (nonatomic) BOOL hasPublisherDiversificationPenaltyHalfLife;
@property (nonatomic) BOOL hasPublisherDiversityMaxArticleCount;
@property (nonatomic) BOOL hasPublisherDiversityMaxArticleFilter;
@property (nonatomic) BOOL hasPublisherDiversityMaxPublisherCount;
@property (nonatomic) BOOL hasPublisherDiversityMinArticleCount;
@property (nonatomic) BOOL hasPublisherDiversityMinPublisherCount;
@property (nonatomic) BOOL hasPublisherDiversityMinSubscriptions;
@property (nonatomic) BOOL hasPublisherTopicIdEventCountMinimum;
@property (nonatomic) BOOL hasRealTimeUserFeedbackCoefficient;
@property (nonatomic) BOOL hasRealTimeUserFeedbackPublishDateHalfLifeCoefficient;
@property (nonatomic) BOOL hasRecommendationPresentationExploreClickValue;
@property (nonatomic) BOOL hasRecommendationPresentationExploreClickValueBaseline;
@property (nonatomic) BOOL hasRecommendationPresentationExploreImpressionValue;
@property (nonatomic) BOOL hasRecommendationPresentationExploreImpressionValueBaseline;
@property (nonatomic) BOOL hasRecommendationPresentationFeedClickValue;
@property (nonatomic) BOOL hasRecommendationPresentationFeedClickValueBaseline;
@property (nonatomic) BOOL hasRecommendationPresentationFeedImpressionValue;
@property (nonatomic) BOOL hasRecommendationPresentationFeedImpressionValueBaseline;
@property (nonatomic) BOOL hasReplaceAboutness;
@property (nonatomic) BOOL hasSafariEventBlackoutSeconds;
@property (nonatomic) BOOL hasSafariHistoryBaselineClickValue;
@property (nonatomic) BOOL hasSafariHistoryBaselineImpressionValue;
@property (nonatomic) BOOL hasSafariHistoryClickValue;
@property (nonatomic) BOOL hasSafariHistoryImpressionValue;
@property (nonatomic) BOOL hasSafariOccurrenceDecayMultiplier;
@property (nonatomic) BOOL hasSafariPriorFactorExponent;
@property (nonatomic) BOOL hasSafariSignalWeight;
@property (nonatomic) BOOL hasSafariTagFavorabilityExponent;
@property (nonatomic) BOOL hasSafariTimeDecayMultiplier;
@property (nonatomic) BOOL hasSaturatedMutedCountFactor;
@property (nonatomic) BOOL hasSaturatedSubscriptionCountFactor;
@property (nonatomic) BOOL hasSavedClickValue;
@property (nonatomic) BOOL hasSavedClickValueBaseline;
@property (nonatomic) BOOL hasSavedImpressionValue;
@property (nonatomic) BOOL hasSavedImpressionValueBaseline;
@property (nonatomic) BOOL hasSearchBranchDecay;
@property (nonatomic) BOOL hasSearchBranchDecayIPad;
@property (nonatomic) BOOL hasSearchBranchDecayIPhone;
@property (nonatomic) BOOL hasSearchBranchMultiplier;
@property (nonatomic) BOOL hasSearchBranchMultiplierIPad;
@property (nonatomic) BOOL hasSearchBranchMultiplierIPhone;
@property (nonatomic) BOOL hasSearchTimeLimit;
@property (nonatomic) BOOL hasShareClickValue;
@property (nonatomic) BOOL hasShareClickValueBaseline;
@property (nonatomic) BOOL hasShareImpressionValue;
@property (nonatomic) BOOL hasShareImpressionValueBaseline;
@property (nonatomic) BOOL hasSliceTimeInterval;
@property (nonatomic) BOOL hasSubscribeClickValue;
@property (nonatomic) BOOL hasSubscribeClickValueBaseline;
@property (nonatomic) BOOL hasSubscribeImpressionValue;
@property (nonatomic) BOOL hasSubscribeImpressionValueBaseline;
@property (nonatomic) BOOL hasSubscribedChannelScoreCoefficient;
@property (nonatomic) BOOL hasSubscribedTopicsScoreCoefficient;
@property (nonatomic) BOOL hasSubscriptionRelatedClickValue;
@property (nonatomic) BOOL hasSubscriptionRelatedClickValueBaseline;
@property (nonatomic) BOOL hasSubscriptionRelatedImpressionValue;
@property (nonatomic) BOOL hasSubscriptionRelatedImpressionValueBaseline;
@property (nonatomic) BOOL hasSubscriptionVoteCoefficient;
@property (nonatomic) BOOL hasSwipeToArticleHeavyClickMinimumDuration;
@property (nonatomic) BOOL hasSwipeToArticleWeakClickMinimumDuration;
@property (nonatomic) BOOL hasTagArticleScoreCoeffIPad;
@property (nonatomic) BOOL hasTagArticleScoreCoeffIPhone;
@property (nonatomic) BOOL hasTagAutoFavoritedCoeffIPad;
@property (nonatomic) BOOL hasTagAutoFavoritedCoeffIPhone;
@property (nonatomic) BOOL hasTagFavoritedCoeff;
@property (nonatomic) BOOL hasTagFavoritedCoeffIPad;
@property (nonatomic) BOOL hasTagFavoritedCoeffIPhone;
@property (nonatomic) BOOL hasTagGroupableCoeffIPad;
@property (nonatomic) BOOL hasTagGroupableCoeffIPhone;
@property (nonatomic) BOOL hasTagOrder;
@property (nonatomic) BOOL hasTagPairsCoeffIPad;
@property (nonatomic) BOOL hasTagPairsCoeffIPhone;
@property (nonatomic) BOOL hasTagPersonalizationCoeffIPad;
@property (nonatomic) BOOL hasTagPersonalizationCoeffIPhone;
@property (nonatomic) BOOL hasTagSizeCoeffIPad;
@property (nonatomic) BOOL hasTagSizeCoeffIPhone;
@property (nonatomic) BOOL hasTagSpecificityCoeffIPad;
@property (nonatomic) BOOL hasTagSpecificityCoeffIPhone;
@property (nonatomic) BOOL hasTappedClickValue;
@property (nonatomic) BOOL hasTappedClickValueBaseline;
@property (nonatomic) BOOL hasTappedImpressionValue;
@property (nonatomic) BOOL hasTappedImpressionValueBaseline;
@property (nonatomic) BOOL hasTopicFeedAutofavoritedVoteCoefficient;
@property (nonatomic) BOOL hasTopicFeedBaselineRatePrior;
@property (nonatomic) BOOL hasTopicFeedChannelTopicDiversificationInitialPenalty;
@property (nonatomic) BOOL hasTopicFeedChannelTopicDiversificationPenalty;
@property (nonatomic) BOOL hasTopicFeedChannelTopicDiversificationPenaltyHalfLife;
@property (nonatomic) BOOL hasTopicFeedCohortMembershipCtrCeiling;
@property (nonatomic) BOOL hasTopicFeedCohortMembershipCurvature;
@property (nonatomic) BOOL hasTopicFeedCohortMembershipFavoritedBoost;
@property (nonatomic) BOOL hasTopicFeedCohortMembershipMinWeightedImpressions;
@property (nonatomic) BOOL hasTopicFeedCtrWithOneAutofavorited;
@property (nonatomic) BOOL hasTopicFeedCtrWithOneSubscribed;
@property (nonatomic) BOOL hasTopicFeedCtrWithSubscribedChannel;
@property (nonatomic) BOOL hasTopicFeedCtrWithThreeAutofavorited;
@property (nonatomic) BOOL hasTopicFeedCtrWithThreeSubscribed;
@property (nonatomic) BOOL hasTopicFeedCtrWithTwoAutofavorited;
@property (nonatomic) BOOL hasTopicFeedCtrWithTwoSubscribed;
@property (nonatomic) BOOL hasTopicFeedCtrWithZeroAutofavorited;
@property (nonatomic) BOOL hasTopicFeedCtrWithZeroSubscribed;
@property (nonatomic) BOOL hasTopicFeedDecayFactor;
@property (nonatomic) BOOL hasTopicFeedDemocratizationFactor;
@property (nonatomic) BOOL hasTopicFeedDiversificationInitialPenalty;
@property (nonatomic) BOOL hasTopicFeedDiversificationPenalty;
@property (nonatomic) BOOL hasTopicFeedDiversificationPenaltyHalfLife;
@property (nonatomic) BOOL hasTopicFeedGlobalScoreCoefficient;
@property (nonatomic) BOOL hasTopicFeedGlobalScoreCoefficientHalfLife;
@property (nonatomic) BOOL hasTopicFeedGlobalScoreCoefficientInitialMultiplier;
@property (nonatomic) BOOL hasTopicFeedGlobalScoreToCtrIntercept;
@property (nonatomic) BOOL hasTopicFeedGlobalScoreToCtrSlope;
@property (nonatomic) BOOL hasTopicFeedHalfLifeCoefficient;
@property (nonatomic) BOOL hasTopicFeedMinimumGlobalScoreThreshold;
@property (nonatomic) BOOL hasTopicFeedMinimumGlobalScoreThresholdForSubscribedChannel;
@property (nonatomic) BOOL hasTopicFeedMutedVoteCoefficient;
@property (nonatomic) BOOL hasTopicFeedPersonalizationCoefficient;
@property (nonatomic) BOOL hasTopicFeedPublisherAggregateWeight;
@property (nonatomic) BOOL hasTopicFeedRealTimeUserFeedbackCoefficient;
@property (nonatomic) BOOL hasTopicFeedRealTimeUserFeedbackPublishDateHalfLifeCoefficient;
@property (nonatomic) BOOL hasTopicFeedSubscribedChannelScoreCoefficient;
@property (nonatomic) BOOL hasTopicFeedSubscribedTopicsScoreCoefficient;
@property (nonatomic) BOOL hasTreatmentId;
@property (nonatomic) BOOL hasUGroupMinimumSubscribedChannelSourceFeedArticleRatio;
@property (nonatomic) BOOL hasUnmuteClickValue;
@property (nonatomic) BOOL hasUnmuteClickValueBaseline;
@property (nonatomic) BOOL hasUnmuteImpressionValue;
@property (nonatomic) BOOL hasUnmuteImpressionValueBaseline;
@property (nonatomic) BOOL hasUnsubscribeClickValue;
@property (nonatomic) BOOL hasUnsubscribeClickValueBaseline;
@property (nonatomic) BOOL hasUnsubscribeImpressionValue;
@property (nonatomic) BOOL hasUnsubscribeImpressionValueBaseline;
@property (nonatomic) BOOL hasUtilityWeightAlpha;
@property (nonatomic) BOOL hasUtilityWeightBeta;
@property (nonatomic) BOOL hasVideoComplete25BaselineClickValue;
@property (nonatomic) BOOL hasVideoComplete25BaselineImpressionValue;
@property (nonatomic) BOOL hasVideoComplete25ClickValue;
@property (nonatomic) BOOL hasVideoComplete25ImpressionValue;
@property (nonatomic) BOOL hasVideoComplete50BaselineClickValue;
@property (nonatomic) BOOL hasVideoComplete50BaselineImpressionValue;
@property (nonatomic) BOOL hasVideoComplete50ClickValue;
@property (nonatomic) BOOL hasVideoComplete50ImpressionValue;
@property (nonatomic) BOOL hasVideoComplete75BaselineClickValue;
@property (nonatomic) BOOL hasVideoComplete75BaselineImpressionValue;
@property (nonatomic) BOOL hasVideoComplete75ClickValue;
@property (nonatomic) BOOL hasVideoComplete75ImpressionValue;
@property (nonatomic) BOOL hasVideoCompletePlaybackBaselineClickValue;
@property (nonatomic) BOOL hasVideoCompletePlaybackBaselineImpressionValue;
@property (nonatomic) BOOL hasVideoCompletePlaybackClickValue;
@property (nonatomic) BOOL hasVideoCompletePlaybackImpressionValue;
@property (nonatomic) BOOL hasVideoInitiatePlaybackBaselineClickValue;
@property (nonatomic) BOOL hasVideoInitiatePlaybackBaselineImpressionValue;
@property (nonatomic) BOOL hasVideoInitiatePlaybackClickValue;
@property (nonatomic) BOOL hasVideoInitiatePlaybackImpressionValue;
@property (nonatomic) BOOL hasVisitClickValue;
@property (nonatomic) BOOL hasVisitClickValueBaseline;
@property (nonatomic) BOOL hasVisitImpressionValue;
@property (nonatomic) BOOL hasVisitImpressionValueBaseline;
@property (nonatomic) BOOL hasWeakClickClickValue;
@property (nonatomic) BOOL hasWeakClickClickValueBaseline;
@property (nonatomic) BOOL hasWeakClickImpressionValue;
@property (nonatomic) BOOL hasWeakClickImpressionValueBaseline;
@property (nonatomic) CGFloat heavyClickClickValue; // ivar: _heavyClickClickValue
@property (nonatomic) CGFloat heavyClickClickValueBaseline; // ivar: _heavyClickClickValueBaseline
@property (nonatomic) CGFloat heavyClickImpressionValue; // ivar: _heavyClickImpressionValue
@property (nonatomic) CGFloat heavyClickImpressionValueBaseline; // ivar: _heavyClickImpressionValueBaseline
@property (nonatomic) CGFloat heavyClickMinimumDuration; // ivar: _heavyClickMinimumDuration
@property (nonatomic) int heuristicOption; // ivar: _heuristicOption
@property (nonatomic) int heuristicOptionIPad; // ivar: _heuristicOptionIPad
@property (nonatomic) int heuristicOptionIPhone; // ivar: _heuristicOptionIPhone
@property (nonatomic) int heuristicOrder; // ivar: _heuristicOrder
@property (nonatomic) NSInteger heuristicSampleSize; // ivar: _heuristicSampleSize
@property (nonatomic) NSInteger heuristicSampleSizeIPad; // ivar: _heuristicSampleSizeIPad
@property (nonatomic) NSInteger heuristicSampleSizeIPhone; // ivar: _heuristicSampleSizeIPhone
@property (nonatomic) CGFloat hourlyFlowRateAlpha; // ivar: _hourlyFlowRateAlpha
@property (nonatomic) CGFloat hourlyFlowRateBeta; // ivar: _hourlyFlowRateBeta
@property (nonatomic) CGFloat hourlyFlowRateCeiling; // ivar: _hourlyFlowRateCeiling
@property (nonatomic) CGFloat hourlyFlowRateDampeningFactor; // ivar: _hourlyFlowRateDampeningFactor
@property (nonatomic) CGFloat hourlyFlowRateFloor; // ivar: _hourlyFlowRateFloor
@property (nonatomic) CGFloat hourlyFlowRateGamma; // ivar: _hourlyFlowRateGamma
@property (nonatomic) CGFloat hourlyFlowRateMinimum; // ivar: _hourlyFlowRateMinimum
@property (nonatomic) CGFloat hourlyFlowRatePerSubscription; // ivar: _hourlyFlowRatePerSubscription
@property (nonatomic) CGFloat hourlyFlowRateSubscriptionCountBuffer; // ivar: _hourlyFlowRateSubscriptionCountBuffer
@property (nonatomic) CGFloat importanceScalar; // ivar: _importanceScalar
@property (nonatomic) CGFloat indexImpressionBiasCorrectionFactor; // ivar: _indexImpressionBiasCorrectionFactor
@property (nonatomic) CGFloat internalUsageSignalWeight; // ivar: _internalUsageSignalWeight
@property (nonatomic) CGFloat likeClickValue; // ivar: _likeClickValue
@property (nonatomic) CGFloat likeClickValueBaseline; // ivar: _likeClickValueBaseline
@property (nonatomic) CGFloat likeImpressionValue; // ivar: _likeImpressionValue
@property (nonatomic) CGFloat likeImpressionValueBaseline; // ivar: _likeImpressionValueBaseline
@property (nonatomic) CGFloat lowQualityArticleRatio; // ivar: _lowQualityArticleRatio
@property (nonatomic) NSInteger maxArticleCombos; // ivar: _maxArticleCombos
@property (nonatomic) NSInteger maxArticleCombosIPad; // ivar: _maxArticleCombosIPad
@property (nonatomic) NSInteger maxArticleCombosIPhone; // ivar: _maxArticleCombosIPhone
@property (nonatomic) NSInteger maxClusterSize; // ivar: _maxClusterSize
@property (nonatomic) unsigned int maxClusterSizeIPad; // ivar: _maxClusterSizeIPad
@property (nonatomic) unsigned int maxClusterSizeIPadAutoFavorite; // ivar: _maxClusterSizeIPadAutoFavorite
@property (nonatomic) unsigned int maxClusterSizeIPhone; // ivar: _maxClusterSizeIPhone
@property (nonatomic) unsigned int maxClusterSizeIPhoneAutoFavorite; // ivar: _maxClusterSizeIPhoneAutoFavorite
@property (nonatomic) CGFloat maxExpandedAutofavoriteGroupCandidateRatio; // ivar: _maxExpandedAutofavoriteGroupCandidateRatio
@property (nonatomic) unsigned int maxIdealClusterSizeIPad; // ivar: _maxIdealClusterSizeIPad
@property (nonatomic) unsigned int maxIdealClusterSizeIPadAutoFavorite; // ivar: _maxIdealClusterSizeIPadAutoFavorite
@property (nonatomic) unsigned int maxIdealClusterSizeIPhone; // ivar: _maxIdealClusterSizeIPhone
@property (nonatomic) unsigned int maxIdealClusterSizeIPhoneAutoFavorite; // ivar: _maxIdealClusterSizeIPhoneAutoFavorite
@property (nonatomic) NSInteger maxSuggestionsCount; // ivar: _maxSuggestionsCount
@property (nonatomic) CGFloat metaGroupingHighestScoringRelativeScoreMultiplier; // ivar: _metaGroupingHighestScoringRelativeScoreMultiplier
@property (nonatomic) CGFloat metaGroupingRelatednessKWeight; // ivar: _metaGroupingRelatednessKWeight
@property (nonatomic) CGFloat metaGroupingRelatednessThreshold; // ivar: _metaGroupingRelatednessThreshold
@property (nonatomic) CGFloat metaGroupingSubscribedTopicMultiplier; // ivar: _metaGroupingSubscribedTopicMultiplier
@property (nonatomic) CGFloat metaGroupingTopicScoreWeight; // ivar: _metaGroupingTopicScoreWeight
@property (nonatomic) NSInteger minClusterSize; // ivar: _minClusterSize
@property (nonatomic) unsigned int minClusterSizeIPad; // ivar: _minClusterSizeIPad
@property (nonatomic) unsigned int minClusterSizeIPadAutoFavorite; // ivar: _minClusterSizeIPadAutoFavorite
@property (nonatomic) unsigned int minClusterSizeIPhone; // ivar: _minClusterSizeIPhone
@property (nonatomic) unsigned int minClusterSizeIPhoneAutoFavorite; // ivar: _minClusterSizeIPhoneAutoFavorite
@property (nonatomic) unsigned int minIdealClusterSizeIPad; // ivar: _minIdealClusterSizeIPad
@property (nonatomic) unsigned int minIdealClusterSizeIPadAutoFavorite; // ivar: _minIdealClusterSizeIPadAutoFavorite
@property (nonatomic) unsigned int minIdealClusterSizeIPhone; // ivar: _minIdealClusterSizeIPhone
@property (nonatomic) unsigned int minIdealClusterSizeIPhoneAutoFavorite; // ivar: _minIdealClusterSizeIPhoneAutoFavorite
@property (nonatomic) CGFloat minimumGlobalScoreThreshold; // ivar: _minimumGlobalScoreThreshold
@property (nonatomic) CGFloat minimumGlobalScoreThresholdForSubscribedChannel; // ivar: _minimumGlobalScoreThresholdForSubscribedChannel
@property (nonatomic) CGFloat moveAboutnessNoiseStdIPad; // ivar: _moveAboutnessNoiseStdIPad
@property (nonatomic) CGFloat moveAboutnessNoiseStdIPhone; // ivar: _moveAboutnessNoiseStdIPhone
@property (nonatomic) CGFloat moveAboutnessWeightRatioIPad; // ivar: _moveAboutnessWeightRatioIPad
@property (nonatomic) CGFloat moveAboutnessWeightRatioIPhone; // ivar: _moveAboutnessWeightRatioIPhone
@property (nonatomic) CGFloat moveNewOrphansCoeffIPad; // ivar: _moveNewOrphansCoeffIPad
@property (nonatomic) CGFloat moveNewOrphansCoeffIPhone; // ivar: _moveNewOrphansCoeffIPhone
@property (nonatomic) int moveOrder; // ivar: _moveOrder
@property (nonatomic) CGFloat moveSizeCoeffIPad; // ivar: _moveSizeCoeffIPad
@property (nonatomic) CGFloat moveSizeCoeffIPhone; // ivar: _moveSizeCoeffIPhone
@property (nonatomic) CGFloat muteClickValue; // ivar: _muteClickValue
@property (nonatomic) CGFloat muteClickValueBaseline; // ivar: _muteClickValueBaseline
@property (nonatomic) CGFloat muteImpressionValue; // ivar: _muteImpressionValue
@property (nonatomic) CGFloat muteImpressionValueBaseline; // ivar: _muteImpressionValueBaseline
@property (nonatomic) CGFloat mutedVoteCoefficient; // ivar: _mutedVoteCoefficient
@property (nonatomic) CGFloat newsTodayWidgetClickBaselineClickValue; // ivar: _newsTodayWidgetClickBaselineClickValue
@property (nonatomic) CGFloat newsTodayWidgetClickBaselineImpressionValue; // ivar: _newsTodayWidgetClickBaselineImpressionValue
@property (nonatomic) CGFloat newsTodayWidgetClickClickValue; // ivar: _newsTodayWidgetClickClickValue
@property (nonatomic) CGFloat newsTodayWidgetClickImpressionValue; // ivar: _newsTodayWidgetClickImpressionValue
@property (nonatomic) CGFloat newsTodayWidgetPresentationBaselineClickValue; // ivar: _newsTodayWidgetPresentationBaselineClickValue
@property (nonatomic) CGFloat newsTodayWidgetPresentationBaselineImpressionValue; // ivar: _newsTodayWidgetPresentationBaselineImpressionValue
@property (nonatomic) CGFloat newsTodayWidgetPresentationClickValue; // ivar: _newsTodayWidgetPresentationClickValue
@property (nonatomic) CGFloat newsTodayWidgetPresentationImpressionValue; // ivar: _newsTodayWidgetPresentationImpressionValue
@property (nonatomic) CGFloat newsTodayWidgetVideoPlaybackBaselineClickValue; // ivar: _newsTodayWidgetVideoPlaybackBaselineClickValue
@property (nonatomic) CGFloat newsTodayWidgetVideoPlaybackBaselineImpressionValue; // ivar: _newsTodayWidgetVideoPlaybackBaselineImpressionValue
@property (nonatomic) CGFloat newsTodayWidgetVideoPlaybackClickValue; // ivar: _newsTodayWidgetVideoPlaybackClickValue
@property (nonatomic) CGFloat newsTodayWidgetVideoPlaybackImpressionValue; // ivar: _newsTodayWidgetVideoPlaybackImpressionValue
@property (nonatomic) NSInteger numEventsToDisableDefaultTopics; // ivar: _numEventsToDisableDefaultTopics
@property (nonatomic) NSInteger numSubscriptionsToDisableDefaultTopics; // ivar: _numSubscriptionsToDisableDefaultTopics
@property (nonatomic) BOOL onlyConsiderBestSourceFeedsInForYouGroup; // ivar: _onlyConsiderBestSourceFeedsInForYouGroup
@property (nonatomic) unsigned int optimizedLayoutIncrementUnitIPad; // ivar: _optimizedLayoutIncrementUnitIPad
@property (nonatomic) unsigned int optimizedLayoutIncrementUnitIPhone; // ivar: _optimizedLayoutIncrementUnitIPhone
@property (nonatomic) unsigned int optimizedLayoutSizeThresholdIPad; // ivar: _optimizedLayoutSizeThresholdIPad
@property (nonatomic) unsigned int optimizedLayoutSizeThresholdIPhone; // ivar: _optimizedLayoutSizeThresholdIPhone
@property (nonatomic) CGFloat optionalTagSpecificityScore; // ivar: _optionalTagSpecificityScore
@property (nonatomic) CGFloat overflownOrphansFilterCoeff; // ivar: _overflownOrphansFilterCoeff
@property (nonatomic) CGFloat personalizationCoefficient; // ivar: _personalizationCoefficient
@property (nonatomic) CGFloat portraitDecayRate; // ivar: _portraitDecayRate
@property (nonatomic) CGFloat portraitGlobalThreshold; // ivar: _portraitGlobalThreshold
@property (nonatomic) CGFloat portraitImpressionIntercept; // ivar: _portraitImpressionIntercept
@property (nonatomic) CGFloat portraitImpressionSlope; // ivar: _portraitImpressionSlope
@property (nonatomic) CGFloat portraitPriorFactorExponent; // ivar: _portraitPriorFactorExponent
@property (nonatomic) CGFloat portraitRateIntercept; // ivar: _portraitRateIntercept
@property (nonatomic) CGFloat portraitRateSlope; // ivar: _portraitRateSlope
@property (nonatomic) CGFloat portraitTagFavorabilityExponent; // ivar: _portraitTagFavorabilityExponent
@property (retain, nonatomic) NSMutableArray *portraitTagThresholds; // ivar: _portraitTagThresholds
@property (nonatomic) CGFloat portraitUsageSignalWeight; // ivar: _portraitUsageSignalWeight
@property (nonatomic) CGFloat premiumSubscriptionActivationClickValue; // ivar: _premiumSubscriptionActivationClickValue
@property (nonatomic) CGFloat premiumSubscriptionActivationClickValueBaseline; // ivar: _premiumSubscriptionActivationClickValueBaseline
@property (nonatomic) CGFloat premiumSubscriptionActivationImpressionValue; // ivar: _premiumSubscriptionActivationImpressionValue
@property (nonatomic) CGFloat premiumSubscriptionActivationImpressionValueBaseline; // ivar: _premiumSubscriptionActivationImpressionValueBaseline
@property (nonatomic) CGFloat presentationClickValue; // ivar: _presentationClickValue
@property (nonatomic) CGFloat presentationClickValueBaseline; // ivar: _presentationClickValueBaseline
@property (nonatomic) CGFloat presentationImpressionValue; // ivar: _presentationImpressionValue
@property (nonatomic) CGFloat presentationImpressionValueBaseline; // ivar: _presentationImpressionValueBaseline
@property (nonatomic) CGFloat publisherAggregateWeight; // ivar: _publisherAggregateWeight
@property (nonatomic) CGFloat publisherDiversificationInitialPenalty; // ivar: _publisherDiversificationInitialPenalty
@property (nonatomic) CGFloat publisherDiversificationPenalty; // ivar: _publisherDiversificationPenalty
@property (nonatomic) CGFloat publisherDiversificationPenaltyHalfLife; // ivar: _publisherDiversificationPenaltyHalfLife
@property (nonatomic) CGFloat publisherDiversityMaxArticleCount; // ivar: _publisherDiversityMaxArticleCount
@property (nonatomic) CGFloat publisherDiversityMaxArticleFilter; // ivar: _publisherDiversityMaxArticleFilter
@property (nonatomic) unsigned int publisherDiversityMaxPublisherCount; // ivar: _publisherDiversityMaxPublisherCount
@property (nonatomic) CGFloat publisherDiversityMinArticleCount; // ivar: _publisherDiversityMinArticleCount
@property (nonatomic) unsigned int publisherDiversityMinPublisherCount; // ivar: _publisherDiversityMinPublisherCount
@property (nonatomic) CGFloat publisherDiversityMinSubscriptions; // ivar: _publisherDiversityMinSubscriptions
@property (nonatomic) NSInteger publisherTopicIdEventCountMinimum; // ivar: _publisherTopicIdEventCountMinimum
@property (nonatomic) CGFloat realTimeUserFeedbackCoefficient; // ivar: _realTimeUserFeedbackCoefficient
@property (nonatomic) CGFloat realTimeUserFeedbackPublishDateHalfLifeCoefficient; // ivar: _realTimeUserFeedbackPublishDateHalfLifeCoefficient
@property (retain, nonatomic) NSMutableArray *realTimeUserFeedbackTagCoefficients; // ivar: _realTimeUserFeedbackTagCoefficients
@property (nonatomic) CGFloat recommendationPresentationExploreClickValue; // ivar: _recommendationPresentationExploreClickValue
@property (nonatomic) CGFloat recommendationPresentationExploreClickValueBaseline; // ivar: _recommendationPresentationExploreClickValueBaseline
@property (nonatomic) CGFloat recommendationPresentationExploreImpressionValue; // ivar: _recommendationPresentationExploreImpressionValue
@property (nonatomic) CGFloat recommendationPresentationExploreImpressionValueBaseline; // ivar: _recommendationPresentationExploreImpressionValueBaseline
@property (nonatomic) CGFloat recommendationPresentationFeedClickValue; // ivar: _recommendationPresentationFeedClickValue
@property (nonatomic) CGFloat recommendationPresentationFeedClickValueBaseline; // ivar: _recommendationPresentationFeedClickValueBaseline
@property (nonatomic) CGFloat recommendationPresentationFeedImpressionValue; // ivar: _recommendationPresentationFeedImpressionValue
@property (nonatomic) CGFloat recommendationPresentationFeedImpressionValueBaseline; // ivar: _recommendationPresentationFeedImpressionValueBaseline
@property (nonatomic) BOOL replaceAboutness; // ivar: _replaceAboutness
@property (nonatomic) CGFloat safariEventBlackoutSeconds; // ivar: _safariEventBlackoutSeconds
@property (nonatomic) CGFloat safariHistoryBaselineClickValue; // ivar: _safariHistoryBaselineClickValue
@property (nonatomic) CGFloat safariHistoryBaselineImpressionValue; // ivar: _safariHistoryBaselineImpressionValue
@property (nonatomic) CGFloat safariHistoryClickValue; // ivar: _safariHistoryClickValue
@property (nonatomic) CGFloat safariHistoryImpressionValue; // ivar: _safariHistoryImpressionValue
@property (nonatomic) CGFloat safariOccurrenceDecayMultiplier; // ivar: _safariOccurrenceDecayMultiplier
@property (nonatomic) CGFloat safariPriorFactorExponent; // ivar: _safariPriorFactorExponent
@property (nonatomic) CGFloat safariSignalWeight; // ivar: _safariSignalWeight
@property (nonatomic) CGFloat safariTagFavorabilityExponent; // ivar: _safariTagFavorabilityExponent
@property (nonatomic) CGFloat safariTimeDecayMultiplier; // ivar: _safariTimeDecayMultiplier
@property (nonatomic) CGFloat saturatedMutedCountFactor; // ivar: _saturatedMutedCountFactor
@property (nonatomic) CGFloat saturatedSubscriptionCountFactor; // ivar: _saturatedSubscriptionCountFactor
@property (nonatomic) CGFloat savedClickValue; // ivar: _savedClickValue
@property (nonatomic) CGFloat savedClickValueBaseline; // ivar: _savedClickValueBaseline
@property (nonatomic) CGFloat savedImpressionValue; // ivar: _savedImpressionValue
@property (nonatomic) CGFloat savedImpressionValueBaseline; // ivar: _savedImpressionValueBaseline
@property (nonatomic) CGFloat searchBranchDecay; // ivar: _searchBranchDecay
@property (nonatomic) CGFloat searchBranchDecayIPad; // ivar: _searchBranchDecayIPad
@property (nonatomic) CGFloat searchBranchDecayIPhone; // ivar: _searchBranchDecayIPhone
@property (nonatomic) NSInteger searchBranchMultiplier; // ivar: _searchBranchMultiplier
@property (nonatomic) NSInteger searchBranchMultiplierIPad; // ivar: _searchBranchMultiplierIPad
@property (nonatomic) NSInteger searchBranchMultiplierIPhone; // ivar: _searchBranchMultiplierIPhone
@property (nonatomic) CGFloat searchTimeLimit; // ivar: _searchTimeLimit
@property (nonatomic) CGFloat shareClickValue; // ivar: _shareClickValue
@property (nonatomic) CGFloat shareClickValueBaseline; // ivar: _shareClickValueBaseline
@property (nonatomic) CGFloat shareImpressionValue; // ivar: _shareImpressionValue
@property (nonatomic) CGFloat shareImpressionValueBaseline; // ivar: _shareImpressionValueBaseline
@property (nonatomic) NSInteger sliceTimeInterval; // ivar: _sliceTimeInterval
@property (nonatomic) CGFloat subscribeClickValue; // ivar: _subscribeClickValue
@property (nonatomic) CGFloat subscribeClickValueBaseline; // ivar: _subscribeClickValueBaseline
@property (nonatomic) CGFloat subscribeImpressionValue; // ivar: _subscribeImpressionValue
@property (nonatomic) CGFloat subscribeImpressionValueBaseline; // ivar: _subscribeImpressionValueBaseline
@property (nonatomic) CGFloat subscribedChannelScoreCoefficient; // ivar: _subscribedChannelScoreCoefficient
@property (nonatomic) CGFloat subscribedTopicsScoreCoefficient; // ivar: _subscribedTopicsScoreCoefficient
@property (nonatomic) CGFloat subscriptionRelatedClickValue; // ivar: _subscriptionRelatedClickValue
@property (nonatomic) CGFloat subscriptionRelatedClickValueBaseline; // ivar: _subscriptionRelatedClickValueBaseline
@property (nonatomic) CGFloat subscriptionRelatedImpressionValue; // ivar: _subscriptionRelatedImpressionValue
@property (nonatomic) CGFloat subscriptionRelatedImpressionValueBaseline; // ivar: _subscriptionRelatedImpressionValueBaseline
@property (nonatomic) CGFloat subscriptionVoteCoefficient; // ivar: _subscriptionVoteCoefficient
@property (nonatomic) CGFloat swipeToArticleHeavyClickMinimumDuration; // ivar: _swipeToArticleHeavyClickMinimumDuration
@property (nonatomic) CGFloat swipeToArticleWeakClickMinimumDuration; // ivar: _swipeToArticleWeakClickMinimumDuration
@property (nonatomic) CGFloat tagArticleScoreCoeffIPad; // ivar: _tagArticleScoreCoeffIPad
@property (nonatomic) CGFloat tagArticleScoreCoeffIPhone; // ivar: _tagArticleScoreCoeffIPhone
@property (nonatomic) CGFloat tagAutoFavoritedCoeffIPad; // ivar: _tagAutoFavoritedCoeffIPad
@property (nonatomic) CGFloat tagAutoFavoritedCoeffIPhone; // ivar: _tagAutoFavoritedCoeffIPhone
@property (nonatomic) CGFloat tagFavoritedCoeff; // ivar: _tagFavoritedCoeff
@property (nonatomic) CGFloat tagFavoritedCoeffIPad; // ivar: _tagFavoritedCoeffIPad
@property (nonatomic) CGFloat tagFavoritedCoeffIPhone; // ivar: _tagFavoritedCoeffIPhone
@property (nonatomic) CGFloat tagGroupableCoeffIPad; // ivar: _tagGroupableCoeffIPad
@property (nonatomic) CGFloat tagGroupableCoeffIPhone; // ivar: _tagGroupableCoeffIPhone
@property (nonatomic) int tagOrder; // ivar: _tagOrder
@property (nonatomic) CGFloat tagPairsCoeffIPad; // ivar: _tagPairsCoeffIPad
@property (nonatomic) CGFloat tagPairsCoeffIPhone; // ivar: _tagPairsCoeffIPhone
@property (nonatomic) CGFloat tagPersonalizationCoeffIPad; // ivar: _tagPersonalizationCoeffIPad
@property (nonatomic) CGFloat tagPersonalizationCoeffIPhone; // ivar: _tagPersonalizationCoeffIPhone
@property (nonatomic) CGFloat tagSizeCoeffIPad; // ivar: _tagSizeCoeffIPad
@property (nonatomic) CGFloat tagSizeCoeffIPhone; // ivar: _tagSizeCoeffIPhone
@property (nonatomic) CGFloat tagSpecificityCoeffIPad; // ivar: _tagSpecificityCoeffIPad
@property (nonatomic) CGFloat tagSpecificityCoeffIPhone; // ivar: _tagSpecificityCoeffIPhone
@property (nonatomic) CGFloat tappedClickValue; // ivar: _tappedClickValue
@property (nonatomic) CGFloat tappedClickValueBaseline; // ivar: _tappedClickValueBaseline
@property (nonatomic) CGFloat tappedImpressionValue; // ivar: _tappedImpressionValue
@property (nonatomic) CGFloat tappedImpressionValueBaseline; // ivar: _tappedImpressionValueBaseline
@property (nonatomic) CGFloat topicFeedAutofavoritedVoteCoefficient; // ivar: _topicFeedAutofavoritedVoteCoefficient
@property (nonatomic) CGFloat topicFeedBaselineRatePrior; // ivar: _topicFeedBaselineRatePrior
@property (nonatomic) CGFloat topicFeedChannelTopicDiversificationInitialPenalty; // ivar: _topicFeedChannelTopicDiversificationInitialPenalty
@property (nonatomic) CGFloat topicFeedChannelTopicDiversificationPenalty; // ivar: _topicFeedChannelTopicDiversificationPenalty
@property (nonatomic) CGFloat topicFeedChannelTopicDiversificationPenaltyHalfLife; // ivar: _topicFeedChannelTopicDiversificationPenaltyHalfLife
@property (nonatomic) CGFloat topicFeedCohortMembershipCtrCeiling; // ivar: _topicFeedCohortMembershipCtrCeiling
@property (nonatomic) CGFloat topicFeedCohortMembershipCurvature; // ivar: _topicFeedCohortMembershipCurvature
@property (nonatomic) CGFloat topicFeedCohortMembershipFavoritedBoost; // ivar: _topicFeedCohortMembershipFavoritedBoost
@property (nonatomic) CGFloat topicFeedCohortMembershipMinWeightedImpressions; // ivar: _topicFeedCohortMembershipMinWeightedImpressions
@property (nonatomic) CGFloat topicFeedCtrWithOneAutofavorited; // ivar: _topicFeedCtrWithOneAutofavorited
@property (nonatomic) CGFloat topicFeedCtrWithOneSubscribed; // ivar: _topicFeedCtrWithOneSubscribed
@property (nonatomic) CGFloat topicFeedCtrWithSubscribedChannel; // ivar: _topicFeedCtrWithSubscribedChannel
@property (nonatomic) CGFloat topicFeedCtrWithThreeAutofavorited; // ivar: _topicFeedCtrWithThreeAutofavorited
@property (nonatomic) CGFloat topicFeedCtrWithThreeSubscribed; // ivar: _topicFeedCtrWithThreeSubscribed
@property (nonatomic) CGFloat topicFeedCtrWithTwoAutofavorited; // ivar: _topicFeedCtrWithTwoAutofavorited
@property (nonatomic) CGFloat topicFeedCtrWithTwoSubscribed; // ivar: _topicFeedCtrWithTwoSubscribed
@property (nonatomic) CGFloat topicFeedCtrWithZeroAutofavorited; // ivar: _topicFeedCtrWithZeroAutofavorited
@property (nonatomic) CGFloat topicFeedCtrWithZeroSubscribed; // ivar: _topicFeedCtrWithZeroSubscribed
@property (nonatomic) CGFloat topicFeedDecayFactor; // ivar: _topicFeedDecayFactor
@property (nonatomic) CGFloat topicFeedDemocratizationFactor; // ivar: _topicFeedDemocratizationFactor
@property (nonatomic) CGFloat topicFeedDiversificationInitialPenalty; // ivar: _topicFeedDiversificationInitialPenalty
@property (nonatomic) CGFloat topicFeedDiversificationPenalty; // ivar: _topicFeedDiversificationPenalty
@property (nonatomic) CGFloat topicFeedDiversificationPenaltyHalfLife; // ivar: _topicFeedDiversificationPenaltyHalfLife
@property (nonatomic) CGFloat topicFeedGlobalScoreCoefficient; // ivar: _topicFeedGlobalScoreCoefficient
@property (nonatomic) CGFloat topicFeedGlobalScoreCoefficientHalfLife; // ivar: _topicFeedGlobalScoreCoefficientHalfLife
@property (nonatomic) CGFloat topicFeedGlobalScoreCoefficientInitialMultiplier; // ivar: _topicFeedGlobalScoreCoefficientInitialMultiplier
@property (nonatomic) CGFloat topicFeedGlobalScoreToCtrIntercept; // ivar: _topicFeedGlobalScoreToCtrIntercept
@property (nonatomic) CGFloat topicFeedGlobalScoreToCtrSlope; // ivar: _topicFeedGlobalScoreToCtrSlope
@property (nonatomic) CGFloat topicFeedHalfLifeCoefficient; // ivar: _topicFeedHalfLifeCoefficient
@property (nonatomic) CGFloat topicFeedMinimumGlobalScoreThreshold; // ivar: _topicFeedMinimumGlobalScoreThreshold
@property (nonatomic) CGFloat topicFeedMinimumGlobalScoreThresholdForSubscribedChannel; // ivar: _topicFeedMinimumGlobalScoreThresholdForSubscribedChannel
@property (nonatomic) CGFloat topicFeedMutedVoteCoefficient; // ivar: _topicFeedMutedVoteCoefficient
@property (nonatomic) CGFloat topicFeedPersonalizationCoefficient; // ivar: _topicFeedPersonalizationCoefficient
@property (nonatomic) CGFloat topicFeedPublisherAggregateWeight; // ivar: _topicFeedPublisherAggregateWeight
@property (nonatomic) CGFloat topicFeedRealTimeUserFeedbackCoefficient; // ivar: _topicFeedRealTimeUserFeedbackCoefficient
@property (nonatomic) CGFloat topicFeedRealTimeUserFeedbackPublishDateHalfLifeCoefficient; // ivar: _topicFeedRealTimeUserFeedbackPublishDateHalfLifeCoefficient
@property (nonatomic) CGFloat topicFeedSubscribedChannelScoreCoefficient; // ivar: _topicFeedSubscribedChannelScoreCoefficient
@property (nonatomic) CGFloat topicFeedSubscribedTopicsScoreCoefficient; // ivar: _topicFeedSubscribedTopicsScoreCoefficient
@property (nonatomic) NSInteger treatmentId; // ivar: _treatmentId
@property (nonatomic) CGFloat uGroupMinimumSubscribedChannelSourceFeedArticleRatio; // ivar: _uGroupMinimumSubscribedChannelSourceFeedArticleRatio
@property (nonatomic) CGFloat unmuteClickValue; // ivar: _unmuteClickValue
@property (nonatomic) CGFloat unmuteClickValueBaseline; // ivar: _unmuteClickValueBaseline
@property (nonatomic) CGFloat unmuteImpressionValue; // ivar: _unmuteImpressionValue
@property (nonatomic) CGFloat unmuteImpressionValueBaseline; // ivar: _unmuteImpressionValueBaseline
@property (nonatomic) CGFloat unsubscribeClickValue; // ivar: _unsubscribeClickValue
@property (nonatomic) CGFloat unsubscribeClickValueBaseline; // ivar: _unsubscribeClickValueBaseline
@property (nonatomic) CGFloat unsubscribeImpressionValue; // ivar: _unsubscribeImpressionValue
@property (nonatomic) CGFloat unsubscribeImpressionValueBaseline; // ivar: _unsubscribeImpressionValueBaseline
@property (nonatomic) CGFloat utilityWeightAlpha; // ivar: _utilityWeightAlpha
@property (nonatomic) CGFloat utilityWeightBeta; // ivar: _utilityWeightBeta
@property (nonatomic) CGFloat videoComplete25BaselineClickValue; // ivar: _videoComplete25BaselineClickValue
@property (nonatomic) CGFloat videoComplete25BaselineImpressionValue; // ivar: _videoComplete25BaselineImpressionValue
@property (nonatomic) CGFloat videoComplete25ClickValue; // ivar: _videoComplete25ClickValue
@property (nonatomic) CGFloat videoComplete25ImpressionValue; // ivar: _videoComplete25ImpressionValue
@property (nonatomic) CGFloat videoComplete50BaselineClickValue; // ivar: _videoComplete50BaselineClickValue
@property (nonatomic) CGFloat videoComplete50BaselineImpressionValue; // ivar: _videoComplete50BaselineImpressionValue
@property (nonatomic) CGFloat videoComplete50ClickValue; // ivar: _videoComplete50ClickValue
@property (nonatomic) CGFloat videoComplete50ImpressionValue; // ivar: _videoComplete50ImpressionValue
@property (nonatomic) CGFloat videoComplete75BaselineClickValue; // ivar: _videoComplete75BaselineClickValue
@property (nonatomic) CGFloat videoComplete75BaselineImpressionValue; // ivar: _videoComplete75BaselineImpressionValue
@property (nonatomic) CGFloat videoComplete75ClickValue; // ivar: _videoComplete75ClickValue
@property (nonatomic) CGFloat videoComplete75ImpressionValue; // ivar: _videoComplete75ImpressionValue
@property (nonatomic) CGFloat videoCompletePlaybackBaselineClickValue; // ivar: _videoCompletePlaybackBaselineClickValue
@property (nonatomic) CGFloat videoCompletePlaybackBaselineImpressionValue; // ivar: _videoCompletePlaybackBaselineImpressionValue
@property (nonatomic) CGFloat videoCompletePlaybackClickValue; // ivar: _videoCompletePlaybackClickValue
@property (nonatomic) CGFloat videoCompletePlaybackImpressionValue; // ivar: _videoCompletePlaybackImpressionValue
@property (nonatomic) CGFloat videoInitiatePlaybackBaselineClickValue; // ivar: _videoInitiatePlaybackBaselineClickValue
@property (nonatomic) CGFloat videoInitiatePlaybackBaselineImpressionValue; // ivar: _videoInitiatePlaybackBaselineImpressionValue
@property (nonatomic) CGFloat videoInitiatePlaybackClickValue; // ivar: _videoInitiatePlaybackClickValue
@property (nonatomic) CGFloat videoInitiatePlaybackImpressionValue; // ivar: _videoInitiatePlaybackImpressionValue
@property (nonatomic) CGFloat visitClickValue; // ivar: _visitClickValue
@property (nonatomic) CGFloat visitClickValueBaseline; // ivar: _visitClickValueBaseline
@property (nonatomic) CGFloat visitImpressionValue; // ivar: _visitImpressionValue
@property (nonatomic) CGFloat visitImpressionValueBaseline; // ivar: _visitImpressionValueBaseline
@property (nonatomic) CGFloat weakClickClickValue; // ivar: _weakClickClickValue
@property (nonatomic) CGFloat weakClickClickValueBaseline; // ivar: _weakClickClickValueBaseline
@property (nonatomic) CGFloat weakClickImpressionValue; // ivar: _weakClickImpressionValue
@property (nonatomic) CGFloat weakClickImpressionValueBaseline; // ivar: _weakClickImpressionValueBaseline


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)portraitTagThresholdsAtIndex:(NSUInteger)arg0 ;
-(id)realTimeUserFeedbackTagCoefficientsAtIndex:(NSUInteger)arg0 ;
-(void)addPortraitTagThresholds:(id)arg0 ;
-(void)addRealTimeUserFeedbackTagCoefficients:(id)arg0 ;
-(void)clearPortraitTagThresholds;
-(void)clearRealTimeUserFeedbackTagCoefficients;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif