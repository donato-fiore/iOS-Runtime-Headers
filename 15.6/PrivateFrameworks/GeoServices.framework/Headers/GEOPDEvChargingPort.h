// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDEVCHARGINGPORT_H
#define GEOPDEVCHARGINGPORT_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOPDEvChargingPort : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    int _chargingConnectorType;
    int _chargingLevel;
    unsigned int _power;
    ? _flags;
}


@property (nonatomic) int chargingConnectorType;
@property (nonatomic) int chargingLevel;
@property (nonatomic) BOOL hasChargingConnectorType;
@property (nonatomic) BOOL hasChargingLevel;
@property (nonatomic) BOOL hasPower;
@property (nonatomic) unsigned int power;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)chargingConnectorTypeAsString:(int)arg0 ;
-(id)chargingLevelAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsChargingConnectorType:(id)arg0 ;
-(int)StringAsChargingLevel:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif