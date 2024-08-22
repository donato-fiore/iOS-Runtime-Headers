// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INMODIFYNICKNAMERESOLUTIONRESULT_H
#define INMODIFYNICKNAMERESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INModifyNicknameResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithModifyNicknameToConfirm:(id)arg0 ;
+(id)disambiguationWithModifyNicknamesToDisambiguate:(id)arg0 ;
+(id)successWithResolvedModifyNickname:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif