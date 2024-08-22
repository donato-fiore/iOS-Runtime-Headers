// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ALARMREFERENCETYPERESOLUTIONRESULT_H
#define ALARMREFERENCETYPERESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface AlarmReferenceTypeResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithAlarmReferenceTypeToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedAlarmReferenceType:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif