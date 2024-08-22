// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NETUNNELPROVIDERPROTOCOL_H
#define NETUNNELPROVIDERPROTOCOL_H

@class NSString, NSDictionary;


#import "NEVPNProtocol.h"

@interface NETunnelProviderProtocol : NEVPNProtocol

@property NSInteger authenticationMethod; // ivar: _authenticationMethod
@property (copy) NSString *authenticationPluginType; // ivar: _authenticationPluginType
@property (copy) NSString *designatedRequirement; // ivar: _designatedRequirement
@property (readonly) NSString *pluginType; // ivar: _pluginType
@property (copy) NSString *providerBundleIdentifier; // ivar: _providerBundleIdentifier
@property (copy) NSDictionary *providerConfiguration; // ivar: _providerConfiguration
@property int reassertTimeout; // ivar: _reassertTimeout
@property (copy) NSDictionary *vendorInfo; // ivar: _vendorInfo


+(BOOL)isLegacyPluginType:(id)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)setServiceProtocolsInService:(struct __SCNetworkService *)arg0 ;
-(BOOL)updateWithServiceProtocolsFromService:(struct __SCNetworkService *)arg0 ;
-(id)copyLegacyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPluginType:(id)arg0 ;
-(struct __SCNetworkInterface *)createInterface;
-(void)copyPasswordsFromKeychainInDomain:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initFromLegacyDictionaryExtra:(id)arg0 ;
-(void)removeKeychainItemsInDomain:(NSInteger)arg0 keepIdentity:(BOOL)arg1 ;
-(void)syncWithKeychainInDomain:(NSInteger)arg0 configuration:(id)arg1 suffix:(id)arg2 ;


@end


#endif