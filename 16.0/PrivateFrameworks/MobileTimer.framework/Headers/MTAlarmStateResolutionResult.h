// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTALARMSTATERESOLUTIONRESULT_H
#define MTALARMSTATERESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface MTAlarmStateResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithAlarmStateToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedAlarmState:(NSInteger)arg0 ;


@end


#endif