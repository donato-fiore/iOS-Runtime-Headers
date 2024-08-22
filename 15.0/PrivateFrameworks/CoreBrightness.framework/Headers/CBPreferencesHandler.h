// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBPREFERENCESHANDLER_H
#define CBPREFERENCESHANDLER_H


#import <Foundation/Foundation.h>


@interface CBPreferencesHandler : NSObject



+(BOOL)migrateNestedPreferenceForAllUsersWithKey1:(id)arg0 key2:(id)arg1 toKey:(id)arg2 ;
+(BOOL)storeNestedPreferenceForAllUsersWithKey1:(id)arg0 key2:(id)arg1 key3:(id)arg2 andValue:(id)arg3 ;
+(BOOL)storePreferenceForAllUsersForKey:(id)arg0 andValue:(id)arg1 ;
+(BOOL)storePreferenceForAllUsersMultiple:(id)arg0 ;
+(BOOL)storePreferenceForUser:(id)arg0 withKey:(id)arg1 andValue:(id)arg2 ;
+(id)copyNestedPreferenceForKey1:(id)arg0 key2:(id)arg1 ;
+(id)copyNestedPreferenceForKey1:(id)arg0 key2:(id)arg1 key3:(id)arg2 ;
+(id)copyPreferenceForAllUsersForKey:(id)arg0 ;
+(id)copyPreferenceForAllUsersMultiple:(id)arg0 ;
+(id)copyPreferenceForUser:(id)arg0 forKey:(id)arg1 ;
+(struct __CFDictionary *)copyPreferenceDictionaryForUser:(id)arg0 ;
+(void)consistencyCheckForUser:(id)arg0 ;


@end


#endif