// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMPARAMSMANAGER_H
#define PMPARAMSMANAGER_H


#import <Foundation/Foundation.h>


@interface PMParamsManager : NSObject



+(BOOL)isValidParamKey:(id)arg0 ;
+(BOOL)isValidParamTypeWithKey:(id)arg0 paramType:(int)arg1 ;
+(id)defaultParamsSet;
+(id)getDefaultParamDict;
+(id)getDefaultSearchParamsWithCaching:(BOOL)arg0 ;
+(id)loadSearchParamsFromUserDefaults;
+(id)log;
+(id)paramFromKeyValues:(id)arg0 ;
+(id)paramKeySet:(id)arg0 ;
+(id)paramsFromFallback;
+(id)paramsFromString:(id)arg0 ;
+(id)pmParamKeyValueWithKey:(id)arg0 boolValue:(BOOL)arg1 ;
+(id)pmParamKeyValueWithKey:(id)arg0 floatValue:(float)arg1 ;
+(id)pmParamKeyValueWithKey:(id)arg0 intValue:(int)arg1 ;
+(id)pmParamKeyValueWithKey:(id)arg0 stringValue:(id)arg1 ;
+(id)resolveOverrides:(id)arg0 withEnableParamCaching:(BOOL)arg1 ;
+(id)resolveParamWithDefaultKV:(id)arg0 withOverrideParamSet:(id)arg1 withOverrideParams:(id)arg2 ;
+(void)saveSearchParamsToUserDefaults;


@end


#endif