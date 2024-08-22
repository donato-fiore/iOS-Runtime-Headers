// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPRUNINGFACTORLEVELCACHE_H
#define TRIPRUNINGFACTORLEVELCACHE_H

@class _PASLock, _PASSimpleCoalescingTimer;
@protocol TRIFactorLevelCaching;

#import <Foundation/Foundation.h>


@interface TRIPruningFactorLevelCache : NSObject <TRIFactorLevelCaching>

 {
    _PASLock *_lock;
    _PASSimpleCoalescingTimer *_pruningTimer;
    CGFloat _pruningDelaySeconds;
}




-(id)factorLevelCurrentlyCachedForFactorName:(id)arg0 ;
-(id)init;
-(id)initWithPruningDelaySeconds:(CGFloat)arg0 loadFactorLevels:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)_populateCacheForRequiredKey:(id)arg0 guardedData:(id)arg1 ;
-(void)enumerateFactorLevelsUsingBlock:(id)arg0 ;
-(void)pruneSynchronously;


@end


#endif