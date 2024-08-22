// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCHANNELISSUESFETCHOPERATION_H
#define FCCHANNELISSUESFETCHOPERATION_H

@class NSArray, NSDictionary;
@protocol FCContentContext;


#import "FCOperation.h"
#import "FCCachePolicy.h"

@interface FCChannelIssuesFetchOperation : FCOperation

@property (copy, nonatomic) FCCachePolicy *cachePolicy; // ivar: _cachePolicy
@property (retain, nonatomic) NSArray *channelIDs; // ivar: _channelIDs
@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler
@property (nonatomic) NSInteger issueSet; // ivar: _issueSet
@property (retain, nonatomic) NSDictionary *resultIssuesByChannel; // ivar: _resultIssuesByChannel


-(BOOL)validateOperation;
-(id)init;
-(id)initWithContext:(id)arg0 channelIDs:(id)arg1 issueSet:(NSInteger)arg2 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif