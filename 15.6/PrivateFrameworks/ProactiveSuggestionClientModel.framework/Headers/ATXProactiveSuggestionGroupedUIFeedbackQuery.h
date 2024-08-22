// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPROACTIVESUGGESTIONGROUPEDUIFEEDBACKQUERY_H
#define ATXPROACTIVESUGGESTIONGROUPEDUIFEEDBACKQUERY_H



#import "ATXProactiveSuggestionUIFeedbackQuery.h"

@interface ATXProactiveSuggestionGroupedUIFeedbackQuery : ATXProactiveSuggestionUIFeedbackQuery



-(id)initWithClientModelIds:(id)arg0 consumerSubTypeToConsider:(unsigned char)arg1 startDateForResults:(id)arg2 bookmarkURLPath:(id)arg3 hyperParameters:(id)arg4 ;
-(id)uiFeedbackPublisherChainForShortcutsEditor;
-(id)uiPublisherForConsumerSubType:(unsigned char)arg0 startTime:(CGFloat)arg1 ;
// -(void)enumerateGroupedUIFeedbackResultsWithBlock:(id)arg0 completionBlock:(unk)arg1  ;
// -(void)enumerateGroupedUIFeedbackResultsWithBlock:(id)arg0 completionBlock:(unk)arg1 uiFeedbackPublisherChain:(id)arg2  ;


@end


#endif