// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCDIGESTSCHEDULEMANAGER_H
#define NCDIGESTSCHEDULEMANAGER_H

@class NSMutableSet, PCPersistentTimer, NSArray, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NCDigestInfo.h"

@interface NCDigestScheduleManager : NSObject

@property (retain, nonatomic) NSMutableSet *digestInfos; // ivar: _digestInfos
@property (retain, nonatomic) PCPersistentTimer *digestScheduleTimer; // ivar: _digestScheduleTimer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *digestScheduleTimerQueue; // ivar: _digestScheduleTimerQueue
@property (retain, nonatomic) NSArray *digestScheduleTimes; // ivar: _digestScheduleTimes
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NCDigestInfo *previouslyScheduledDigestInfo; // ivar: _previouslyScheduledDigestInfo
@property (retain, nonatomic) NCDigestInfo *upcomingScheduledDigestInfo; // ivar: _upcomingScheduledDigestInfo


-(id)_currentScheduleTimes;
-(id)_scheduleDateFromScheduleTime:(id)arg0 ;
-(id)init;
-(void)_handleTimeOrLocaleChange:(id)arg0 ;
-(void)_publishDigestInfo:(id)arg0 withUpcomingDigestInfo:(id)arg1 ;
-(void)_publishRevokeUpcomingDigest:(id)arg0 ;
-(void)_publishToAllObservers:(id)arg0 ;
-(void)_publishUpcomingDigestInfo:(id)arg0 ;
-(void)_scheduleTimerFiredForTimer:(id)arg0 ;
-(void)_scheduleTimerForDigestInfo:(id)arg0 ;
-(void)_updateDigestInfosForScheduleTimes:(id)arg0 ;
-(void)_updateUpcomingScheduledDigestInfo;
-(void)addObserver:(id)arg0 ;
-(void)invalidateScheduledTimer;
-(void)invalidateScheduledTimerSendCancel:(BOOL)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif