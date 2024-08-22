// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INOBJECTRESOLUTIONRESULT_H
#define INOBJECTRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INObjectResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithObjectToConfirm:(id)arg0 ;
+(id)disambiguationWithObjectsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedObject:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(void)transformResolutionResultForIntent:(id)arg0 intentSlotDescription:(id)arg1 withOptionsProvider:(id)arg2 completion:(id)arg3 ;


@end


#endif