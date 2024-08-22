// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTRANSITENTRY_H
#define GEOTRANSITENTRY_H

@class PBCodable, PBUnknownFields, NSData;
@protocol NSCopying;



@interface GEOTransitEntry : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSUInteger _lineMuid;
    NSData *_routingParameters;
    NSUInteger _tripMuid;
    unsigned int _tripStaticDepartureTime;
    unsigned int _windowStartTime;
    ? _flags;
}


@property (nonatomic) BOOL hasLineMuid;
@property (readonly, nonatomic) BOOL hasRoutingParameters;
@property (nonatomic) BOOL hasTripMuid;
@property (nonatomic) BOOL hasTripStaticDepartureTime;
@property (nonatomic) BOOL hasWindowStartTime;
@property (nonatomic) NSUInteger lineMuid;
@property (retain, nonatomic) NSData *routingParameters;
@property (nonatomic) NSUInteger tripMuid;
@property (nonatomic) unsigned int tripStaticDepartureTime;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int windowStartTime;


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