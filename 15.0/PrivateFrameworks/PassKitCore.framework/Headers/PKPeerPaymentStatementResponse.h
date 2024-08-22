// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTSTATEMENTRESPONSE_H
#define PKPEERPAYMENTSTATEMENTRESPONSE_H

@class NSString;


#import "PKPeerPaymentWebServiceResponse.h"

@interface PKPeerPaymentStatementResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress


-(id)initWithData:(id)arg0 ;


@end


#endif