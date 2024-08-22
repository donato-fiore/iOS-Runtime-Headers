// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCPERSONALIZATIONSCORINGCONFIG_H
#define FCPERSONALIZATIONSCORINGCONFIG_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FCPersonalizationCohortConfig.h"
#import "FCPersonalizationLowFlowEstimationConfig.h"

@interface FCPersonalizationScoringConfig : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat articleEmbeddingScoreCoefficient; // ivar: _articleEmbeddingScoreCoefficient
@property (nonatomic) CGFloat articleEmbeddingScoreDampenerWeight; // ivar: _articleEmbeddingScoreDampenerWeight
@property (nonatomic) CGFloat articleLengthAggregateWeight; // ivar: _articleLengthAggregateWeight
@property (nonatomic) CGFloat articleReadPenalty; // ivar: _articleReadPenalty
@property (nonatomic) CGFloat audioMultiplierForFreeUsers; // ivar: _audioMultiplierForFreeUsers
@property (nonatomic) CGFloat audioMultiplierForPaidUsers; // ivar: _audioMultiplierForPaidUsers
@property (nonatomic) CGFloat audioMultiplierForTrialUsers; // ivar: _audioMultiplierForTrialUsers
@property (nonatomic) CGFloat autofavoritedVoteCoefficient; // ivar: _autofavoritedVoteCoefficient
@property (nonatomic) CGFloat baselineRatePrior; // ivar: _baselineRatePrior
@property (nonatomic) CGFloat bundleFreeMultiplierForFreeUsers; // ivar: _bundleFreeMultiplierForFreeUsers
@property (nonatomic) CGFloat bundleFreeMultiplierForPaidUsers; // ivar: _bundleFreeMultiplierForPaidUsers
@property (nonatomic) CGFloat bundleFreeMultiplierForTrialUsers; // ivar: _bundleFreeMultiplierForTrialUsers
@property (nonatomic) CGFloat bundlePaidMultiplierForFreeUsers; // ivar: _bundlePaidMultiplierForFreeUsers
@property (nonatomic) CGFloat bundlePaidMultiplierForPaidUsers; // ivar: _bundlePaidMultiplierForPaidUsers
@property (nonatomic) CGFloat bundlePaidMultiplierForTrialUsers; // ivar: _bundlePaidMultiplierForTrialUsers
@property (nonatomic) CGFloat channelTopicDiversificationInitialPenalty; // ivar: _channelTopicDiversificationInitialPenalty
@property (nonatomic) CGFloat channelTopicDiversificationPenalty; // ivar: _channelTopicDiversificationPenalty
@property (nonatomic) CGFloat channelTopicDiversificationPenaltyHalfLife; // ivar: _channelTopicDiversificationPenaltyHalfLife
@property (nonatomic) CGFloat clientSideEngagementBoostANFMutiplier; // ivar: _clientSideEngagementBoostANFMutiplier
@property (nonatomic) CGFloat clientSideEngagementBoostFeaturedArticleMultiplier; // ivar: _clientSideEngagementBoostFeaturedArticleMultiplier
@property (nonatomic) CGFloat clientSideEngagementBoostFreeCohortCTRCap; // ivar: _clientSideEngagementBoostFreeCohortCTRCap
@property (nonatomic) CGFloat clientSideEngagementBoostPaidCohortCTRCap; // ivar: _clientSideEngagementBoostPaidCohortCTRCap
@property (nonatomic) CGFloat clientSideEngagementBoostReduceVisibilityMultiplier; // ivar: _clientSideEngagementBoostReduceVisibilityMultiplier
@property (nonatomic) CGFloat clientSideEngagementBoostTagQualityMultiplier; // ivar: _clientSideEngagementBoostTagQualityMultiplier
@property (nonatomic) CGFloat contentTriggerDampenerCoefficient; // ivar: _contentTriggerDampenerCoefficient
@property (nonatomic) CGFloat contentTriggerMaxDampener; // ivar: _contentTriggerMaxDampener
@property (nonatomic) NSInteger contentTriggerMaxEventCount; // ivar: _contentTriggerMaxEventCount
@property (nonatomic) CGFloat contentTriggerMinScoreWeight; // ivar: _contentTriggerMinScoreWeight
@property (nonatomic) CGFloat contentTriggerScoreExponent; // ivar: _contentTriggerScoreExponent
@property (nonatomic) CGFloat contentTriggerTagWeightExponent; // ivar: _contentTriggerTagWeightExponent
@property (nonatomic) CGFloat conversionCoefficientForFreeUsers; // ivar: _conversionCoefficientForFreeUsers
@property (nonatomic) CGFloat conversionCoefficientForPaidUsers; // ivar: _conversionCoefficientForPaidUsers
@property (nonatomic) CGFloat conversionCoefficientForTrialUsers; // ivar: _conversionCoefficientForTrialUsers
@property (retain, nonatomic) FCPersonalizationCohortConfig *conversionCohort; // ivar: _conversionCohort
@property (nonatomic) CGFloat ctrWithOneAutofavorited; // ivar: _ctrWithOneAutofavorited
@property (nonatomic) CGFloat ctrWithOneSubscribed; // ivar: _ctrWithOneSubscribed
@property (nonatomic) CGFloat ctrWithSubscribedChannel; // ivar: _ctrWithSubscribedChannel
@property (nonatomic) CGFloat ctrWithThreeAutofavorited; // ivar: _ctrWithThreeAutofavorited
@property (nonatomic) CGFloat ctrWithThreeSubscribed; // ivar: _ctrWithThreeSubscribed
@property (nonatomic) CGFloat ctrWithTwoAutofavorited; // ivar: _ctrWithTwoAutofavorited
@property (nonatomic) CGFloat ctrWithTwoSubscribed; // ivar: _ctrWithTwoSubscribed
@property (nonatomic) CGFloat ctrWithZeroAutofavorited; // ivar: _ctrWithZeroAutofavorited
@property (nonatomic) CGFloat ctrWithZeroSubscribed; // ivar: _ctrWithZeroSubscribed
@property (nonatomic) CGFloat decayFactor; // ivar: _decayFactor
@property (nonatomic) CGFloat democratizationFactor; // ivar: _democratizationFactor
@property (nonatomic) CGFloat diversificationInitialPenalty; // ivar: _diversificationInitialPenalty
@property (nonatomic) CGFloat diversificationPenalty; // ivar: _diversificationPenalty
@property (nonatomic) CGFloat diversificationPenaltyHalfLife; // ivar: _diversificationPenaltyHalfLife
@property (nonatomic) BOOL enableBaselineMultiplier; // ivar: _enableBaselineMultiplier
@property (nonatomic) CGFloat evergreenHalfLifeCoefficient; // ivar: _evergreenHalfLifeCoefficient
@property (nonatomic) CGFloat evergreenMultiplierForFreeUsers; // ivar: _evergreenMultiplierForFreeUsers
@property (nonatomic) CGFloat evergreenMultiplierForPaidUsers; // ivar: _evergreenMultiplierForPaidUsers
@property (nonatomic) CGFloat evergreenMultiplierForTrialUsers; // ivar: _evergreenMultiplierForTrialUsers
@property (nonatomic) CGFloat featuredMultiplierForFreeUsers; // ivar: _featuredMultiplierForFreeUsers
@property (nonatomic) CGFloat featuredMultiplierForPaidUsers; // ivar: _featuredMultiplierForPaidUsers
@property (nonatomic) CGFloat featuredMultiplierForTrialUsers; // ivar: _featuredMultiplierForTrialUsers
@property (nonatomic) CGFloat firstPassArticleFilter; // ivar: _firstPassArticleFilter
@property (nonatomic) CGFloat firstPassDiversificationPenalty; // ivar: _firstPassDiversificationPenalty
@property (nonatomic) CGFloat firstPassEvergreenHalfLifeCoefficient; // ivar: _firstPassEvergreenHalfLifeCoefficient
@property (nonatomic) CGFloat firstPassHalfLifeCoefficient; // ivar: _firstPassHalfLifeCoefficient
@property (nonatomic) CGFloat globalScoreCoefficientFree; // ivar: _globalScoreCoefficientFree
@property (nonatomic) CGFloat globalScoreCoefficientHalfLife; // ivar: _globalScoreCoefficientHalfLife
@property (nonatomic) CGFloat globalScoreCoefficientInitialMultiplier; // ivar: _globalScoreCoefficientInitialMultiplier
@property (nonatomic) CGFloat globalScoreCoefficientPaid; // ivar: _globalScoreCoefficientPaid
@property (nonatomic) CGFloat halfLifeCoefficient; // ivar: _halfLifeCoefficient
@property (nonatomic) CGFloat headlineSeenPenalty; // ivar: _headlineSeenPenalty
@property (retain, nonatomic) FCPersonalizationLowFlowEstimationConfig *lowFlowBoostEventEstimationConfig; // ivar: _lowFlowBoostEventEstimationConfig
@property (nonatomic) CGFloat lowFlowBoostFactor; // ivar: _lowFlowBoostFactor
@property (nonatomic) CGFloat lowFlowBoostFetchCountWeight; // ivar: _lowFlowBoostFetchCountWeight
@property (retain, nonatomic) FCPersonalizationLowFlowEstimationConfig *lowFlowBoostFetchEstimationConfig; // ivar: _lowFlowBoostFetchEstimationConfig
@property (nonatomic) CGFloat lowFlowBoostMaxProductFactor; // ivar: _lowFlowBoostMaxProductFactor
@property (nonatomic) CGFloat mutedVoteCoefficient; // ivar: _mutedVoteCoefficient
@property (nonatomic) CGFloat nicheContentBaselineMembershipMultiplier; // ivar: _nicheContentBaselineMembershipMultiplier
@property (nonatomic) BOOL nicheContentBoostOnlyAboveBaselineMembership; // ivar: _nicheContentBoostOnlyAboveBaselineMembership
@property (nonatomic) CGFloat nicheContentDefaultFlowRate; // ivar: _nicheContentDefaultFlowRate
@property (nonatomic) CGFloat nicheContentDefaultSubscriptionRate; // ivar: _nicheContentDefaultSubscriptionRate
@property (nonatomic) BOOL nicheContentExcludeNonGroupableTopics; // ivar: _nicheContentExcludeNonGroupableTopics
@property (nonatomic) CGFloat nicheContentManagedTopicBoost; // ivar: _nicheContentManagedTopicBoost
@property (nonatomic) BOOL nicheContentManagedTopicBoostAllTags; // ivar: _nicheContentManagedTopicBoostAllTags
@property (nonatomic) CGFloat nicheContentPublisherFlowExponent; // ivar: _nicheContentPublisherFlowExponent
@property (nonatomic) CGFloat nicheContentPublisherSubscriptionExponent; // ivar: _nicheContentPublisherSubscriptionExponent
@property (nonatomic) CGFloat nicheContentQualityThreshold; // ivar: _nicheContentQualityThreshold
@property (nonatomic) CGFloat nicheContentServerFlowWeight; // ivar: _nicheContentServerFlowWeight
@property (nonatomic) BOOL nicheContentShouldBoostPublisher; // ivar: _nicheContentShouldBoostPublisher
@property (nonatomic) CGFloat nicheContentTopicFlowExponent; // ivar: _nicheContentTopicFlowExponent
@property (nonatomic) CGFloat nicheContentTopicSubscriptionExponent; // ivar: _nicheContentTopicSubscriptionExponent
@property (nonatomic) CGFloat personalizationCoefficient; // ivar: _personalizationCoefficient
@property (nonatomic) CGFloat personalizedMultiplierBaselineMembership; // ivar: _personalizedMultiplierBaselineMembership
@property (nonatomic) CGFloat personalizedMultiplierMembershipDampener; // ivar: _personalizedMultiplierMembershipDampener
@property (nonatomic) CGFloat personalizedMultiplierPostBaselineCurvature; // ivar: _personalizedMultiplierPostBaselineCurvature
@property (nonatomic) CGFloat personalizedMultiplierPreBaselineCurvature; // ivar: _personalizedMultiplierPreBaselineCurvature
@property (nonatomic) CGFloat publisherAggregateWeight; // ivar: _publisherAggregateWeight
@property (nonatomic) CGFloat recentlyFollowedDurationThreshold; // ivar: _recentlyFollowedDurationThreshold
@property (nonatomic) CGFloat recentlyFollowedMultiplier; // ivar: _recentlyFollowedMultiplier
@property (nonatomic) BOOL respectHalfLifeOverride; // ivar: _respectHalfLifeOverride
@property (nonatomic) CGFloat sparseTagsPenalty; // ivar: _sparseTagsPenalty
@property (nonatomic) CGFloat subscribedChannelScoreCoefficient; // ivar: _subscribedChannelScoreCoefficient
@property (nonatomic) CGFloat subscribedTopicsScoreCoefficient; // ivar: _subscribedTopicsScoreCoefficient
@property (retain, nonatomic) FCPersonalizationCohortConfig *userCohort; // ivar: _userCohort
@property (nonatomic) CGFloat userFeedbackHalfLifeCoefficient; // ivar: _userFeedbackHalfLifeCoefficient


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArticleEmbeddingScoreCoefficient:(CGFloat)arg0 articleEmbeddingScoreDampenerWeight:(CGFloat)arg1 articleLengthAggregateWeight:(CGFloat)arg2 articleReadPenalty:(CGFloat)arg3 audioMultiplierForFreeUsers:(CGFloat)arg4 audioMultiplierForTrialUsers:(CGFloat)arg5 audioMultiplierForPaidUsers:(CGFloat)arg6 autofavoritedVoteCoefficient:(CGFloat)arg7 baselineRatePrior:(CGFloat)arg8 bundleFreeMultiplierForFreeUsers:(CGFloat)arg9 bundleFreeMultiplierForTrialUsers:(CGFloat)arg10 bundleFreeMultiplierForPaidUsers:(CGFloat)arg11 bundlePaidMultiplierForFreeUsers:(CGFloat)arg12 bundlePaidMultiplierForTrialUsers:(CGFloat)arg13 bundlePaidMultiplierForPaidUsers:(CGFloat)arg14 channelTopicDiversificationInitialPenalty:(CGFloat)arg15 channelTopicDiversificationPenalty:(CGFloat)arg16 channelTopicDiversificationPenaltyHalfLife:(CGFloat)arg17 conversionCoefficientForFreeUsers:(CGFloat)arg18 conversionCoefficientForTrialUsers:(CGFloat)arg19 conversionCoefficientForPaidUsers:(CGFloat)arg20 conversionCohort:(id)arg21 ctrWithOneAutofavorited:(CGFloat)arg22 ctrWithOneSubscribed:(CGFloat)arg23 ctrWithSubscribedChannel:(CGFloat)arg24 ctrWithThreeAutofavorited:(CGFloat)arg25 ctrWithThreeSubscribed:(CGFloat)arg26 ctrWithTwoAutofavorited:(CGFloat)arg27 ctrWithTwoSubscribed:(CGFloat)arg28 ctrWithZeroAutofavorited:(CGFloat)arg29 ctrWithZeroSubscribed:(CGFloat)arg30 decayFactor:(CGFloat)arg31 democratizationFactor:(CGFloat)arg32 diversificationInitialPenalty:(CGFloat)arg33 diversificationPenalty:(CGFloat)arg34 diversificationPenaltyHalfLife:(CGFloat)arg35 enableBaselineMultiplier:(BOOL)arg36 featuredMultiplierForFreeUsers:(CGFloat)arg37 featuredMultiplierForTrialUsers:(CGFloat)arg38 featuredMultiplierForPaidUsers:(CGFloat)arg39 evergreenMultiplierForFreeUsers:(CGFloat)arg40 evergreenMultiplierForTrialUsers:(CGFloat)arg41 evergreenMultiplierForPaidUsers:(CGFloat)arg42 firstPassHalfLifeCoefficient:(CGFloat)arg43 firstPassEvergreenHalfLifeCoefficient:(CGFloat)arg44 firstPassDiversificationPenalty:(CGFloat)arg45 firstPassArticleFilter:(CGFloat)arg46 globalScoreCoefficientFree:(CGFloat)arg47 globalScoreCoefficientPaid:(CGFloat)arg48 globalScoreCoefficientHalfLife:(CGFloat)arg49 globalScoreCoefficientInitialMultiplier:(CGFloat)arg50 headlineSeenPenalty:(CGFloat)arg51 halfLifeCoefficient:(CGFloat)arg52 userFeedbackHalfLifeCoefficient:(CGFloat)arg53 evergreenHalfLifeCoefficient:(CGFloat)arg54 respectHalfLifeOverride:(BOOL)arg55 mutedVoteCoefficient:(CGFloat)arg56 personalizationCoefficient:(CGFloat)arg57 publisherAggregateWeight:(CGFloat)arg58 sparseTagsPenalty:(CGFloat)arg59 subscribedChannelScoreCoefficient:(CGFloat)arg60 subscribedTopicsScoreCoefficient:(CGFloat)arg61 userCohort:(id)arg62 lowFlowBoostFetchCountWeight:(CGFloat)arg63 lowFlowBoostFactor:(CGFloat)arg64 lowFlowBoostMaxProductFactor:(CGFloat)arg65 lowFlowBoostFetchEstimationConfig:(id)arg66 lowFlowBoostEventEstimationConfig:(id)arg67 nicheContentBoostOnlyAboveBaselineMembership:(BOOL)arg68 nicheContentBaselineMembershipMultiplier:(CGFloat)arg69 nicheContentManagedTopicBoostAllTags:(BOOL)arg70 nicheContentDefaultFlowRate:(CGFloat)arg71 nicheContentDefaultSubscriptionRate:(CGFloat)arg72 nicheContentExcludeNonGroupableTopics:(BOOL)arg73 nicheContentShouldBoostPublisher:(BOOL)arg74 nicheContentTopicFlowExponent:(CGFloat)arg75 nicheContentPublisherFlowExponent:(CGFloat)arg76 nicheContentManagedTopicBoost:(CGFloat)arg77 nicheContentServerFlowWeight:(CGFloat)arg78 nicheContentTopicSubscriptionExponent:(CGFloat)arg79 nicheContentPublisherSubscriptionExponent:(CGFloat)arg80 nicheContentQualityThreshold:(CGFloat)arg81 contentTriggerMaxEventCount:(NSInteger)arg82 contentTriggerScoreExponent:(CGFloat)arg83 contentTriggerTagWeightExponent:(CGFloat)arg84 contentTriggerMinScoreWeight:(CGFloat)arg85 contentTriggerMaxDampener:(CGFloat)arg86 contentTriggerDampenerCoefficient:(CGFloat)arg87 personalizedMultiplierBaselineMembership:(CGFloat)arg88 personalizedMultiplierPreBaselineCurvature:(CGFloat)arg89 personalizedMultiplierPostBaselineCurvature:(CGFloat)arg90 personalizedMultiplierMembershipDampener:(CGFloat)arg91 recentlyFollowedDurationThreshold:(CGFloat)arg92 recentlyFollowedMultiplier:(CGFloat)arg93 clientSideEngagementBoostFeaturedArticleMultiplier:(CGFloat)arg94 clientSideEngagementBoostFreeCohortCTRCap:(CGFloat)arg95 clientSideEngagementBoostPaidCohortCTRCap:(CGFloat)arg96 clientSideEngagementBoostTagQualityMultiplier:(CGFloat)arg97 clientSideEngagementBoostReduceVisibilityMultiplier:(CGFloat)arg98 clientSideEngagementBoostANFMutiplier:(CGFloat)arg99 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 defaultConfig:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif