// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCTAGFEEDHEADLINESFETCHOPERATION_H
#define FCTAGFEEDHEADLINESFETCHOPERATION_H

@class NSSet, NSArray, NSDate;
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
    NSSet *_shownArticleIDs;
    NSSet *_shownClusterIDs;
    NSArray *_resultOrdinaryHeadlines;
    FCFeedRange *_resultFetchedFreeRange;
    FCFeedRange *_resultFetchedPaidRange;
}


@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler
@property (copy, nonatomic) FCFeedRange *freeFeedRange; // ivar: _freeFeedRange
@property (nonatomic) NSInteger maxFetchCount; // ivar: _maxFetchCount
@property (copy, nonatomic) FCFeedRange *paidFeedRange; // ivar: _paidFeedRange
@property (copy, nonatomic) NSArray *precedingHeadlines; // ivar: _precedingHeadlines
@property (copy, nonatomic) NSDate *topOfFeedDate; // ivar: _topOfFeedDate


-(BOOL)canRetryWithError:(id)arg0 retryAfter:(*id)arg1 ;
-(NSUInteger)maxRetries;
-(id)initWithConfiguration:(id)arg0 cloudContext:(id)arg1 feedDescriptor:(id)arg2 personalizer:(id)arg3 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;
-(void)resetForRetry;


@end


#endif