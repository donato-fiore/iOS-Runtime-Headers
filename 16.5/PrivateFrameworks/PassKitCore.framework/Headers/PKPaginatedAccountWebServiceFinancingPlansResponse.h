// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAGINATEDACCOUNTWEBSERVICEFINANCINGPLANSRESPONSE_H
#define PKPAGINATEDACCOUNTWEBSERVICEFINANCINGPLANSRESPONSE_H

@class NSArray;


#import "PKPaginatedAccountWebServiceResponse.h"
#import "PKAccount.h"

@interface PKPaginatedAccountWebServiceFinancingPlansResponse : PKPaginatedAccountWebServiceResponse

@property (readonly, nonatomic) PKAccount *account; // ivar: _account
@property (readonly, copy, nonatomic) NSArray *financingPlans; // ivar: _financingPlans


-(id)initWithData:(id)arg0 ;


@end


#endif