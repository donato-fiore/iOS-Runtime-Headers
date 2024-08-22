// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTPENDINGREQUESTPERFORMACTIONRESPONSE_H
#define PKPEERPAYMENTPENDINGREQUESTPERFORMACTIONRESPONSE_H

@class NSString;


#import "PKPeerPaymentWebServiceResponse.h"

@interface PKPeerPaymentPendingRequestPerformActionResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) NSString *status; // ivar: _status
@property (readonly, nonatomic) BOOL success; // ivar: _success


-(id)initWithData:(id)arg0 ;


@end


#endif