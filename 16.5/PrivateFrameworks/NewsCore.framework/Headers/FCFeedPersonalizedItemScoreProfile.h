// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFEEDPERSONALIZEDITEMSCOREPROFILE_H
#define FCFEEDPERSONALIZEDITEMSCOREPROFILE_H

@class NSArray, NTPBScoreProfileDebug, NTPBScoreProfile;

#import <Foundation/Foundation.h>


@interface FCFeedPersonalizedItemScoreProfile : NSObject

@property (nonatomic) CGFloat agedPersonalizationScore;
@property (nonatomic) CGFloat autoSubscribeCtr;
@property (retain, nonatomic) NSArray *cohortMemberships;
@property (nonatomic) CGFloat computedGlobalScoreCoefficient;
@property (nonatomic) CGFloat conversionMultiplier;
@property (nonatomic) CGFloat dampenedStaticMultiplier;
@property (retain, nonatomic) NTPBScoreProfileDebug *debugFields;
@property (nonatomic) CGFloat diversifiedPersonalizationScore;
@property (nonatomic) CGFloat featureCtr;
@property (nonatomic) CGFloat firstPassPersonalizationScore;
@property (nonatomic) CGFloat paidNonpaidSubscriptionCtr;
@property (retain, nonatomic) NTPBScoreProfile *pbScoreProfile; // ivar: _pbScoreProfile
@property (nonatomic) CGFloat personalizationScore;
@property (nonatomic) CGFloat publisherFavorability;
@property (nonatomic) CGFloat qualitativeMultiplier;
@property (nonatomic) CGFloat rawPersonalizationScore;
@property (nonatomic) CGFloat rawUserFeedbackScore;
@property (readonly, nonatomic) CGFloat sortingScore;
@property (nonatomic) CGFloat staticMultiplier;
@property (nonatomic) CGFloat subscribedChannelCtr;
@property (nonatomic) CGFloat titleEmbeddingScore;
@property (nonatomic) CGFloat userFeedbackScore;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithPBScoreProfile:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif