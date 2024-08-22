// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCHANNELSECTIONHEADLINESFETCHOPERATION_H
#define FCCHANNELSECTIONHEADLINESFETCHOPERATION_H

@class NSString, NSArray;
@protocol FCChannelProviding;


#import "FCOperation.h"
#import "FCCloudContext.h"
#import "FCEdgeCacheHint.h"

@interface FCChannelSectionHeadlinesFetchOperation : FCOperation

@property (readonly, nonatomic) NSObject<FCChannelProviding> *channel; // ivar: _channel
@property (readonly, nonatomic) NSString *channelID; // ivar: _channelID
@property (readonly, nonatomic) FCCloudContext *cloudContext; // ivar: _cloudContext
@property (readonly, nonatomic) FCEdgeCacheHint *edgeCacheHint; // ivar: _edgeCacheHint
@property (copy) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler
@property (readonly, nonatomic) CGFloat fetchWindow; // ivar: _fetchWindow
@property (readonly, nonatomic) NSUInteger maxHeadlinesCount; // ivar: _maxHeadlinesCount
@property (readonly, nonatomic) NSUInteger maxHeadlinesPerFeed; // ivar: _maxHeadlinesPerFeed
@property (copy, nonatomic) NSArray *sectionHeadlinesGroups; // ivar: _sectionHeadlinesGroups
@property (readonly, nonatomic) CGFloat sectionsCacheTimeToLive; // ivar: _sectionsCacheTimeToLive


-(BOOL)validateOperation;
-(id)_channelAndSectionTagsPromiseWithChannelID:(id)arg0 ;
-(id)_channelPromiseWithTagsByID:(id)arg0 parentChannelID:(id)arg1 ;
-(id)_configurationPromise;
-(id)_createFeedRequestWithFeedID:(id)arg0 feedRange:(id)arg1 ;
-(id)_feedItemsPromiseWithChannel:(id)arg0 sectionsByID:(id)arg1 configuration:(id)arg2 ;
-(id)_feedItemsTransformationWithConfiguration:(id)arg0 ;
-(id)_headlinesAssembledBySectionFromFeedItemMap:(id)arg0 sectionIDsByFeedID:(id)arg1 sectionsByID:(id)arg2 ;
-(id)_headlinesPromiseWithFeedItems:(id)arg0 sectionsByID:(id)arg1 configuration:(id)arg2 ;
-(id)_sectionsPromiseWithTagsByID:(id)arg0 sectionIDs:(id)arg1 ;
-(id)init;
-(id)initWithCloudContext:(id)arg0 channelID:(id)arg1 maxHeadlinesCount:(NSUInteger)arg2 maxHeadlinesPerFeed:(NSUInteger)arg3 fetchWindow:(CGFloat)arg4 sectionsCacheTimeToLive:(CGFloat)arg5 edgeCacheHint:(id)arg6 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif