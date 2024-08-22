// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEVPNPROTOCOLIPSEC_H
#define NEVPNPROTOCOLIPSEC_H

@class NSArray, NSString, NSData;


#import "NEVPNProtocol.h"
#import "NEKeychainItem.h"

@interface NEVPNProtocolIPSec : NEVPNProtocol

@property NSInteger authenticationMethod; // ivar: _authenticationMethod
@property BOOL extendedAuthPasswordPrompt; // ivar: _extendedAuthPasswordPrompt
@property (copy) NSArray *legacyExchangeMode; // ivar: _legacyExchangeMode
@property (copy) NSArray *legacyProposals; // ivar: _legacyProposals
@property (copy) NSString *localIdentifier; // ivar: _localIdentifier
@property (copy) NSString *remoteIdentifier; // ivar: _remoteIdentifier
@property (copy) NEKeychainItem *sharedSecretKeychainItem; // ivar: _sharedSecretKeychainItem
@property (copy) NSData *sharedSecretReference; // ivar: _sharedSecretReference
@property BOOL useExtendedAuthentication; // ivar: _useExtendedAuthentication


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)needToUpdateKeychain;
-(id)copyLegacyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(struct __SCNetworkInterface *)createInterface;
-(void)encodeWithCoder:(id)arg0 ;
-(void)migratePasswordsFromPreferences:(struct __SCPreferences *)arg0 ;
-(void)removeKeychainItemsInDomain:(NSInteger)arg0 keepIdentity:(BOOL)arg1 ;
-(void)syncWithKeychainInDomain:(NSInteger)arg0 configuration:(id)arg1 suffix:(id)arg2 ;


@end


#endif