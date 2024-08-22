// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INHEALTHUNITRESOLUTIONRESULT_H
#define INHEALTHUNITRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INHealthUnitResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithHealthUnitToConfirm:(id)arg0 ;
+(id)disambiguationWithHealthUnitsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedHealthUnit:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif