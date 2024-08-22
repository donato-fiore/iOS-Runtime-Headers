// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEVPNPROTOCOL_H
#define NEVPNPROTOCOL_H

@class NSString, NSUUID, NSData;
@protocol NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NEIdentityKeychainItem.h"
#import "NEDNSSettings.h"
#import "NEKeychainItem.h"
#import "NEProxySettings.h"

@interface NEVPNProtocol : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSCopying, NSSecureCoding>

 {
    NSInteger _keychainDomain;
    NSString *_keychainAccessGroup;
    NEIdentityKeychainItem *_identity;
}


@property (copy) NEDNSSettings *DNSSettings; // ivar: _DNSSettings
@property BOOL disconnectOnIdle; // ivar: _disconnectOnIdle
@property int disconnectOnIdleTimeout; // ivar: _disconnectOnIdleTimeout
@property BOOL disconnectOnLogout; // ivar: _disconnectOnLogout
@property BOOL disconnectOnSleep; // ivar: _disconnectOnSleep
@property BOOL disconnectOnUserSwitch; // ivar: _disconnectOnUserSwitch
@property BOOL disconnectOnWake; // ivar: _disconnectOnWake
@property int disconnectOnWakeTimeout; // ivar: _disconnectOnWakeTimeout
@property BOOL enforceRoutes; // ivar: _enforceRoutes
@property BOOL excludeLocalNetworks; // ivar: _excludeLocalNetworks
@property (copy) NSString *extensibleSSOProvider; // ivar: _extensibleSSOProvider
@property (copy) NSUUID *identifier; // ivar: _identifier
@property (copy) NSData *identityData;
@property (copy) NSData *identityDataHash; // ivar: _identityDataHash
@property BOOL identityDataImported; // ivar: _identityDataImported
@property (copy) NSData *identityDataInternal; // ivar: _identityDataInternal
@property (copy) NSString *identityDataPassword; // ivar: _identityDataPassword
@property (copy) NEKeychainItem *identityDataPasswordKeychainItem; // ivar: _identityDataPasswordKeychainItem
@property (copy) NSData *identityReference;
@property (copy) NSData *identityReferenceInternal;
@property BOOL includeAllNetworks; // ivar: _includeAllNetworks
@property (copy) NSString *passwordEncryption; // ivar: _passwordEncryption
@property (copy) NEKeychainItem *passwordKeychainItem; // ivar: _passwordKeychainItem
@property (copy) NSData *passwordReference; // ivar: _passwordReference
@property (copy) NEProxySettings *proxySettings; // ivar: _proxySettings
@property (copy) NSString *serverAddress; // ivar: _serverAddress
@property (readonly) NSInteger type; // ivar: _type
@property (copy) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)needToUpdateKeychain;
-(BOOL)setServiceProtocolsInService:(struct __SCNetworkService *)arg0 ;
-(BOOL)updateWithServiceProtocolsFromService:(struct __SCNetworkService *)arg0 ;
-(id)copyLegacyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtocolIdentifier:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(struct __SCNetworkInterface *)createInterface;
-(void)addDisconnectOptions:(id)arg0 ;
-(void)copyPasswordsFromKeychainInDomain:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initDisconnectOptions:(id)arg0 ;
-(void)migratePasswordsFromPreferences:(struct __SCPreferences *)arg0 ;
-(void)removeKeychainItemsInDomain:(NSInteger)arg0 keepIdentity:(BOOL)arg1 ;
-(void)syncWithKeychainInDomain:(NSInteger)arg0 configuration:(id)arg1 suffix:(id)arg2 ;
-(void)syncWithKeychainInDomainCommon:(NSInteger)arg0 ;


@end


#endif