// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INTIMERRESOLUTIONRESULT_H
#define INTIMERRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INTimerResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithTimerToConfirm:(id)arg0 ;
+(id)disambiguationWithTimersToDisambiguate:(id)arg0 ;
+(id)successWithResolvedTimer:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif