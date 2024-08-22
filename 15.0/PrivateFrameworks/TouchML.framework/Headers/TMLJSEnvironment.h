// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLJSENVIRONMENT_H
#define TMLJSENVIRONMENT_H


#import <Foundation/Foundation.h>


@interface TMLJSEnvironment : NSObject



+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)convertJsValue:(id)arg0 toType:(NSUInteger)arg1 ;
+(id)convertTmlValue:(id)arg0 ;
+(id)createJSContextWithRuntimeContext:(id)arg0 ;
+(id)currentContext;
+(id)defaultModules;
+(id)normalizeValue:(id)arg0 toType:(NSUInteger)arg1 ;
+(id)protoJSContext;
+(id)sharedVM;
+(id)validCurrentContext;
+(void)addGCCallback:(id)arg0 ;
+(void)addToDefaultModules:(id)arg0 ;
+(void)applicationDidReceiveMemoryWarningNotification:(id)arg0 ;
+(void)forceGC;
+(void)initializeJSContext:(id)arg0 ;
+(void)requireModule:(id)arg0 forJSContext:(id)arg1 ;
+(void)runInContext:(id)arg0 block:(id)arg1 ;
+(void)setCurrentContext:(id)arg0 ;


@end


#endif