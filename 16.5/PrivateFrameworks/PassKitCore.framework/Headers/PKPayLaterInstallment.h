// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERINSTALLMENT_H
#define PKPAYLATERINSTALLMENT_H

@class NSArray, NSDate, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKPayLaterInstallment : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *appliedPayments; // ivar: _appliedPayments
@property (copy, nonatomic) PKCurrencyAmount *currentBalance; // ivar: _currentBalance
@property (copy, nonatomic) NSDate *dueDate; // ivar: _dueDate
@property (copy, nonatomic) NSString *installmentIdentifier; // ivar: _installmentIdentifier
@property (nonatomic) NSInteger interval; // ivar: _interval
@property (copy, nonatomic) NSArray *payments; // ivar: _payments
@property (copy, nonatomic) NSDate *payoffDate; // ivar: _payoffDate
@property (copy, nonatomic) NSString *planIdentifier; // ivar: _planIdentifier
@property (nonatomic) NSUInteger status; // ivar: _status
@property (copy, nonatomic) PKCurrencyAmount *totalAmount; // ivar: _totalAmount


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPayLaterInstallment:(id)arg0 ;
-(BOOL)paymentIdentitiferContributedToInstallment:(id)arg0 ;
-(NSUInteger)hash;
-(id)amountPaid;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif