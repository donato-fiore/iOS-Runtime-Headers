// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICKEYCHAIN_H
#define ICKEYCHAIN_H


#import <Foundation/Foundation.h>


@interface ICKeychain : NSObject



+(BOOL)booleanForIdentifier:(id)arg0 account:(id)arg1 ;
+(BOOL)deleteEverythingWithError:(*id)arg0 ;
+(BOOL)deleteItemsForIdentifier:(id)arg0 account:(id)arg1 error:(*id)arg2 ;
+(BOOL)deleteItemsForIdentifier:(id)arg0 account:(id)arg1 isSynced:(BOOL)arg2 error:(*id)arg3 ;
+(BOOL)deleteItemsOfType:(NSUInteger)arg0 account:(id)arg1 error:(*id)arg2 ;
+(BOOL)deleteItemsOfType:(NSUInteger)arg0 account:(id)arg1 isSynced:(BOOL)arg2 error:(*id)arg3 ;
+(BOOL)hasItemForIdentifier:(id)arg0 account:(id)arg1 ;
+(BOOL)isSyncAvailableForAccount:(id)arg0 ;
+(BOOL)setBoolean:(BOOL)arg0 forIdentifier:(id)arg1 account:(id)arg2 shouldSync:(BOOL)arg3 error:(*id)arg4 ;
+(BOOL)setData:(id)arg0 forIdentifier:(id)arg1 account:(id)arg2 error:(*id)arg3 ;
+(BOOL)setData:(id)arg0 forIdentifier:(id)arg1 account:(id)arg2 shouldSync:(BOOL)arg3 error:(*id)arg4 ;
+(BOOL)setData:(id)arg0 forIdentifier:(id)arg1 account:(id)arg2 type:(NSUInteger)arg3 shouldSync:(BOOL)arg4 accessFlags:(NSUInteger)arg5 accessGroup:(id)arg6 error:(*id)arg7 ;
+(BOOL)setString:(id)arg0 forIdentifier:(id)arg1 account:(id)arg2 shouldSync:(BOOL)arg3 error:(*id)arg4 ;
+(BOOL)setUnsignedInteger:(NSUInteger)arg0 forIdentifier:(id)arg1 account:(id)arg2 shouldSync:(BOOL)arg3 error:(*id)arg4 ;
+(NSUInteger)unsignedIntegerForIdentifier:(id)arg0 account:(id)arg1 ;
+(id)accessControlObjectWithProtection:(*void)arg0 flags:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)dataForIdentifier:(id)arg0 account:(id)arg1 ;
+(id)dataForIdentifier:(id)arg0 account:(id)arg1 authenticationContext:(id)arg2 ;
+(id)dataForIdentifier:(id)arg0 account:(id)arg1 isSynced:(BOOL)arg2 authenticationContext:(id)arg3 ;
+(id)itemsOfType:(NSUInteger)arg0 account:(id)arg1 authenticationContext:(id)arg2 ;
+(id)itemsOfType:(NSUInteger)arg0 account:(id)arg1 isSynced:(BOOL)arg2 authenticationContext:(id)arg3 ;
+(id)queryForItemClass:(id)arg0 forIdentifier:(id)arg1 account:(id)arg2 isSynced:(BOOL)arg3 type:(NSUInteger)arg4 authenticationContext:(id)arg5 returnData:(BOOL)arg6 limit:(id)arg7 ;
+(id)stringForIdentifier:(id)arg0 account:(id)arg1 isSynced:(BOOL)arg2 ;


@end


#endif