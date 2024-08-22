// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTXPCSCHEDULER_H
#define MTXPCSCHEDULER_H

@class NSString;
@protocol MTSchedulingDelegate;

#import <Foundation/Foundation.h>


@interface MTXPCScheduler : NSObject <MTSchedulingDelegate>



@property (copy, nonatomic) NSString *eventName; // ivar: _eventName


+(id)xpcSchedulerWithEvent:(id)arg0 ;
-(id)initWithEvent:(id)arg0 ;
-(void)scheduleActivityWithCriteria:(id)arg0 activityHandler:(id)arg1 ;
// -(void)scheduleActivityWithCriteria:(id)arg0 activityHandler:(id)arg1 performImmediately:(unk)arg2  ;
-(void)scheduleTimerForSeconds:(CGFloat)arg0 ;
-(void)unscheduleActivity;
-(void)unscheduleTimer;


@end


#endif