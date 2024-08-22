// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INMEDIADESTINATIONRESOLUTIONRESULT_H
#define INMEDIADESTINATIONRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INMediaDestinationResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithMediaDestinationToConfirm:(id)arg0 ;
+(id)disambiguationWithMediaDestinationsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedMediaDestination:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif