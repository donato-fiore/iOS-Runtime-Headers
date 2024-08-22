// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INRESTAURANTGUESTRESOLUTIONRESULT_H
#define INRESTAURANTGUESTRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INRestaurantGuestResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithRestaurantGuestToConfirm:(id)arg0 ;
+(id)disambiguationWithRestaurantGuestsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedRestaurantGuest:(id)arg0 ;


@end


#endif