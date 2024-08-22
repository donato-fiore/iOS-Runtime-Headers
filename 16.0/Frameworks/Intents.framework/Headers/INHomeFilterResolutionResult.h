// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INHOMEFILTERRESOLUTIONRESULT_H
#define INHOMEFILTERRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INHomeFilterResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithHomeFilterToConfirm:(id)arg0 ;
+(id)disambiguationWithHomeFiltersToDisambiguate:(id)arg0 ;
+(id)successWithResolvedHomeFilter:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif