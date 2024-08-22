// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPACCNAVUPDATE_H
#define CPACCNAVUPDATE_H


#import <Foundation/Foundation.h>


@interface CPAccNavUpdate : NSObject



+(BOOL)isUpdate:(id)arg0 equalTo:(id)arg1 ;
+(id)_descriptionArray:(id)arg0 resolveEnums:(BOOL)arg1 showNils:(BOOL)arg2 prefix:(id)arg3 ;
+(id)_dictionaryFormat:(id)arg0 resolveEnums:(BOOL)arg1 ;
+(id)_formattedDistanceString:(CGFloat)arg0 ;
+(id)_valueFromCollection:(id)arg0 forParamKey:(id)arg1 ;
+(id)_valueFromMeasurement:(id)arg0 forParamKey:(id)arg1 ;
+(id)copyUpdate:(id)arg0 ;
+(id)description:(id)arg0 ;
+(id)dictionaryIAPFormat:(id)arg0 ;
+(id)dictionaryStringFormat:(id)arg0 ;
+(id)iapDescription:(id)arg0 ;
+(id)update:(id)arg0 valueForKey:(unsigned short)arg1 ;
+(id)update:(id)arg0 valueForParam:(id)arg1 ;
+(id)update:(id)arg0 valueForParamKey:(id)arg1 ;
+(id)update:(id)arg0 valueForProperty:(id)arg1 ;
+(id)updateClass:(Class)arg0 paramForProperty:(id)arg1 ;
+(id)updateClass:(Class)arg0 paramKeyForKey:(unsigned short)arg1 ;
+(void)configureTypesForUpdateClass:(Class)arg0 ;
+(void)decodeUpdate:(id)arg0 withCoder:(id)arg1 ;
+(void)encodeUpdate:(id)arg0 withCoder:(id)arg1 ;
+(void)enumerateUpdate:(id)arg0 paramKeysAndValuesWithBlock:(id)arg1 ;
+(void)enumerateUpdate:(id)arg0 paramsAndValuesWithBlock:(id)arg1 ;
+(void)enumerateUpdateClass:(Class)arg0 paramKeysWithBlock:(id)arg1 ;
+(void)enumerateUpdateClass:(Class)arg0 paramsWithBlock:(id)arg1 ;
+(void)resetUpdate:(id)arg0 ;


@end


#endif