// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOJUNCTIONINFO_H
#define GEOJUNCTIONINFO_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOJunctionInfo : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    *GEOJunctionElement _junctionElements;
    NSUInteger _junctionElementsCount;
    NSUInteger _junctionElementsSpace;
    int _drivingSide;
    int _junctionType;
    int _maneuverType;
    ? _flags;
}


@property (nonatomic) int drivingSide;
@property (nonatomic) BOOL hasDrivingSide;
@property (nonatomic) BOOL hasJunctionType;
@property (nonatomic) BOOL hasManeuverType;
@property (readonly, nonatomic) *GEOJunctionElement junctionElements;
@property (readonly, nonatomic) NSUInteger junctionElementsCount;
@property (nonatomic) int junctionType;
@property (nonatomic) int maneuverType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)drivingSideAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)junctionTypeAsString:(int)arg0 ;
-(id)maneuverTypeAsString:(int)arg0 ;
-(int)StringAsDrivingSide:(id)arg0 ;
-(int)StringAsJunctionType:(id)arg0 ;
-(int)StringAsManeuverType:(id)arg0 ;
-(struct GEOJunctionElement )junctionElementAtIndex:(NSUInteger)arg0 ;
-(void)addJunctionElement:(struct GEOJunctionElement )arg0 ;
-(void)clearJunctionElements;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif