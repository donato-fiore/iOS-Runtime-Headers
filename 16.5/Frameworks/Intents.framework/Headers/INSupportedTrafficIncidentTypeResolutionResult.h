// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INSUPPORTEDTRAFFICINCIDENTTYPERESOLUTIONRESULT_H
#define INSUPPORTEDTRAFFICINCIDENTTYPERESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INSupportedTrafficIncidentTypeResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithSupportedTrafficIncidentTypeToConfirm:(id)arg0 ;
+(id)disambiguationWithSupportedTrafficIncidentTypesToDisambiguate:(id)arg0 ;
+(id)successWithResolvedSupportedTrafficIncidentType:(id)arg0 ;
-(id)_intentSlotValueForObject:(id)arg0 slotDescription:(id)arg1 ;
-(id)_vocabularyValueForObject:(id)arg0 slotDescription:(id)arg1 ;


@end


#endif