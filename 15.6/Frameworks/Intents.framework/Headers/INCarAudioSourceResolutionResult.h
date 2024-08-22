// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INCARAUDIOSOURCERESOLUTIONRESULT_H
#define INCARAUDIOSOURCERESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INCarAudioSourceResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithCarAudioSourceToConfirm:(NSInteger)arg0 ;
+(id)confirmationRequiredWithValueToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedCarAudioSource:(NSInteger)arg0 ;
+(id)successWithResolvedValue:(NSInteger)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(void)transformResolutionResultForIntent:(id)arg0 intentSlotDescription:(id)arg1 withOptionsProvider:(id)arg2 completion:(id)arg3 ;


@end


#endif