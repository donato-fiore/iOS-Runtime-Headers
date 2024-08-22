// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INTASKLISTRESOLUTIONRESULT_H
#define INTASKLISTRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INTaskListResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithTaskListToConfirm:(id)arg0 ;
+(id)disambiguationWithTaskListsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedTaskList:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif