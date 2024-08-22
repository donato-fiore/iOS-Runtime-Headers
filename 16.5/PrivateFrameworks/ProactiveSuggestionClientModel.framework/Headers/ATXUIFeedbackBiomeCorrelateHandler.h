// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUIFEEDBACKBIOMECORRELATEHANDLER_H
#define ATXUIFEEDBACKBIOMECORRELATEHANDLER_H

@class BPSCorrelateHandler;



@interface ATXUIFeedbackBiomeCorrelateHandler : BPSCorrelateHandler



+(id)uiFeedbackCorrelateHandler;
-(BOOL)_proactiveSuggestionsContainEqualExecutablesWithSuggestion1:(id)arg0 suggestion2:(id)arg1 ;
-(id)boxedExecutableHashForProactiveSuggestion:(id)arg0 ;
-(id)correlateWithCurrentEvent:(id)arg0 ;
-(void)receiveCurrentEvent:(id)arg0 ;
-(void)receivePriorEvent:(id)arg0 ;
-(void)updateMostRecentlySeenBlendingUICacheUpdateUUID:(id)arg0 ;


@end


#endif