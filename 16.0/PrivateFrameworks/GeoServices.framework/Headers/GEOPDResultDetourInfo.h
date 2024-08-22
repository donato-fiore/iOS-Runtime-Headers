// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDRESULTDETOURINFO_H
#define GEOPDRESULTDETOURINFO_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOPDResultDetourInfo : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    int _detourDistance;
    int _detourTime;
    unsigned int _distanceToPlace;
    unsigned int _timeToPlace;
    ? _flags;
}


@property (nonatomic) int detourDistance;
@property (nonatomic) int detourTime;
@property (nonatomic) unsigned int distanceToPlace;
@property (nonatomic) BOOL hasDetourDistance;
@property (nonatomic) BOOL hasDetourTime;
@property (nonatomic) BOOL hasDistanceToPlace;
@property (nonatomic) BOOL hasTimeToPlace;
@property (nonatomic) unsigned int timeToPlace;
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