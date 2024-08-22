// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19SIRICALENDARINTENTS24UPDATEEVENTINTENTHANDLER_H
#define _TTC19SIRICALENDARINTENTS24UPDATEEVENTINTENTHANDLER_H

@class TtC19SiriCalendarIntents26SlotResolvingIntentHandler;
@protocol INUpdateEventIntentHandling;



@interface _TtC19SiriCalendarIntents24UpdateEventIntentHandler : TtC19SiriCalendarIntents26SlotResolvingIntentHandler <INUpdateEventIntentHandling>





-(?)confirmUpdateEventcompletion;
-(?)handleUpdateEventcompletion;
-(?)resolveRemoveLocationForUpdateEventwithCompletion;
-(?)resolveRemoveParticipantsForUpdateEventwithCompletion;
-(?)resolveSetDateTimeRangeForUpdateEventwithCompletion;
-(?)resolveSetLocationForUpdateEventwithCompletion;
-(?)resolveSetTitleForUpdateEventwithCompletion;
-(?)resolveTargetEventIdentifierForUpdateEventwithCompletion;
-(?)resolveUpdateAllOccurrencesForUpdateEventwithCompletion;
-(void)resolveAddParticipantsForUpdateEvent:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif