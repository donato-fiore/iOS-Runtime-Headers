// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTRANSITDEPARTUREENTRY_H
#define GEOTRANSITDEPARTUREENTRY_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOTransitDepartureEntry : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSUInteger _tripMuid;
    unsigned int _departureTime;
    ? _flags;
}


@property (nonatomic) unsigned int departureTime;
@property (nonatomic) BOOL hasDepartureTime;
@property (nonatomic) BOOL hasTripMuid;
@property (nonatomic) NSUInteger tripMuid;
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
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif