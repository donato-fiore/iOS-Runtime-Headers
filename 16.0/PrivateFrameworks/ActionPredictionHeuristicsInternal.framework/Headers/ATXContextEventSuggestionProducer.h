// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCONTEXTEVENTSUGGESTIONPRODUCER_H
#define ATXCONTEXTEVENTSUGGESTIONPRODUCER_H

@class EKEvent, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface ATXContextEventSuggestionProducer : NSObject {
    EKEvent *_event;
    NSString *_eventTitle;
    NSDate *_validFromStartDate;
    NSDate *_validToEndDate;
}




-(CGFloat)scoreWithEventParticipantStatusPenalty:(CGFloat)arg0 ;
-(id)_contextTitleWithReasons:(NSUInteger)arg0 ;
-(id)_spotlightActionWithParticipant:(id)arg0 subtitle:(id)arg1 ;
-(id)_stringsWithPredictionReasons:(NSUInteger)arg0 ;
-(id)_suggestionResultWithId:(id)arg0 title:(id)arg1 type:(int)arg2 score:(CGFloat)arg3 ;
-(id)_suggestionResultWithString:(id)arg0 type:(int)arg1 score:(CGFloat)arg2 ;
-(id)initWithEvent:(id)arg0 validFromStartDate:(id)arg1 validToEndDate:(id)arg2 ;
-(id)suggestionForConferenceWithScore:(CGFloat)arg0 predictionReasons:(NSUInteger)arg1 ;
-(id)suggestionForDNDTurnOffWithScore:(CGFloat)arg0 predictionReasons:(NSUInteger)arg1 ;
-(id)suggestionForDNDTurnOnWithScore:(CGFloat)arg0 predictionReasons:(NSUInteger)arg1 turnOffAtEventEnd:(BOOL)arg2 ;
-(id)suggestionForEventOrganizerWithScore:(CGFloat)arg0 predictionReasons:(NSUInteger)arg1 ;
-(id)suggestionForEventParticipantWithScore:(CGFloat)arg0 predictionReasons:(NSUInteger)arg1 ;


@end


#endif