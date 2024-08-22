// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPOSTERCONFIGURATIONCACHE_H
#define ATXPOSTERCONFIGURATIONCACHE_H

@class ATXGenericFileBasedCache, _PASLock, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXPosterConfigurationCache : NSObject {
    ATXGenericFileBasedCache *_fileCache;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_outputQueue;
}


@property (readonly, copy, nonatomic) NSArray *configurations;


+(id)sharedInstance;
-(id)_fetchConfigurationsReadingFromCacheIfNecessaryWithGuardedData:(id)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(void)_updateLastActiveDatesWithConfigurations:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateConfigurations:(id)arg0 completion:(id)arg1 ;


@end


#endif