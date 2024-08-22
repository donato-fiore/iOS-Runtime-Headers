// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCISSUEARTICLESOPERATION_H
#define FCISSUEARTICLESOPERATION_H

@class NSArray;


#import "FCOperation.h"
#import "FCCloudContext.h"
#import "FCEdgeCacheHint.h"

@interface FCIssueArticlesOperation : FCOperation {
    FCCloudContext *_context;
    NSArray *_issueIDs;
    NSArray *_resultFeedItems;
}


@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint; // ivar: _edgeCacheHint
@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler
@property (nonatomic) NSUInteger maxIssuesPerFetch; // ivar: _maxIssuesPerFetch


-(BOOL)validateOperation;
-(id)init;
-(id)initWithContext:(id)arg0 issueIDs:(id)arg1 ;
-(id)initWithContext:(id)arg0 issues:(id)arg1 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif