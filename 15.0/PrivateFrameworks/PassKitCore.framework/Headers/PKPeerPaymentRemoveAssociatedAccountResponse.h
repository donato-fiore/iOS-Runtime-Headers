// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTREMOVEASSOCIATEDACCOUNTRESPONSE_H
#define PKPEERPAYMENTREMOVEASSOCIATEDACCOUNTRESPONSE_H



#import "PKPeerPaymentWebServiceResponse.h"
#import "PKPeerPaymentAssociatedAccountInformation.h"

@interface PKPeerPaymentRemoveAssociatedAccountResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) PKPeerPaymentAssociatedAccountInformation *associatedAccountInformation; // ivar: _associatedAccountInformation


-(id)initWithData:(id)arg0 ;


@end


#endif