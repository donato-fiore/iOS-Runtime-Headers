// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSINTENTREADSTATUSRESOLUTIONRESULT_H
#define MSINTENTREADSTATUSRESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface MSIntentReadStatusResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithReadStatusToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedReadStatus:(NSInteger)arg0 ;


@end


#endif