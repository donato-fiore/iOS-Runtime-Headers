// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INCONTACTEVENTTRIGGERRESOLUTIONRESULT_H
#define INCONTACTEVENTTRIGGERRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INContactEventTriggerResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithContactEventTriggerToConfirm:(id)arg0 ;
+(id)disambiguationWithContactEventTriggersToDisambiguate:(id)arg0 ;
+(id)successWithResolvedContactEventTrigger:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif