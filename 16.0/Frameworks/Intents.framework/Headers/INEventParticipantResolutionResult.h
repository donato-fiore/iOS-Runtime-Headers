// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INEVENTPARTICIPANTRESOLUTIONRESULT_H
#define INEVENTPARTICIPANTRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INEventParticipantResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithEventParticipantToConfirm:(id)arg0 ;
+(id)disambiguationWithEventParticipantsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedEventParticipant:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif