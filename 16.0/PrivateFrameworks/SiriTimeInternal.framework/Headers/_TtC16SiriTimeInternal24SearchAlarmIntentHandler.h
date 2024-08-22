// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16SIRITIMEINTERNAL24SEARCHALARMINTENTHANDLER_H
#define _TTC16SIRITIMEINTERNAL24SEARCHALARMINTENTHANDLER_H

@protocol SearchAlarmIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC16SiriTimeInternal24SearchAlarmIntentHandler : NSObject <SearchAlarmIntentHandling>

 {
    ? siriAlarmManager;
    ? osLogObject;
}




-(id)init;
-(void)confirmSearchAlarm:(id)arg0 completion:(id)arg1 ;
-(void)handleSearchAlarm:(id)arg0 completion:(id)arg1 ;
-(void)resolveAlarmsForSearchAlarm:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif