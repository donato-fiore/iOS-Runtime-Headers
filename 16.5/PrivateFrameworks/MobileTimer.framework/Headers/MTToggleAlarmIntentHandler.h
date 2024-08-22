// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTTOGGLEALARMINTENTHANDLER_H
#define MTTOGGLEALARMINTENTHANDLER_H

@class NSString;
@protocol MTEnableAlarmIntentHandling, MTDisableAlarmIntentHandling, MTToggleAlarmIntentHandling;


#import "MTAlarmIntentHandler.h"

@interface MTToggleAlarmIntentHandler : MTAlarmIntentHandler <MTEnableAlarmIntentHandling, MTDisableAlarmIntentHandling, MTToggleAlarmIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getEnableStateForAlarm:(id)arg0 ;
-(id)_alarmUserActivityWithDisableIntent:(id)arg0 ;
-(id)_alarmUserActivityWithEnableIntent:(id)arg0 ;
-(id)updateEnableStateForAlarm:(id)arg0 enabled:(BOOL)arg1 ;
-(void)_toggleAlarm:(id)arg0 alarmIDString:(id)arg1 completion:(id)arg2 ;
-(void)confirmDisableAlarm:(id)arg0 completion:(id)arg1 ;
-(void)confirmEnableAlarm:(id)arg0 completion:(id)arg1 ;
-(void)confirmMTDisableAlarm:(id)arg0 completion:(id)arg1 ;
-(void)confirmMTEnableAlarm:(id)arg0 completion:(id)arg1 ;
-(void)confirmToggleAlarm:(id)arg0 completion:(id)arg1 ;
-(void)handleDisableAlarm:(id)arg0 completion:(id)arg1 ;
-(void)handleEnableAlarm:(id)arg0 completion:(id)arg1 ;
-(void)handleMTDisableAlarm:(id)arg0 completion:(id)arg1 ;
-(void)handleMTEnableAlarm:(id)arg0 completion:(id)arg1 ;
-(void)handleToggleAlarm:(id)arg0 completion:(id)arg1 ;
-(void)provideAlarmOptionsForToggleAlarm:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveAlarmForToggleAlarm:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveOperationForToggleAlarm:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveStateForToggleAlarm:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif