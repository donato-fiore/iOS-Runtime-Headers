// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTTOGGLEALARMINTENTRESPONSE_H
#define MTTOGGLEALARMINTENTRESPONSE_H

@class INIntentResponse;


#import "MTIntentAlarm.h"

@interface MTToggleAlarmIntentResponse : INIntentResponse

@property (copy, nonatomic) MTIntentAlarm *alarm;
@property (nonatomic) NSInteger code; // ivar: _code
@property (nonatomic) NSInteger state;


+(id)continueInAppIntentResponseWithState:(NSInteger)arg0 ;
+(id)failureRequiringAppLaunchIntentResponseWithState:(NSInteger)arg0 ;
+(id)inProgressIntentResponseWithState:(NSInteger)arg0 ;
+(id)readyIntentResponseWithState:(NSInteger)arg0 ;
+(id)successIntentResponseWithState:(NSInteger)arg0 alarm:(id)arg1 ;
+(id)unspecifiedIntentResponseWithState:(NSInteger)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;


@end


#endif