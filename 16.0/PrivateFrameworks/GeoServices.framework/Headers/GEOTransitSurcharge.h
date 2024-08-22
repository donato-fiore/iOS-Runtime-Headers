// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTRANSITSURCHARGE_H
#define GEOTRANSITSURCHARGE_H

@class PBCodable, PBUnknownFields, NSMutableArray;
@protocol NSCopying;



@interface GEOTransitSurcharge : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_surchargeUnits;
    unsigned int _numberOfLegs;
    int _paymentType;
    ? _flags;
}


@property (nonatomic) BOOL hasNumberOfLegs;
@property (nonatomic) BOOL hasPaymentType;
@property (nonatomic) unsigned int numberOfLegs;
@property (nonatomic) int paymentType;
@property (retain, nonatomic) NSMutableArray *surchargeUnits;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)surchargeUnitType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)paymentTypeAsString:(int)arg0 ;
-(id)surchargeUnitAtIndex:(NSUInteger)arg0 ;
-(int)StringAsPaymentType:(id)arg0 ;
-(void)addSurchargeUnit:(id)arg0 ;
-(void)clearSurchargeUnits;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif