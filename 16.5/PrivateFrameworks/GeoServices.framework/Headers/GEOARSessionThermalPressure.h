// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOARSESSIONTHERMALPRESSURE_H
#define GEOARSESSIONTHERMALPRESSURE_H

@class PBCodable;
@protocol NSCopying;



@interface GEOARSessionThermalPressure : PBCodable <NSCopying>

 {
    CGFloat _timestamp;
    int _chargingState;
    int _collectionTrigger;
    unsigned int _thermalPressure;
    ? _flags;
}


@property (nonatomic) int chargingState;
@property (nonatomic) int collectionTrigger;
@property (nonatomic) BOOL hasChargingState;
@property (nonatomic) BOOL hasCollectionTrigger;
@property (nonatomic) BOOL hasThermalPressure;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int thermalPressure;
@property (nonatomic) CGFloat timestamp;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)chargingStateAsString:(int)arg0 ;
-(id)collectionTriggerAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsChargingState:(id)arg0 ;
-(int)StringAsCollectionTrigger:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif