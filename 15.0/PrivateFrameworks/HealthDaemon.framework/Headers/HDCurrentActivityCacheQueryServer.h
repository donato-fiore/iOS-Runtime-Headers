// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCURRENTACTIVITYCACHEQUERYSERVER_H
#define HDCURRENTACTIVITYCACHEQUERYSERVER_H

@class NSDateComponents, NSCalendar, HKActivityCache, NSString;
@protocol HDActivityCacheManagerObserver;


#import "HDQueryServer.h"
#import "HDActivityCacheManager.h"

@interface HDCurrentActivityCacheQueryServer : HDQueryServer <HDActivityCacheManagerObserver>

 {
    NSDateComponents *_statisticsIntervalComponents;
    NSCalendar *_calendar;
    HKActivityCache *_lastActivityCache;
    HDActivityCacheManager *_activityCacheManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)queryClass;
+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(BOOL)shouldObserveActivityCache;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_start;
-(void)_queue_stop;
-(void)activityCacheManager:(id)arg0 changedTodayActivityCache:(id)arg1 ;


@end


#endif