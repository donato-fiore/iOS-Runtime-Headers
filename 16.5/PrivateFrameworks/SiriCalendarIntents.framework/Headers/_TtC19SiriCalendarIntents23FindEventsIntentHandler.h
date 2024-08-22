// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19SIRICALENDARINTENTS23FINDEVENTSINTENTHANDLER_H
#define _TTC19SIRICALENDARINTENTS23FINDEVENTSINTENTHANDLER_H

@class TtC19SiriCalendarIntents26SlotResolvingIntentHandler;
@protocol INFindEventsIntentHandling;



@interface _TtC19SiriCalendarIntents23FindEventsIntentHandler : TtC19SiriCalendarIntents26SlotResolvingIntentHandler <INFindEventsIntentHandling>

 {
    ? commonCats;
}




-(?)confirmFindEventscompletion;
-(?)handleFindEventscompletion;
-(?)resolveDateTimeRangeForFindEventswithCompletion;
-(?)resolveLocationForFindEventswithCompletion;
-(?)resolveRequestedEventAttributeForFindEventswithCompletion;
-(?)resolveSearchQueryForFindEventswithCompletion;
-(void)resolveParticipantsForFindEvents:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif