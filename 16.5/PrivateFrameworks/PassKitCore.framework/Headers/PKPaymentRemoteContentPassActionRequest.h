// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTREMOTECONTENTPASSACTIONREQUEST_H
#define PKPAYMENTREMOTECONTENTPASSACTIONREQUEST_H



#import "PKPaymentWebServiceRequest.h"
#import "PKPaymentPassAction.h"

@interface PKPaymentRemoteContentPassActionRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentPassAction *action; // ivar: _action


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 passTypeIdentifier:(id)arg2 passSerialNumber:(id)arg3 appleAccountInformation:(id)arg4 ;


@end


#endif