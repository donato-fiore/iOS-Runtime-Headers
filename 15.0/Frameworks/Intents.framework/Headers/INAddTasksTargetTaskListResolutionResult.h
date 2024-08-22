// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INADDTASKSTARGETTASKLISTRESOLUTIONRESULT_H
#define INADDTASKSTARGETTASKLISTRESOLUTIONRESULT_H



#import "INTaskListResolutionResult.h"

@interface INAddTasksTargetTaskListResolutionResult : INTaskListResolutionResult



+(id)confirmationRequiredWithTaskListToConfirm:(id)arg0 forReason:(NSInteger)arg1 ;
-(id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg0 ;
-(id)_initWithIntentSlotResolutionResult:(id)arg0 slotDescription:(id)arg1 ;
-(id)initWithTaskListResolutionResult:(id)arg0 ;


@end


#endif