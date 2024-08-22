// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLPREFERENCESUTILITIES_H
#define TLPREFERENCESUTILITIES_H


#import <Foundation/Foundation.h>


@interface TLPreferencesUtilities : NSObject



+(id)_existingPerTopicPreferenceKeyPrefixesWithRegularPreferenceKeys:(*id)arg0 regularPreferenceKeysCount:(NSUInteger)arg1 ;
+(id)perWatchPreferencesDomain;
+(struct __CFDictionary *)_copyAllKeysAndValuesFromDomain:(struct __CFString *)arg0 usingPreferencesScope:(int)arg1 ;
+(struct __CFString *)copySharedResourcesPreferencesDomain;
+(struct __CFString *)copySharedResourcesPreferencesDomainForDomain:(struct __CFString *)arg0 ;
+(struct __CFString *)preferencesDomain;
+(void)_enumerateKeysAndValuesWithEligibleKeyPrefixes:(id)arg0 inDomain:(struct __CFString *)arg1 usingPreferencesScope:(int)arg2 withBlock:(id)arg3 ;
+(void)_setValue:(*void)arg0 forKey:(struct __CFString *)arg1 inDomain:(struct __CFString *)arg2 usingPreferencesScope:(int)arg3 ;
+(void)_synchronizeDomain:(struct __CFString *)arg0 usingPreferencesScope:(int)arg1 ;
+(void)migratePerTopicPreferencesInDomain:(struct __CFString *)arg0 withRegularPreferenceKeys:(*id)arg1 regularPreferenceKeysCount:(NSUInteger)arg2 intoSinglePerTopicPreferenceWithSuffix:(id)arg3 usingPreferencesScope:(int)arg4 ;


@end


#endif