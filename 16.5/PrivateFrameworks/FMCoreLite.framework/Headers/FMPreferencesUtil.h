// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMPREFERENCESUTIL_H
#define FMPREFERENCESUTIL_H


#import <Foundation/Foundation.h>


@interface FMPreferencesUtil : NSObject



+(BOOL)boolForKey:(id)arg0 inDomain:(id)arg1 ;
+(BOOL)boolForKey:(id)arg0 inDomain:(id)arg1 user:(id)arg2 ;
+(NSInteger)integerForKey:(id)arg0 inDomain:(id)arg1 ;
+(NSInteger)integerForKey:(id)arg0 inDomain:(id)arg1 user:(id)arg2 ;
+(id)arrayForKey:(id)arg0 inDomain:(id)arg1 ;
+(id)arrayForKey:(id)arg0 inDomain:(id)arg1 user:(id)arg2 ;
+(id)dataForKey:(id)arg0 inDomain:(id)arg1 ;
+(id)dataForKey:(id)arg0 inDomain:(id)arg1 user:(id)arg2 ;
+(id)dateForKey:(id)arg0 inDomain:(id)arg1 ;
+(id)dateForKey:(id)arg0 inDomain:(id)arg1 user:(id)arg2 ;
+(id)dictionaryForKey:(id)arg0 inDomain:(id)arg1 ;
+(id)dictionaryForKey:(id)arg0 inDomain:(id)arg1 user:(id)arg2 ;
+(id)objectForKey:(id)arg0 inDomain:(id)arg1 ;
+(id)objectForKey:(id)arg0 inDomain:(id)arg1 user:(id)arg2 ;
+(id)stringForKey:(id)arg0 inDomain:(id)arg1 ;
+(id)stringForKey:(id)arg0 inDomain:(id)arg1 user:(id)arg2 ;
+(void)removeKey:(id)arg0 inDomain:(id)arg1 ;
+(void)setArray:(id)arg0 forKey:(id)arg1 inDomain:(id)arg2 ;
+(void)setBool:(BOOL)arg0 forKey:(id)arg1 inDomain:(id)arg2 ;
+(void)setData:(id)arg0 forKey:(id)arg1 inDomain:(id)arg2 ;
+(void)setDate:(id)arg0 forKey:(id)arg1 inDomain:(id)arg2 ;
+(void)setDictionary:(id)arg0 forKey:(id)arg1 inDomain:(id)arg2 ;
+(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 inDomain:(id)arg2 ;
+(void)setObject:(id)arg0 forKey:(id)arg1 inDomain:(id)arg2 ;
+(void)setString:(id)arg0 forKey:(id)arg1 inDomain:(id)arg2 ;
+(void)synchronizeDomain:(id)arg0 ;
+(void)synchronizeDomain:(id)arg0 user:(id)arg1 ;


@end


#endif