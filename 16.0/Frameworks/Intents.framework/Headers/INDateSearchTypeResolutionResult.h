// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INDATESEARCHTYPERESOLUTIONRESULT_H
#define INDATESEARCHTYPERESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INDateSearchTypeResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithDateSearchTypeToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedDateSearchType:(NSInteger)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(void)transformResolutionResultForIntent:(id)arg0 intentSlotDescription:(id)arg1 withOptionsProvider:(id)arg2 completion:(id)arg3 ;


@end


#endif