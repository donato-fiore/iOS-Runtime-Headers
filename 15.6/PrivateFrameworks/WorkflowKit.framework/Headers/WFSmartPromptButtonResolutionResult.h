// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSMARTPROMPTBUTTONRESOLUTIONRESULT_H
#define WFSMARTPROMPTBUTTONRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface WFSmartPromptButtonResolutionResult : INObjectResolutionResult



+(id)confirmationRequiredWithSmartPromptButtonToConfirm:(id)arg0 ;
+(id)disambiguationWithSmartPromptButtonsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedSmartPromptButton:(id)arg0 ;


@end


#endif