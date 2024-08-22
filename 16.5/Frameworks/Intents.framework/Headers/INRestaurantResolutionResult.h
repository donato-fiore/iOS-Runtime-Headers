// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INRESTAURANTRESOLUTIONRESULT_H
#define INRESTAURANTRESOLUTIONRESULT_H



#import "INIntentResolutionResult.h"

@interface INRestaurantResolutionResult : INIntentResolutionResult



+(id)confirmationRequiredWithRestaurantToConfirm:(id)arg0 ;
+(id)disambiguationWithRestaurantsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedRestaurant:(id)arg0 ;


@end


#endif