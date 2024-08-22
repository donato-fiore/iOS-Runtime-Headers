// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCACHE_H
#define CNCACHE_H

@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol CNScheduler;

#import <Foundation/Foundation.h>


@interface CNCache : NSObject

@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allObjects;
@property (readonly, copy, nonatomic) NSArray *boundingStrategies; // ivar: _boundingStrategies
@property (readonly, nonatomic) NSMutableArray *didEvictHandlers; // ivar: _didEvictHandlers
@property (copy, nonatomic) NSArray *evictedKeysAndValues; // ivar: _evictedKeysAndValues
@property (readonly, nonatomic) NSObject<CNScheduler> *resourceScheduler; // ivar: _resourceScheduler
@property (readonly, nonatomic) NSMutableDictionary *storage; // ivar: _storage


+(id)atomicCache;
+(id)atomicCacheScheduler;
+(id)boundingStrategyWithCapacity:(NSUInteger)arg0 ;
+(id)boundingStrategyWithTTL:(CGFloat)arg0 ;
+(id)boundingStrategyWithTTL:(CGFloat)arg0 renewalOptions:(NSUInteger)arg1 timeProvider:(id)arg2 ;
+(id)cache;
+(id)nonatomicCacheScheduler;
-(id)description;
-(id)init;
-(id)initWithBoundingStrategies:(id)arg0 resourceScheduler:(id)arg1 ;
-(id)initWithResourceScheduler:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 onCacheMiss:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)resultWithResourceLock:(id)arg0 ;
-(void)addDidEvictHandler:(id)arg0 ;
-(void)callDidEvictHandlersIfNecessary;
-(void)performWithResourceLock:(id)arg0 ;
-(void)removeAllObjects;
-(void)resourceLock_evictObjectForKey:(id)arg0 ;
-(void)resourceLock_evictObjectsForKeys:(id)arg0 ;
-(void)resourceLock_setObject:(id)arg0 forKey:(id)arg1 ;
-(void)resourceLock_validateAllKeys;
-(void)resourceLock_validateKey:(id)arg0 ;
-(void)resourceLock_willAccessKey:(id)arg0 ;
-(void)resourceLock_willSetObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif