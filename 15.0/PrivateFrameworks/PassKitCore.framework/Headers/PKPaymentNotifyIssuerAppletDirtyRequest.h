// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTNOTIFYISSUERAPPLETDIRTYREQUEST_H
#define PKPAYMENTNOTIFYISSUERAPPLETDIRTYREQUEST_H

@class NSString;


#import "PKPaymentWebServiceRequest.h"

@interface PKPaymentNotifyIssuerAppletDirtyRequest : PKPaymentWebServiceRequest {
    NSString *_passSerialNumber;
    NSString *_deviceAccountIdentifier;
}




-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithPassSerialNumber:(id)arg0 deviceAccountIdentifier:(id)arg1 ;


@end


#endif