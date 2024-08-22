// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXACTIVITYSUGGESTIONSFEEDBACKPROCESSOR_H
#define ATXACTIVITYSUGGESTIONSFEEDBACKPROCESSOR_H

@class ATXActivitySuggestionFeedbackStream;

#import <Foundation/Foundation.h>

#import "ATXActivitySuggestionsFeedbackHistogramHelper.h"

@interface ATXActivitySuggestionsFeedbackProcessor : NSObject {
    ATXActivitySuggestionFeedbackStream *_feedbackStream;
    ATXActivitySuggestionsFeedbackHistogramHelper *_feedbackHistogramHelper;
}




-(id)_activitySuggestionsFeedbackBookmark;
-(id)init;
-(id)initWithFeedbackStream:(id)arg0 feedbackHistogramHelper:(id)arg1 ;
-(void)processFeedbackWithXPCActivity:(id)arg0 ;


@end


#endif