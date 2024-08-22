// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCGOALPROGRESSEVALUATOR_H
#define FCGOALPROGRESSEVALUATOR_H


#import <Foundation/Foundation.h>


@interface FCGoalProgressEvaluator : NSObject



+(BOOL)_eventDidCrossScheduledThreshold:(id)arg0 withModel:(id)arg1 evaluationDelegate:(id)arg2 ;
+(id)_nextFireDateForEvent:(id)arg0 model:(id)arg1 ;
+(id)evaluateEvents:(id)arg0 withModel:(id)arg1 evaluationDelegate:(id)arg2 ;
+(id)nextScheduledDatesByEventIdentifiersForEvents:(id)arg0 model:(id)arg1 evaluationDelegate:(id)arg2 ;


@end


#endif