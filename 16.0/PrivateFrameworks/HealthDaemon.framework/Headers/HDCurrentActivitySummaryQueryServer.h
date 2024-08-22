// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCURRENTACTIVITYSUMMARYQUERYSERVER_H
#define HDCURRENTACTIVITYSUMMARYQUERYSERVER_H

@class HKActivitySummary, NSDictionary, NSString;
@protocol HDCurrentActivitySummaryHelperObserver;


#import "HDQueryServer.h"
#import "HDCurrentActivitySummaryHelper.h"

@interface HDCurrentActivitySummaryQueryServer : HDQueryServer <HDCurrentActivitySummaryHelperObserver>

 {
    HDCurrentActivitySummaryHelper *_currentSummaryHelper;
    HKActivitySummary *_lastActivitySummary;
    NSDictionary *_collectionIntervals;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)queryClass;
+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(BOOL)_shouldListenForUpdates;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_start;
-(void)_queue_startDataCollection;
-(void)_queue_stop;
-(void)_queue_stopDataCollection;
-(void)currentActivitySummaryHelper:(id)arg0 didUpdateTodayActivitySummary:(id)arg1 changedFields:(NSUInteger)arg2 ;
-(void)currentActivitySummaryHelper:(id)arg0 didUpdateYesterdayActivitySummary:(id)arg1 changedFields:(NSUInteger)arg2 ;


@end


#endif