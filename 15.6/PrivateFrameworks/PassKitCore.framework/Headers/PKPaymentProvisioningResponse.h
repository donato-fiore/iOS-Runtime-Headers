// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTPROVISIONINGRESPONSE_H
#define PKPAYMENTPROVISIONINGRESPONSE_H

@class NSArray, NSString, NSURL;


#import "PKPaymentWebServiceResponse.h"
#import "PKContactInformation.h"

@interface PKPaymentProvisioningResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) PKContactInformation *idmsContactInformation; // ivar: _idmsContactInformation
@property (readonly, copy, nonatomic) NSArray *moreInfoURLs; // ivar: _moreInfoURLs
@property (readonly, copy, nonatomic) NSString *ownershipToken; // ivar: _ownershipToken
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier; // ivar: _ownershipTokenIdentifier
@property (copy, nonatomic) NSURL *passURL; // ivar: _passURL
@property (readonly, nonatomic) BOOL willProvisionWithAuthenticationDisabled; // ivar: _willProvisionWithAuthenticationDisabled


-(id)initWithData:(id)arg0 ;


@end


#endif