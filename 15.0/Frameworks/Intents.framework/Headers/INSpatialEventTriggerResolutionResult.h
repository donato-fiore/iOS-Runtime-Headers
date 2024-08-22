// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSPATIALEVENTTRIGGERRESOLUTIONRESULT_H
#define INSPATIALEVENTTRIGGERRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INSpatialEventTriggerResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithSpatialEventTriggerToConfirm:(id)arg0 ;
+(id)disambiguationWithSpatialEventTriggersToDisambiguate:(id)arg0 ;
+(id)successWithResolvedSpatialEventTrigger:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif