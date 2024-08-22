// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSSUGGESTIONFROMTEXTPREDICTOR_H
#define _PSSUGGESTIONFROMTEXTPREDICTOR_H

@class EKEventStore, _CDInteractionStore, CNContactFormatter, REMStore;

#import <Foundation/Foundation.h>


@interface _PSSuggestionFromTextPredictor : NSObject {
    EKEventStore *_eventStore;
    _CDInteractionStore *_interactionStore;
    CNContactFormatter *_contactFormatter;
    REMStore *_remStore;
}




+(BOOL)isEligibleUnstructuredEvent:(id)arg0 ;
-(id)initWithEventStore:(id)arg0 interactionStore:(id)arg1 ;
-(id)suggestionFromContactPriors:(id)arg0 priorScoreThreshold:(float)arg1 bundleID:(id)arg2 reason:(id)arg3 ;
-(id)suggestionFromText:(id)arg0 priorScoreThreshold:(float)arg1 bundleID:(id)arg2 reason:(id)arg3 ;
-(id)suggestionsFromIncompleteRemindersWithContext:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 priorScoreThreshold:(float)arg3 ;
-(id)suggestionsFromPortraitExtractionsWithContext:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 priorScoreThreshold:(float)arg3 reason:(id)arg4 ;
-(id)suggestionsFromUnstructuredCalendarEventsWithContext:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 priorScoreThreshold:(float)arg3 ;


@end


#endif