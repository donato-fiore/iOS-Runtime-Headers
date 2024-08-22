// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBTRANSFERMONEYINTENTRESPONSE_H
#define _INPBTRANSFERMONEYINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBTransferMoneyIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBFinancialAccountValue.h"
#import "_INPBPaymentAmountValue.h"
#import "_INPBDateTimeRange.h"
#import "_INPBCurrencyAmountValue.h"

@interface _INPBTransferMoneyIntentResponse : PBCodable <_INPBTransferMoneyIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBFinancialAccountValue *fromAccount; // ivar: _fromAccount
@property (readonly, nonatomic) BOOL hasFromAccount;
@property (readonly, nonatomic) BOOL hasToAccount;
@property (readonly, nonatomic) BOOL hasTransactionAmount;
@property (readonly, nonatomic) BOOL hasTransactionNote;
@property (readonly, nonatomic) BOOL hasTransactionScheduledDate;
@property (readonly, nonatomic) BOOL hasTransferFee;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBFinancialAccountValue *toAccount; // ivar: _toAccount
@property (retain, nonatomic) _INPBPaymentAmountValue *transactionAmount; // ivar: _transactionAmount
@property (copy, nonatomic) NSString *transactionNote; // ivar: _transactionNote
@property (retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate; // ivar: _transactionScheduledDate
@property (retain, nonatomic) _INPBCurrencyAmountValue *transferFee; // ivar: _transferFee


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif