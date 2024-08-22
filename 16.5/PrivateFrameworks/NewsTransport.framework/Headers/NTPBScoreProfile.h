// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBSCOREPROFILE_H
#define NTPBSCOREPROFILE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "NTPBScoreProfileDebug.h"

@interface NTPBScoreProfile : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat agedPersonalizationScore; // ivar: _agedPersonalizationScore
@property (nonatomic) CGFloat autoSubscribeCtr; // ivar: _autoSubscribeCtr
@property (retain, nonatomic) NSMutableArray *cohortMemberships; // ivar: _cohortMemberships
@property (nonatomic) CGFloat computedGlobalScoreCoefficient; // ivar: _computedGlobalScoreCoefficient
@property (nonatomic) CGFloat conversionMultiplier; // ivar: _conversionMultiplier
@property (nonatomic) CGFloat dampenedStaticMultiplier; // ivar: _dampenedStaticMultiplier
@property (retain, nonatomic) NTPBScoreProfileDebug *debugFields; // ivar: _debugFields
@property (nonatomic) CGFloat diversifiedPersonalizationScore; // ivar: _diversifiedPersonalizationScore
@property (nonatomic) CGFloat featureCtr; // ivar: _featureCtr
@property (nonatomic) CGFloat firstPassPersonalizationScore; // ivar: _firstPassPersonalizationScore
@property (nonatomic) BOOL hasAgedPersonalizationScore;
@property (nonatomic) BOOL hasAutoSubscribeCtr;
@property (nonatomic) BOOL hasComputedGlobalScoreCoefficient;
@property (nonatomic) BOOL hasConversionMultiplier;
@property (nonatomic) BOOL hasDampenedStaticMultiplier;
@property (readonly, nonatomic) BOOL hasDebugFields;
@property (nonatomic) BOOL hasDiversifiedPersonalizationScore;
@property (nonatomic) BOOL hasFeatureCtr;
@property (nonatomic) BOOL hasFirstPassPersonalizationScore;
@property (nonatomic) BOOL hasPaidNonpaidSubscriptionCtr;
@property (nonatomic) BOOL hasPersonalizationScore;
@property (nonatomic) BOOL hasPublisherFavorability;
@property (nonatomic) BOOL hasQualitativeMultiplier;
@property (nonatomic) BOOL hasRawPersonalizationScore;
@property (nonatomic) BOOL hasRawUserFeedbackScore;
@property (nonatomic) BOOL hasStaticMultiplier;
@property (nonatomic) BOOL hasSubscribedChannelCtr;
@property (nonatomic) BOOL hasTitleEmbeddingScore;
@property (nonatomic) BOOL hasUserFeedbackScore;
@property (nonatomic) CGFloat paidNonpaidSubscriptionCtr; // ivar: _paidNonpaidSubscriptionCtr
@property (nonatomic) CGFloat personalizationScore; // ivar: _personalizationScore
@property (nonatomic) CGFloat publisherFavorability; // ivar: _publisherFavorability
@property (nonatomic) CGFloat qualitativeMultiplier; // ivar: _qualitativeMultiplier
@property (nonatomic) CGFloat rawPersonalizationScore; // ivar: _rawPersonalizationScore
@property (nonatomic) CGFloat rawUserFeedbackScore; // ivar: _rawUserFeedbackScore
@property (nonatomic) CGFloat staticMultiplier; // ivar: _staticMultiplier
@property (nonatomic) CGFloat subscribedChannelCtr; // ivar: _subscribedChannelCtr
@property (nonatomic) CGFloat titleEmbeddingScore; // ivar: _titleEmbeddingScore
@property (nonatomic) CGFloat userFeedbackScore; // ivar: _userFeedbackScore


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cohortMembershipsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCohortMemberships:(id)arg0 ;
-(void)clearCohortMemberships;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif