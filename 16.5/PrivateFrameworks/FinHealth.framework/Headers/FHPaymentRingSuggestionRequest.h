// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FHPAYMENTRINGSUGGESTIONREQUEST_H
#define FHPAYMENTRINGSUGGESTIONREQUEST_H

@class NSDecimalNumber, NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "FHStatementDetails.h"

@interface FHPaymentRingSuggestionRequest : NSObject

@property (retain, nonatomic) FHStatementDetails *currentStatement; // ivar: _currentStatement
@property (retain, nonatomic) NSDecimalNumber *currentStatementPaymentsSum; // ivar: _currentStatementPaymentsSum
@property (retain, nonatomic) NSDictionary *merchantCategoryTransactionSums; // ivar: _merchantCategoryTransactionSums
@property (retain, nonatomic) NSArray *paymentDetails; // ivar: _paymentDetails
@property (retain, nonatomic) FHStatementDetails *previousStatement; // ivar: _previousStatement
@property (retain, nonatomic) NSDecimalNumber *previousStatementPaymentsSum; // ivar: _previousStatementPaymentsSum
@property (retain, nonatomic) NSDecimalNumber *statementPurchasesSum; // ivar: _statementPurchasesSum


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithcurrentStatement:(id)arg0 previousStatement:(id)arg1 previousStatementPaymentsSum:(id)arg2 currentStatementPaymentsSum:(id)arg3 statementPurchasesSum:(id)arg4 merchantCategoryTransactionSums:(id)arg5 paymentDetails:(id)arg6 ;


@end


#endif