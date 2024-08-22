// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTREMOTECONTENTPASSACTIONREQUEST_H
#define PKPAYMENTREMOTECONTENTPASSACTIONREQUEST_H



#import "PKPaymentWebServiceRequest.h"
#import "PKPaymentPassAction.h"
#import "PKPaymentPass.h"

@interface PKPaymentRemoteContentPassActionRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentPassAction *action; // ivar: _action
@property (retain, nonatomic) PKPaymentPass *pass; // ivar: _pass


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;


@end


#endif