// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NECONFIGURATION_H
#define NECONFIGURATION_H

@class NSString, NSUUID;
@protocol NEProfilePayloadHandlerDelegate, NEProfileIngestionPluginDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NEVPN.h"
#import "NEAOVPN.h"
#import "NEAppPush.h"
#import "NEVPNApp.h"
#import "NEContentFilter.h"
#import "NEDNSProxy.h"
#import "NEDNSSettingsBundle.h"
#import "NEPathController.h"
#import "NEProfileIngestionPayloadInfo.h"

@interface NEConfiguration : NSObject <NEProfilePayloadHandlerDelegate, NEProfileIngestionPluginDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying>

 {
    NSInteger _appPermissionType;
}


@property (copy) NEVPN *VPN; // ivar: _VPN
@property (copy) NEAOVPN *alwaysOnVPN; // ivar: _alwaysOnVPN
@property (copy) NEAppPush *appPush; // ivar: _appPush
@property (copy) NEVPNApp *appVPN; // ivar: _appVPN
@property (copy) NSString *application; // ivar: _application
@property (copy) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (copy) NSString *applicationName; // ivar: _applicationName
@property (copy) NEContentFilter *contentFilter; // ivar: _contentFilter
@property (copy) NEDNSProxy *dnsProxy; // ivar: _dnsProxy
@property (copy) NEDNSSettingsBundle *dnsSettings; // ivar: _dnsSettings
@property (copy) NSString *externalIdentifier; // ivar: _externalIdentifier
@property (readonly) NSInteger grade; // ivar: _grade
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (copy) NSString *name; // ivar: _name
@property (copy) NEPathController *pathController; // ivar: _pathController
@property (copy) NEProfileIngestionPayloadInfo *payloadInfo; // ivar: _payloadInfo
@property (readonly) NSString *pluginType;


+(BOOL)supportsSecureCoding;
+(id)configurationWithProfilePayload:(id)arg0 ;
+(id)configurationWithProfilePayload:(id)arg0 grade:(NSInteger)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setAppLayerVPNUUID:(id)arg0 andSafariDomains:(id)arg1 ;
-(BOOL)setAssociatedDomains:(id)arg0 ;
-(BOOL)setCalendarDomains:(id)arg0 ;
-(BOOL)setCalendarDomains:(id)arg0 accountIdentifiers:(id)arg1 ;
-(BOOL)setCertificates:(id)arg0 ;
-(BOOL)setContactsDomains:(id)arg0 ;
-(BOOL)setContactsDomains:(id)arg0 accountIdentifiers:(id)arg1 ;
-(BOOL)setExcludedDomains:(id)arg0 ;
-(BOOL)setMailDomains:(id)arg0 ;
-(BOOL)setMailDomains:(id)arg0 accountIdentifiers:(id)arg1 ;
-(BOOL)setPerAppRuleSettings:(id)arg0 withAppIdentifier:(id)arg1 ;
-(BOOL)setPerAppUUID:(id)arg0 andSafariDomains:(id)arg1 ;
-(BOOL)setProfileInfo:(id)arg0 ;
-(BOOL)setRestrictDomains:(BOOL)arg0 ;
-(BOOL)setSMBDomains:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithOptions:(NSUInteger)arg0 ;
-(id)generateSignature;
-(id)getCertificates;
-(id)getConfigurationIdentifier;
-(id)getPendingCertificateInfo:(id)arg0 ;
-(id)getPendingCertificateUUIDs:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 grade:(NSInteger)arg1 ;
-(void)applyOverrides;
-(void)clearSystemKeychain;
-(void)copyPasswordsFromSystemKeychain;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif