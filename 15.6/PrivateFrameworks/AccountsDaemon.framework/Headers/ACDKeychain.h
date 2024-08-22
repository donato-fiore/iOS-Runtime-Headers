// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACDKEYCHAIN_H
#define ACDKEYCHAIN_H


#import <Foundation/Foundation.h>


@interface ACDKeychain : NSObject



+(BOOL)_isKnownMigratedKeychainItem:(id)arg0 ;
+(BOOL)addSyncItemWithServiceName:(id)arg0 username:(id)arg1 accessGroup:(id)arg2 options:(id)arg3 extension:(id)arg4 error:(*id)arg5 ;
+(BOOL)canAccessPasswordsWithPolicy:(id)arg0 ;
+(BOOL)removeItemForServiceName:(id)arg0 username:(id)arg1 accessGroup:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
+(BOOL)removeTombstoneForServiceName:(id)arg0 username:(id)arg1 accessGroup:(id)arg2 extension:(id)arg3 error:(*id)arg4 ;
+(BOOL)updateSyncItemForServiceName:(id)arg0 username:(id)arg1 accessGroup:(id)arg2 newValues:(id)arg3 extension:(id)arg4 error:(*id)arg5 ;
+(NSUInteger)_syncStateForKeychainDictionary:(id)arg0 ;
+(id)_knownMigratedKeychainItems;
+(id)_passwordForServiceName:(id)arg0 username:(id)arg1 accessGroup:(id)arg2 checkInKeybag:(BOOL)arg3 options:(id)arg4 error:(*id)arg5 ;
+(id)cache;
+(id)keychainDeletedAccounts;
+(id)passwordForServiceName:(id)arg0 username:(id)arg1 accessGroup:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
+(void)_addKnownMigratedKeychainItem:(id)arg0 ;
+(void)_migrateKeychainItemIfNecessary:(id)arg0 ;
+(void)addItemWithServiceName:(id)arg0 username:(id)arg1 accessGroup:(id)arg2 passwordData:(id)arg3 options:(id)arg4 error:(*id)arg5 ;
+(void)updateItemForServiceName:(id)arg0 username:(id)arg1 accessGroup:(id)arg2 newValues:(id)arg3 options:(id)arg4 error:(*id)arg5 ;


@end


#endif