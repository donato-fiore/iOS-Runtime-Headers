// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INDATECOMPONENTSRANGERESOLUTIONRESULT_H
#define INDATECOMPONENTSRANGERESOLUTIONRESULT_H

@class NSString;
@protocol INDateComponentsRangeResolutionResultExport;


#import "INIntentResolutionResult.h"

@interface INDateComponentsRangeResolutionResult : INIntentResolutionResult <INDateComponentsRangeResolutionResultExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)confirmationRequiredWithDateComponentsRangeToConfirm:(id)arg0 ;
+(id)disambiguationWithDateComponentsRangesToDisambiguate:(id)arg0 ;
+(id)successWithResolvedDateComponentsRange:(id)arg0 ;
+(id)unsupportedWithReason:(NSUInteger)arg0 alternativeDateComponentsRanges:(id)arg1 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif