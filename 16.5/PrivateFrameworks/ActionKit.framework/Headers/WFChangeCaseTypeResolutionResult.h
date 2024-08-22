// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCHANGECASETYPERESOLUTIONRESULT_H
#define WFCHANGECASETYPERESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface WFChangeCaseTypeResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithChangeCaseTypeToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedChangeCaseType:(NSInteger)arg0 ;


@end


#endif