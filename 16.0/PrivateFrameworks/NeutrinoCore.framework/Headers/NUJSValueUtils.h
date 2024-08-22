// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUJSVALUEUTILS_H
#define NUJSVALUEUTILS_H


#import <Foundation/Foundation.h>


@interface NUJSValueUtils : NSObject



+(BOOL)nujs_isFunction:(id)arg0 ;
+(BOOL)nujs_isString:(id)arg0 ;
+(id)nujs_callWithArguments:(id)arg0 thisObject:(id)arg1 jsValue:(id)arg2 ;
+(id)nujs_functionSource:(id)arg0 ;
+(id)nujs_properties:(id)arg0 ;
+(id)nujs_toArray:(id)arg0 ;
+(id)nujs_toDictionary:(id)arg0 ;
+(id)nujs_toObject:(id)arg0 ;
+(id)nujs_valueWithFunction:(id)arg0 params:(id)arg1 body:(id)arg2 sourceURL:(id)arg3 inContext:(id)arg4 ;


@end


#endif