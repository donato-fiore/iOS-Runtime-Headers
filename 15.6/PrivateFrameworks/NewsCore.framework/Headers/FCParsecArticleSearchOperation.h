// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCPARSECARTICLESEARCHOPERATION_H
#define FCPARSECARTICLESEARCHOPERATION_H

@class NSString, SFMoreResults, SFRankingFeedback, NSArray;
@protocol FCContentContext;


#import "FCOperation.h"

@interface FCParsecArticleSearchOperation : FCOperation

@property (copy) id *articleSearchCompletionHandler; // ivar: _articleSearchCompletionHandler
@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (retain, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (copy, nonatomic) NSString *keyboardInputMode; // ivar: _keyboardInputMode
@property (retain, nonatomic) SFMoreResults *moreResults; // ivar: _moreResults
@property (nonatomic) NSUInteger parsecQueryID; // ivar: _parsecQueryID
@property (retain, nonatomic) SFRankingFeedback *previousRankingFeedback; // ivar: _previousRankingFeedback
@property (copy, nonatomic) NSString *query; // ivar: _query
@property (retain, nonatomic) SFRankingFeedback *rankingFeedback; // ivar: _rankingFeedback
@property (retain, nonatomic) NSArray *results; // ivar: _results
@property (nonatomic) CGFloat scale; // ivar: _scale


-(BOOL)validateOperation;
-(id)_rankingFeedbackWithSection:(id)arg0 ;
-(id)initWithMoreResults:(id)arg0 parsecQueryID:(NSUInteger)arg1 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif