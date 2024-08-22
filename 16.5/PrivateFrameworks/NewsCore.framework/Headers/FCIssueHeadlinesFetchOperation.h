// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCISSUEHEADLINESFETCHOPERATION_H
#define FCISSUEHEADLINESFETCHOPERATION_H

@class NSArray, NSDictionary;


#import "FCOperation.h"
#import "FCCloudContext.h"
#import "FCCachePolicy.h"

@interface FCIssueHeadlinesFetchOperation : FCOperation {
    FCCloudContext *_context;
    NSArray *_issueIDs;
    NSDictionary *_resultHeadlinesByIssue;
}


@property (copy, nonatomic) FCCachePolicy *cachePolicy; // ivar: _cachePolicy
@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler


-(BOOL)validateOperation;
-(id)init;
-(id)initWithContext:(id)arg0 issueIDs:(id)arg1 ;
-(id)initWithContext:(id)arg0 issues:(id)arg1 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif