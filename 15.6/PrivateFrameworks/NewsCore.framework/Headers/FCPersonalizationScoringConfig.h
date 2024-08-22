// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
@property (nonatomic) CGFloat contentTriggerDampenerCoefficient; // ivar: _contentTriggerDampenerCoefficient
@property (nonatomic) CGFloat contentTriggerMaxDampener; // ivar: _contentTriggerMaxDampener
@property (nonatomic) NSInteger contentTriggerMaxEventCount; // ivar: _contentTriggerMaxEventCount
@property (nonatomic) CGFloat contentTriggerMinScoreWeight; // ivar: _contentTriggerMinScoreWeight
@property (nonatomic) CGFloat contentTriggerScoreExponent; // ivar: _contentTriggerScoreExponent
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
@property (nonatomic) BOOL respectHalfLifeOverride; // ivar: _respectHalfLifeOverride
@property (nonatomic) CGFloat sparseTagsPenalty; // ivar: _sparseTagsPenalty
@property (nonatomic) CGFloat subscribedChannelScoreCoefficient; // ivar: _subscribedChannelScoreCoefficient
@property (nonatomic) CGFloat subscribedTopicsScoreCoefficient; // ivar: _subscribedTopicsScoreCoefficient
@property (retain, nonatomic) FCPersonalizationCohortConfig *userCohort; // ivar: _userCohort


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArticleLengthAggregateWeight:(CGFloat)arg0 articleReadPenalty:(CGFloat)arg1 audioMultiplierForFreeUsers:(CGFloat)arg2 audioMultiplierForTrialUsers:(CGFloat)arg3 audioMultiplierForPaidUsers:(CGFloat)arg4 autofavoritedVoteCoefficient:(CGFloat)arg5 baselineRatePrior:(CGFloat)arg6 bundleFreeMultiplierForFreeUsers:(CGFloat)arg7 bundleFreeMultiplierForTrialUsers:(CGFloat)arg8 bundleFreeMultiplierForPaidUsers:(CGFloat)arg9 bundlePaidMultiplierForFreeUsers:(CGFloat)arg10 bundlePaidMultiplierForTrialUsers:(CGFloat)arg11 bundlePaidMultiplierForPaidUsers:(CGFloat)arg12 channelTopicDiversificationInitialPenalty:(CGFloat)arg13 channelTopicDiversificationPenalty:(CGFloat)arg14 channelTopicDiversificationPenaltyHalfLife:(CGFloat)arg15 conversionCoefficientForFreeUsers:(CGFloat)arg16 conversionCoefficientForTrialUsers:(CGFloat)arg17 conversionCoefficientForPaidUsers:(CGFloat)arg18 conversionCohort:(id)arg19 ctrWithOneAutofavorited:(CGFloat)arg20 ctrWithOneSubscribed:(CGFloat)arg21 ctrWithSubscribedChannel:(CGFloat)arg22 ctrWithThreeAutofavorited:(CGFloat)arg23 ctrWithThreeSubscribed:(CGFloat)arg24 ctrWithTwoAutofavorited:(CGFloat)arg25 ctrWithTwoSubscribed:(CGFloat)arg26 ctrWithZeroAutofavorited:(CGFloat)arg27 ctrWithZeroSubscribed:(CGFloat)arg28 decayFactor:(CGFloat)arg29 democratizationFactor:(CGFloat)arg30 diversificationInitialPenalty:(CGFloat)arg31 diversificationPenalty:(CGFloat)arg32 diversificationPenaltyHalfLife:(CGFloat)arg33 featuredMultiplierForFreeUsers:(CGFloat)arg34 featuredMultiplierForTrialUsers:(CGFloat)arg35 featuredMultiplierForPaidUsers:(CGFloat)arg36 evergreenMultiplierForFreeUsers:(CGFloat)arg37 evergreenMultiplierForTrialUsers:(CGFloat)arg38 evergreenMultiplierForPaidUsers:(CGFloat)arg39 firstPassHalfLifeCoefficient:(CGFloat)arg40 firstPassEvergreenHalfLifeCoefficient:(CGFloat)arg41 firstPassDiversificationPenalty:(CGFloat)arg42 firstPassArticleFilter:(CGFloat)arg43 globalScoreCoefficientFree:(CGFloat)arg44 globalScoreCoefficientPaid:(CGFloat)arg45 globalScoreCoefficientHalfLife:(CGFloat)arg46 globalScoreCoefficientInitialMultiplier:(CGFloat)arg47 headlineSeenPenalty:(CGFloat)arg48 halfLifeCoefficient:(CGFloat)arg49 evergreenHalfLifeCoefficient:(CGFloat)arg50 respectHalfLifeOverride:(BOOL)arg51 mutedVoteCoefficient:(CGFloat)arg52 personalizationCoefficient:(CGFloat)arg53 publisherAggregateWeight:(CGFloat)arg54 sparseTagsPenalty:(CGFloat)arg55 subscribedChannelScoreCoefficient:(CGFloat)arg56 subscribedTopicsScoreCoefficient:(CGFloat)arg57 userCohort:(id)arg58 lowFlowBoostFetchCountWeight:(CGFloat)arg59 lowFlowBoostFactor:(CGFloat)arg60 lowFlowBoostMaxProductFactor:(CGFloat)arg61 lowFlowBoostFetchEstimationConfig:(id)arg62 lowFlowBoostEventEstimationConfig:(id)arg63 nicheContentBoostOnlyAboveBaselineMembership:(BOOL)arg64 nicheContentBaselineMembershipMultiplier:(CGFloat)arg65 nicheContentManagedTopicBoostAllTags:(BOOL)arg66 nicheContentDefaultFlowRate:(CGFloat)arg67 nicheContentDefaultSubscriptionRate:(CGFloat)arg68 nicheContentExcludeNonGroupableTopics:(BOOL)arg69 nicheContentShouldBoostPublisher:(BOOL)arg70 nicheContentTopicFlowExponent:(CGFloat)arg71 nicheContentPublisherFlowExponent:(CGFloat)arg72 nicheContentManagedTopicBoost:(CGFloat)arg73 nicheContentServerFlowWeight:(CGFloat)arg74 nicheContentTopicSubscriptionExponent:(CGFloat)arg75 nicheContentPublisherSubscriptionExponent:(CGFloat)arg76 nicheContentQualityThreshold:(CGFloat)arg77 contentTriggerMaxEventCount:(NSInteger)arg78 contentTriggerScoreExponent:(CGFloat)arg79 contentTriggerMinScoreWeight:(CGFloat)arg80 contentTriggerMaxDampener:(CGFloat)arg81 contentTriggerDampenerCoefficient:(CGFloat)arg82 personalizedMultiplierBaselineMembership:(CGFloat)arg83 personalizedMultiplierPreBaselineCurvature:(CGFloat)arg84 personalizedMultiplierPostBaselineCurvature:(CGFloat)arg85 personalizedMultiplierMembershipDampener:(CGFloat)arg86 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 defaultConfig:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif