// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTREMOTECREDENTIALSRESPONSE_H
#define PKPAYMENTREMOTECREDENTIALSRESPONSE_H

@class NSArray;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentRemoteCredentialsResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *credentials; // ivar: _credentials


-(id)initWithData:(id)arg0 ;


@end


#endif