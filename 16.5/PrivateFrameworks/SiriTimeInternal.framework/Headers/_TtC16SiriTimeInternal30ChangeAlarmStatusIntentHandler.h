// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16SIRITIMEINTERNAL30CHANGEALARMSTATUSINTENTHANDLER_H
#define _TTC16SIRITIMEINTERNAL30CHANGEALARMSTATUSINTENTHANDLER_H

@protocol ChangeAlarmStatusIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC16SiriTimeInternal30ChangeAlarmStatusIntentHandler : NSObject <ChangeAlarmStatusIntentHandling>

 {
    ? siriAlarmManager;
    ? osLogObject;
}




-(id)init;
-(void)confirmChangeAlarmStatus:(id)arg0 completion:(id)arg1 ;
-(void)handleChangeAlarmStatus:(id)arg0 completion:(id)arg1 ;
-(void)resolveAlarmsForChangeAlarmStatus:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveHandleSilentlyForChangeAlarmStatus:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif