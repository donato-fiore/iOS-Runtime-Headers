// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTREQUESTPASSUPDATERESPONSE_H
#define PKPAYMENTREQUESTPASSUPDATERESPONSE_H

@class NSString;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentRequestPassUpdateResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSUInteger appletState; // ivar: _appletState
@property (readonly, copy, nonatomic) NSString *passURL; // ivar: _passURL


-(id)initWithData:(id)arg0 ;


@end


#endif