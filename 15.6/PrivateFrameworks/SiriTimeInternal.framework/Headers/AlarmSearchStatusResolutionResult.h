// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ALARMSEARCHSTATUSRESOLUTIONRESULT_H
#define ALARMSEARCHSTATUSRESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface AlarmSearchStatusResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithAlarmSearchStatusToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedAlarmSearchStatus:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif