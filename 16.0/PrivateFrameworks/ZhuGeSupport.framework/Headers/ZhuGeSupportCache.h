// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ZHUGESUPPORTCACHE_H
#define ZHUGESUPPORTCACHE_H

@class NSMutableDictionary, NSMutableArray, NSNumber;

#import <Foundation/Foundation.h>


@interface ZhuGeSupportCache : NSObject

@property (readonly) NSMutableDictionary *cacheDict; // ivar: _cacheDict
@property (readonly) NSMutableArray *cacheList; // ivar: _cacheList
@property (readonly) Class cacheType; // ivar: _cacheType
@property (readonly) NSNumber *capacity; // ivar: _capacity


-(BOOL)setCache:(id)arg0 forKey:(id)arg1 withError:(*id)arg2 ;
-(id)getCacheForKey:(id)arg0 ;
-(id)initWithCapacity:(id)arg0 AndCacheType:(Class)arg1 ;


@end


#endif