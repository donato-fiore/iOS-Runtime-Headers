// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTASSOCIATEDACCOUNTACTIONREQUEST_H
#define PKPEERPAYMENTASSOCIATEDACCOUNTACTIONREQUEST_H

@class NSString;


#import "PKPeerPaymentWebServiceRequest.h"

@interface PKPeerPaymentAssociatedAccountActionRequest : PKPeerPaymentWebServiceRequest {
    NSString *_associatedAccountIdentifier;
}


@property (copy, nonatomic) NSString *featureIdentifier; // ivar: _featureIdentifier
@property (copy, nonatomic) NSString *value; // ivar: _value


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;
-(id)initWithAssociatedAccountIdentifier:(id)arg0 ;


@end


#endif