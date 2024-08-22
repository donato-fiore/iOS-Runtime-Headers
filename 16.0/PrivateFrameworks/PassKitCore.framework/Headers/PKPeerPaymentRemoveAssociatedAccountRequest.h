// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTREMOVEASSOCIATEDACCOUNTREQUEST_H
#define PKPEERPAYMENTREMOVEASSOCIATEDACCOUNTREQUEST_H

@class NSString;


#import "PKPeerPaymentWebServiceRequest.h"

@interface PKPeerPaymentRemoveAssociatedAccountRequest : PKPeerPaymentWebServiceRequest {
    NSString *_associatedAccountIdentifier;
}




-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;
-(id)initWithAssociatedAccountIdentifier:(id)arg0 ;


@end


#endif