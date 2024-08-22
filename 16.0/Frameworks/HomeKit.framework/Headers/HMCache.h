// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCACHE_H
#define HMCACHE_H

@class HMFObject, NSMutableDictionary, NSString, NSDictionary;
@protocol HMCache, HMCacheDelegate;



@interface HMCache : HMFObject <HMCache>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_cachedItems;
}


@property (readonly, copy) NSString *cacheName; // ivar: _cacheName
@property (readonly, copy) NSDictionary *cachedObjects;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMCacheDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *name;
@property (readonly) Class superclass;


+(id)shortDescription;
-(id)dataForKey:(id)arg0 ;
-(id)initWithCachedObjects:(id)arg0 name:(id)arg1 ;
-(id)numberForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)_setData:(id)arg0 forKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setData:(id)arg0 forKey:(id)arg1 ;
-(void)setNumber:(id)arg0 forKey:(id)arg1 ;
-(void)setString:(id)arg0 forKey:(id)arg1 ;


@end


#endif