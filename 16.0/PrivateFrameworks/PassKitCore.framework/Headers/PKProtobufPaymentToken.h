// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPROTOBUFPAYMENTTOKEN_H
#define PKPROTOBUFPAYMENTTOKEN_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "PKProtobufPaymentMethod.h"

@interface PKProtobufPaymentToken : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasInstrumentName;
@property (readonly, nonatomic) BOOL hasNetwork;
@property (readonly, nonatomic) BOOL hasPaymentData;
@property (readonly, nonatomic) BOOL hasPaymentMethod;
@property (readonly, nonatomic) BOOL hasRedeemURL;
@property (readonly, nonatomic) BOOL hasRetryNonce;
@property (readonly, nonatomic) BOOL hasTransactionIdentifier;
@property (retain, nonatomic) NSString *instrumentName; // ivar: _instrumentName
@property (retain, nonatomic) NSString *network; // ivar: _network
@property (retain, nonatomic) NSData *paymentData; // ivar: _paymentData
@property (retain, nonatomic) PKProtobufPaymentMethod *paymentMethod; // ivar: _paymentMethod
@property (retain, nonatomic) NSString *redeemURL; // ivar: _redeemURL
@property (retain, nonatomic) NSString *retryNonce; // ivar: _retryNonce
@property (retain, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier


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