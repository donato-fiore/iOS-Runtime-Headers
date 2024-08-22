// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVEFFECTRESOURCES_H
#define PVEFFECTRESOURCES_H


#import <Foundation/Foundation.h>


@interface PVEffectResources : NSObject



+(BOOL)isInteractiveMode;
+(id)utObserver;
+(int)memoryEnvironment;
+(void)applicationWillTerminate;
+(void)cleanupEffectsCache;
+(void)cleanupEffectsSingletons;
+(void)clearAllCachesAndPools;
+(void)flushEngine;
+(void)setInteractiveMode:(BOOL)arg0 ;
+(void)setUTObserver:(id)arg0 ;
+(void)shutdownEngine;
+(void)updateMemoryEnvironment:(int)arg0 ;


@end


#endif