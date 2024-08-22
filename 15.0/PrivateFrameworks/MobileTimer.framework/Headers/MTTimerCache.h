// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTTIMERCACHE_H
#define MTTIMERCACHE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "MTTimer.h"

@interface MTTimerCache : NSObject

@property (nonatomic) os_unfair_lock_s cacheLock; // ivar: _cacheLock
@property (nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (retain, nonatomic) MTTimer *nextTimer; // ivar: _nextTimer
@property (retain, nonatomic) NSMutableArray *orderedTimers; // ivar: _orderedTimers
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock


-(BOOL)_isUpdateNeeded;
-(id)initWithUpdateBlock:(id)arg0 ;
// -(void)_getCachedTimersWithCompletion:(id)arg0 doSynchronous:(unk)arg1  ;
-(void)_withLock:(id)arg0 ;
-(void)getCachedTimersSyncWithCompletion:(id)arg0 ;
-(void)getCachedTimersWithCompletion:(id)arg0 ;
-(void)markNeedsUpdate;


@end


#endif