// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTRANSITPRICE_H
#define GEOTRANSITPRICE_H

@class PBCodable, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEOTransitPrice : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSString *_currencyCode;
    int _amountInCents;
    unsigned int _subunit;
    ? _flags;
}


@property (nonatomic) int amountInCents;
@property (retain, nonatomic) NSString *currencyCode;
@property (nonatomic) BOOL hasAmountInCents;
@property (readonly, nonatomic) BOOL hasCurrencyCode;
@property (nonatomic) BOOL hasSubunit;
@property (nonatomic) unsigned int subunit;
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