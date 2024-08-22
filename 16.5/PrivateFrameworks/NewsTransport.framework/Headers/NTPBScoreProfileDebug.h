// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBSCOREPROFILEDEBUG_H
#define NTPBSCOREPROFILEDEBUG_H

@class PBCodable;
@protocol NSCopying;



@interface NTPBScoreProfileDebug : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat audioMultiplier; // ivar: _audioMultiplier
@property (nonatomic) CGFloat bundleFreeMultiplier; // ivar: _bundleFreeMultiplier
@property (nonatomic) CGFloat bundlePaidMultiplier; // ivar: _bundlePaidMultiplier
@property (nonatomic) CGFloat contentTriggerDampener; // ivar: _contentTriggerDampener
@property (nonatomic) CGFloat evergreenMultiplier; // ivar: _evergreenMultiplier
@property (nonatomic) CGFloat featuredMultiplier; // ivar: _featuredMultiplier
@property (nonatomic) NSInteger groupingReason; // ivar: _groupingReason
@property (nonatomic) CGFloat halfLifeCoefficient; // ivar: _halfLifeCoefficient
@property (nonatomic) BOOL hasAudioMultiplier;
@property (nonatomic) BOOL hasBundleFreeMultiplier;
@property (nonatomic) BOOL hasBundlePaidMultiplier;
@property (nonatomic) BOOL hasContentTriggerDampener;
@property (nonatomic) BOOL hasEvergreenMultiplier;
@property (nonatomic) BOOL hasFeaturedMultiplier;
@property (nonatomic) BOOL hasGroupingReason;
@property (nonatomic) BOOL hasHalfLifeCoefficient;
@property (nonatomic) BOOL hasMultiplierDampener;
@property (nonatomic) BOOL hasMutedVoteDampener;
@property (nonatomic) BOOL hasNicheContentMultiplier;
@property (nonatomic) BOOL hasReadPenalty;
@property (nonatomic) BOOL hasScoringContext;
@property (nonatomic) BOOL hasScoringType;
@property (nonatomic) BOOL hasSeenPenalty;
@property (nonatomic) BOOL hasSparseTagsPenalty;
@property (nonatomic) BOOL hasTimeDecayPenalty;
@property (nonatomic) BOOL hasUserConversionScore;
@property (nonatomic) CGFloat multiplierDampener; // ivar: _multiplierDampener
@property (nonatomic) CGFloat mutedVoteDampener; // ivar: _mutedVoteDampener
@property (nonatomic) CGFloat nicheContentMultiplier; // ivar: _nicheContentMultiplier
@property (nonatomic) CGFloat readPenalty; // ivar: _readPenalty
@property (nonatomic) NSInteger scoringContext; // ivar: _scoringContext
@property (nonatomic) NSInteger scoringType; // ivar: _scoringType
@property (nonatomic) CGFloat seenPenalty; // ivar: _seenPenalty
@property (nonatomic) CGFloat sparseTagsPenalty; // ivar: _sparseTagsPenalty
@property (nonatomic) CGFloat timeDecayPenalty; // ivar: _timeDecayPenalty
@property (nonatomic) CGFloat userConversionScore; // ivar: _userConversionScore


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif