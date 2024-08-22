// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPROVISIONINGPASSDATA_H
#define PKPAYMENTPROVISIONINGPASSDATA_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>

#import "PKSecureElementPass.h"

@interface PKPaymentProvisioningPassData : NSObject

@property (readonly, copy, nonatomic) NSString *ownershipToken; // ivar: _ownershipToken
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier; // ivar: _ownershipTokenIdentifier
@property (readonly, copy, nonatomic) NSURL *passURL; // ivar: _passURL
@property (retain, nonatomic) PKSecureElementPass *secureElementPass; // ivar: _secureElementPass
@property (readonly, nonatomic) BOOL suppressMakeDefaultPaymentPassOffer; // ivar: _suppressMakeDefaultPaymentPassOffer
@property (readonly, nonatomic) BOOL willProvisionWithAuthenticationDisabled; // ivar: _willProvisionWithAuthenticationDisabled


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSecureElementPass:(id)arg0 ;


@end


#endif