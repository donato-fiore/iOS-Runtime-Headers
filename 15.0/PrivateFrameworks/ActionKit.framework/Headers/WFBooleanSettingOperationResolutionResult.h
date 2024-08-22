// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFBOOLEANSETTINGOPERATIONRESOLUTIONRESULT_H
#define WFBOOLEANSETTINGOPERATIONRESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface WFBooleanSettingOperationResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithBooleanSettingOperationToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedBooleanSettingOperation:(NSInteger)arg0 ;


@end


#endif