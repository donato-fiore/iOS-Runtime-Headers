// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPROACTIVESUGGESTIONCLIENTMODELEVALUATORPUBLISHERS_H
#define ATXPROACTIVESUGGESTIONCLIENTMODELEVALUATORPUBLISHERS_H

@class BPSPublisher, NSNumber;
@protocol ATXProactiveSuggestionClientModelEvaluatorPublishers;

#import <Foundation/Foundation.h>


@interface ATXProactiveSuggestionClientModelEvaluatorPublishers : NSObject <ATXProactiveSuggestionClientModelEvaluatorPublishers>



@property (readonly, nonatomic) BPSPublisher *clientModelCacheUpdatePublisher;
@property (readonly, copy, nonatomic) NSNumber *endTime; // ivar: _endTime
@property (readonly, nonatomic) BPSPublisher *shadowCandidatePublisher;
@property (readonly, copy, nonatomic) NSNumber *startTime; // ivar: _startTime
@property (readonly, nonatomic) BPSPublisher *uiPublisher;


-(id)initWithStartTime:(id)arg0 endTime:(id)arg1 ;


@end


#endif