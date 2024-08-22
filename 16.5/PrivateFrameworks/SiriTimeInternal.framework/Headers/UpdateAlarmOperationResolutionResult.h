// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UPDATEALARMOPERATIONRESOLUTIONRESULT_H
#define UPDATEALARMOPERATIONRESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface UpdateAlarmOperationResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithUpdateAlarmOperationToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedUpdateAlarmOperation:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif