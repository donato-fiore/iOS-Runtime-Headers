// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INCARSIGNALOPTIONSRESOLUTIONRESULT_H
#define INCARSIGNALOPTIONSRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INCarSignalOptionsResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithCarSignalOptionsToConfirm:(NSUInteger)arg0 ;
+(id)confirmationRequiredWithValueToConfirm:(NSUInteger)arg0 ;
+(id)successWithResolvedCarSignalOptions:(NSUInteger)arg0 ;
+(id)successWithResolvedValue:(NSUInteger)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif