// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPROACTIVESUGGESTIONSINGLESUGGESTIONFEEDBACKRESULT_H
#define ATXPROACTIVESUGGESTIONSINGLESUGGESTIONFEEDBACKRESULT_H



#import "ATXProactiveSuggestionFeedbackResult.h"
#import "ATXProactiveSuggestion.h"

@interface ATXProactiveSuggestionSingleSuggestionFeedbackResult : ATXProactiveSuggestionFeedbackResult

@property (readonly, nonatomic) NSInteger engagementType; // ivar: _engagementType
@property (readonly, nonatomic) ATXProactiveSuggestion *suggestion; // ivar: _suggestion


-(id)initWithEngagementType:(NSInteger)arg0 suggestion:(id)arg1 consumerSubType:(unsigned char)arg2 clientCacheUpdate:(id)arg3 uiCacheUpdate:(id)arg4 context:(id)arg5 ;


@end


#endif