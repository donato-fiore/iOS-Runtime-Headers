// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMCACHE_H
#define BMCACHE_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "BMCache.h"

@interface BMCache : NSObject {
    os_unfair_lock_s _lock;
    NSMapTable *_mapTable;
    BMCache *_fallback;
}




+(id)strongCache;
+(id)strongCacheWithFallbackCache:(id)arg0 ;
+(id)weakCache;
-(id)_initWithMapTable:(id)arg0 fallback:(id)arg1 ;
-(id)cachedObjectWithKey:(id)arg0 ;
-(id)cachedObjectWithKey:(id)arg0 missHandler:(id)arg1 ;
// -(void)pruneCacheWithBlock:(id)arg0 completion:(unk)arg1  ;
-(void)removeCachedObjectForKey:(id)arg0 ;
-(void)removeCachedObjectForKey:(id)arg0 performWhileLocked:(id)arg1 ;


@end


#endif