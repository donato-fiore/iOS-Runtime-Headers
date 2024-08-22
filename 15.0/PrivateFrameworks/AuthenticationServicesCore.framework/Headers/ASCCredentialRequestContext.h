// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCCREDENTIALREQUESTCONTEXT_H
#define ASCCREDENTIALREQUESTCONTEXT_H

@class AKAuthorizationRequest, NSArray, NSData, NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ASCPublicKeyCredentialCreationOptions.h"

@interface ASCCredentialRequestContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) AKAuthorizationRequest *appleIDAuthorizationRequest; // ivar: _appleIDAuthorizationRequest
@property (readonly, nonatomic) BOOL isClientLinkedOnOrAfterIOS15Aligned; // ivar: _isClientLinkedOnOrAfterIOS15Aligned
@property (readonly, nonatomic) BOOL isProxiedRequest;
@property (retain, nonatomic) NSArray *platformAllowedCredentials; // ivar: _platformAllowedCredentials
@property (retain, nonatomic) NSData *platformCredentialChallenge; // ivar: _platformCredentialChallenge
@property (retain, nonatomic) ASCPublicKeyCredentialCreationOptions *platformKeyCredentialCreationOptions; // ivar: _platformKeyCredentialCreationOptions
@property (copy, nonatomic) NSString *proxiedAppIdentifier; // ivar: _proxiedAppIdentifier
@property (copy, nonatomic) NSString *proxiedAppName; // ivar: _proxiedAppName
@property (copy, nonatomic) NSArray *proxiedAssociatedDomains; // ivar: _proxiedAssociatedDomains
@property (copy, nonatomic) NSString *proxiedBundleIdentifier; // ivar: _proxiedBundleIdentifier
@property (copy, nonatomic) NSData *proxiedIconData; // ivar: _proxiedIconData
@property (copy, nonatomic) NSNumber *proxiedIconScale; // ivar: _proxiedIconScale
@property (copy, nonatomic) NSString *proxiedOriginDeviceName; // ivar: _proxiedOriginDeviceName
@property (copy, nonatomic) NSString *proxiedTeamIdentifier; // ivar: _proxiedTeamIdentifier
@property (copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (readonly, nonatomic) NSUInteger requestTypes; // ivar: _requestTypes
@property (retain, nonatomic) NSArray *securityKeyAllowedCredentials; // ivar: _securityKeyAllowedCredentials
@property (retain, nonatomic) NSData *securityKeyCredentialChallenge; // ivar: _securityKeyCredentialChallenge
@property (retain, nonatomic) ASCPublicKeyCredentialCreationOptions *securityKeyCredentialCreationOptions; // ivar: _securityKeyCredentialCreationOptions
@property (nonatomic) BOOL shouldPlatformCredentialsRequireUserVerification; // ivar: _shouldPlatformCredentialsRequireUserVerification


+(BOOL)supportsSecureCoding;
-(NSUInteger)_filteredRequestTypesForTypes:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestTypes:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sanitizeIfNecessary;


@end


#endif