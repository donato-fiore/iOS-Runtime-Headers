// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCTAGHEADLINESOPERATION_H
#define FCTAGHEADLINESOPERATION_H

@class NSArray, NSString;


#import "FCOperation.h"
#import "FCCloudContext.h"

@interface FCTagHeadlinesOperation : FCOperation

@property (retain, nonatomic) FCCloudContext *context; // ivar: _context
@property (copy) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler
@property (nonatomic) NSUInteger maxHeadlinesCount; // ivar: _maxHeadlinesCount
@property (copy) NSArray *resultHeadlines; // ivar: _resultHeadlines
@property (copy, nonatomic) NSString *tagID; // ivar: _tagID


-(BOOL)validateOperation;
-(id)init;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif