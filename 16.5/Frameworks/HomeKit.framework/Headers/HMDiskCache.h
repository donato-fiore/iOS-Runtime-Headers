// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDISKCACHE_H
#define HMDISKCACHE_H

@class HMFObject, NSString;
@protocol HMPersistentCache;



@interface HMDiskCache : HMFObject <HMPersistentCache>



@property (readonly, copy) NSString *cachePath; // ivar: _cachePath


-(BOOL)storeCachedObjects:(id)arg0 forCacheName:(id)arg1 ;
-(id)initWithCachePath:(id)arg0 ;
-(id)loadCachedObjectsForCacheWithName:(id)arg0 ;


@end


#endif