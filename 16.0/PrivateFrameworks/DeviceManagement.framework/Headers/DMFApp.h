// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFAPP_H
#define DMFAPP_H

@class NSString, NSArray, NSNumber, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DMFAppManagementInformation.h"

@interface DMFApp : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *DNSProxyUUIDString; // ivar: _DNSProxyUUIDString
@property (copy, nonatomic) NSString *VPNUUIDString; // ivar: _VPNUUIDString
@property (copy, nonatomic) NSArray *associatedDomains; // ivar: _associatedDomains
@property (copy, nonatomic) NSNumber *associatedDomainsEnableDirectDownloads; // ivar: _associatedDomainsEnableDirectDownloads
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (copy, nonatomic) NSString *contentFilterUUIDString; // ivar: _contentFilterUUIDString
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSNumber *dynamicUsage; // ivar: _dynamicUsage
@property (copy, nonatomic) NSNumber *externalVersionIdentifier; // ivar: _externalVersionIdentifier
@property (copy, nonatomic) NSDictionary *feedback; // ivar: _feedback
@property (nonatomic) BOOL hasUpdateAvailable; // ivar: _hasUpdateAvailable
@property (nonatomic) NSUInteger installationState; // ivar: _installationState
@property (nonatomic) BOOL isAdHocCodeSigned; // ivar: _isAdHocCodeSigned
@property (nonatomic) BOOL isAppClip; // ivar: _isAppClip
@property (nonatomic) BOOL isAppStoreVendable; // ivar: _isAppStoreVendable
@property (nonatomic) BOOL isBetaApp; // ivar: _isBetaApp
@property (nonatomic) BOOL isBlocked; // ivar: _isBlocked
@property (nonatomic) BOOL isDeviceBasedVPP; // ivar: _isDeviceBasedVPP
@property (nonatomic) BOOL isLicenseExpired; // ivar: _isLicenseExpired
@property (nonatomic) BOOL isLicenseRevoked; // ivar: _isLicenseRevoked
@property (nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (nonatomic) BOOL isRestricted; // ivar: _isRestricted
@property (nonatomic) BOOL isUPP; // ivar: _isUPP
@property (nonatomic) BOOL isUserBasedVPP; // ivar: _isUserBasedVPP
@property (nonatomic) BOOL isValidated; // ivar: _isValidated
@property (copy, nonatomic) DMFAppManagementInformation *managementInformation; // ivar: _managementInformation
@property (copy, nonatomic) NSNumber *onDemandResourcesUsage; // ivar: _onDemandResourcesUsage
@property (copy, nonatomic) NSNumber *removable; // ivar: _removable
@property (copy, nonatomic) NSNumber *sharedUsage; // ivar: _sharedUsage
@property (copy, nonatomic) NSString *shortVersion; // ivar: _shortVersion
@property (copy, nonatomic) NSNumber *staticUsage; // ivar: _staticUsage
@property (copy, nonatomic) NSNumber *storeItemIdentifier; // ivar: _storeItemIdentifier
@property (nonatomic) NSUInteger type; // ivar: _type
@property (copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)stringForInstallationState:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_stringForType:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif