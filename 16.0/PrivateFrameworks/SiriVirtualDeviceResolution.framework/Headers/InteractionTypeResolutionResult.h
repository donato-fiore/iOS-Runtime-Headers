// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INTERACTIONTYPERESOLUTIONRESULT_H
#define INTERACTIONTYPERESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface InteractionTypeResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithInteractionTypeToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedInteractionType:(NSInteger)arg0 ;


@end


#endif