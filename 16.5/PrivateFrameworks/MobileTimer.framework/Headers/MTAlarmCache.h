// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTALARMCACHE_H
#define MTALARMCACHE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "MTAlarm.h"

@interface MTAlarmCache : NSObject

@property (nonatomic) os_unfair_lock_s cacheLock; // ivar: _cacheLock
@property (nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (retain, nonatomic) MTAlarm *nextAlarm; // ivar: _nextAlarm
@property (retain, nonatomic) NSMutableArray *orderedAlarms; // ivar: _orderedAlarms
@property (retain, nonatomic) NSMutableArray *sleepAlarms; // ivar: _sleepAlarms
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock


-(BOOL)_isUpdateNeeded;
-(id)initWithUpdateBlock:(id)arg0 ;
// -(void)_getCachedAlarmsWithCompletion:(id)arg0 doSynchronous:(unk)arg1  ;
-(void)_withLock:(id)arg0 ;
-(void)getCachedAlarmsSyncWithCompletion:(id)arg0 ;
-(void)getCachedAlarmsWithCompletion:(id)arg0 ;
-(void)markNeedsUpdate;


@end


#endif