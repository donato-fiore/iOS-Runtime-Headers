// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INTASKSTATUSRESOLUTIONRESULT_H
#define INTASKSTATUSRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INTaskStatusResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithTaskStatusToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedTaskStatus:(NSInteger)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(void)transformResolutionResultForIntent:(id)arg0 intentSlotDescription:(id)arg1 withOptionsProvider:(id)arg2 completion:(id)arg3 ;


@end


#endif