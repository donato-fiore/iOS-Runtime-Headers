// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARKITUSERDEFAULTS_H
#define ARKITUSERDEFAULTS_H


#import <Foundation/Foundation.h>


@interface ARKitUserDefaults : NSObject



+(BOOL)boolForKey:(id)arg0 ;
+(BOOL)shouldUseCache;
+(CGFloat)doubleForKey:(id)arg0 ;
+(NSInteger)integerForKey:(id)arg0 ;
+(float)floatForKey:(id)arg0 ;
+(id)cachedObjectForKey:(id)arg0 ;
+(id)defaultValues;
+(id)keysApprovedForProcessEnvironmentOverride;
+(id)listForKey:(id)arg0 ;
+(id)numberForKey:(id)arg0 ;
+(id)objectForKey:(id)arg0 ;
+(id)objectForKey:(id)arg0 useCache:(BOOL)arg1 ;
+(id)objectForKeySlow:(id)arg0 ;
+(id)resolutionDictionaryForKey:(id)arg0 ;
+(id)stringForKey:(id)arg0 ;
+(id)userDefaultsCache;
+(id)valueForKey:(id)arg0 ;
+(void)cacheObject:(id)arg0 forKey:(id)arg1 ;
+(void)clearUserDefaultsCache;
+(void)removeAllKeys;
+(void)removeCachedObjectForKey:(id)arg0 ;
+(void)removeObjectForKey:(id)arg0 ;
+(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
+(void)setObject:(id)arg0 forKey:(id)arg1 ;
+(void)setValue:(id)arg0 forKey:(id)arg1 ;
+(void)synchronize;


@end


#endif