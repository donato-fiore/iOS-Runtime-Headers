// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSETTASKATTRIBUTETEMPORALEVENTTRIGGERRESOLUTIONRESULT_H
#define INSETTASKATTRIBUTETEMPORALEVENTTRIGGERRESOLUTIONRESULT_H



#import "INTemporalEventTriggerResolutionResult.h"

@interface INSetTaskAttributeTemporalEventTriggerResolutionResult : INTemporalEventTriggerResolutionResult



+(id)unsupportedForReason:(NSInteger)arg0 ;
-(id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg0 ;
-(id)_initWithIntentSlotResolutionResult:(id)arg0 slotDescription:(id)arg1 ;
-(id)initWithTemporalEventTriggerResolutionResult:(id)arg0 ;


@end


#endif