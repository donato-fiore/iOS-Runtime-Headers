// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSCALENDAREVENTPREDICTOR_H
#define _PSCALENDAREVENTPREDICTOR_H

@class EKEventStore, CNContactStore;

#import <Foundation/Foundation.h>


@interface _PSCalendarEventPredictor : NSObject {
    EKEventStore *_eventStore;
    CNContactStore *_contactStore;
}




+(BOOL)currentUserIsEligibleForEvent:(id)arg0 ;
+(BOOL)hasFaceTimeSignalInEvent:(id)arg0 ;
+(BOOL)isCorecipientParticipant:(id)arg0 seedRecipients:(id)arg1 contactsMap:(id)arg2 ;
+(BOOL)isEligibleParticipant:(id)arg0 context:(id)arg1 contactsMap:(id)arg2 ;
+(BOOL)isMaybeFaceTimeEvent:(id)arg0 earliestStartDate:(id)arg1 latestStartDate:(id)arg2 maxParticipants:(NSUInteger)arg3 ;
+(NSUInteger)_numOfOtherParticipantsInEvent:(id)arg0 ;
+(id)_handleFromParticipant:(id)arg0 ;
+(id)createFinalSuggestions:(id)arg0 context:(id)arg1 ;
+(id)eventComparatorWithPredictionContext:(SEL)arg0 contactsMap:(id)arg1 ;
+(id)getZKWSuggestionForCalendarEvent:(id)arg0 context:(id)arg1 contactsMap:(id)arg2 ;
+(id)participantComparatorWithContactsMap:(SEL)arg0 ;
-(id)contactKeysToFetch;
-(id)getParticipantContactsMapFromEvent:(id)arg0 ;
-(id)init;
-(id)initWithEventStore:(id)arg0 contactStore:(id)arg1 ;
-(id)zkwSuggestionsFromCalendarWithPredictionContext:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 maxParticipants:(NSUInteger)arg3 ;


@end


#endif