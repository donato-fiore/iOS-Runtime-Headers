// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16SIRITIMEINTERNAL24CREATEALARMINTENTHANDLER_H
#define _TTC16SIRITIMEINTERNAL24CREATEALARMINTENTHANDLER_H

@protocol CreateAlarmIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC16SiriTimeInternal24CreateAlarmIntentHandler : NSObject <CreateAlarmIntentHandling>

 {
    ? siriAlarmManager;
    ? osLogObject;
}




-(id)init;
-(void)confirmCreateAlarm:(id)arg0 completion:(id)arg1 ;
-(void)handleCreateAlarm:(id)arg0 completion:(id)arg1 ;
-(void)resolveTimeForCreateAlarm:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif