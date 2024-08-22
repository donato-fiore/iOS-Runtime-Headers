// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCAUTHORIZATIONPRESENTATIONCONTEXT_H
#define ASCAUTHORIZATIONPRESENTATIONCONTEXT_H

@class NSString, AKAuthorizationRequest, NSArray, NSData, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASCAuthorizationPresentationContext : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property (retain, nonatomic) AKAuthorizationRequest *appleIDAuthorizationRequest; // ivar: _appleIDAuthorizationRequest
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) BOOL hasExternalPasswords;
@property (readonly, nonatomic) BOOL isCombinedPublicKeyCredentialRegistrationRequest;
@property (nonatomic) BOOL isProxiedRequest; // ivar: _isProxiedRequest
@property (readonly, nonatomic) BOOL isRegistrationRequest;
@property (readonly, copy, nonatomic) NSArray *loginChoices; // ivar: _loginChoices
@property (copy, nonatomic) NSArray *proxiedAssociatedDomains; // ivar: _proxiedAssociatedDomains
@property (copy, nonatomic) NSData *proxiedIconData; // ivar: _proxiedIconData
@property (copy, nonatomic) NSNumber *proxiedIconScale; // ivar: _proxiedIconScale
@property (copy, nonatomic) NSString *proxiedOriginDeviceName; // ivar: _proxiedOriginDeviceName
@property (readonly, nonatomic) NSUInteger requestTypes; // ivar: _requestTypes
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly, nonatomic) BOOL shouldPlatformCredentialsRequireUserVerification; // ivar: _shouldPlatformCredentialsRequireUserVerification
@property (readonly, copy, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestContext:(id)arg0 appIdentifier:(id)arg1 ;
-(void)addLoginChoice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateLoginChoices:(id)arg0 ;


@end


#endif