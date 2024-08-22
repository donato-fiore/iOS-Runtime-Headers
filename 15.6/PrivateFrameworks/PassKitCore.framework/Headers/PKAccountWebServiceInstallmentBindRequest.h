// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTWEBSERVICEINSTALLMENTBINDREQUEST_H
#define PKACCOUNTWEBSERVICEINSTALLMENTBINDREQUEST_H

@class NSString, NSURL, NSDecimalNumber;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServiceInstallmentBindRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (retain, nonatomic) NSDecimalNumber *bindingAmount; // ivar: _bindingAmount
@property (copy, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif