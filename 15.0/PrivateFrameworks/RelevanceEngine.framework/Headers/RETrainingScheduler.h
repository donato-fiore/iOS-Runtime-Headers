// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RETRAININGSCHEDULER_H
#define RETRAININGSCHEDULER_H


#import <Foundation/Foundation.h>


@interface RETrainingScheduler : NSObject



+(id)schedulerWithBehavior:(NSUInteger)arg0 ;
-(void)cancelPendindTasks;
-(void)performTask:(id)arg0 ;


@end


#endif