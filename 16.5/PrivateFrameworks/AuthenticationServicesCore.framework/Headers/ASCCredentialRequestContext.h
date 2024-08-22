// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCCREDENTIALREQUESTCONTEXT_H
#define ASCCREDENTIALREQUESTCONTEXT_H

@class AKAuthorizationRequest, LAContext, NSString, NSArray, NSData, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ASGlobalFrameIdentifier.h"
#import "ASCPublicKeyCredentialAssertionOptions.h"
#import "ASCPublicKeyCredentialCreationOptions.h"

@interface ASCCredentialRequestContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) AKAuthorizationRequest *appleIDAuthorizationRequest; // ivar: _appleIDAuthorizationRequest
@property (retain, nonatomic) LAContext *authenticatedContext; // ivar: _authenticatedContext
@property (copy, nonatomic) ASGlobalFrameIdentifier *globalFrameID; // ivar: _globalFrameID
@property (nonatomic) BOOL isCABLEAuthenticatorRequest; // ivar: _isCABLEAuthenticatorRequest
@property (readonly, nonatomic) BOOL isClientLinkedOnOrAfterIOS15Aligned; // ivar: _isClientLinkedOnOrAfterIOS15Aligned
@property (readonly, nonatomic) BOOL isProxiedRequest;
@property (readonly, nonatomic) BOOL isRegistrationRequest;
@property (retain, nonatomic) ASCPublicKeyCredentialAssertionOptions *platformKeyCredentialAssertionOptions; // ivar: _platformKeyCredentialAssertionOptions
@property (retain, nonatomic) ASCPublicKeyCredentialCreationOptions *platformKeyCredentialCreationOptions; // ivar: _platformKeyCredentialCreationOptions
@property (copy, nonatomic) NSString *proxiedAppIdentifier; // ivar: _proxiedAppIdentifier
@property (copy, nonatomic) NSString *proxiedAppName; // ivar: _proxiedAppName
@property (copy, nonatomic) NSArray *proxiedAssociatedDomains; // ivar: _proxiedAssociatedDomains
@property (copy, nonatomic) NSString *proxiedBundleIdentifier; // ivar: _proxiedBundleIdentifier
@property (copy, nonatomic) NSData *proxiedIconData; // ivar: _proxiedIconData
@property (copy, nonatomic) NSNumber *proxiedIconScale; // ivar: _proxiedIconScale
@property (copy, nonatomic) NSString *proxiedOriginDeviceName; // ivar: _proxiedOriginDeviceName
@property (copy, nonatomic) NSString *proxiedTeamIdentifier; // ivar: _proxiedTeamIdentifier
@property (copy, nonatomic) NSString *proxySheetHeaderOverride; // ivar: _proxySheetHeaderOverride
@property (copy, nonatomic) NSString *proxySheetNoCredentialsErrorMessageOverride; // ivar: _proxySheetNoCredentialsErrorMessageOverride
@property (copy, nonatomic) NSString *proxySheetNoCredentialsErrorTitleOverride; // ivar: _proxySheetNoCredentialsErrorTitleOverride
@property (copy, nonatomic) NSString *proxySheetSubtitleOverride; // ivar: _proxySheetSubtitleOverride
@property (copy, nonatomic) NSString *proxySheetTitleOverride; // ivar: _proxySheetTitleOverride
@property (copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (nonatomic) NSUInteger requestOptions; // ivar: _requestOptions
@property (nonatomic) NSInteger requestStyle; // ivar: _requestStyle
@property (readonly, nonatomic) NSUInteger requestTypes; // ivar: _requestTypes
@property (retain, nonatomic) ASCPublicKeyCredentialAssertionOptions *securityKeyCredentialAssertionOptions; // ivar: _securityKeyCredentialAssertionOptions
@property (retain, nonatomic) ASCPublicKeyCredentialCreationOptions *securityKeyCredentialCreationOptions; // ivar: _securityKeyCredentialCreationOptions
@property (nonatomic) BOOL useAlternativeSecurityKeysIcon; // ivar: _useAlternativeSecurityKeysIcon
@property (copy, nonatomic) NSString *windowSceneIdentifier; // ivar: _windowSceneIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestTypes:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)logRequest;
-(void)removePasskeyRequests;
-(void)removeSecurityKeyRequests;
-(void)sanitizeRequestTypesForAutoFillRequestIfNecessary;


@end


#endif