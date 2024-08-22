// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTPENDINGREQUESTSRESPONSE_H
#define PKPEERPAYMENTPENDINGREQUESTSRESPONSE_H

@class NSArray;


#import "PKPeerPaymentWebServiceResponse.h"

@interface PKPeerPaymentPendingRequestsResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *requestSummaries; // ivar: _requestSummaries


-(id)initWithData:(id)arg0 ;


@end


#endif