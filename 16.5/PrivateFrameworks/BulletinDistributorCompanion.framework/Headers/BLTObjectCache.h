// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTOBJECTCACHE_H
#define BLTOBJECTCACHE_H

@class NSMutableSet, NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue, BLTObjectCacheDelegate;

#import <Foundation/Foundation.h>


@interface BLTObjectCache : NSObject {
    NSMutableSet *_keys;
    NSMutableDictionary *_cachedObjects;
    NSObject<OS_dispatch_queue> *_queue;
    CGFloat _maxItemAge;
    NSInteger _maxItemCount;
    id<BLTObjectCacheDelegate> *_delegate;
}


@property (readonly, nonatomic) NSSet *keys;


-(BOOL)_doesObjectWithKeyExist:(id)arg0 ;
-(BOOL)_isObjectWithKeyCached:(id)arg0 ;
-(id)_cachedObjectForKey:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 withMaxItemAge:(CGFloat)arg1 ;
-(id)initWithDelegate:(id)arg0 withMaxItemCount:(NSInteger)arg1 ;
-(id)initWithDelegate:(id)arg0 withMaxItemCount:(NSInteger)arg1 andMaxItemAge:(CGFloat)arg2 ;
-(id)objectForKey:(id)arg0 ;
-(void)_addKeyToSet:(id)arg0 ;
-(void)_addObjectToCache:(id)arg0 withKey:(id)arg1 ;
-(void)_deleteObjectFromCacheWithKey:(id)arg0 ;
-(void)_pruneCache;
-(void)_updateCachedObjectIfNecessary:(id)arg0 withKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)storeObject:(id)arg0 withKey:(id)arg1 ;


@end


#endif