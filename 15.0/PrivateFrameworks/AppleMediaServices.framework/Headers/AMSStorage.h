// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSSTORAGE_H
#define AMSSTORAGE_H


#import <Foundation/Foundation.h>


@interface AMSStorage : NSObject



+(BOOL)_boolForKey:(id)arg0 defaultValue:(BOOL)arg1 ;
+(BOOL)_boolForKey:(id)arg0 defaultValue:(BOOL)arg1 domain:(id)arg2 ;
+(BOOL)_boolFromCFPreferencesForKey:(id)arg0 defaultValue:(BOOL)arg1 domain:(struct __CFString *)arg2 ;
+(BOOL)_boolFromDatabaseForKey:(id)arg0 defaultValue:(BOOL)arg1 domain:(id)arg2 error:(*id)arg3 ;
+(BOOL)_resultFromSampleSession:(id)arg0 isActive:(*BOOL)arg1 ;
+(BOOL)_setBoolWithDatabase:(BOOL)arg0 forKey:(id)arg1 domain:(id)arg2 error:(*id)arg3 ;
+(BOOL)_setIntegerWithDatabase:(NSInteger)arg0 forKey:(id)arg1 domain:(id)arg2 error:(*id)arg3 ;
+(BOOL)_setValueWithDatabase:(id)arg0 forKey:(id)arg1 domain:(id)arg2 error:(*id)arg3 ;
+(BOOL)shouldSampleWithPercentage:(CGFloat)arg0 sessionDuration:(CGFloat)arg1 identifier:(id)arg2 ;
+(CGFloat)_randomDouble;
+(NSInteger)_integerForKey:(id)arg0 defaultValue:(NSInteger)arg1 ;
+(NSInteger)_integerForKey:(id)arg0 defaultValue:(NSInteger)arg1 domain:(id)arg2 ;
+(NSInteger)_integerFromCFPreferencesForKey:(id)arg0 defaultValue:(NSInteger)arg1 domain:(struct __CFString *)arg2 ;
+(NSInteger)_integerFromDatabaseForKey:(id)arg0 defaultValue:(NSInteger)arg1 domain:(id)arg2 error:(*id)arg3 ;
+(id)_allKeysWithDomain:(id)arg0 ;
+(id)_valueForKey:(id)arg0 ;
+(id)_valueForKey:(id)arg0 domain:(id)arg1 ;
+(id)_valueFromCFPreferencesForKey:(id)arg0 domain:(struct __CFString *)arg1 ;
+(id)_valueFromDatabaseForKey:(id)arg0 domain:(id)arg1 error:(*id)arg2 ;
+(id)bagURLCookies;
+(id)deviceOfferEligibility;
+(id)mediaTokens;
+(void)_cleanupSampleSessions;
+(void)_migrateBoolToDatabase:(BOOL)arg0 forKey:(id)arg1 domain:(id)arg2 ;
+(void)_migrateIntegerToDatabase:(NSInteger)arg0 forKey:(id)arg1 domain:(id)arg2 ;
+(void)_migrateValueToDatabase:(id)arg0 forKey:(id)arg1 domain:(id)arg2 ;
+(void)_setBool:(BOOL)arg0 forKey:(id)arg1 ;
+(void)_setBool:(BOOL)arg0 forKey:(id)arg1 domain:(id)arg2 ;
+(void)_setBoolWithCFPreferences:(BOOL)arg0 forKey:(id)arg1 domain:(struct __CFString *)arg2 ;
+(void)_setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
+(void)_setInteger:(NSInteger)arg0 forKey:(id)arg1 domain:(id)arg2 ;
+(void)_setIntegerWithCFPreferences:(NSInteger)arg0 forKey:(id)arg1 domain:(struct __CFString *)arg2 ;
+(void)_setValue:(id)arg0 forKey:(id)arg1 ;
+(void)_setValue:(id)arg0 forKey:(id)arg1 domain:(id)arg2 ;
+(void)_setValueWithCFPreferences:(id)arg0 forKey:(id)arg1 domain:(id)arg2 ;
+(void)setBagURLCookies:(id)arg0 ;
+(void)setDeviceOfferEligibility:(id)arg0 ;
+(void)setMediaTokens:(id)arg0 ;
+(void)shouldSampleWithPercentageValue:(id)arg0 sessionDurationValue:(id)arg1 identifier:(id)arg2 completion:(id)arg3 ;


@end


#endif