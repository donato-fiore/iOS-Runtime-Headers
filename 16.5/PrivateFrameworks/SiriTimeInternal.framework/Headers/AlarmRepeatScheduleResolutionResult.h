// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ALARMREPEATSCHEDULERESOLUTIONRESULT_H
#define ALARMREPEATSCHEDULERESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface AlarmRepeatScheduleResolutionResult : INObjectResolutionResult



+(id)confirmationRequiredWithAlarmRepeatScheduleToConfirm:(id)arg0 ;
+(id)confirmationRequiredWithObjectToConfirm:(id)arg0 ;
+(id)disambiguationWithAlarmRepeatSchedulesToDisambiguate:(id)arg0 ;
+(id)disambiguationWithObjectsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedAlarmRepeatSchedule:(id)arg0 ;
+(id)successWithResolvedObject:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif