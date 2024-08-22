// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTEXTMATCHRESOLUTIONRESULT_H
#define WFTEXTMATCHRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface WFTextMatchResolutionResult : INObjectResolutionResult



+(id)confirmationRequiredWithTextMatchToConfirm:(id)arg0 ;
+(id)disambiguationWithTextMatchsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedTextMatch:(id)arg0 ;


@end


#endif