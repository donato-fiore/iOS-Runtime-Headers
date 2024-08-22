// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBBILLDETAILSVALUE_H
#define _INPBBILLDETAILSVALUE_H

@class PBCodable, NSString;
@protocol _INPBBillDetailsValue, NSSecureCoding, NSCopying;


#import "_INPBCurrencyAmountValue.h"
#import "_INPBBillPayeeValue.h"
#import "_INPBDateTime.h"
#import "_INPBValueMetadata.h"

@interface _INPBBillDetailsValue : PBCodable <_INPBBillDetailsValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBCurrencyAmountValue *amountDue; // ivar: _amountDue
@property (retain, nonatomic) _INPBBillPayeeValue *billPayee; // ivar: _billPayee
@property (nonatomic) int billType; // ivar: _billType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBDateTime *dueDate; // ivar: _dueDate
@property (readonly, nonatomic) BOOL hasAmountDue;
@property (readonly, nonatomic) BOOL hasBillPayee;
@property (nonatomic) BOOL hasBillType;
@property (readonly, nonatomic) BOOL hasDueDate;
@property (readonly, nonatomic) BOOL hasLateFee;
@property (readonly, nonatomic) BOOL hasMinimumDue;
@property (readonly, nonatomic) BOOL hasPaymentDate;
@property (nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBCurrencyAmountValue *lateFee; // ivar: _lateFee
@property (retain, nonatomic) _INPBCurrencyAmountValue *minimumDue; // ivar: _minimumDue
@property (retain, nonatomic) _INPBDateTime *paymentDate; // ivar: _paymentDate
@property (nonatomic) int status; // ivar: _status
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata; // ivar: _valueMetadata


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)billTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsBillType:(id)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif