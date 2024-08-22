// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APCONFIGURATIONCACHE_H
#define APCONFIGURATIONCACHE_H

@class NSMutableDictionary, APUnfairRecursiveLock;
@protocol APPurgeableCacheNotifierP, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface APConfigurationCache : NSObject <APPurgeableCacheNotifierP>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *configSystemCacheQueue; // ivar: _configSystemCacheQueue
@property (retain, nonatomic) NSMutableDictionary *configurationStorage; // ivar: _configurationStorage
@property (retain, nonatomic) NSMutableDictionary *configurationUseRecord; // ivar: _configurationUseRecord
@property (retain, nonatomic) NSObject<OS_dispatch_source> *flushCacheTimer; // ivar: _flushCacheTimer
@property (retain, nonatomic) APUnfairRecursiveLock *lock; // ivar: _lock


+(id)sharedInstance;
-(BOOL)isObjectInCache:(id)arg0 ;
-(id)configurationForPath:(id)arg0 ;
-(id)init;
-(void)_flushCacheStorage;
-(void)_startFlushCacheTimer;
-(void)_stopFlushCacheTimer;
-(void)_updateMostRecentAccessForPath:(id)arg0 ;
-(void)dealloc;
-(void)recentlyAccessedObject:(id)arg0 ;
-(void)resetConfigurationUseForPath:(id)arg0 ;
-(void)setConfiguration:(id)arg0 forPath:(id)arg1 ;


@end


#endif