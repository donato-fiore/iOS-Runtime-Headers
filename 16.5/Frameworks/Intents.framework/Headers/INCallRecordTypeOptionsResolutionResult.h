// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INCALLRECORDTYPEOPTIONSRESOLUTIONRESULT_H
#define INCALLRECORDTYPEOPTIONSRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INCallRecordTypeOptionsResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithCallRecordTypeOptionsToConfirm:(NSUInteger)arg0 ;
+(id)confirmationRequiredWithValueToConfirm:(NSUInteger)arg0 ;
+(id)successWithResolvedCallRecordTypeOptions:(NSUInteger)arg0 ;
+(id)successWithResolvedValue:(NSUInteger)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif