// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSEPHEMERALDEFAULTS_H
#define AMSEPHEMERALDEFAULTS_H


#import <Foundation/Foundation.h>


@interface AMSEphemeralDefaults : NSObject



+(BOOL)HARLoggingEnabled;
+(BOOL)bagKeyRegistrationEnabled;
+(BOOL)preferEphemeralImageLoader;
+(BOOL)preferEphemeralURLSessions;
+(BOOL)processAssertionsEnabled;
+(BOOL)purchaseAccountFallback;
+(BOOL)suppressEngagement;
+(NSInteger)HARLoggingItemLimit;
+(id)_propertyForKey:(id)arg0 defaultValue:(id)arg1 expectedType:(Class)arg2 ;
+(void)_accessDataStoreUsingBlock:(id)arg0 ;
+(void)_setProperty:(id)arg0 forKey:(id)arg1 ;
+(void)setBagKeyRegistrationEnabled:(BOOL)arg0 ;
+(void)setHARLoggingEnabled:(BOOL)arg0 ;
+(void)setHARLoggingItemLimit:(NSInteger)arg0 ;
+(void)setPreferEphemeralImageLoader:(BOOL)arg0 ;
+(void)setPreferEphemeralURLSessions:(BOOL)arg0 ;
+(void)setProcessAssertionsEnabled:(BOOL)arg0 ;
+(void)setPurchaseAccountFallback:(BOOL)arg0 ;
+(void)setSuppressEngagement:(BOOL)arg0 ;


@end


#endif