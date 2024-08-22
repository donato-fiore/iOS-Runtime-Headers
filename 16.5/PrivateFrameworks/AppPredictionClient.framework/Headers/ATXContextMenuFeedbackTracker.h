// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCONTEXTMENUFEEDBACKTRACKER_H
#define ATXCONTEXTMENUFEEDBACKTRACKER_H


#import <Foundation/Foundation.h>


@interface ATXContextMenuFeedbackTracker : NSObject



+(id)_suggestionStringForProactiveSuggestion:(id)arg0 ;
+(void)_logContextMenuFeedbackWithMenuActionType:(int)arg0 suggestion:(id)arg1 consumerSubType:(unsigned char)arg2 tracker:(id)arg3 ;
+(void)logContextMenuFeedbackForDismissOnceWithSuggestion:(id)arg0 consumerSubType:(unsigned char)arg1 tracker:(id)arg2 ;
+(void)logContextMenuFeedbackForNeverShowAgainWithSuggestion:(id)arg0 consumerSubType:(unsigned char)arg1 tracker:(id)arg2 ;


@end


#endif