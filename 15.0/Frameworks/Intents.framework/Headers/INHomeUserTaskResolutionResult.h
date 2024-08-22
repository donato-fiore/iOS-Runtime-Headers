// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INHOMEUSERTASKRESOLUTIONRESULT_H
#define INHOMEUSERTASKRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INHomeUserTaskResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithHomeUserTaskToConfirm:(id)arg0 ;
+(id)disambiguationWithHomeUserTasksToDisambiguate:(id)arg0 ;
+(id)successWithResolvedHomeUserTask:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif