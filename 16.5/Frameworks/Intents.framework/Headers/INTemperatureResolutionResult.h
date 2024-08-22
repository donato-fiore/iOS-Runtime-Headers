// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INTEMPERATURERESOLUTIONRESULT_H
#define INTEMPERATURERESOLUTIONRESULT_H

@class NSString;
@protocol INTemperatureResolutionResultExport;


#import "INIntentResolutionResult.h"

@interface INTemperatureResolutionResult : INIntentResolutionResult <INTemperatureResolutionResultExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)confirmationRequiredWithTemperatureToConfirm:(id)arg0 ;
+(id)disambiguationWithTemperaturesToDisambiguate:(id)arg0 ;
+(id)successWithResolvedTemperature:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif