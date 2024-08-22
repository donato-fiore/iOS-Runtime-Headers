// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDSCACHE_H
#define DDSCACHE_H

@class NSMutableDictionary, NSMutableOrderedSet;
@protocol DDSCacheDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DDSCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *cache; // ivar: _cache
@property (weak, nonatomic) NSObject<DDSCacheDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger maxCount; // ivar: _maxCount
@property (readonly, nonatomic) NSMutableOrderedSet *order; // ivar: _order
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithMaxCount:(NSUInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)cacheObject:(id)arg0 forKey:(id)arg1 ;
-(void)clearCache;


@end


#endif