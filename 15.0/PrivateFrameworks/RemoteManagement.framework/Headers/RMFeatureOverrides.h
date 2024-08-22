// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMFEATUREOVERRIDES_H
#define RMFEATUREOVERRIDES_H


#import <Foundation/Foundation.h>


@interface RMFeatureOverrides : NSObject



+(BOOL)boolForDefaultsKey:(id)arg0 ;
+(BOOL)permissiveURLSchemes;
+(BOOL)useHTTPLogging;
+(id)bootstrapURL;
+(id)defaultOverrideForKey:(id)arg0 ;
+(id)dictionaryForDefaultsKey:(id)arg0 ;
+(id)internalStatusForKey:(id)arg0 defaultValue:(id)arg1 ;
+(id)stringForDefaultsKey:(id)arg0 ;


@end


#endif