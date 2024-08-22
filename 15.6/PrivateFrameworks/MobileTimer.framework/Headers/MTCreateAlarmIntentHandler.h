// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTCREATEALARMINTENTHANDLER_H
#define MTCREATEALARMINTENTHANDLER_H

@class NSString;
@protocol MTCreateAlarmIntentHandling;


#import "MTAlarmIntentHandler.h"

@interface MTCreateAlarmIntentHandler : MTAlarmIntentHandler <MTCreateAlarmIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_alarmUserActivityWithIntent:(id)arg0 ;
-(id)defaultRepeatScheduleForMTCreateAlarm:(id)arg0 ;
-(void)confirmMTCreateAlarm:(id)arg0 completion:(id)arg1 ;
-(void)handleMTCreateAlarm:(id)arg0 completion:(id)arg1 ;
-(void)provideRepeatScheduleOptionsForMTCreateAlarm:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveDateComponentsForMTCreateAlarm:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveLabelForMTCreateAlarm:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveRepeatScheduleForMTCreateAlarm:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif