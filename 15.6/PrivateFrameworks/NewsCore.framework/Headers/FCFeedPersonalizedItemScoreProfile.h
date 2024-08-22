// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCFEEDPERSONALIZEDITEMSCOREPROFILE_H
#define FCFEEDPERSONALIZEDITEMSCOREPROFILE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface FCFeedPersonalizedItemScoreProfile : NSObject

@property (nonatomic) CGFloat agedPersonalizationScore; // ivar: _agedPersonalizationScore
@property (retain, nonatomic) NSDictionary *articleCohortMemberships; // ivar: _articleCohortMemberships
@property (nonatomic) CGFloat audioMultiplier; // ivar: _audioMultiplier
@property (nonatomic) CGFloat autoSubscribeCtr; // ivar: _autoSubscribeCtr
@property (nonatomic) CGFloat bundleFreeMultiplier; // ivar: _bundleFreeMultiplier
@property (nonatomic) CGFloat bundlePaidMultiplier; // ivar: _bundlePaidMultiplier
@property (retain, nonatomic) NSDictionary *cohortMemberships; // ivar: _cohortMemberships
@property (nonatomic) CGFloat computedGlobalScoreCoefficient; // ivar: _computedGlobalScoreCoefficient
@property (nonatomic) CGFloat contentTriggerDampener; // ivar: _contentTriggerDampener
@property (retain, nonatomic) NSDictionary *contentTriggerScores; // ivar: _contentTriggerScores
@property (retain, nonatomic) NSDictionary *conversionCohortMemberships; // ivar: _conversionCohortMemberships
@property (nonatomic) CGFloat diversifiedPersonalizationScore; // ivar: _diversifiedPersonalizationScore
@property (nonatomic) CGFloat evergreenMultiplier; // ivar: _evergreenMultiplier
@property (nonatomic) CGFloat featureCtr; // ivar: _featureCtr
@property (nonatomic) CGFloat featuredMultiplier; // ivar: _featuredMultiplier
@property (nonatomic) CGFloat firstPassPersonalizationScore; // ivar: _firstPassPersonalizationScore
@property (nonatomic) NSUInteger groupingReason; // ivar: _groupingReason
@property (nonatomic) CGFloat nicheContentMultiplier; // ivar: _nicheContentMultiplier
@property (retain, nonatomic) NSDictionary *nicheContentScores; // ivar: _nicheContentScores
@property (nonatomic) CGFloat paidNonpaidSubscriptionCtr; // ivar: _paidNonpaidSubscriptionCtr
@property (nonatomic) CGFloat personalizationScore; // ivar: _personalizationScore
@property (nonatomic) CGFloat readPenalty; // ivar: _readPenalty
@property (nonatomic) NSUInteger scoringType; // ivar: _scoringType
@property (nonatomic) CGFloat seenPenalty; // ivar: _seenPenalty
@property (nonatomic) CGFloat sparseTagsPenalty; // ivar: _sparseTagsPenalty
@property (nonatomic) CGFloat subscribedChannelCtr; // ivar: _subscribedChannelCtr
@property (nonatomic) CGFloat userConversionScore; // ivar: _userConversionScore
@property (nonatomic) CGFloat userFeedbackScore; // ivar: _userFeedbackScore


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif