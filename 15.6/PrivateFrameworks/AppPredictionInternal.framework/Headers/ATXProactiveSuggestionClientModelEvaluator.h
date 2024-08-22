// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPROACTIVESUGGESTIONCLIENTMODELEVALUATOR_H
#define ATXPROACTIVESUGGESTIONCLIENTMODELEVALUATOR_H

@class BPSPublisher;

#import <Foundation/Foundation.h>


@interface ATXProactiveSuggestionClientModelEvaluator : NSObject

@property (readonly, nonatomic) BPSPublisher *clientModelCacheUpdatePublisher; // ivar: _clientModelCacheUpdatePublisher
@property (readonly, nonatomic) BPSPublisher *shadowCandidatePublisher; // ivar: _shadowCandidatePublisher
@property (readonly, nonatomic) BPSPublisher *uiPublisher; // ivar: _uiPublisher


+(id)eventAndRecentCacheUpdatePublisher:(id)arg0 ;
+(id)resultFromResults:(id)arg0 withSessionType:(NSUInteger)arg1 executableType:(NSInteger)arg2 removeDockedApps:(BOOL)arg3 ;
-(id)evaluationResultsForClientModelName:(id)arg0 ;
-(id)init;
-(id)initWithShadowCandidatePublisher:(id)arg0 uiPublisher:(id)arg1 clientModelCacheUpdatePublisher:(id)arg2 ;
-(id)initWithStartTime:(id)arg0 endTime:(id)arg1 ;
-(id)resultForClientModelName:(id)arg0 suggestionExecutableType:(NSInteger)arg1 sessionType:(NSUInteger)arg2 removeDockedApps:(BOOL)arg3 ;
-(id)shadowResultForSuggestionExecutableType:(NSInteger)arg0 clientModelName:(id)arg1 removeDockedApps:(BOOL)arg2 ;
-(id)uiResultForSuggestionExecutableType:(NSInteger)arg0 clientModelName:(id)arg1 removeDockedApps:(BOOL)arg2 ;


@end


#endif