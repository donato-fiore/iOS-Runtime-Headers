// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTREQUESTPASSUPDATEREQUEST_H
#define PKPAYMENTREQUESTPASSUPDATEREQUEST_H



#import "PKPaymentWebServiceRequest.h"
#import "PKPaymentPass.h"
#import "PKPassUpgradeRequest.h"

@interface PKPaymentRequestPassUpdateRequest : PKPaymentWebServiceRequest

@property (readonly, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (readonly, nonatomic) PKPassUpgradeRequest *request; // ivar: _request


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithPaymentPass:(id)arg0 updateRequest:(id)arg1 ;


@end


#endif