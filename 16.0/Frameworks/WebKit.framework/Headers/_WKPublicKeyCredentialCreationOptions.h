// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKPUBLICKEYCREDENTIALCREATIONOPTIONS_H
#define _WKPUBLICKEYCREDENTIALCREATIONOPTIONS_H

@class NSArray, NSData, NSNumber;

#import <Foundation/Foundation.h>

#import "_WKAuthenticatorSelectionCriteria.h"
#import "_WKAuthenticationExtensionsClientInputs.h"
#import "_WKPublicKeyCredentialRelyingPartyEntity.h"
#import "_WKPublicKeyCredentialUserEntity.h"

@interface _WKPublicKeyCredentialCreationOptions : NSObject

@property (nonatomic) NSInteger attestation; // ivar: _attestation
@property (retain, nonatomic) _WKAuthenticatorSelectionCriteria *authenticatorSelection; // ivar: _authenticatorSelection
@property (copy, nonatomic) NSArray *excludeCredentials; // ivar: _excludeCredentials
@property (retain, nonatomic) _WKAuthenticationExtensionsClientInputs *extensions; // ivar: _extensions
@property (retain, nonatomic) NSData *extensionsCBOR; // ivar: _extensionsCBOR
@property (copy, nonatomic) NSArray *publicKeyCredentialParamaters; // ivar: _publicKeyCredentialParamaters
@property (retain, nonatomic) _WKPublicKeyCredentialRelyingPartyEntity *relyingParty; // ivar: _relyingParty
@property (copy, nonatomic) NSNumber *timeout; // ivar: _timeout
@property (retain, nonatomic) _WKPublicKeyCredentialUserEntity *user; // ivar: _user


-(id)initWithRelyingParty:(id)arg0 user:(id)arg1 publicKeyCredentialParamaters:(id)arg2 ;
-(void)dealloc;


@end


#endif