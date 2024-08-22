// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTINTENTALARMRESOLUTIONRESULT_H
#define MTINTENTALARMRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface MTIntentAlarmResolutionResult : INObjectResolutionResult



+(BOOL)supportsSecureCoding;
+(id)confirmationRequiredWithAlarmToConfirm:(id)arg0 ;
+(id)disambiguationWithAlarmsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedAlarm:(id)arg0 ;


@end


#endif