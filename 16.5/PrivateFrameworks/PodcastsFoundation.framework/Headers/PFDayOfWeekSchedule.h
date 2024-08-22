// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFDAYOFWEEKSCHEDULE_H
#define PFDAYOFWEEKSCHEDULE_H

@protocol PFOperationSchedule;

#import <Foundation/Foundation.h>


@interface PFDayOfWeekSchedule : NSObject <PFOperationSchedule>

 {
    ? dayOfWeek;
    ? calendar;
}




+(id)firstDayOfWeek;
-(BOOL)shouldExecuteOn:(id)arg0 previousExecution:(id)arg1 ;
-(id)init;
-(id)initWithDayOfWeek:(NSInteger)arg0 calendar:(id)arg1 ;


@end


#endif