// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTWEBSERVICECUSTOMIZEPHYSICALCARDREQUEST_H
#define PKACCOUNTWEBSERVICECUSTOMIZEPHYSICALCARDREQUEST_H

@class NSString, NSURL;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebserviceCustomizePhysicalCardRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSString *accountUserAltDSID; // ivar: _accountUserAltDSID
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif