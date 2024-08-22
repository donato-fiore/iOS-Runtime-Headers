// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCDRAFTISSUESFETCHOPERATION_H
#define FCDRAFTISSUESFETCHOPERATION_H

@class NSString, NSArray;
@protocol FCContentContext;


#import "FCOperation.h"

@interface FCDraftIssuesFetchOperation : FCOperation

@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler
@property (retain, nonatomic) NSString *issueListID; // ivar: _issueListID
@property (retain, nonatomic) NSArray *resultIssues; // ivar: _resultIssues


-(BOOL)validateOperation;
-(id)init;
-(id)initWithContext:(id)arg0 issueListID:(id)arg1 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif