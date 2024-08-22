// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INPERSONRESOLUTIONRESULT_H
#define INPERSONRESOLUTIONRESULT_H

@class NSString;
@protocol INPersonResolutionResultExport;


#import "INIntentResolutionResult.h"

@interface INPersonResolutionResult : INIntentResolutionResult <INPersonResolutionResultExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)confirmationRequiredWithPersonToConfirm:(id)arg0 ;
+(id)disambiguationWithPeopleToDisambiguate:(id)arg0 ;
+(id)successWithResolvedPerson:(id)arg0 ;
+(id)unsupportedWithReason:(NSUInteger)arg0 alternativePeople:(id)arg1 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif