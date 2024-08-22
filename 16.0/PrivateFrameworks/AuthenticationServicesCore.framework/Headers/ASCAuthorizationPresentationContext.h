// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCAUTHORIZATIONPRESENTATIONCONTEXT_H
#define ASCAUTHORIZATIONPRESENTATIONCONTEXT_H

@class NSArray, NSString, AKAuthorizationRequest, NSURL, NSData, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASCAuthorizationPresentationContext : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger _passkeyURLType; // ivar: _passkeyURLType
@property (readonly, copy, nonatomic) NSArray *allowedCredentialsForSecurityKeyAssertion; // ivar: _allowedCredentialsForSecurityKeyAssertion
@property (readonly, copy, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property (retain, nonatomic) AKAuthorizationRequest *appleIDAuthorizationRequest; // ivar: _appleIDAuthorizationRequest
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSURL *cableAuthenticatorURL; // ivar: _cableAuthenticatorURL
@property (copy, nonatomic) NSString *destinationSiteForCrossSiteAssertion; // ivar: _destinationSiteForCrossSiteAssertion
@property (readonly, nonatomic) BOOL hasExternalPasswords;
@property (readonly, nonatomic) BOOL isCABLEAuthenticatorRequest; // ivar: _isCABLEAuthenticatorRequest
@property (readonly, nonatomic) BOOL isCombinedPublicKeyCredentialRegistrationRequest;
@property (nonatomic) BOOL isProxiedRequest; // ivar: _isProxiedRequest
@property (readonly, nonatomic) BOOL isRegistrationRequest;
@property (readonly, nonatomic) NSArray *localAccountLoginChoices;
@property (readonly, copy, nonatomic) NSArray *loginChoices; // ivar: _loginChoices
@property (readonly, nonatomic) NSString *overrideHeader; // ivar: _overrideHeader
@property (readonly, nonatomic) NSString *overrideSubtitle; // ivar: _overrideSubtitle
@property (readonly, nonatomic) NSString *overrideTitle; // ivar: _overrideTitle
@property (readonly, copy, nonatomic) NSString *platformUserVerificationPreference; // ivar: _platformUserVerificationPreference
@property (copy, nonatomic) NSArray *proxiedAssociatedDomains; // ivar: _proxiedAssociatedDomains
@property (copy, nonatomic) NSData *proxiedIconData; // ivar: _proxiedIconData
@property (copy, nonatomic) NSNumber *proxiedIconScale; // ivar: _proxiedIconScale
@property (copy, nonatomic) NSString *proxiedOriginDeviceName; // ivar: _proxiedOriginDeviceName
@property (readonly, nonatomic) NSUInteger requestTypes; // ivar: _requestTypes
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly, nonatomic) BOOL shouldRequireCABLEAuthenticatorConsent; // ivar: _shouldRequireCABLEAuthenticatorConsent
@property (readonly, copy, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)_passwordLoginChoice:(id)arg0 hasSameHighLevelDomainAndUsernameAsPasskeyLoginChoice:(id)arg1 ;
-(id)_initWithCABLEAuthenticatorURL:(id)arg0 shouldRequireConsent:(BOOL)arg1 passkeyURLType:(NSInteger)arg2 ;
-(id)_passkeyLoginChoices;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestContext:(id)arg0 appIdentifier:(id)arg1 ;
-(id)initWithRequestContext:(id)arg0 appIdentifier:(id)arg1 shouldUseRelyingPartyForServiceName:(BOOL)arg2 ;
-(void)_getPrimaryLoginChoices:(*id)arg0 otherLoginChoices:(*id)arg1 ;
-(void)addLoginChoice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateLoginChoices:(id)arg0 ;


@end


#endif