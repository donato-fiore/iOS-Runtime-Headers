// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIGGEREVENTRESOLUTIONRESULT_H
#define TRIGGEREVENTRESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface TriggerEventResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithTriggerEventToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedTriggerEvent:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif