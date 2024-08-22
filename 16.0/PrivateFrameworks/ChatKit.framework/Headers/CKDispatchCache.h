// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDISPATCHCACHE_H
#define CKDISPATCHCACHE_H

@class NSCache, NSMutableDictionary, NSCountedSet;
@protocol IMSystemMonitorListener, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKDispatchQueue.h"

@interface CKDispatchCache : NSObject <IMSystemMonitorListener>



@property (nonatomic) NSInteger dispatchPriority; // ivar: _dispatchPriority
@property (retain, nonatomic) CKDispatchQueue *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue; // ivar: _lockQueue
@property (retain, nonatomic) NSCache *objectCache; // ivar: _objectCache
@property (retain, nonatomic) NSMutableDictionary *pendingGroups; // ivar: _pendingGroups
@property (retain, nonatomic) NSCountedSet *pendingKeys; // ivar: _pendingKeys


-(BOOL)isGeneratingForKey:(id)arg0 ;
-(BOOL)waitOnGenerationForKey:(id)arg0 ;
-(id)cachedObjectForKey:(id)arg0 ;
-(id)init;
-(id)initWithCacheLimit:(NSUInteger)arg0 dispatchPriority:(NSInteger)arg1 ;
-(void)_beginGeneratingForKeyUnlocked:(id)arg0 ;
-(void)_endGeneratingForKeyUnlocked:(id)arg0 ;
-(void)beginGeneratingForKey:(id)arg0 ;
-(void)clearQueue;
-(void)dealloc;
-(void)emptyCache;
-(void)endGeneratingForKey:(id)arg0 ;
// -(void)enqueueBlock:(id)arg0 withPriority:(unk)arg1  ;
// -(void)enqueueGenerationBlock:(id)arg0 completion:(unk)arg1 withPriority:(id)arg2 forKey:(unk)arg3  ;
-(void)resume;
-(void)setCachedObject:(id)arg0 forKey:(id)arg1 ;
-(void)suspend;
-(void)systemApplicationDidSuspend;


@end


#endif