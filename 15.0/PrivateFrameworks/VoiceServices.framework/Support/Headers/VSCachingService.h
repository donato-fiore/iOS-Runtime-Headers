// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSCACHINGSERVICE_H
#define VSCACHINGSERVICE_H

@class NSMutableArray, NSLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VSSpeechCache.h"
#import "VSShortTermCache.h"

@interface VSCachingService : NSObject

@property (retain, nonatomic) VSSpeechCache *cacheStore; // ivar: _cacheStore
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cachingQueue; // ivar: _cachingQueue
@property (retain, nonatomic) NSMutableArray *inMemoryCaches; // ivar: _inMemoryCaches
@property (retain, nonatomic) VSShortTermCache *shortTermCache; // ivar: _shortTermCache
@property (retain, nonatomic) NSLock *threadLock; // ivar: _threadLock


+(id)standardService;
-(id)_inMemoryCacheForHash:(id)arg0 ;
-(id)_onDiskCacheForHash:(id)arg0 ;
-(id)compressAudio:(id)arg0 ;
-(id)compressStreamAudio:(id)arg0 ;
-(id)inMemoryCacheForHash:(id)arg0 ;
-(id)initWithCache:(id)arg0 shortTermMemory:(id)arg1 ;
-(id)onDiskCacheForHash:(id)arg0 ;
-(id)popShortTermCacheForHash:(id)arg0 ;
-(id)shortTermCacheForHash:(id)arg0 ;
-(void)_enqueueCacheWithHash:(id)arg0 audioObject:(id)arg1 timingInfo:(id)arg2 voiceKey:(id)arg3 completion:(id)arg4 ;
-(void)enqueueCacheWithHash:(id)arg0 audio:(id)arg1 timingInfo:(id)arg2 voiceKey:(id)arg3 completion:(id)arg4 ;
-(void)enqueueCacheWithHash:(id)arg0 streamAudio:(id)arg1 timingInfo:(id)arg2 voiceKey:(id)arg3 completion:(id)arg4 ;
-(void)enqueueShortTermCacheWithHash:(id)arg0 audio:(id)arg1 timingInfo:(id)arg2 voiceKey:(id)arg3 completion:(id)arg4 ;
-(void)fetchCacheForTask:(id)arg0 ;


@end


#endif