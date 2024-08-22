// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPRICE_H
#define GEOPRICE_H

@class PBCodable, PBUnknownFields, NSString;
@protocol GEOServerFormatTokenPriceValue, NSCopying;



@interface GEOPrice : PBCodable <GEOServerFormatTokenPriceValue, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSString *_currencyCode;
    float _amount;
    ? _flags;
}


@property (nonatomic) float amount;
@property (readonly, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAmount;
@property (readonly, nonatomic) BOOL hasCurrencyCode;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (readonly, nonatomic) CGFloat value;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
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