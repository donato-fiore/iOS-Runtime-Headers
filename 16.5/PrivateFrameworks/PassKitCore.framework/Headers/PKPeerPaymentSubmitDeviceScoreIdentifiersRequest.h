// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTSUBMITDEVICESCOREIDENTIFIERSREQUEST_H
#define PKPEERPAYMENTSUBMITDEVICESCOREIDENTIFIERSREQUEST_H

@class NSString, NSUUID;


#import "PKPeerPaymentWebServiceRequest.h"

@interface PKPeerPaymentSubmitDeviceScoreIdentifiersRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *paymentIdentifier; // ivar: _paymentIdentifier
@property (copy, nonatomic) NSUUID *requestDeviceScoreIdentifier; // ivar: _requestDeviceScoreIdentifier
@property (copy, nonatomic) NSUUID *sendDeviceScoreIdentifier; // ivar: _sendDeviceScoreIdentifier


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;


@end


#endif