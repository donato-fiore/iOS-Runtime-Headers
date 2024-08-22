// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTREMOTECREDENTIALSUPDATERESPONSE_H
#define PKPAYMENTREMOTECREDENTIALSUPDATERESPONSE_H

@class NSArray;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentRemoteCredentialsUpdateResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *credentials; // ivar: _credentials


-(id)initWithData:(id)arg0 ;


@end


#endif