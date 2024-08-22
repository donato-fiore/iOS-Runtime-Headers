// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBPAYBILLINTENTRESPONSE_H
#define _INPBPAYBILLINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBPayBillIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBBillDetailsValue.h"
#import "_INPBFinancialAccountValue.h"
#import "_INPBPaymentAmountValue.h"
#import "_INPBString.h"
#import "_INPBDateTimeRange.h"

@interface _INPBPayBillIntentResponse : PBCodable <_INPBPayBillIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBBillDetailsValue *billDetails; // ivar: _billDetails
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBFinancialAccountValue *fromAccount; // ivar: _fromAccount
@property (readonly, nonatomic) BOOL hasBillDetails;
@property (readonly, nonatomic) BOOL hasFromAccount;
@property (readonly, nonatomic) BOOL hasTransactionAmount;
@property (readonly, nonatomic) BOOL hasTransactionNote;
@property (readonly, nonatomic) BOOL hasTransactionScheduledDate;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBPaymentAmountValue *transactionAmount; // ivar: _transactionAmount
@property (retain, nonatomic) _INPBString *transactionNote; // ivar: _transactionNote
@property (retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate; // ivar: _transactionScheduledDate


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