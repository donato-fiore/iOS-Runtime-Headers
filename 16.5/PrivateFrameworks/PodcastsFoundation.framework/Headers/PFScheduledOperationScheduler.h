// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFSCHEDULEDOPERATIONSCHEDULER_H
#define PFSCHEDULEDOPERATIONSCHEDULER_H


#import <Foundation/Foundation.h>


@interface PFScheduledOperationScheduler : NSObject {
    ? schedule;
    ? storage;
}




+(id)weeklyScheduler;
-(id)init;
-(id)initWithSchedule:(id)arg0 scheduleStorage:(id)arg1 ;
-(void)evaluateOperationWithIdentifier:(id)arg0 evaluationHandler:(id)arg1 ;


@end


#endif