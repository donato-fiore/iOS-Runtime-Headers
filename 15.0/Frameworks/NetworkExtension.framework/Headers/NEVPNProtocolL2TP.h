// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEVPNPROTOCOLL2TP_H
#define NEVPNPROTOCOLL2TP_H

@class NSString, NSData;


#import "NEVPNProtocolPPP.h"
#import "NEIdentityKeychainItem.h"
#import "NEKeychainItem.h"

@interface NEVPNProtocolL2TP : NEVPNProtocolPPP

@property (copy) NSString *localIdentifier; // ivar: _localIdentifier
@property NSInteger machineAuthenticationMethod; // ivar: _machineAuthenticationMethod
@property (retain) NEIdentityKeychainItem *machineIdentity; // ivar: _machineIdentity
@property BOOL machineIdentityDataImported; // ivar: _machineIdentityDataImported
@property (copy) NSData *machineIdentityDataInternal; // ivar: _machineIdentityDataInternal
@property (copy) NSData *machineIdentityReference;
@property (copy) NEKeychainItem *sharedSecretKeychainItem; // ivar: _sharedSecretKeychainItem
@property (copy) NSData *sharedSecretReference;


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)needToUpdateKeychain;
-(BOOL)setServiceProtocolsInService:(struct __SCNetworkService *)arg0 ;
-(BOOL)updateWithServiceProtocolsFromService:(struct __SCNetworkService *)arg0 ;
-(id)copyLegacyIPSecDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct __SCNetworkInterface *)createInterface;
-(void)encodeWithCoder:(id)arg0 ;
-(void)migratePasswordsFromPreferences:(struct __SCPreferences *)arg0 ;
-(void)removeKeychainItemsInDomain:(NSInteger)arg0 keepIdentity:(BOOL)arg1 ;
-(void)setIPSecSettingsFromLegacyDictionary:(id)arg0 ;
-(void)syncWithKeychainInDomain:(NSInteger)arg0 configuration:(id)arg1 suffix:(id)arg2 ;


@end


#endif