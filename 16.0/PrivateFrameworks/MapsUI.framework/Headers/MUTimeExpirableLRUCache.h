// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUTIMEEXPIRABLELRUCACHE_H
#define MUTIMEEXPIRABLELRUCACHE_H

@class NSMutableDictionary, NSString;
@protocol MULRUCacheDelegate;

#import <Foundation/Foundation.h>

#import "MULRUCache.h"

@interface MUTimeExpirableLRUCache : NSObject <MULRUCacheDelegate>

 {
    NSMutableDictionary *_timestampsByCacheKeys;
    MULRUCache *_valuesByCacheKeys;
    CGFloat _timeToLiveInSeconds;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maxSize; // ivar: _maxSize
@property (readonly) Class superclass;


-(NSUInteger)numberOfTimestamps;
-(id)initWithMaxSize:(NSUInteger)arg0 timeToLive:(CGFloat)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)timestampForKey:(id)arg0 ;
-(void)lruCache:(id)arg0 willEvictObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif