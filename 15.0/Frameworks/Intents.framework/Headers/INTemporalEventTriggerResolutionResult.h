// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INTEMPORALEVENTTRIGGERRESOLUTIONRESULT_H
#define INTEMPORALEVENTTRIGGERRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INTemporalEventTriggerResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithTemporalEventTriggerToConfirm:(id)arg0 ;
+(id)disambiguationWithTemporalEventTriggersToDisambiguate:(id)arg0 ;
+(id)successWithResolvedTemporalEventTrigger:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif