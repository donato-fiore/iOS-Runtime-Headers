// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INALARMRESOLUTIONRESULT_H
#define INALARMRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INAlarmResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithAlarmToConfirm:(id)arg0 ;
+(id)disambiguationWithAlarmsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedAlarm:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif