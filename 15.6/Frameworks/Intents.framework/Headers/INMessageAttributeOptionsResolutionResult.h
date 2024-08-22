// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INMESSAGEATTRIBUTEOPTIONSRESOLUTIONRESULT_H
#define INMESSAGEATTRIBUTEOPTIONSRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INMessageAttributeOptionsResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithMessageAttributeOptionsToConfirm:(NSUInteger)arg0 ;
+(id)confirmationRequiredWithValueToConfirm:(NSUInteger)arg0 ;
+(id)successWithResolvedMessageAttributeOptions:(NSUInteger)arg0 ;
+(id)successWithResolvedValue:(NSUInteger)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif