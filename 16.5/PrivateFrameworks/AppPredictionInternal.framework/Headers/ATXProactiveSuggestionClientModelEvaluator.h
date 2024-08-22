// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPROACTIVESUGGESTIONCLIENTMODELEVALUATOR_H
#define ATXPROACTIVESUGGESTIONCLIENTMODELEVALUATOR_H

@protocol ATXProactiveSuggestionClientModelEvaluatorPublishers;

#import <Foundation/Foundation.h>


@interface ATXProactiveSuggestionClientModelEvaluator : NSObject

@property (readonly, nonatomic) NSObject<ATXProactiveSuggestionClientModelEvaluatorPublishers> *publishers; // ivar: _publishers


+(id)eventAndRecentCacheUpdatePublisher:(id)arg0 ;
+(id)resultFromResults:(id)arg0 withSessionType:(NSUInteger)arg1 executableType:(NSInteger)arg2 removeDockedApps:(BOOL)arg3 ;
-(id)evaluationResultsForClientModelName:(id)arg0 ;
-(id)init;
-(id)initWithPublishers:(id)arg0 ;
-(id)initWithStartTime:(id)arg0 endTime:(id)arg1 ;
-(id)resultForClientModelName:(id)arg0 suggestionExecutableType:(NSInteger)arg1 sessionType:(NSUInteger)arg2 removeDockedApps:(BOOL)arg3 ;
-(id)shadowResultForSuggestionExecutableType:(NSInteger)arg0 clientModelName:(id)arg1 removeDockedApps:(BOOL)arg2 ;
-(id)uiPublisherWithDeduplicatedEngagements;
-(id)uiResultForSuggestionExecutableType:(NSInteger)arg0 clientModelName:(id)arg1 removeDockedApps:(BOOL)arg2 ;


@end


#endif