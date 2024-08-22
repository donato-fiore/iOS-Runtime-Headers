// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBPAYMENTRECORD_H
#define _INPBPAYMENTRECORD_H

@class PBCodable, NSString;
@protocol _INPBPaymentRecord, NSSecureCoding, NSCopying;


#import "_INPBCurrencyAmount.h"
#import "_INPBString.h"
#import "_INPBContact.h"
#import "_INPBPaymentMethodValue.h"

@interface _INPBPaymentRecord : PBCodable <_INPBPaymentRecord, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBCurrencyAmount *currencyAmount; // ivar: _currencyAmount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBCurrencyAmount *feeAmount; // ivar: _feeAmount
@property (readonly, nonatomic) BOOL hasCurrencyAmount;
@property (readonly, nonatomic) BOOL hasFeeAmount;
@property (readonly, nonatomic) BOOL hasNote;
@property (readonly, nonatomic) BOOL hasPayee;
@property (readonly, nonatomic) BOOL hasPayer;
@property (readonly, nonatomic) BOOL hasPaymentMethod;
@property (nonatomic) BOOL hasStatus;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBString *note; // ivar: _note
@property (retain, nonatomic) _INPBContact *payee; // ivar: _payee
@property (retain, nonatomic) _INPBContact *payer; // ivar: _payer
@property (retain, nonatomic) _INPBPaymentMethodValue *paymentMethod; // ivar: _paymentMethod
@property (nonatomic) int status; // ivar: _status
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif