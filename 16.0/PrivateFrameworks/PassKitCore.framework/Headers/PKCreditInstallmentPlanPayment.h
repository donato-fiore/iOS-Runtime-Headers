// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCREDITINSTALLMENTPLANPAYMENT_H
#define PKCREDITINSTALLMENTPLANPAYMENT_H

@class NSDecimalNumber, NSString, NSDate, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCreditAccountStatement.h"

@interface PKCreditInstallmentPlanPayment : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDecimalNumber *amountDue; // ivar: _amountDue
@property (retain, nonatomic) NSDecimalNumber *amountPaid; // ivar: _amountPaid
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (retain, nonatomic) NSDate *dueDate; // ivar: _dueDate
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *lineItems; // ivar: _lineItems
@property (readonly, nonatomic) NSString *localizedDisplay;
@property (retain, nonatomic) NSDecimalNumber *originalAmountDue; // ivar: _originalAmountDue
@property (readonly, nonatomic, getter=isPaid) BOOL paid;
@property (nonatomic) NSUInteger paymentCount; // ivar: _paymentCount
@property (nonatomic) NSUInteger paymentNumber; // ivar: _paymentNumber
@property (retain, nonatomic) PKCreditAccountStatement *statement; // ivar: _statement
@property (retain, nonatomic) NSDate *statementDate; // ivar: _statementDate
@property (copy, nonatomic) NSString *statementIdentifier; // ivar: _statementIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToInstallmentPlanPayment:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif