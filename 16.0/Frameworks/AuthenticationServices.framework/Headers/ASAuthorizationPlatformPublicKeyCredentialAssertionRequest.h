// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASAUTHORIZATIONPLATFORMPUBLICKEYCREDENTIALASSERTIONREQUEST_H
#define ASAUTHORIZATIONPLATFORMPUBLICKEYCREDENTIALASSERTIONREQUEST_H

@class NSArray, NSData, ASCPublicKeyCredentialAssertionOptions, NSString;
@protocol ASAuthorizationPublicKeyCredentialAssertionRequest;


#import "ASAuthorizationRequest.h"

@interface ASAuthorizationPlatformPublicKeyCredentialAssertionRequest : ASAuthorizationRequest <ASAuthorizationPublicKeyCredentialAssertionRequest>



@property (copy, nonatomic) NSArray *allowedCredentials; // ivar: _allowedCredentials
@property (copy, nonatomic) NSData *challenge; // ivar: _challenge
@property (readonly, nonatomic) ASCPublicKeyCredentialAssertionOptions *coreCredentialAssertionOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *userVerificationPreference; // ivar: _userVerificationPreference


-(BOOL)supportsStyle:(NSInteger)arg0 ;
-(id)_initWithProvider:(id)arg0 relyingPartyIdentifier:(id)arg1 challenge:(id)arg2 ;


@end


#endif