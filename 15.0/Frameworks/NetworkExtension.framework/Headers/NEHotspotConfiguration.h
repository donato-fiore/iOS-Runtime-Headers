// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEHOTSPOTCONFIGURATION_H
#define NEHOTSPOTCONFIGURATION_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NEHotspotEAPSettings.h"
#import "NEHotspotHS20Settings.h"

@interface NEHotspotConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSString *SSID; // ivar: _SSID
@property (readonly) NSString *SSIDPrefix; // ivar: _SSIDPrefix
@property (copy) NEHotspotEAPSettings *eapSettings; // ivar: _eapSettings
@property BOOL hidden; // ivar: _hidden
@property (copy) NEHotspotHS20Settings *hs20Settings; // ivar: _hs20Settings
@property BOOL joinOnce; // ivar: _joinOnce
@property (copy) NSNumber *lifeTimeInDays; // ivar: _lifeTimeInDays
@property (copy) NSString *passphrase; // ivar: _passphrase
@property NSInteger securityType; // ivar: _securityType
@property BOOL useSSIDPrefix; // ivar: _useSSIDPrefix


+(BOOL)supportsSecureCoding;
-(BOOL)isWEPPassphraseValid;
-(BOOL)validateClientTrustChainReference;
-(BOOL)validateEAPSettings;
-(BOOL)validateSecIdentityReference:(BOOL)arg0 ;
-(BOOL)validateTrustedServerCertificateReferences;
-(NSInteger)validate;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHS20Settings:(id)arg0 eapSettings:(id)arg1 ;
-(id)initWithSSID:(id)arg0 ;
-(id)initWithSSID:(id)arg0 eapSettings:(id)arg1 ;
-(id)initWithSSID:(id)arg0 passphrase:(id)arg1 isWEP:(BOOL)arg2 ;
-(id)initWithSSIDPrefix:(id)arg0 ;
-(id)initWithSSIDPrefix:(id)arg0 passphrase:(id)arg1 isWEP:(BOOL)arg2 ;
-(void)buildClientTrustChainReference:(struct __SecIdentity *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif