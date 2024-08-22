// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCACHEMANAGER_H
#define HMCACHEMANAGER_H

@class HMFObject, NSMapTable, NSString, NSMutableDictionary, HMFTimer;
@protocol HMCacheDelegate, HMFTimerDelegate, HMPersistentCache, OS_dispatch_queue;



@interface HMCacheManager : HMFObject <HMCacheDelegate, HMFTimerDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (readonly) NSMapTable *cacheMap; // ivar: _cacheMap
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSMutableDictionary *pendingWrites; // ivar: _pendingWrites
@property (readonly) NSObject<HMPersistentCache> *persistentCache; // ivar: _persistentCache
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (readonly) HMFTimer *writeDebounceTimer; // ivar: _writeDebounceTimer


-(id)_cacheWithName:(id)arg0 ;
-(id)_loadCacheNamed:(id)arg0 ;
-(id)cacheWithName:(id)arg0 ;
// -(id)initWithTimerFactory:(id)arg0 persistentCache:(unk)arg1  ;
-(void)_saveCache:(id)arg0 ;
-(void)cacheDidUpdate:(id)arg0 ;
-(void)cacheWithName:(id)arg0 completion:(id)arg1 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif