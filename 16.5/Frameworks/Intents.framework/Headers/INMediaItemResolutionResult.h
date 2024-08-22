// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INMEDIAITEMRESOLUTIONRESULT_H
#define INMEDIAITEMRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INMediaItemResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithMediaItemToConfirm:(id)arg0 ;
+(id)disambiguationWithMediaItemsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedMediaItem:(id)arg0 ;
+(id)successesWithResolvedMediaItems:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif