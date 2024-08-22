// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPROTOBUFPAYMENT_H
#define PKPROTOBUFPAYMENT_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "PKProtobufShippingMethod.h"
#import "PKProtobufPaymentToken.h"

@interface PKProtobufPayment : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *billingContact; // ivar: _billingContact
@property (readonly, nonatomic) BOOL hasBillingContact;
@property (readonly, nonatomic) BOOL hasShippingContact;
@property (readonly, nonatomic) BOOL hasShippingMethod;
@property (readonly, nonatomic) BOOL hasToken;
@property (retain, nonatomic) NSData *shippingContact; // ivar: _shippingContact
@property (retain, nonatomic) PKProtobufShippingMethod *shippingMethod; // ivar: _shippingMethod
@property (retain, nonatomic) PKProtobufPaymentToken *token; // ivar: _token


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif