// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFRESTRICTIONSPASSCODECONTROLLER_H
#define SFRESTRICTIONSPASSCODECONTROLLER_H


#import <Foundation/Foundation.h>


@interface SFRestrictionsPasscodeController : NSObject



+(BOOL)hasHashAndSaltLegacyPassword;
+(BOOL)legacyRestrictionsInEffect;
+(BOOL)settingEnabled;
+(BOOL)validatePIN:(id)arg0 ;
+(id)_generateSalt;
+(id)_keychainPasswordForRestrictions;
+(id)hashForHashAndSaltLegacyRestrictions;
+(id)newHashDataForPassword:(id)arg0 andSalt:(id)arg1 ;
+(id)pinFromHashAndSaltLegacyPassword;
+(id)saltForHashAndSaltLegacyRestrictions;
+(void)_migrateRestrictionsPasscodeIfNeeded;
+(void)_removeKeychainPasswordForRestrictions;
+(void)_setKeychainPasswordForRestrictions:(id)arg0 ;
+(void)migrateRestrictionsPasscode;
+(void)removePasswordForHashAndSaltLegacyRestrictions;
+(void)setPIN:(id)arg0 ;


@end


#endif