// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLEEPALARMATTRIBUTERESOLUTIONRESULT_H
#define SLEEPALARMATTRIBUTERESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface SleepAlarmAttributeResolutionResult : INObjectResolutionResult



+(id)confirmationRequiredWithObjectToConfirm:(id)arg0 ;
+(id)confirmationRequiredWithSleepAlarmAttributeToConfirm:(id)arg0 ;
+(id)disambiguationWithObjectsToDisambiguate:(id)arg0 ;
+(id)disambiguationWithSleepAlarmAttributesToDisambiguate:(id)arg0 ;
+(id)successWithResolvedObject:(id)arg0 ;
+(id)successWithResolvedSleepAlarmAttribute:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif