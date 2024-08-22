// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTALARMOPERATIONRESOLUTIONRESULT_H
#define MTALARMOPERATIONRESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface MTAlarmOperationResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithAlarmOperationToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedAlarmOperation:(NSInteger)arg0 ;


@end


#endif