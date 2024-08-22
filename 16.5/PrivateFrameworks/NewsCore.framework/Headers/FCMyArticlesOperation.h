// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCMYARTICLESOPERATION_H
#define FCMYARTICLESOPERATION_H

@class NSDictionary, NSArray, NFUnfairLock, NSError;
@protocol FCCoreConfiguration;


#import "FCOperation.h"
#import "FCThreadSafeMutableDictionary.h"
#import "FCCloudContext.h"
#import "FCDateRange.h"
#import "FCMyArticlesTiming.h"

@interface FCMyArticlesOperation : FCOperation {
    BOOL _isStreamingFinished;
    NSDictionary *_feedContextByFeedID;
    NSArray *_streamingFeedItems;
    NSArray *_allFeedItems;
    NFUnfairLock *_feedItemsLock;
    FCThreadSafeMutableDictionary *_scoreProfilesByConfigurationSet;
    CGFloat _timeSpentScoring;
}


@property (nonatomic) NSInteger binOverride; // ivar: _binOverride
@property (copy, nonatomic) NSObject<FCCoreConfiguration> *configuration; // ivar: _configuration
@property (retain, nonatomic) FCCloudContext *context; // ivar: _context
@property (copy, nonatomic) FCDateRange *dateRange; // ivar: _dateRange
@property (readonly, copy) NSError *error; // ivar: _error
@property (readonly, copy) NSDictionary *feedContextByFeedID;
@property (copy, nonatomic) id *feedItemCompletionBlock; // ivar: _feedItemCompletionBlock
@property (readonly, copy) NSArray *feedItems;
@property (copy, nonatomic) id *feedItemsChangedHandler; // ivar: _feedItemsChangedHandler
@property (nonatomic) BOOL includeEvergreenFeedItems; // ivar: _includeEvergreenFeedItems
@property (readonly) BOOL isStreamingFinished;
@property (nonatomic) NSUInteger maxNumberOfFeedsToQuery; // ivar: _maxNumberOfFeedsToQuery
@property (nonatomic) NSUInteger perFeedLimit; // ivar: _perFeedLimit
@property (nonatomic) BOOL scoreFeedItems; // ivar: _scoreFeedItems
@property (nonatomic) BOOL streamFeedItems; // ivar: _streamFeedItems
@property (nonatomic) NSInteger streamFeedItemsCount; // ivar: _streamFeedItemsCount
@property (readonly, nonatomic) FCMyArticlesTiming *timing; // ivar: _timing


-(BOOL)validateOperation;
-(id)init;
-(id)scoreProfilesForConfigurationSet:(NSInteger)arg0 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif