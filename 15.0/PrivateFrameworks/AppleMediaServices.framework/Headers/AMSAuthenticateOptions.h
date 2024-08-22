// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSAUTHENTICATEOPTIONS_H
#define AMSAUTHENTICATEOPTIONS_H

@class NSDictionary, NSString, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AMSProcessInfo.h"

@interface AMSAuthenticateOptions : NSObject <NSCopying, NSSecureCoding>

 {
    NSUInteger _authenticationType;
}


@property (retain, nonatomic) NSDictionary *HTTPHeaders; // ivar: _HTTPHeaders
@property (nonatomic) BOOL allowSecondaryCredentialSource; // ivar: _allowSecondaryCredentialSource
@property (nonatomic) BOOL allowServerDialogs; // ivar: _allowServerDialogs
@property (copy, nonatomic) NSString *appProvidedContext; // ivar: _appProvidedContext
@property (copy, nonatomic) NSDictionary *appProvidedData; // ivar: _appProvidedData
@property (nonatomic) NSUInteger authenticationType;
@property (nonatomic) BOOL canMakeAccountActive; // ivar: _canMakeAccountActive
@property (retain, nonatomic) NSString *cancelButtonString; // ivar: _cancelButtonString
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (retain, nonatomic) NSString *companionDeviceClientInfo; // ivar: _companionDeviceClientInfo
@property (retain, nonatomic) NSString *companionDeviceUDID; // ivar: _companionDeviceUDID
@property (retain, nonatomic) NSDictionary *createAccountQueryParams; // ivar: _createAccountQueryParams
@property (nonatomic) NSUInteger credentialSource; // ivar: _credentialSource
@property (retain, nonatomic) NSString *debugReason; // ivar: _debugReason
@property (retain, nonatomic) NSString *defaultButtonString; // ivar: _defaultButtonString
@property (nonatomic, getter=isDemoAccountSetup) BOOL demoAccountSetup; // ivar: _demoAccountSetup
@property (nonatomic) BOOL enableAccountCreation; // ivar: _enableAccountCreation
@property (nonatomic) BOOL ephemeral; // ivar: _ephemeral
@property (nonatomic) BOOL forceSyncToPairedWatch; // ivar: _forceSyncToPairedWatch
@property (retain, nonatomic) NSURL *iconBundleURL; // ivar: _iconBundleURL
@property (nonatomic) BOOL ignoreAccountConversion; // ivar: _ignoreAccountConversion
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (retain, nonatomic) NSString *promptTitle; // ivar: _promptTitle
@property (retain, nonatomic) NSString *proxyAppBundleID; // ivar: _proxyAppBundleID
@property (retain, nonatomic) NSString *proxyAppName; // ivar: _proxyAppName
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic, getter=isRemoteProxyAuthentication) BOOL remoteProxyAuthentication; // ivar: _remoteProxyAuthentication
@property (retain, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (nonatomic) NSInteger serviceType; // ivar: _serviceType
@property (retain, nonatomic) NSString *userAgent; // ivar: _userAgent
@property (retain, nonatomic) NSString *userAgentSuffix; // ivar: _userAgentSuffix
@property (nonatomic) BOOL usernameEditable; // ivar: _usernameEditable


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)authKitData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOptionsDictionary:(id)arg0 ;
-(id)mediaType;
-(id)optionsDictionary;
-(id)optionsDictionaryForRemoteProxyAuthentication;
-(id)presentingViewController;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAuthKitData:(id)arg0 ;
-(void)setMediaType:(id)arg0 ;
-(void)setPresentingViewController:(id)arg0 ;


@end


#endif