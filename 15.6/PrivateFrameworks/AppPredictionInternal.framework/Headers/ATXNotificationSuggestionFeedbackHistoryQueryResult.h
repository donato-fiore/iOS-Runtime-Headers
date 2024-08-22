// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXNOTIFICATIONSUGGESTIONFEEDBACKHISTORYQUERYRESULT_H
#define ATXNOTIFICATIONSUGGESTIONFEEDBACKHISTORYQUERYRESULT_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface ATXNotificationSuggestionFeedbackHistoryQueryResult : NSObject

@property (retain, nonatomic) NSDate *createdTimestamp; // ivar: _createdTimestamp
@property (retain, nonatomic) NSString *feedbackKey; // ivar: _feedbackKey
@property (nonatomic) NSInteger latestOutcome; // ivar: _latestOutcome


-(id)init;
-(id)initWithFeedbackKey:(id)arg0 latestOutcome:(NSInteger)arg1 createdTimestamp:(id)arg2 ;


@end


#endif