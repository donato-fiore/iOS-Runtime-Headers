// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAKEYCHAIN_H
#define DAKEYCHAIN_H


#import <Foundation/Foundation.h>


@interface DAKeychain : NSObject



+(id)sharedKeychain;
-(*void)_secAccessibilityForDAKeychainAccessibility:(int)arg0 ;
-(BOOL)canAccessCredentialsWithAccessibility:(int)arg0 ;
-(BOOL)removePasswordForAccount:(id)arg0 withPersistentUUID:(id)arg1 ;
-(BOOL)saveKeychainInformationsForURL:(id)arg0 andPassword:(id)arg1 withAccessibility:(int)arg2 ;
-(BOOL)setPassword:(id)arg0 forAccount:(id)arg1 withPersistentUUID:(id)arg2 withAccessibility:(int)arg3 ;
-(id)guessPasswordForURL:(id)arg0 ;
-(id)loadKeychainInformationsForURL:(id)arg0 ;
-(id)passwordForAccountWithPersistentUUID:(id)arg0 expectedAccessibility:(int)arg1 shouldSetAccessibility:(BOOL)arg2 passwordExpected:(BOOL)arg3 ;
-(int)_daKeychainAccessibilityForSecAccessibility:(*void)arg0 ;
-(struct __CFDictionary *)_DACopyMutableAttributesForAccountWithPersistentUUID:(id)arg0 accessibility:(int)arg1 ;
-(struct __CFDictionary *)_DACopyMutableQueryForAccountWithPersistentUUID:(id)arg0 ;
-(void)migratePasswordForAccount:(id)arg0 ;
-(void)removeKeychainInformationsForURL:(id)arg0 ;
-(void)removePersistentCredentials;


@end


#endif