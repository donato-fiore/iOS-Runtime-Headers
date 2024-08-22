// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTNOTIFICATIONACTIONREQUEST_H
#define PKPAYMENTNOTIFICATIONACTIONREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"

@interface PKPaymentNotificationActionRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *action; // ivar: _action
@property (copy, nonatomic) NSString *requestID; // ivar: _requestID


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;


@end


#endif