// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16SIRITIMEINTERNAL24UPDATEALARMINTENTHANDLER_H
#define _TTC16SIRITIMEINTERNAL24UPDATEALARMINTENTHANDLER_H

@protocol INUpdateAlarmIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC16SiriTimeInternal24UpdateAlarmIntentHandler : NSObject <INUpdateAlarmIntentHandling>

 {
    ? siriAlarmManager;
    ? osLogObject;
}




-(id)init;
-(void)handleUpdateAlarm:(id)arg0 completion:(id)arg1 ;
-(void)resolveAlarmForUpdateAlarm:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveProposedLabelForUpdateAlarm:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveProposedTimeForUpdateAlarm:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif