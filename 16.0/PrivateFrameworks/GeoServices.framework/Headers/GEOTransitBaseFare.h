// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTRANSITBASEFARE_H
#define GEOTRANSITBASEFARE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString, NSArray, NSDecimalNumber;
@protocol GEOTransitFare, NSCopying;


#import "GEOTransitPrice.h"

@interface GEOTransitBaseFare : PBCodable <GEOTransitFare, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _supportedPaymentMethodIndexs;
    GEOTransitPrice *_price;
    NSMutableArray *_supportedPaymentMethods;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _numberOfLegs;
    int _paymentType;
    BOOL _cashOnly;
    ? _flags;
}


@property (readonly, nonatomic) BOOL cashOnly;
@property (nonatomic) BOOL cashOnly;
@property (readonly, copy, nonatomic) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCashOnly;
@property (nonatomic) BOOL hasNumberOfLegs;
@property (nonatomic) BOOL hasPaymentType;
@property (readonly, nonatomic) BOOL hasPrice;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int numberOfLegs;
@property (nonatomic) int paymentType;
@property (retain, nonatomic) GEOTransitPrice *price;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *supportedICCardProviders;
@property (readonly, nonatomic) *unsigned int supportedPaymentMethodIndexs;
@property (readonly, nonatomic) *unsigned int supportedPaymentMethodIndexs;
@property (readonly, nonatomic) NSUInteger supportedPaymentMethodIndexsCount;
@property (readonly, nonatomic) NSUInteger supportedPaymentMethodIndexsCount;
@property (retain, nonatomic) NSMutableArray *supportedPaymentMethods;
@property (readonly, nonatomic) NSInteger type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (readonly, nonatomic) NSDecimalNumber *value;


+(BOOL)isValid:(id)arg0 ;
+(Class)supportedPaymentMethodType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)paymentTypeAsString:(int)arg0 ;
-(id)supportedPaymentMethodAtIndex:(NSUInteger)arg0 ;
-(int)StringAsPaymentType:(id)arg0 ;
-(unsigned int)supportedPaymentMethodIndexAtIndex:(NSUInteger)arg0 ;
-(void)addSupportedPaymentMethod:(id)arg0 ;
-(void)addSupportedPaymentMethodIndex:(unsigned int)arg0 ;
-(void)clearSupportedPaymentMethodIndexs;
-(void)clearSupportedPaymentMethods;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif