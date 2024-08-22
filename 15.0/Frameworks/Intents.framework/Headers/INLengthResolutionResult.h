// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INLENGTHRESOLUTIONRESULT_H
#define INLENGTHRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INLengthResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithLengthToConfirm:(id)arg0 ;
+(id)disambiguationWithLengthsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedLength:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif