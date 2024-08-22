// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSPSLEEPSTORECACHE_H
#define HKSPSLEEPSTORECACHE_H


#import <Foundation/Foundation.h>

#import "HKSPSleepEventRecord.h"
#import "HKSPSleepSchedule.h"
#import "HKSPSleepSettings.h"

@interface HKSPSleepStoreCache : NSObject

@property (readonly, nonatomic) os_unfair_lock_s cacheLock; // ivar: _cacheLock
@property (readonly, copy, nonatomic) HKSPSleepEventRecord *sleepEventRecord; // ivar: _sleepEventRecord
@property (readonly, nonatomic) BOOL sleepEventRecordNeedsUpdate; // ivar: _sleepEventRecordNeedsUpdate
@property (readonly, nonatomic) NSInteger sleepMode; // ivar: _sleepMode
@property (readonly, nonatomic) BOOL sleepModeNeedsUpdate; // ivar: _sleepModeNeedsUpdate
@property (readonly, copy, nonatomic) HKSPSleepSchedule *sleepSchedule; // ivar: _sleepSchedule
@property (readonly, nonatomic) BOOL sleepScheduleNeedsUpdate; // ivar: _sleepScheduleNeedsUpdate
@property (readonly, nonatomic) NSUInteger sleepScheduleState; // ivar: _sleepScheduleState
@property (readonly, nonatomic) BOOL sleepScheduleStateNeedsUpdate; // ivar: _sleepScheduleStateNeedsUpdate
@property (readonly, copy, nonatomic) HKSPSleepSettings *sleepSettings; // ivar: _sleepSettings
@property (readonly, nonatomic) BOOL sleepSettingsNeedsUpdate; // ivar: _sleepSettingsNeedsUpdate


-(id)cachedSleepEventRecordWithMissHandler:(id)arg0 ;
-(id)cachedSleepModeWithMissHandler:(id)arg0 ;
-(id)cachedSleepScheduleStateWithMissHandler:(id)arg0 ;
-(id)cachedSleepScheduleWithMissHandler:(id)arg0 ;
-(id)cachedSleepSettingsWithMissHandler:(id)arg0 ;
-(id)init;
-(void)_locked_purgeCachedSleepEventRecord;
-(void)_locked_purgeCachedSleepMode;
-(void)_locked_purgeCachedSleepSchedule;
-(void)_locked_purgeCachedSleepScheduleState;
-(void)_locked_purgeCachedSleepSettings;
-(void)_withLock:(id)arg0 ;
-(void)purgeCache;
-(void)purgeCachedSleepEventRecord;
-(void)purgeCachedSleepMode;
-(void)purgeCachedSleepSchedule;
-(void)purgeCachedSleepScheduleState;
-(void)purgeCachedSleepSettings;
-(void)updateCachedSleepEventRecord:(id)arg0 ;
-(void)updateCachedSleepMode:(NSInteger)arg0 ;
-(void)updateCachedSleepSchedule:(id)arg0 ;
-(void)updateCachedSleepScheduleState:(NSUInteger)arg0 ;
-(void)updateCachedSleepSettings:(id)arg0 ;


@end


#endif