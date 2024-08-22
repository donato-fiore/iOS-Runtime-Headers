// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBPAYMENTAMOUNTVALUE_H
#define _INPBPAYMENTAMOUNTVALUE_H

@class PBCodable, NSString;
@protocol _INPBPaymentAmountValue, NSSecureCoding, NSCopying;


#import "_INPBCurrencyAmountValue.h"

@interface _INPBPaymentAmountValue : PBCodable <_INPBPaymentAmountValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int amountType; // ivar: _amountType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAmountType;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBCurrencyAmountValue *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)amountTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsAmountType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif