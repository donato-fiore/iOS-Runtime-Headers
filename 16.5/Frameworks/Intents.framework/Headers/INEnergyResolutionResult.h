// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INENERGYRESOLUTIONRESULT_H
#define INENERGYRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INEnergyResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithEnergyToConfirm:(id)arg0 ;
+(id)disambiguationWithEnergyToDisambiguate:(id)arg0 ;
+(id)successWithResolvedEnergy:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif