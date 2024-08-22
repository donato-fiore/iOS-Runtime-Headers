// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFCACHE_H
#define PFCACHE_H

@class NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PFCachePolicy.h"
#import "PFCacheStatistics.h"

@interface PFCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_contents;
    PFCachePolicy *_policy;
    PFCacheStatistics *_statistics;
}


@property (copy) id *willBeRemovedFromCacheHandler; // ivar: _willBeRemovedFromCacheHandler


-(NSUInteger)count;
-(id)description;
-(id)init;
-(id)initWithPolicy:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)setObject:(id)arg0 forKeyIfNotPresent:(id)arg1 ;
-(id)statistics;
-(void)_removeObjectForKey:(id)arg0 notify:(BOOL)arg1 ;
-(void)_setEntry:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)enumerateCacheEntriesUsingBlock:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 forKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectForKeyWithoutNotification:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif