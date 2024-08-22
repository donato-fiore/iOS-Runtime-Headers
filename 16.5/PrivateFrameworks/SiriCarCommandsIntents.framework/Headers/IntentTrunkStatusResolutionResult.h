// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INTENTTRUNKSTATUSRESOLUTIONRESULT_H
#define INTENTTRUNKSTATUSRESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface IntentTrunkStatusResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithIntentTrunkStatusToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedIntentTrunkStatus:(NSInteger)arg0 ;


@end


#endif