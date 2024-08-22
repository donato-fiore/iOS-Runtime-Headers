// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INCACHE_H
#define INCACHE_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface INCache : NSObject {
    NSCache *_underlyingCache;
}


@property (readonly, nonatomic) NSCache *_cacheDictionary;


+(id)sharedCache;
-(id)_init;
-(id)cacheableObjectForIdentifier:(id)arg0 ;
-(id)consumeCacheableObjectForIdentifier:(id)arg0 ;
-(id)init;
-(void)addCacheableObject:(id)arg0 ;
-(void)removeAllCacheableObjects;
-(void)removeCacheableObject:(id)arg0 ;


@end


#endif