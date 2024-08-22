// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INRELATIVEREFERENCERESOLUTIONRESULT_H
#define INRELATIVEREFERENCERESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INRelativeReferenceResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithRelativeReferenceToConfirm:(NSInteger)arg0 ;
+(id)confirmationRequiredWithValueToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedRelativeReference:(NSInteger)arg0 ;
+(id)successWithResolvedValue:(NSInteger)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(void)transformResolutionResultForIntent:(id)arg0 intentSlotDescription:(id)arg1 withOptionsProvider:(id)arg2 completion:(id)arg3 ;


@end


#endif