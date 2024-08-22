// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DSCENERENDERCACHE_H
#define TSCH3DSCENERENDERCACHE_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "TSCH3DDictionaryOfDictionary.h"

@interface TSCH3DSceneRenderCache : NSObject {
    NSMutableSet *_enabledKeys;
    TSCH3DDictionaryOfDictionary *_cache;
}




+(id)cache;
+(id)cacheFromScene:(id)arg0 ;
-(BOOL)cacheEnabledForKey:(id)arg0 ;
-(id)cacheObjectForKey:(id)arg0 cacheID:(id)arg1 created:(*BOOL)arg2 ifAbsent:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)enableCache:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setCacheObject:(id)arg0 forKey:(id)arg1 cacheID:(id)arg2 ;


@end


#endif