// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCMYARTICLESSEARCHOPERATION_H
#define FCMYARTICLESSEARCHOPERATION_H

@class NSDictionary, NSArray;


#import "FCOperation.h"
#import "FCCloudContext.h"
#import "FCDateRange.h"
#import "FCFeedItemFeature.h"

@interface FCMyArticlesSearchOperation : FCOperation

@property (nonatomic) BOOL cachedOnly; // ivar: _cachedOnly
@property (nonatomic) BOOL channelsOnly; // ivar: _channelsOnly
@property (retain, nonatomic) FCCloudContext *context; // ivar: _context
@property (copy, nonatomic) FCDateRange *dateRange; // ivar: _dateRange
@property (copy, nonatomic) FCFeedItemFeature *feature; // ivar: _feature
@property (copy) NSDictionary *resultFeedContextByFeedID; // ivar: _resultFeedContextByFeedID
@property (retain, nonatomic) NSArray *resultFeedItems; // ivar: _resultFeedItems
@property (copy, nonatomic) id *searchCompletionHandler; // ivar: _searchCompletionHandler
@property (nonatomic) BOOL unreadOnly; // ivar: _unreadOnly


-(BOOL)validateOperation;
-(id)init;
-(void)_generateFeedRequestsForFeedRange:(id)arg0 completionHandler:(id)arg1 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif