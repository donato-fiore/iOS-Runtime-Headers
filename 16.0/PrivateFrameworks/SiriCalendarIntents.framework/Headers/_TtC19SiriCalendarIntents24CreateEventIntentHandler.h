// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19SIRICALENDARINTENTS24CREATEEVENTINTENTHANDLER_H
#define _TTC19SIRICALENDARINTENTS24CREATEEVENTINTENTHANDLER_H

@class TtC19SiriCalendarIntents26SlotResolvingIntentHandler;
@protocol INCreateEventIntentHandling;



@interface _TtC19SiriCalendarIntents24CreateEventIntentHandler : TtC19SiriCalendarIntents26SlotResolvingIntentHandler <INCreateEventIntentHandling>





-(?)resolveLocationForCreateEventwithCompletion;
-(void)confirmCreateEvent:(id)arg0 completion:(id)arg1 ;
-(void)handleCreateEvent:(id)arg0 completion:(id)arg1 ;
-(void)resolveDateTimeRangeForCreateEvent:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveParticipantsForCreateEvent:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveTitleForCreateEvent:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif