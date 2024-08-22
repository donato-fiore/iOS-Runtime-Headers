// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ALARMPERIODRESOLUTIONRESULT_H
#define ALARMPERIODRESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface AlarmPeriodResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithAlarmPeriodToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedAlarmPeriod:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif