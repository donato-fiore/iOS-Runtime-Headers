// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCMYARTICLESOPERATION_H
#define FCMYARTICLESOPERATION_H

@class NSArray, NSDictionary, NSError, NFUnfairLock;
@protocol FCCoreConfiguration;


#import "FCOperation.h"
#import "FCMapTable.h"
#import "FCCloudContext.h"
#import "FCDateRange.h"

@interface FCMyArticlesOperation : FCOperation {
    BOOL _isStreamingFinished;
    NSArray *_feedItems;
    NSArray *_sortedNonEditorialFeedItems;
    FCMapTable *_nonEditorialScoreProfiles;
    NSDictionary *_feedContextByFeedID;
    NSError *_error;
    NFUnfairLock *_feedItemsLock;
}


@property (nonatomic) NSInteger binOverride; // ivar: _binOverride
@property (copy, nonatomic) NSObject<FCCoreConfiguration> *configuration; // ivar: _configuration
@property (retain, nonatomic) FCCloudContext *context; // ivar: _context
@property (copy, nonatomic) FCDateRange *dateRange; // ivar: _dateRange
@property (readonly, copy) NSError *error;
@property (readonly, copy) NSDictionary *feedContextByFeedID;
@property (copy, nonatomic) id *feedItemCompletionBlock; // ivar: _feedItemCompletionBlock
@property (readonly, copy) NSArray *feedItems;
@property (copy, nonatomic) id *feedItemsChangedHandler; // ivar: _feedItemsChangedHandler
@property (nonatomic) BOOL includeEvergreenFeedItems; // ivar: _includeEvergreenFeedItems
@property (readonly) BOOL isStreamingFinished;
@property (nonatomic) NSUInteger maxNumberOfFeedsToQuery; // ivar: _maxNumberOfFeedsToQuery
@property (readonly) FCMapTable *nonEditorialScoreProfiles;
@property (nonatomic) NSUInteger perFeedLimit; // ivar: _perFeedLimit
@property (nonatomic) BOOL scoreFeedItems; // ivar: _scoreFeedItems
@property (readonly, copy) NSArray *sortedNonEditorialFeedItems;
@property (nonatomic) BOOL streamFeedItems; // ivar: _streamFeedItems
@property (nonatomic) NSInteger streamFeedItemsCount; // ivar: _streamFeedItemsCount


-(BOOL)validateOperation;
-(id)init;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif