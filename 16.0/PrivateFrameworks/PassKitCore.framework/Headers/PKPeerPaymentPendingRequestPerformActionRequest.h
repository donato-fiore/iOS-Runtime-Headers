// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTPENDINGREQUESTPERFORMACTIONREQUEST_H
#define PKPEERPAYMENTPENDINGREQUESTPERFORMACTIONREQUEST_H

@class NSString;


#import "PKPeerPaymentWebServiceRequest.h"

@interface PKPeerPaymentPendingRequestPerformActionRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *action; // ivar: _action
@property (copy, nonatomic) NSString *requestToken; // ivar: _requestToken


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;


@end


#endif