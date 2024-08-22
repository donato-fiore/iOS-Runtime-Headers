// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCSEARCHOPERATION_H
#define FCSEARCHOPERATION_H

@class NSString;


#import "FCOperation.h"
#import "FCCloudContext.h"
#import "FCSearchResult.h"

@interface FCSearchOperation : FCOperation

@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (retain, nonatomic) FCCloudContext *cloudContext; // ivar: _cloudContext
@property (nonatomic) NSString *keyboardInputMode; // ivar: _keyboardInputMode
@property (nonatomic) NSUInteger parsecQueryID; // ivar: _parsecQueryID
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (retain, nonatomic) FCSearchResult *searchResult; // ivar: _searchResult
@property (copy, nonatomic) id *searchResultsBlock; // ivar: _searchResultsBlock
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (nonatomic) BOOL shouldFetchFullHeadline; // ivar: _shouldFetchFullHeadline


-(BOOL)validateOperation;
-(id)_fetchFullHeadlineResultsForArticles:(id)arg0 ;
-(id)_fetchResultsForArticlesWithBatchSize:(NSUInteger)arg0 ;
-(id)_fetchResultsForTagsWithBatchSize:(NSUInteger)arg0 ;
-(id)initWithSearchText:(id)arg0 cloudContext:(id)arg1 parsecQueryID:(NSUInteger)arg2 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif