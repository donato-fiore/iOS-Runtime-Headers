// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKCREDENTIALREQUESTCONTEXT_H
#define AKCREDENTIALREQUESTCONTEXT_H

@class NSString, NSData, NSNumber, NSValue, NSArray, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AKAuthorizationUpgradeContext.h"
#import "AKAuthorizationRequest.h"
#import "AKPasswordRequest.h"

@interface AKCredentialRequestContext : NSObject <NSCopying, NSSecureCoding>

 {
    BOOL _passcodeProtected;
}


@property (nonatomic) CGFloat _authSessionTimeoutInterval; // ivar: _authSessionTimeoutInterval
@property (retain, nonatomic) NSString *_callerBundleID; // ivar: _callerBundleID
@property (nonatomic) BOOL _clientShouldAuthenticateExternally; // ivar: _clientShouldAuthenticateExternally
@property (copy, nonatomic) NSString *_continuationRequestIdentifier; // ivar: _continuationRequestIdentifier
@property (copy, nonatomic) NSString *_externalAuthToken; // ivar: _externalAuthToken
@property (copy, nonatomic) NSData *_externalLocalAuthData; // ivar: _externalLocalAuthData
@property (copy, nonatomic) NSData *_iconData; // ivar: _iconData
@property (copy, nonatomic) NSString *_iconName; // ivar: _iconName
@property (copy, nonatomic) NSNumber *_iconScale; // ivar: _iconScale
@property (copy, nonatomic) NSValue *_iconSize; // ivar: _iconSize
@property (copy, nonatomic) NSString *_informativeText; // ivar: _informativeText
@property (readonly, nonatomic) BOOL _isEligibleForUpgradeFromPassword; // ivar: _isEligibleForUpgradeFromPassword
@property (nonatomic) BOOL _isFirstPartyLogin; // ivar: _isFirstPartyLogin
@property (nonatomic) BOOL _isRapportLogin; // ivar: _isRapportLogin
@property (nonatomic) BOOL _isWebLogin; // ivar: _isWebLogin
@property (retain, nonatomic) NSArray *_proxiedAssociatedDomains; // ivar: _proxiedAssociatedDomains
@property (retain, nonatomic) NSString *_proxiedClientAppID; // ivar: _proxiedClientAppID
@property (retain, nonatomic) NSString *_proxiedClientAppName; // ivar: _proxiedClientAppName
@property (retain, nonatomic) NSString *_proxiedClientBundleID; // ivar: _proxiedClientBundleID
@property (retain, nonatomic) NSString *_proxiedClientServiceID; // ivar: _proxiedClientServiceID
@property (retain, nonatomic) NSString *_proxiedClientTeamID; // ivar: _proxiedClientTeamID
@property (retain, nonatomic) NSString *_proxiedDeviceClass; // ivar: _proxiedDeviceClass
@property (retain, nonatomic) NSString *_proxiedDeviceName; // ivar: _proxiedDeviceName
@property (nonatomic) BOOL _requirePassword; // ivar: _requirePassword
@property (copy, nonatomic) NSString *_sessionID; // ivar: _sessionID
@property (nonatomic) BOOL _shouldForcePrivateEmail; // ivar: _shouldForcePrivateEmail
@property (nonatomic) BOOL _shouldForceUI; // ivar: _shouldForceUI
@property (nonatomic) BOOL _shouldSkipAuthorizationUI; // ivar: _shouldSkipAuthorizationUI
@property (nonatomic) BOOL _shouldSkipBiometrics; // ivar: _shouldSkipBiometrics
@property (nonatomic) BOOL _shouldUseProxiedClientBundleIDForSRP; // ivar: _shouldUseProxiedClientBundleIDForSRP
@property (readonly, nonatomic) AKAuthorizationUpgradeContext *_upgradeContext; // ivar: _upgradeContext
@property (retain, nonatomic) AKAuthorizationRequest *authorizationRequest; // ivar: _authorizationRequest
@property (retain, nonatomic) NSArray *credentialRequests;
@property (retain, nonatomic) AKPasswordRequest *passwordRequest; // ivar: _passwordRequest
@property (readonly, copy, nonatomic) NSUUID *requestIdentifier; // ivar: _requestIdentifier
@property (nonatomic) NSUInteger requestOptions; // ivar: _requestOptions


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProxiedClientContext:(id)arg0 ;
-(id)initWithUpgradeContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif