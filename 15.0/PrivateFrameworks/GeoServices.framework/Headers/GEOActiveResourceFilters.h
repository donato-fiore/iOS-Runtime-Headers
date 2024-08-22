// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOACTIVERESOURCEFILTERS_H
#define GEOACTIVERESOURCEFILTERS_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOActiveResourceFilters : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    *GEOActiveResourceFilter _filters;
    NSUInteger _filtersCount;
    NSUInteger _filtersSpace;
}


@property (readonly, nonatomic) *GEOActiveResourceFilter filters;
@property (readonly, nonatomic) NSUInteger filtersCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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
-(struct GEOActiveResourceFilter )filterAtIndex:(NSUInteger)arg0 ;
-(void)addFilter:(struct GEOActiveResourceFilter )arg0 ;
-(void)clearFilters;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif