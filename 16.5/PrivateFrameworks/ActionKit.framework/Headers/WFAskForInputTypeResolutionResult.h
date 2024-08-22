// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFASKFORINPUTTYPERESOLUTIONRESULT_H
#define WFASKFORINPUTTYPERESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface WFAskForInputTypeResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithAskForInputTypeToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedAskForInputType:(NSInteger)arg0 ;


@end


#endif