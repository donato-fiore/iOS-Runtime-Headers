// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCURRENTISSUESFETCHOPERATION_H
#define FCCURRENTISSUESFETCHOPERATION_H

@class NSArray;
@protocol FCContentContext;


#import "FCOperation.h"
#import "FCCachePolicy.h"

@interface FCCurrentIssuesFetchOperation : FCOperation

@property (copy, nonatomic) FCCachePolicy *cachePolicy; // ivar: _cachePolicy
@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler
@property (retain, nonatomic) NSArray *resultIssues; // ivar: _resultIssues


-(BOOL)validateOperation;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif