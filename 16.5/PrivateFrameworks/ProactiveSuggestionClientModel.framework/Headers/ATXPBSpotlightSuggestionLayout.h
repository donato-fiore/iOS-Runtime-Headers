// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBSPOTLIGHTSUGGESTIONLAYOUT_H
#define ATXPBSPOTLIGHTSUGGESTIONLAYOUT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface ATXPBSpotlightSuggestionLayout : PBCodable <NSCopying>

 {
    ? _scores;
}


@property (retain, nonatomic) NSMutableArray *collections; // ivar: _collections
@property (readonly, nonatomic) BOOL hasUuidString;
@property (readonly, nonatomic) *CGFloat scores;
@property (readonly, nonatomic) NSUInteger scoresCount;
@property (retain, nonatomic) NSString *uuidString; // ivar: _uuidString


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)scoresAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)collectionsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCollections:(id)arg0 ;
-(void)addScores:(CGFloat)arg0 ;
-(void)clearCollections;
-(void)clearScores;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif