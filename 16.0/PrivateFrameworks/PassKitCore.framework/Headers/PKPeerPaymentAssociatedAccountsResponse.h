// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTASSOCIATEDACCOUNTSRESPONSE_H
#define PKPEERPAYMENTASSOCIATEDACCOUNTSRESPONSE_H



#import "PKPeerPaymentWebServiceResponse.h"
#import "PKPeerPaymentAssociatedAccountInformation.h"

@interface PKPeerPaymentAssociatedAccountsResponse : PKPeerPaymentWebServiceResponse

@property (readonly, copy, nonatomic) PKPeerPaymentAssociatedAccountInformation *associatedAccountInformation; // ivar: _associatedAccountInformation


-(id)initWithData:(id)arg0 ;


@end


#endif