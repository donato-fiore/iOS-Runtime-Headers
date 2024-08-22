// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTREQUIREMENTSRESPONSE_H
#define PKPAYMENTREQUIREMENTSRESPONSE_H

@class NSURL, NSString, NSArray;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentRequirementsResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSURL *learnMoreURL; // ivar: _learnMoreURL
@property (readonly, copy, nonatomic) NSString *nonce; // ivar: _nonce
@property (readonly, copy, nonatomic) NSArray *possibleProducts; // ivar: _possibleProducts
@property (readonly, copy, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (readonly, copy, nonatomic) NSArray *requiredPaymentSetupFields; // ivar: _requiredPaymentSetupFields
@property (readonly, nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)initWithData:(id)arg0 ;
-(id)initWithNoRequirements;
-(id)initWithProduct:(id)arg0 ;
-(id)initWithProvisioningMethodMetadata:(id)arg0 ;
-(id)initWithRemoteCredential:(id)arg0 ;


@end


#endif