// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTREWRAPRESPONSEBASE_H
#define PKPAYMENTREWRAPRESPONSEBASE_H

@class NSString, NSData;


#import "PKPaymentWebServiceResponse.h"
#import "PKAccount.h"
#import "PKPayLaterFinancingPlan.h"

@interface PKPaymentRewrapResponseBase : PKPaymentWebServiceResponse

@property (readonly, nonatomic) PKAccount *account; // ivar: _account
@property (readonly, nonatomic) PKPayLaterFinancingPlan *financingPlan; // ivar: _financingPlan
@property (readonly, copy, nonatomic) NSString *primaryAccountNumberSuffix; // ivar: _primaryAccountNumberSuffix
@property (copy, nonatomic) NSData *rewrappedPaymentData; // ivar: _rewrappedPaymentData
@property (readonly, copy, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier


-(id)initWithData:(id)arg0 ;


@end


#endif