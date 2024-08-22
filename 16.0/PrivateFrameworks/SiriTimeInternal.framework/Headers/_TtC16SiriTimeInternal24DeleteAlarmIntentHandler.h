// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16SIRITIMEINTERNAL24DELETEALARMINTENTHANDLER_H
#define _TTC16SIRITIMEINTERNAL24DELETEALARMINTENTHANDLER_H

@protocol DeleteAlarmIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC16SiriTimeInternal24DeleteAlarmIntentHandler : NSObject <DeleteAlarmIntentHandling>

 {
    ? siriAlarmManager;
    ? osLogObject;
}




-(id)init;
-(void)confirmDeleteAlarm:(id)arg0 completion:(id)arg1 ;
-(void)handleDeleteAlarm:(id)arg0 completion:(id)arg1 ;
-(void)resolveAlarmsForDeleteAlarm:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif