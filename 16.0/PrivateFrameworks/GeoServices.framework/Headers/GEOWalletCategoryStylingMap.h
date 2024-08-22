// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOWALLETCATEGORYSTYLINGMAP_H
#define GEOWALLETCATEGORYSTYLINGMAP_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOWalletCategoryStylingMap : PBCodable <NSCopying>

 {
    NSMutableArray *_mappings;
}


@property (retain, nonatomic) NSMutableArray *mappings;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)mappingsAtIndex:(NSUInteger)arg0 ;
-(void)addMappings:(id)arg0 ;
-(void)clearMappings;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif