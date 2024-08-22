// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPBINFOENGINECACHEDSUGGESTIONS_H
#define ATXPBINFOENGINECACHEDSUGGESTIONS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface ATXPBInfoEngineCachedSuggestions : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *cachedSuggestionIds; // ivar: _cachedSuggestionIds
@property (retain, nonatomic) NSMutableArray *cachedSuggestionSourceIds; // ivar: _cachedSuggestionSourceIds
@property (nonatomic) BOOL hasLength;
@property (nonatomic) NSUInteger length; // ivar: _length


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cachedSuggestionIdsAtIndex:(NSUInteger)arg0 ;
-(id)cachedSuggestionSourceIdsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCachedSuggestionIds:(id)arg0 ;
-(void)addCachedSuggestionSourceIds:(id)arg0 ;
-(void)clearCachedSuggestionIds;
-(void)clearCachedSuggestionSourceIds;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif