// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INAPPIDENTIFIERRESOLUTIONRESULT_H
#define INAPPIDENTIFIERRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INAppIdentifierResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithAppIdentifierToConfirm:(id)arg0 ;
+(id)disambiguationWithAppIdentifiersToDisambiguate:(id)arg0 ;
+(id)successWithResolvedAppIdentifier:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif