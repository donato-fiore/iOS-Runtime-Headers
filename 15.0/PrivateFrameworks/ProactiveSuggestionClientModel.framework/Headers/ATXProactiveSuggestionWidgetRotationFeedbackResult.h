// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPROACTIVESUGGESTIONWIDGETROTATIONFEEDBACKRESULT_H
#define ATXPROACTIVESUGGESTIONWIDGETROTATIONFEEDBACKRESULT_H



#import "ATXProactiveSuggestionFeedbackResult.h"
#import "ATXProactiveSuggestion.h"

@interface ATXProactiveSuggestionWidgetRotationFeedbackResult : ATXProactiveSuggestionFeedbackResult

@property (readonly, nonatomic) NSInteger engagementType; // ivar: _engagementType
@property (readonly, nonatomic) ATXProactiveSuggestion *rotationSuggestion; // ivar: _rotationSuggestion


-(id)initWithEngagementType:(NSInteger)arg0 rotationSuggestion:(id)arg1 consumerSubType:(unsigned char)arg2 clientCacheUpdate:(id)arg3 uiCacheUpdate:(id)arg4 context:(id)arg5 ;


@end


#endif