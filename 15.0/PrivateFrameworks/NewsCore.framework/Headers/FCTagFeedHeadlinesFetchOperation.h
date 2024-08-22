// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCTAGFEEDHEADLINESFETCHOPERATION_H
#define FCTAGFEEDHEADLINESFETCHOPERATION_H

@class NSArray, NSSet, NSDate;
@protocol FCCoreConfiguration, FCFeedPersonalizing;


#import "FCOperation.h"
#import "FCCloudContext.h"
#import "FCFeedDescriptor.h"
#import "FCFeedRange.h"

@interface FCTagFeedHeadlinesFetchOperation : FCOperation {
    BOOL _fetchOrdinaryItemsFromCache;
    BOOL _resultFinished;
    id<FCCoreConfiguration> *_configuration;
    FCCloudContext *_cloudContext;
    FCFeedDescriptor *_feedDescriptor;
    id<FCFeedPersonalizing> *_personalizer;
    NSArray *_resultOrdinaryHeadlines;
    NSArray *_resultPinnedHeadlines;
    FCFeedRange *_resultFetchedFreeRange;
    FCFeedRange *_resultFetchedPaidRange;
}


@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler
@property (copy, nonatomic) NSArray *followingAdjacentHeadlines; // ivar: _followingAdjacentHeadlines
@property (copy, nonatomic) FCFeedRange *freeFeedRange; // ivar: _freeFeedRange
@property (nonatomic) NSInteger maxFetchCount; // ivar: _maxFetchCount
@property (copy, nonatomic) FCFeedRange *paidFeedRange; // ivar: _paidFeedRange
@property (copy, nonatomic) NSArray *precedingAdjacentHeadlines; // ivar: _precedingAdjacentHeadlines
@property (copy, nonatomic) NSSet *shownArticleIDs; // ivar: _shownArticleIDs
@property (copy, nonatomic) NSSet *shownClusterIDs; // ivar: _shownClusterIDs
@property (copy, nonatomic) NSDate *topOfFeedDate; // ivar: _topOfFeedDate


-(BOOL)canRetryWithError:(id)arg0 retryAfter:(*id)arg1 ;
-(NSUInteger)maxRetries;
-(id)initWithConfiguration:(id)arg0 cloudContext:(id)arg1 feedDescriptor:(id)arg2 personalizer:(id)arg3 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)resetForRetry;


@end


#endif