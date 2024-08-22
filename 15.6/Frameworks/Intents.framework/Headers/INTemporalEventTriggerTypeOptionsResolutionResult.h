// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INTEMPORALEVENTTRIGGERTYPEOPTIONSRESOLUTIONRESULT_H
#define INTEMPORALEVENTTRIGGERTYPEOPTIONSRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INTemporalEventTriggerTypeOptionsResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithTemporalEventTriggerTypeOptionsToConfirm:(NSUInteger)arg0 ;
+(id)successWithResolvedTemporalEventTriggerTypeOptions:(NSUInteger)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif