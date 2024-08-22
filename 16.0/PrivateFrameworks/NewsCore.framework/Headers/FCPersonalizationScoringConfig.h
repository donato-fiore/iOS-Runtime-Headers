// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCPERSONALIZATIONSCORINGCONFIG_H
#define FCPERSONALIZATIONSCORINGCONFIG_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FCPersonalizationCohortConfig.h"
#import "FCPersonalizationLowFlowEstimationConfig.h"

@interface FCPersonalizationScoringConfig : NSObject <NSCopying, NSSecureCoding>



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


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArticleLengthAggregateWeight:(CGFloat)arg0 articleReadPenalty:(CGFloat)arg1 audioMultiplierForFreeUsers:(CGFloat)arg2 audioMultiplierForTrialUsers:(CGFloat)arg3 audioMultiplierForPaidUsers:(CGFloat)arg4 autofavoritedVoteCoefficient:(CGFloat)arg5 baselineRatePrior:(CGFloat)arg6 bundleFreeMultiplierForFreeUsers:(CGFloat)arg7 bundleFreeMultiplierForTrialUsers:(CGFloat)arg8 bundleFreeMultiplierForPaidUsers:(CGFloat)arg9 bundlePaidMultiplierForFreeUsers:(CGFloat)arg10 bundlePaidMultiplierForTrialUsers:(CGFloat)arg11 bundlePaidMultiplierForPaidUsers:(CGFloat)arg12 channelTopicDiversificationInitialPenalty:(CGFloat)arg13 channelTopicDiversificationPenalty:(CGFloat)arg14 channelTopicDiversificationPenaltyHalfLife:(CGFloat)arg15 conversionCoefficientForFreeUsers:(CGFloat)arg16 conversionCoefficientForTrialUsers:(CGFloat)arg17 conversionCoefficientForPaidUsers:(CGFloat)arg18 conversionCohort:(id)arg19 ctrWithOneAutofavorited:(CGFloat)arg20 ctrWithOneSubscribed:(CGFloat)arg21 ctrWithSubscribedChannel:(CGFloat)arg22 ctrWithThreeAutofavorited:(CGFloat)arg23 ctrWithThreeSubscribed:(CGFloat)arg24 ctrWithTwoAutofavorited:(CGFloat)arg25 ctrWithTwoSubscribed:(CGFloat)arg26 ctrWithZeroAutofavorited:(CGFloat)arg27 ctrWithZeroSubscribed:(CGFloat)arg28 decayFactor:(CGFloat)arg29 democratizationFactor:(CGFloat)arg30 diversificationInitialPenalty:(CGFloat)arg31 diversificationPenalty:(CGFloat)arg32 diversificationPenaltyHalfLife:(CGFloat)arg33 enableBaselineMultiplier:(BOOL)arg34 featuredMultiplierForFreeUsers:(CGFloat)arg35 featuredMultiplierForTrialUsers:(CGFloat)arg36 featuredMultiplierForPaidUsers:(CGFloat)arg37 evergreenMultiplierForFreeUsers:(CGFloat)arg38 evergreenMultiplierForTrialUsers:(CGFloat)arg39 evergreenMultiplierForPaidUsers:(CGFloat)arg40 firstPassHalfLifeCoefficient:(CGFloat)arg41 firstPassEvergreenHalfLifeCoefficient:(CGFloat)arg42 firstPassDiversificationPenalty:(CGFloat)arg43 firstPassArticleFilter:(CGFloat)arg44 globalScoreCoefficientFree:(CGFloat)arg45 globalScoreCoefficientPaid:(CGFloat)arg46 globalScoreCoefficientHalfLife:(CGFloat)arg47 globalScoreCoefficientInitialMultiplier:(CGFloat)arg48 headlineSeenPenalty:(CGFloat)arg49 halfLifeCoefficient:(CGFloat)arg50 evergreenHalfLifeCoefficient:(CGFloat)arg51 respectHalfLifeOverride:(BOOL)arg52 mutedVoteCoefficient:(CGFloat)arg53 personalizationCoefficient:(CGFloat)arg54 publisherAggregateWeight:(CGFloat)arg55 sparseTagsPenalty:(CGFloat)arg56 subscribedChannelScoreCoefficient:(CGFloat)arg57 subscribedTopicsScoreCoefficient:(CGFloat)arg58 userCohort:(id)arg59 lowFlowBoostFetchCountWeight:(CGFloat)arg60 lowFlowBoostFactor:(CGFloat)arg61 lowFlowBoostMaxProductFactor:(CGFloat)arg62 lowFlowBoostFetchEstimationConfig:(id)arg63 lowFlowBoostEventEstimationConfig:(id)arg64 nicheContentBoostOnlyAboveBaselineMembership:(BOOL)arg65 nicheContentBaselineMembershipMultiplier:(CGFloat)arg66 nicheContentManagedTopicBoostAllTags:(BOOL)arg67 nicheContentDefaultFlowRate:(CGFloat)arg68 nicheContentDefaultSubscriptionRate:(CGFloat)arg69 nicheContentExcludeNonGroupableTopics:(BOOL)arg70 nicheContentShouldBoostPublisher:(BOOL)arg71 nicheContentTopicFlowExponent:(CGFloat)arg72 nicheContentPublisherFlowExponent:(CGFloat)arg73 nicheContentManagedTopicBoost:(CGFloat)arg74 nicheContentServerFlowWeight:(CGFloat)arg75 nicheContentTopicSubscriptionExponent:(CGFloat)arg76 nicheContentPublisherSubscriptionExponent:(CGFloat)arg77 nicheContentQualityThreshold:(CGFloat)arg78 contentTriggerMaxEventCount:(NSInteger)arg79 contentTriggerScoreExponent:(CGFloat)arg80 contentTriggerTagWeightExponent:(CGFloat)arg81 contentTriggerMinScoreWeight:(CGFloat)arg82 contentTriggerMaxDampener:(CGFloat)arg83 contentTriggerDampenerCoefficient:(CGFloat)arg84 personalizedMultiplierBaselineMembership:(CGFloat)arg85 personalizedMultiplierPreBaselineCurvature:(CGFloat)arg86 personalizedMultiplierPostBaselineCurvature:(CGFloat)arg87 personalizedMultiplierMembershipDampener:(CGFloat)arg88 recentlyFollowedDurationThreshold:(CGFloat)arg89 recentlyFollowedMultiplier:(CGFloat)arg90 clientSideEngagementBoostFeaturedArticleMultiplier:(CGFloat)arg91 clientSideEngagementBoostFreeCohortCTRCap:(CGFloat)arg92 clientSideEngagementBoostPaidCohortCTRCap:(CGFloat)arg93 clientSideEngagementBoostTagQualityMultiplier:(CGFloat)arg94 clientSideEngagementBoostReduceVisibilityMultiplier:(CGFloat)arg95 clientSideEngagementBoostANFMutiplier:(CGFloat)arg96 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 defaultConfig:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif