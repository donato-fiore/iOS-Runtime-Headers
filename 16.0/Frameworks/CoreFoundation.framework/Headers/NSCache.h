// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCACHE_H
#define NSCACHE_H

@class NSString;
@protocol NSCacheDelegate;

#import <Foundation/Foundation.h>


@interface NSCache : NSObject {
    id<NSCacheDelegate> *_cacheDelegate;
    *cache_s _cache;
    unsigned char _discardableContentState;
    BOOL _evictOnSuspension;
    BOOL _evictsDiscarded;
    BOOL _moribund;
    BOOL _doDelegateWillEvictValue;
}


@property NSUInteger countLimit;
@property NSObject<NSCacheDelegate> *delegate;
@property BOOL evictsObjectsWithDiscardedContent;
@property (copy) NSString *name;
@property NSUInteger totalCostLimit;


-(BOOL)evictsObjectsWhenApplicationEntersBackground;
-(NSUInteger)minimumObjectCount;
-(id)allObjects;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(void)__apply:(id)arg0 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)arg0 ;
-(void)setMinimumObjectCount:(NSUInteger)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 cost:(NSUInteger)arg2 ;


@end


#endif