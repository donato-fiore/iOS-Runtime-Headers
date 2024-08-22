// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCODABLECLOUDKITCOMPETITION_H
#define ASCODABLECLOUDKITCOMPETITION_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "ASCodableCloudKitDateComponents.h"

@interface ASCodableCloudKitCompetition : PBCodable <NSCopying>

 {
    ? _opponentScores;
    ? _preferredVictoryBadgeStyles;
    ? _scores;
    ? _has;
}


@property (nonatomic) NSInteger currentCacheIndex; // ivar: _currentCacheIndex
@property (retain, nonatomic) ASCodableCloudKitDateComponents *durationDateComponents; // ivar: _durationDateComponents
@property (nonatomic) BOOL hasCurrentCacheIndex;
@property (readonly, nonatomic) BOOL hasDurationDateComponents;
@property (nonatomic) BOOL hasMaximumNumberOfPointsPerDay;
@property (readonly, nonatomic) BOOL hasStartDateComponents;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) NSInteger maximumNumberOfPointsPerDay; // ivar: _maximumNumberOfPointsPerDay
@property (readonly, nonatomic) *NSInteger opponentScores;
@property (readonly, nonatomic) NSUInteger opponentScoresCount;
@property (readonly, nonatomic) *int preferredVictoryBadgeStyles;
@property (readonly, nonatomic) NSUInteger preferredVictoryBadgeStylesCount;
@property (readonly, nonatomic) *NSInteger scores;
@property (readonly, nonatomic) NSUInteger scoresCount;
@property (retain, nonatomic) ASCodableCloudKitDateComponents *startDateComponents; // ivar: _startDateComponents
@property (retain, nonatomic) NSData *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)opponentScoresAtIndex:(NSUInteger)arg0 ;
-(NSInteger)scoresAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)preferredVictoryBadgeStylesAtIndex:(NSUInteger)arg0 ;
-(void)addOpponentScores:(NSInteger)arg0 ;
-(void)addPreferredVictoryBadgeStyles:(int)arg0 ;
-(void)addScores:(NSInteger)arg0 ;
-(void)clearOpponentScores;
-(void)clearPreferredVictoryBadgeStyles;
-(void)clearScores;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif