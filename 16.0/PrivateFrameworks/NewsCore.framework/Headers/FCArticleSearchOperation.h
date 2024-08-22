// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCARTICLESEARCHOPERATION_H
#define FCARTICLESEARCHOPERATION_H

@class NSString, NSError;


#import "FCOperation.h"
#import "FCCloudContext.h"
#import "FCArticleSearchOperationFeedbackResult.h"
#import "FCArticleStreamingResults.h"

@interface FCArticleSearchOperation : FCOperation

@property (copy) id *articleSearchCompletion; // ivar: _articleSearchCompletion
@property (retain, nonatomic) FCCloudContext *cloudContext; // ivar: _cloudContext
@property (retain, nonatomic) FCArticleSearchOperationFeedbackResult *feedbackResult; // ivar: _feedbackResult
@property (nonatomic) NSString *keyboardInputMode; // ivar: _keyboardInputMode
@property (nonatomic) NSUInteger parsecQueryID; // ivar: _parsecQueryID
@property (copy, nonatomic) NSString *query; // ivar: _query
@property (retain, nonatomic) FCArticleStreamingResults *results; // ivar: _results
@property (nonatomic) NSUInteger resultsLimit; // ivar: _resultsLimit
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (retain, nonatomic) NSError *searchError; // ivar: _searchError


-(BOOL)validateOperation;
-(id)initWithParsecQueryID:(NSUInteger)arg0 ;
-(void)_performSearchQuery:(id)arg0 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif