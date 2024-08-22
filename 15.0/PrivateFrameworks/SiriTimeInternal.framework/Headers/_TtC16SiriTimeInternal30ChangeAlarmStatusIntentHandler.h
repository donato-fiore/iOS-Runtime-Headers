// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16SIRITIMEINTERNAL30CHANGEALARMSTATUSINTENTHANDLER_H
#define _TTC16SIRITIMEINTERNAL30CHANGEALARMSTATUSINTENTHANDLER_H

@protocol INChangeAlarmStatusIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC16SiriTimeInternal30ChangeAlarmStatusIntentHandler : NSObject <INChangeAlarmStatusIntentHandling>

 {
    ? siriAlarmManager;
    ? osLogObject;
}




-(id)init;
-(void)handleChangeAlarmStatus:(id)arg0 completion:(id)arg1 ;
-(void)resolveAlarmsForChangeAlarmStatus:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif