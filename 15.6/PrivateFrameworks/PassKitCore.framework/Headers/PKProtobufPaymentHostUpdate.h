// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPROTOBUFPAYMENTHOSTUPDATE_H
#define PKPROTOBUFPAYMENTHOSTUPDATE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "PKProtobufPaymentMethod.h"
#import "PKProtobufShippingMethod.h"

@interface PKProtobufPaymentHostUpdate : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasPaymentMethod;
@property (readonly, nonatomic) BOOL hasRemotePaymentRequestIdentifier;
@property (readonly, nonatomic) BOOL hasShippingContact;
@property (readonly, nonatomic) BOOL hasShippingMethod;
@property (retain, nonatomic) PKProtobufPaymentMethod *paymentMethod; // ivar: _paymentMethod
@property (retain, nonatomic) NSString *remotePaymentRequestIdentifier; // ivar: _remotePaymentRequestIdentifier
@property (retain, nonatomic) NSData *shippingContact; // ivar: _shippingContact
@property (retain, nonatomic) PKProtobufShippingMethod *shippingMethod; // ivar: _shippingMethod


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