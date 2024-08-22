// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTWEBSERVICEADDFUNDINGSOURCERESPONSE_H
#define PKACCOUNTWEBSERVICEADDFUNDINGSOURCERESPONSE_H



#import "PKAccountWebServiceResponse.h"
#import "PKAccountPaymentFundingSource.h"

@interface PKAccountWebServiceAddFundingSourceResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) PKAccountPaymentFundingSource *fundingSource; // ivar: _fundingSource


-(id)initWithData:(id)arg0 ;


@end


#endif