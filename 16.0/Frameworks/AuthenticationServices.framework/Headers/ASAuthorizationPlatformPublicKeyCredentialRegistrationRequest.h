// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASAUTHORIZATIONPLATFORMPUBLICKEYCREDENTIALREGISTRATIONREQUEST_H
#define ASAUTHORIZATIONPLATFORMPUBLICKEYCREDENTIALREGISTRATIONREQUEST_H

@class NSString, NSData, ASCPublicKeyCredentialCreationOptions;
@protocol ASAuthorizationPublicKeyCredentialRegistrationRequest;


#import "ASAuthorizationRequest.h"

@interface ASAuthorizationPlatformPublicKeyCredentialRegistrationRequest : ASAuthorizationRequest <ASAuthorizationPublicKeyCredentialRegistrationRequest>



@property (retain, nonatomic) NSString *attestationPreference; // ivar: _attestationPreference
@property (copy, nonatomic) NSData *challenge; // ivar: _challenge
@property (readonly, nonatomic) ASCPublicKeyCredentialCreationOptions *coreCredentialCreationOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSData *userID; // ivar: _userID
@property (retain, nonatomic) NSString *userVerificationPreference; // ivar: _userVerificationPreference


-(BOOL)supportsStyle:(NSInteger)arg0 ;
-(id)_initWithProvider:(id)arg0 relyingPartyIdentifier:(id)arg1 challenge:(id)arg2 name:(id)arg3 userID:(id)arg4 ;


@end


#endif