// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMVISIONENGINECACHE_H
#define AXMVISIONENGINECACHE_H

@class NSMutableOrderedSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXMVisionEngineCache : NSObject {
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSInteger _cacheQueue_maxItems;
    NSMutableOrderedSet *_cacheQueue_orderedKeys;
    NSMutableDictionary *_cacheQueue_results;
}


@property (readonly, nonatomic) NSInteger cacheSize;


-(id)_cacheQueue_resultForKey:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCacheSize:(NSInteger)arg0 ;
-(id)resultForKey:(id)arg0 ;
-(void)_cacheQueue_setResult:(id)arg0 forKey:(id)arg1 ;
-(void)purgeCache;
-(void)setResult:(id)arg0 forKey:(id)arg1 ;


@end


#endif