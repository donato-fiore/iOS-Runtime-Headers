// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFILERESOLUTIONRESULT_H
#define INFILERESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INFileResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithFileToConfirm:(id)arg0 ;
+(id)disambiguationWithFilesToDisambiguate:(id)arg0 ;
+(id)successWithResolvedFile:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif