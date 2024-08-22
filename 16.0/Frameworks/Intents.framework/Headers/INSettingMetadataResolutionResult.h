// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INSETTINGMETADATARESOLUTIONRESULT_H
#define INSETTINGMETADATARESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INSettingMetadataResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithSettingMetadataToConfirm:(id)arg0 ;
+(id)disambiguationWithSettingMetadatasToDisambiguate:(id)arg0 ;
+(id)successWithResolvedSettingMetadata:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif