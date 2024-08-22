// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INPLACEMARKRESOLUTIONRESULT_H
#define INPLACEMARKRESOLUTIONRESULT_H

@class NSString;
@protocol INPlacemarkResolutionResultExport;


#import "INIntentResolutionResult.h"

@interface INPlacemarkResolutionResult : INIntentResolutionResult <INPlacemarkResolutionResultExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)confirmationRequiredWithPlacemarkToConfirm:(id)arg0 ;
+(id)disambiguationWithPlacemarksToDisambiguate:(id)arg0 ;
+(id)successWithResolvedPlacemark:(id)arg0 ;
+(id)unsupportedWithReason:(NSUInteger)arg0 alternativePlacemarks:(id)arg1 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif