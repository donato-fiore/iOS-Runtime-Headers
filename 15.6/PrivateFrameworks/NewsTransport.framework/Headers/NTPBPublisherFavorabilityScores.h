// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBPUBLISHERFAVORABILITYSCORES_H
#define NTPBPUBLISHERFAVORABILITYSCORES_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBPublisherFavorabilityScores : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *scores; // ivar: _scores


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)scoresAtIndex:(NSUInteger)arg0 ;
-(void)addScores:(id)arg0 ;
-(void)clearScores;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif