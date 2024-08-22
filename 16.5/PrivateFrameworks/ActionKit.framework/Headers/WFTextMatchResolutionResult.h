// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTEXTMATCHRESOLUTIONRESULT_H
#define WFTEXTMATCHRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface WFTextMatchResolutionResult : INObjectResolutionResult



+(BOOL)supportsSecureCoding;
+(id)confirmationRequiredWithTextMatchToConfirm:(id)arg0 ;
+(id)disambiguationWithTextMatchsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedTextMatch:(id)arg0 ;


@end


#endif