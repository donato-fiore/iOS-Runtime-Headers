// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKBILLPAYMENTSELECTEDSUGGESTEDAMOUNTDATA_H
#define PKBILLPAYMENTSELECTEDSUGGESTEDAMOUNTDATA_H

@class NSString, NSDecimalNumber, NSDate;
@protocol NSSecureCoding, PKRecordObject;

#import <Foundation/Foundation.h>


@interface PKBillPaymentSelectedSuggestedAmountData : NSObject <NSSecureCoding, PKRecordObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *statementIdentifier; // ivar: _statementIdentifier
@property (nonatomic) NSUInteger suggestedAmountCategory; // ivar: _suggestedAmountCategory
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDecimalNumber *transactionAmount; // ivar: _transactionAmount
@property (copy, nonatomic) NSDate *transactionDate; // ivar: _transactionDate


+(BOOL)supportsSecureCoding;
+(id)recordNamePrefix;
+(id)recordType;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(id)initWithStatementIdentifier:(id)arg0 transactionDate:(id)arg1 transactionAmount:(id)arg2 suggestedAmountCategory:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRecord:(id)arg0 ;


@end


#endif