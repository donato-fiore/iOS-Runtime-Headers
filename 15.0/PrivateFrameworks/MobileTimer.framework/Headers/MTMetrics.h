// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTMETRICS_H
#define MTMETRICS_H

@protocol NAScheduler;

#import <Foundation/Foundation.h>


@interface MTMetrics : NSObject

@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer


+(id)_sharedPublicMetrics;
-(id)init;
-(void)logAlarmAdded:(BOOL)arg0 ;
-(void)logAlarmDeleted:(BOOL)arg0 ;
-(void)logAlarmDismissAction:(NSUInteger)arg0 ;
-(void)logAlarmSnoozeAction:(NSUInteger)arg0 ;
-(void)logAlarmUpdated:(BOOL)arg0 ;
-(void)logMultipleTimersAdded:(id)arg0 ;
-(void)logSyncCompleted;
-(void)logSyncFailedWithError:(id)arg0 ;
-(void)logTimerAdded;
-(void)logTimerDeleted;
-(void)logTimerDismissed;
-(void)logTimerRepeated;
-(void)logTimerUpdated;


@end


#endif