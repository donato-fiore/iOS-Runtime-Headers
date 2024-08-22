// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCHANGEALARMSTATUSOPERATIONRESOLUTIONRESULT_H
#define INCHANGEALARMSTATUSOPERATIONRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INChangeAlarmStatusOperationResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithChangeAlarmStatusOperationToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedChangeAlarmStatusOperation:(NSInteger)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(void)transformResolutionResultForIntent:(id)arg0 intentSlotDescription:(id)arg1 withOptionsProvider:(id)arg2 completion:(id)arg3 ;


@end


#endif