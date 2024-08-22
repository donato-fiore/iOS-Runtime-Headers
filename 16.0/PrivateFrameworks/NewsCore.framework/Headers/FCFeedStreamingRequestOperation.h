// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCFEEDSTREAMINGREQUESTOPERATION_H
#define FCFEEDSTREAMINGREQUESTOPERATION_H

@class NSMutableArray, NSMutableDictionary, NSArray;
@protocol OS_dispatch_queue, FCCoreConfiguration, FCContentContext;


#import "FCOperation.h"
#import "FCFeedDatabase.h"

@interface FCFeedStreamingRequestOperation : FCOperation

@property (retain, nonatomic) NSMutableArray *aggregateFeedItems; // ivar: _aggregateFeedItems
@property (retain, nonatomic) NSMutableDictionary *aggregateFeedResponsesByFeedID; // ivar: _aggregateFeedResponsesByFeedID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) NSObject<FCCoreConfiguration> *configuration; // ivar: _configuration
@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (nonatomic) NSUInteger cutoffAtCount; // ivar: _cutoffAtCount
@property (retain, nonatomic) FCFeedDatabase *feedDatabase; // ivar: _feedDatabase
@property (retain, nonatomic) NSMutableArray *feedRangeSteps; // ivar: _feedRangeSteps
@property (copy, nonatomic) NSArray *feedRequests; // ivar: _feedRequests
@property (copy, nonatomic) NSArray *feedTransformations; // ivar: _feedTransformations
@property (nonatomic) NSInteger options; // ivar: _options
@property (copy, nonatomic) id *requestCompletionHandler; // ivar: _requestCompletionHandler
@property (copy, nonatomic) id *streamingResultsHandler; // ivar: _streamingResultsHandler
@property (nonatomic) NSInteger streamingType; // ivar: _streamingType
@property (nonatomic) BOOL throttled; // ivar: _throttled


-(BOOL)validateOperation;
-(id)_feedRangeBrokenIntoSteps:(id)arg0 ;
-(id)_feedRangeCoveredByRequests;
-(void)_appendFeedResponses:(id)arg0 feedItems:(id)arg1 ;
-(void)_startNextFetchStep;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif