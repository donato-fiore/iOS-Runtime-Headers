// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOKERBEROSEXTENSIONDATA_H
#define SOKERBEROSEXTENSIONDATA_H

@class NSString, NSArray, NSDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface SOKerberosExtensionData : NSObject

@property (nonatomic) BOOL allowAutomaticLogin; // ivar: _allowAutomaticLogin
@property (nonatomic) BOOL allowPasswordChange; // ivar: _allowPasswordChange
@property (retain, nonatomic) NSString *cacheName; // ivar: _cacheName
@property (retain, nonatomic) NSString *certificateUUID; // ivar: _certificateUUID
@property (retain, nonatomic) NSArray *credentialBundleIdACL; // ivar: _credentialBundleIdACL
@property (nonatomic) NSInteger credentialUseMode; // ivar: _credentialUseMode
@property (retain, nonatomic) NSString *customUsernameLabel; // ivar: _customUsernameLabel
@property BOOL delayUserSetup; // ivar: _delayUserSetup
@property (retain, nonatomic) NSDictionary *domainRealmMapping; // ivar: _domainRealmMapping
@property (retain, nonatomic) NSString *helpText; // ivar: _helpText
@property (nonatomic) BOOL includeKerberosAppsInBundleIdACL; // ivar: _includeKerberosAppsInBundleIdACL
@property (nonatomic) BOOL includeManagedAppsInBundleIdACL; // ivar: _includeManagedAppsInBundleIdACL
@property (nonatomic) BOOL isDefaultRealm; // ivar: _isDefaultRealm
@property BOOL monitorCredentialsCache; // ivar: _monitorCredentialsCache
@property (retain, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) NSArray *preferredKDCs; // ivar: _preferredKDCs
@property (retain, nonatomic) NSString *principalName; // ivar: _principalName
@property (retain, nonatomic) NSString *pwChangeURL; // ivar: _pwChangeURL
@property (retain, nonatomic) NSNumber *pwExpireOverride; // ivar: _pwExpireOverride
@property (retain, nonatomic) NSNumber *pwNotificationDays; // ivar: _pwNotificationDays
@property BOOL pwReqComplexity; // ivar: _pwReqComplexity
@property (retain, nonatomic) NSNumber *pwReqHistory; // ivar: _pwReqHistory
@property (retain, nonatomic) NSNumber *pwReqLength; // ivar: _pwReqLength
@property (retain, nonatomic) NSNumber *pwReqMinAge; // ivar: _pwReqMinAge
@property (retain, nonatomic) NSString *pwReqText; // ivar: _pwReqText
@property (retain, nonatomic) NSNumber *replicationTime; // ivar: _replicationTime
@property BOOL requireTLSForLDAP; // ivar: _requireTLSForLDAP
@property (nonatomic) BOOL requireUserPresence; // ivar: _requireUserPresence
@property (retain, nonatomic) NSString *siteCode; // ivar: _siteCode
@property BOOL syncLocalPassword; // ivar: _syncLocalPassword
@property (nonatomic) BOOL useSiteAutoDiscovery; // ivar: _useSiteAutoDiscovery


-(id)initWithDictionary:(id)arg0 ;


@end


#endif