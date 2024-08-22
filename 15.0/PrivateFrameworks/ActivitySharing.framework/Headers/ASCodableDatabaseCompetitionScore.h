// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCODABLEDATABASECOMPETITIONSCORE_H
#define ASCODABLEDATABASECOMPETITIONSCORE_H

@class PBCodable;
@protocol NSCopying;



@interface ASCodableDatabaseCompetitionScore : PBCodable <NSCopying>

 {
    ? _scores;
}


@property (readonly, nonatomic) *NSInteger scores;
@property (readonly, nonatomic) NSUInteger scoresCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)scoresAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addScores:(NSInteger)arg0 ;
-(void)clearScores;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif