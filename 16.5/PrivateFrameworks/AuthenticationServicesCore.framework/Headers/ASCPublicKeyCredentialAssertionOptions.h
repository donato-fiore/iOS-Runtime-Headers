// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCPUBLICKEYCREDENTIALASSERTIONOPTIONS_H
#define ASCPUBLICKEYCREDENTIALASSERTIONOPTIONS_H

@class NSArray, NSData, NSString, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ASCWebAuthenticationExtensionsClientInputs.h"

@interface ASCPublicKeyCredentialAssertionOptions : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSArray *allowedCredentials; // ivar: _allowedCredentials
@property (readonly, copy, nonatomic) NSData *challenge; // ivar: _challenge
@property (copy, nonatomic) NSData *clientDataHash; // ivar: _clientDataHash
@property (readonly, nonatomic) NSUInteger credentialKind; // ivar: _credentialKind
@property (copy, nonatomic) NSString *destinationSiteForCrossSiteAssertion; // ivar: _destinationSiteForCrossSiteAssertion
@property (copy, nonatomic) ASCWebAuthenticationExtensionsClientInputs *extensions; // ivar: _extensions
@property (copy, nonatomic) NSData *extensionsCBOR; // ivar: _extensionsCBOR
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (copy, nonatomic) NSNumber *timeout; // ivar: _timeout
@property (readonly, copy, nonatomic) NSString *userVerificationPreference; // ivar: _userVerificationPreference


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKind:(NSUInteger)arg0 relyingPartyIdentifier:(id)arg1 challenge:(id)arg2 userVerificationPreference:(id)arg3 allowedCredentials:(id)arg4 ;
-(id)initWithKind:(NSUInteger)arg0 relyingPartyIdentifier:(id)arg1 clientDataHash:(id)arg2 userVerificationPreference:(id)arg3 allowedCredentials:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)logRequest;


@end


#endif