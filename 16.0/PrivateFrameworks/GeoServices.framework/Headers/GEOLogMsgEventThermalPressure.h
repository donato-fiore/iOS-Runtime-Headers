// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMSGEVENTTHERMALPRESSURE_H
#define GEOLOGMSGEVENTTHERMALPRESSURE_H

@class PBCodable;
@protocol NSCopying;



@interface GEOLogMsgEventThermalPressure : PBCodable <NSCopying>

 {
    ? _disableMapFeatures;
    int _chargingState;
    int _collectionTrigger;
    int _navMapType;
    unsigned int _thermalPressure;
    ? _flags;
}


@property (nonatomic) int chargingState;
@property (nonatomic) int collectionTrigger;
@property (readonly, nonatomic) *int disableMapFeatures;
@property (readonly, nonatomic) NSUInteger disableMapFeaturesCount;
@property (nonatomic) BOOL hasChargingState;
@property (nonatomic) BOOL hasCollectionTrigger;
@property (nonatomic) BOOL hasNavMapType;
@property (nonatomic) BOOL hasThermalPressure;
@property (nonatomic) int navMapType;
@property (nonatomic) unsigned int thermalPressure;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)chargingStateAsString:(int)arg0 ;
-(id)collectionTriggerAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)disableMapFeaturesAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)navMapTypeAsString:(int)arg0 ;
-(int)StringAsChargingState:(id)arg0 ;
-(int)StringAsCollectionTrigger:(id)arg0 ;
-(int)StringAsDisableMapFeatures:(id)arg0 ;
-(int)StringAsNavMapType:(id)arg0 ;
-(int)disableMapFeaturesAtIndex:(NSUInteger)arg0 ;
-(void)addDisableMapFeatures:(int)arg0 ;
-(void)clearDisableMapFeatures;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif