// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19SIRICALENDARINTENTS24DELETEEVENTINTENTHANDLER_H
#define _TTC19SIRICALENDARINTENTS24DELETEEVENTINTENTHANDLER_H

@class TtC19SiriCalendarIntents17BaseIntentHandler;
@protocol INDeleteEventIntentHandling;



@interface _TtC19SiriCalendarIntents24DeleteEventIntentHandler : TtC19SiriCalendarIntents17BaseIntentHandler <INDeleteEventIntentHandling>





-(?)confirmDeleteEventcompletion;
-(?)handleDeleteEventcompletion;
-(?)resolveDeleteAllOccurrencesForDeleteEventwithCompletion;
-(?)resolveTargetEventIdentifierForDeleteEventwithCompletion;


@end


#endif