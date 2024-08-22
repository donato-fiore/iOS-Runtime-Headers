// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHEARTRATESUMMARYQUERYSERVER_H
#define HDHEARTRATESUMMARYQUERYSERVER_H

@class HKHeartRateSummary, NSString;
@protocol HDActivityCacheManagerObserver;


#import "HDQueryServer.h"
#import "HDActivityCacheManager.h"

@interface HDHeartRateSummaryQueryServer : HDQueryServer <HDActivityCacheManagerObserver>

 {
    HKHeartRateSummary *_latestSummary;
    HDActivityCacheManager *_activityCacheManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)queryClass;
+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(void)_queue_start;
-(void)_queue_stop;
-(void)activityCacheManager:(id)arg0 changedHeartRateSummary:(id)arg1 isToday:(BOOL)arg2 ;
-(void)activityCacheManager:(id)arg0 changedTodayActivityCache:(id)arg1 ;


@end


#endif