// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSPROCESSINFO_H
#define AMSPROCESSINFO_H

@class NSString, NSData, NSURL;
@protocol NSCopying, NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSMappedBundleInfo.h"

@interface AMSProcessInfo : NSObject <NSCopying, NSSecureCoding>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_partnerHeader;
}


@property (retain, nonatomic) NSString *accountMediaType; // ivar: _accountMediaType
@property (readonly, nonatomic, getter=isAccountsDaemon) BOOL accountsDaemon;
@property (retain, nonatomic) NSData *auditTokenData; // ivar: _auditTokenData
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (retain, nonatomic) NSString *clientVersion; // ivar: _clientVersion
@property (retain, nonatomic) NSString *executableName; // ivar: _executableName
@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) AMSMappedBundleInfo *mappedBundleInfo; // ivar: _mappedBundleInfo
@property (retain, nonatomic) NSString *partnerHeader;
@property (retain, nonatomic) NSString *proxyAppBundleID; // ivar: _proxyAppBundleID
@property (copy, nonatomic) NSString *treatmentNamespace; // ivar: _treatmentNamespace
@property (retain, nonatomic) NSString *userAgentSuffix; // ivar: _userAgentSuffix


+(BOOL)boolForEntitlement:(id)arg0 ;
+(BOOL)boolForMachLookupAccess:(id)arg0 ;
+(BOOL)hasAMSEntitlement;
+(BOOL)isBuddyRunning;
+(BOOL)supportsSecureCoding;
+(id)_bundleForIdentifier:(id)arg0 record:(id)arg1 ;
+(id)_bundleRecordForIdentifier:(id)arg0 ;
+(id)_cachedProcessInfoForIdentifier:(id)arg0 ;
+(id)_currentProcessBundleIdentifier;
+(id)currentProcess;
+(id)defaultMediaTypeForCurrentProcess;
+(id)stringForEntitlement:(id)arg0 ;
+(id)valueForEntitlement:(id)arg0 ;
+(void)_accessProcessInfoCache:(id)arg0 ;
+(void)_cacheProcessInfo:(id)arg0 ;
+(void)copyPropertiesFrom:(id)arg0 to:(id)arg1 ;
+(void)setDefaultMediaTypeForCurrentProcess:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)generateConfiguration;
-(id)generateConfigurationFromBag:(id)arg0 ;
-(id)generateConfigurationFromBagContract:(id)arg0 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif