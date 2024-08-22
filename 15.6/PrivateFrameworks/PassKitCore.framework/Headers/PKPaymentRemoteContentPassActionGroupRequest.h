// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTREMOTECONTENTPASSACTIONGROUPREQUEST_H
#define PKPAYMENTREMOTECONTENTPASSACTIONGROUPREQUEST_H



#import "PKPaymentWebServiceRequest.h"
#import "PKPaymentPassActionGroup.h"

@interface PKPaymentRemoteContentPassActionGroupRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentPassActionGroup *actionGroup; // ivar: _actionGroup


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 passTypeIdentifier:(id)arg2 passSerialNumber:(id)arg3 appleAccountInformation:(id)arg4 ;


@end


#endif