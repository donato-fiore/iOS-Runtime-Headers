// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NECONFIGURATION_H
#define NECONFIGURATION_H

@class NSString, NSUUID;
@protocol NEProfilePayloadHandlerDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying;

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

@interface NEConfiguration : NSObject <NEProfilePayloadHandlerDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying>



@property (copy) NEVPN *VPN; // ivar: _VPN
@property (copy) NEAOVPN *alwaysOnVPN; // ivar: _alwaysOnVPN
@property (nonatomic) NSInteger appPermissionType; // ivar: _appPermissionType
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


+(BOOL)SCServiceWithIdentifier:(id)arg0 existsInPreferences:(struct __SCPreferences *)arg1 ;
+(BOOL)removeSCServiceWithIdentifier:(id)arg0 fromPreferences:(struct __SCPreferences *)arg1 ;
+(BOOL)setConfiguration:(struct __CFDictionary *)arg0 forProtocol:(struct __CFString *)arg1 inService:(struct __SCNetworkService *)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)configurationWithProfilePayload:(id)arg0 ;
+(id)configurationWithProfilePayload:(id)arg0 grade:(NSInteger)arg1 ;
+(struct __CFDictionary *)copyConfigurationForProtocol:(struct __CFString *)arg0 inService:(struct __SCNetworkService *)arg1 ;
+(void)addError:(id)arg0 toList:(id)arg1 ;
-(BOOL)applyChangesToSCServiceInPreferences:(struct __SCPreferences *)arg0 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)configureIKE:(id)arg0 vpnType:(id)arg1 payloadBase:(id)arg2 vpn:(id)arg3 ;
-(BOOL)configureL2TPWithPPPOptions:(id)arg0 ;
-(BOOL)configurePPPCommon:(id)arg0 ;
-(BOOL)configurePPPWithVPNOptions:(id)arg0 payloadBase:(id)arg1 ;
-(BOOL)configurePluginWithPayload:(id)arg0 pluginType:(id)arg1 payloadType:(id)arg2 ;
-(BOOL)configureVpnOnDemand:(id)arg0 vpnType:(id)arg1 ;
-(BOOL)configureVpnOnDemandRules:(id)arg0 ;
-(BOOL)ingestDNSOptions:(id)arg0 ;
-(BOOL)ingestDisconnectOptions:(id)arg0 ;
-(BOOL)ingestIPSecDict:(id)arg0 vpnType:(id)arg1 vpn:(id)arg2 ;
-(BOOL)ingestPPPData:(id)arg0 vnpType:(id)arg1 ;
-(BOOL)ingestPPPDict:(id)arg0 ;
-(BOOL)ingestProxyOptions:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSupportedBySC;
-(BOOL)needToUpdateKeychain;
-(BOOL)setAppLayerVPNRuleSettings:(id)arg0 withAppIdentifier:(id)arg1 ;
-(BOOL)setAppLayerVPNUUID:(id)arg0 andSafariDomains:(id)arg1 ;
-(BOOL)setAssociatedDomains:(id)arg0 ;
-(BOOL)setCalendarDomains:(id)arg0 ;
-(BOOL)setCalendarDomains:(id)arg0 accountIdentifiers:(id)arg1 ;
-(BOOL)setCertificateContentFilter:(id)arg0 ;
-(BOOL)setCertificates:(id)arg0 ;
-(BOOL)setCertificatesAOVpn:(id)arg0 ;
-(BOOL)setCertificatesAppVPN:(id)arg0 ;
-(BOOL)setCertificatesVPN:(id)arg0 ;
-(BOOL)setConfigurationSharedSecret:(id)arg0 ;
-(BOOL)setConfigurationVPNPassword:(id)arg0 ;
-(BOOL)setContactsDomains:(id)arg0 ;
-(BOOL)setContactsDomains:(id)arg0 accountIdentifiers:(id)arg1 ;
-(BOOL)setExcludedDomains:(id)arg0 ;
-(BOOL)setMailDomains:(id)arg0 ;
-(BOOL)setMailDomains:(id)arg0 accountIdentifiers:(id)arg1 ;
-(BOOL)setProfileInfo:(id)arg0 ;
-(BOOL)setRestrictDomains:(BOOL)arg0 ;
-(BOOL)setSMBDomains:(id)arg0 ;
-(BOOL)updateFromSCService:(struct __SCNetworkService *)arg0 ;
-(BOOL)validateStrings:(id)arg0 ;
-(NSUInteger)hash;
-(id)configureAOVPNTunnelFromTunnelDict:(id)arg0 tunnelDict:(id)arg1 payloadBase:(id)arg2 interfaceType:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithOptions:(NSUInteger)arg0 ;
-(id)generateSignature;
-(id)getCertificates;
-(id)getConfigurationIdentifier;
-(id)getConfigurationProtocol;
-(id)getPendingCertificateInfo:(id)arg0 ;
-(id)getPendingCertificateUUIDs:(id)arg0 ;
-(id)getPendingCertificateUUIDsAOVpn:(id)arg0 ;
-(id)getPendingCertificateUUIDsAppVPN:(id)arg0 ;
-(id)getPendingCertificateUUIDsContentFilter:(id)arg0 ;
-(id)getPendingCertificateUUIDsInternal:(id)arg0 ;
-(id)getPendingCertificateUUIDsVPN:(id)arg0 ;
-(id)initFromSCService:(struct __SCNetworkService *)arg0 ;
-(id)initWithAlwaysOnVPNPayload:(id)arg0 configurationName:(id)arg1 grade:(NSInteger)arg2 ;
-(id)initWithAppLayerVPNPayload:(id)arg0 configurationName:(id)arg1 grade:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithContentFilterPayload:(id)arg0 configurationName:(id)arg1 grade:(NSInteger)arg2 ;
-(id)initWithDNSProxyPayload:(id)arg0 configurationName:(id)arg1 grade:(NSInteger)arg2 ;
-(id)initWithDNSSettingsPayload:(id)arg0 configurationName:(id)arg1 grade:(NSInteger)arg2 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithName:(id)arg0 grade:(NSInteger)arg1 ;
-(id)initWithPathControllerPayload:(id)arg0 configurationName:(id)arg1 grade:(NSInteger)arg2 ;
-(id)initWithVPNPayload:(id)arg0 configurationName:(id)arg1 grade:(NSInteger)arg2 ;
-(id)mergeArray:(id)arg0 withArray:(id)arg1 ;
-(void)applyOverrides;
-(void)clearKeychainInDomain:(NSInteger)arg0 ;
-(void)clearSystemKeychain;
-(void)clearUserKeychain;
-(void)copyPasswordsFromSystemKeychain;
-(void)encodeWithCoder:(id)arg0 ;
-(void)syncWithKeychainInDomain:(NSInteger)arg0 ;
-(void)syncWithSystemKeychain;
-(void)syncWithUserKeychain;
-(void)updateWithConfiguration:(id)arg0 ;


@end


#endif