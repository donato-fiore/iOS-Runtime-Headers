// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INSPEAKABLESTRINGRESOLUTIONRESULT_H
#define INSPEAKABLESTRINGRESOLUTIONRESULT_H

@class NSString;
@protocol INSpeakableStringResolutionResultExport;


#import "INIntentResolutionResult.h"

@interface INSpeakableStringResolutionResult : INIntentResolutionResult <INSpeakableStringResolutionResultExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)confirmationRequiredWithStringToConfirm:(id)arg0 ;
+(id)disambiguationWithStringsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedString:(id)arg0 ;
+(id)unsupportedWithReason:(NSUInteger)arg0 alternativeStrings:(id)arg1 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif