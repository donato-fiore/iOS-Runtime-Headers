// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCISSUESFETCHOPERATION_H
#define FCISSUESFETCHOPERATION_H

@class NSArray;
@protocol FCContentContext;


#import "FCOperation.h"
#import "FCCachePolicy.h"

@interface FCIssuesFetchOperation : FCOperation

@property (copy, nonatomic) FCCachePolicy *cachePolicy; // ivar: _cachePolicy
@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler
@property (copy, nonatomic) id *interestTokenHandler; // ivar: _interestTokenHandler
@property (retain, nonatomic) NSArray *issueIDs; // ivar: _issueIDs
@property (retain, nonatomic) NSArray *resultIssues; // ivar: _resultIssues


-(BOOL)validateOperation;
-(id)init;
-(id)initWithContext:(id)arg0 issueIDs:(id)arg1 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif