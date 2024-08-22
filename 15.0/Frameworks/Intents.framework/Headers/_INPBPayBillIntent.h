// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBPAYBILLINTENT_H
#define _INPBPAYBILLINTENT_H

@class PBCodable, NSString;
@protocol _INPBPayBillIntent, NSSecureCoding, NSCopying;


#import "_INPBBillPayeeValue.h"
#import "_INPBDateTimeRange.h"
#import "_INPBFinancialAccountValue.h"
#import "_INPBIntentMetadata.h"
#import "_INPBPaymentAmountValue.h"
#import "_INPBString.h"

@interface _INPBPayBillIntent : PBCodable <_INPBPayBillIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBBillPayeeValue *billPayee; // ivar: _billPayee
@property (nonatomic) int billType; // ivar: _billType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBDateTimeRange *dueDate; // ivar: _dueDate
@property (retain, nonatomic) _INPBFinancialAccountValue *fromAccount; // ivar: _fromAccount
@property (readonly, nonatomic) BOOL hasBillPayee;
@property (nonatomic) BOOL hasBillType;
@property (readonly, nonatomic) BOOL hasDueDate;
@property (readonly, nonatomic) BOOL hasFromAccount;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasTransactionAmount;
@property (readonly, nonatomic) BOOL hasTransactionNote;
@property (readonly, nonatomic) BOOL hasTransactionScheduledDate;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBPaymentAmountValue *transactionAmount; // ivar: _transactionAmount
@property (retain, nonatomic) _INPBString *transactionNote; // ivar: _transactionNote
@property (retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate; // ivar: _transactionScheduledDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)billTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsBillType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif