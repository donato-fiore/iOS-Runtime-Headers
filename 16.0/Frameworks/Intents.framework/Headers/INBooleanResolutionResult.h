// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INBOOLEANRESOLUTIONRESULT_H
#define INBOOLEANRESOLUTIONRESULT_H

@class NSString;
@protocol INBooleanResolutionResultExport;


#import "INIntentResolutionResult.h"

@interface INBooleanResolutionResult : INIntentResolutionResult <INBooleanResolutionResultExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)confirmationRequiredWithValueToConfirm:(id)arg0 ;
+(id)successWithResolvedValue:(BOOL)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif