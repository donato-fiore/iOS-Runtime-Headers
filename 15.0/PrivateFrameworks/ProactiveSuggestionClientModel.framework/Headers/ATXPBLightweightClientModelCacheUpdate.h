// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPBLIGHTWEIGHTCLIENTMODELCACHEUPDATE_H
#define ATXPBLIGHTWEIGHTCLIENTMODELCACHEUPDATE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface ATXPBLightweightClientModelCacheUpdate : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat cacheCreationDate; // ivar: _cacheCreationDate
@property (retain, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (nonatomic) BOOL hasCacheCreationDate;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSMutableArray *suggestions; // ivar: _suggestions
@property (retain, nonatomic) NSString *uuidString; // ivar: _uuidString


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)suggestionsAtIndex:(NSUInteger)arg0 ;
-(void)addSuggestions:(id)arg0 ;
-(void)clearSuggestions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif