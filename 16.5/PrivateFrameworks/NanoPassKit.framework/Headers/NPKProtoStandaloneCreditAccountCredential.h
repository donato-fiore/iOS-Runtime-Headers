// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOSTANDALONECREDITACCOUNTCREDENTIAL_H
#define NPKPROTOSTANDALONECREDITACCOUNTCREDENTIAL_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NPKProtoStandalonePaymentCredential.h"
#import "NPKProtoStandalonePaymentPass.h"

@interface NPKProtoStandaloneCreditAccountCredential : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat creditLimit; // ivar: _creditLimit
@property (retain, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (nonatomic) CGFloat currentBalance; // ivar: _currentBalance
@property (nonatomic) BOOL hasCreditLimit;
@property (readonly, nonatomic) BOOL hasCurrencyCode;
@property (nonatomic) BOOL hasCurrentBalance;
@property (readonly, nonatomic) BOOL hasPaymentPass;
@property (retain, nonatomic) NPKProtoStandalonePaymentCredential *paymentCredential; // ivar: _paymentCredential
@property (retain, nonatomic) NPKProtoStandalonePaymentPass *paymentPass; // ivar: _paymentPass


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