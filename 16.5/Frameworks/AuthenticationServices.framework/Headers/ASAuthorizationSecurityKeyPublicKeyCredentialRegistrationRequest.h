// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASAUTHORIZATIONSECURITYKEYPUBLICKEYCREDENTIALREGISTRATIONREQUEST_H
#define ASAUTHORIZATIONSECURITYKEYPUBLICKEYCREDENTIALREGISTRATIONREQUEST_H

@class NSArray, NSString, NSData, ASCPublicKeyCredentialCreationOptions;
@protocol ASAuthorizationPublicKeyCredentialRegistrationRequest;


#import "ASAuthorizationRequest.h"

@interface ASAuthorizationSecurityKeyPublicKeyCredentialRegistrationRequest : ASAuthorizationRequest <ASAuthorizationPublicKeyCredentialRegistrationRequest>

 {
    NSArray *_credentialParameters;
    NSArray *_excludedCredentials;
    NSString *_residentKeyPreference;
    os_unfair_lock_s _internalLock;
}


@property (retain, nonatomic) NSString *attestationPreference; // ivar: _attestationPreference
@property (copy, nonatomic) NSData *challenge; // ivar: _challenge
@property (readonly, nonatomic) ASCPublicKeyCredentialCreationOptions *coreCredentialCreationOptions;
@property (copy, nonatomic) NSArray *credentialParameters;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSArray *excludedCredentials;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (retain, nonatomic) NSString *residentKeyPreference;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSData *userID; // ivar: _userID
@property (retain, nonatomic) NSString *userVerificationPreference; // ivar: _userVerificationPreference


-(BOOL)supportsStyle:(NSInteger)arg0 ;
-(id)_initWithProvider:(id)arg0 relyingPartyIdentifier:(id)arg1 challenge:(id)arg2 displayName:(id)arg3 name:(id)arg4 userID:(id)arg5 ;


@end


#endif