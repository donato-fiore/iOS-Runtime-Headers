// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSPUBLICEVENTCACHECREATOR_H
#define CLSPUBLICEVENTCACHECREATOR_H


#import <Foundation/Foundation.h>

#import "CLSPublicEventCache.h"

@interface CLSPublicEventCacheCreator : NSObject

@property (readonly, nonatomic) CLSPublicEventCache *cache; // ivar: _cache
@property (readonly, nonatomic) NSUInteger maximumBatchSize; // ivar: _maximumBatchSize
@property (readonly, nonatomic) CGFloat queryRadius; // ivar: _queryRadius
@property (nonatomic) BOOL simulatesTimeout; // ivar: _simulatesTimeout


// -(id)_queryEventsForTimeLocationTuples:(id)arg0 invalidationTokens:(*id)arg1 progressBlock:(id)arg2 error:(unk)arg3  ;
-(id)createCacheForTimeLocationTuples:(id)arg0 progressBlock:(id)arg1 ;
-(id)initWithCache:(id)arg0 queryRadius:(CGFloat)arg1 ;


@end


#endif