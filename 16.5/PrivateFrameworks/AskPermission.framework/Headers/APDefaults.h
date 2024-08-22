// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APDEFAULTS_H
#define APDEFAULTS_H


#import <Foundation/Foundation.h>


@interface APDefaults : NSObject



+(BOOL)APSDevelopmentEnvironment;
+(BOOL)_boolForKey:(id)arg0 defaultValue:(BOOL)arg1 ;
+(BOOL)_boolForKey:(id)arg0 defaultValue:(BOOL)arg1 domain:(struct __CFString *)arg2 ;
+(BOOL)isApprover;
+(BOOL)isRequester;
+(BOOL)retryNotificationRegistration;
+(NSInteger)_integerForKey:(id)arg0 defaultValue:(NSInteger)arg1 ;
+(NSInteger)_integerForKey:(id)arg0 defaultValue:(NSInteger)arg1 domain:(struct __CFString *)arg2 ;
+(id)_valueForKey:(id)arg0 ;
+(id)_valueForKey:(id)arg0 domain:(struct __CFString *)arg1 ;
+(void)_setBool:(BOOL)arg0 forKey:(id)arg1 ;
+(void)_setBool:(BOOL)arg0 forKey:(id)arg1 domain:(struct __CFString *)arg2 ;
+(void)_setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
+(void)_setValue:(id)arg0 forKey:(id)arg1 ;
+(void)_setValue:(id)arg0 forKey:(id)arg1 domain:(struct __CFString *)arg2 ;
+(void)setAPSDevelopmentEnvironment:(BOOL)arg0 ;
+(void)setIsApprover:(BOOL)arg0 ;
+(void)setIsRequester:(BOOL)arg0 ;
+(void)setRetryNotificationRegistration:(BOOL)arg0 ;


@end


#endif