// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTCITYRESOLUTIONRESULT_H
#define MTCITYRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface MTCityResolutionResult : INObjectResolutionResult



+(id)confirmationRequiredWithMTCityToConfirm:(id)arg0 ;
+(id)disambiguationWithMTCitysToDisambiguate:(id)arg0 ;
+(id)successWithResolvedMTCity:(id)arg0 ;


@end


#endif