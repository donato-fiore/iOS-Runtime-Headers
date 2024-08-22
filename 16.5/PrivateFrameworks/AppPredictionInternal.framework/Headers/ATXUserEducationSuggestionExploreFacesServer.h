// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUSEREDUCATIONSUGGESTIONEXPLOREFACESSERVER_H
#define ATXUSEREDUCATIONSUGGESTIONEXPLOREFACESSERVER_H

@class ATXUserEducationSuggestionConnector, ATXNotificationManagementMAConstants, ATXUserEducationSuggestionExploreFaces, NSUserDefaults, BMBiomeScheduler, BPSSink;


#import "ATXUserEducationSuggestionBaseServer.h"

@interface ATXUserEducationSuggestionExploreFacesServer : ATXUserEducationSuggestionBaseServer {
    ATXUserEducationSuggestionConnector *_connector;
    ATXNotificationManagementMAConstants *_constants;
    ATXUserEducationSuggestionExploreFaces *_suggestion;
    NSUserDefaults *_defaults;
    BMBiomeScheduler *_backlightEventScheduler;
    BPSSink *_backlightEventSink;
}




-(BOOL)isSubscribedForBacklightEvents;
-(BOOL)shouldNeverShowSuggestionAgain;
-(NSInteger)gracePeriod;
-(NSInteger)maxHour;
-(NSInteger)minHour;
-(NSInteger)numBacklightOffEventsBeforeDismissSuggestion;
-(NSInteger)tryAgainIntervalSeconds;
-(id)backlightEventSink;
-(id)initWithConnector:(id)arg0 ;
-(id)suggestion;
-(void)backlightEventHandler:(id)arg0 ;
-(void)cancelBacklightEventSubscription;
-(void)scheduleNextTry;
-(void)sendSuggestionWithEventType:(NSUInteger)arg0 ;
-(void)setIsSubscribedForBacklightEvents:(BOOL)arg0 ;
-(void)startUpSubscriberToBacklightBiomeStreamForTheFirstTime;
-(void)startUpSubscriberToBacklightBiomeStreamIfSubscribed;
-(void)tryToSendSuggestion;


@end


#endif