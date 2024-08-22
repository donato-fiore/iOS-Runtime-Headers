// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPROACTIVESUGGESTIONIOSUIFEEDBACKQUERY_H
#define ATXPROACTIVESUGGESTIONIOSUIFEEDBACKQUERY_H

@class ATXProactiveSuggestionUIFeedbackQuery;



@interface ATXProactiveSuggestioniOSUIFeedbackQuery : ATXProactiveSuggestionUIFeedbackQuery



-(id)contextPublisherWithStartTime:(CGFloat)arg0 ;
-(id)initWithClientModelIds:(id)arg0 consumerSubTypeToConsider:(unsigned char)arg1 startDateForResults:(id)arg2 bookmarkURLPath:(id)arg3 ;
-(id)uiPublisherForConsumerSubType:(unsigned char)arg0 startTime:(CGFloat)arg1 ;


@end


#endif