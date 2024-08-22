// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCOFFLINEANFARTICLESFETCHOPERATION_H
#define FCOFFLINEANFARTICLESFETCHOPERATION_H

@class NSArray;
@protocol FCContentContext, FCFlintHelper;


#import "FCOperation.h"

@interface FCOfflineANFArticlesFetchOperation : FCOperation {
    BOOL _cachedOnly;
    NSUInteger _maxBatchSize;
    NSUInteger _maxMissingArticles;
    id *_progressHandler;
    id *_interestTokenHandler;
    id *_archiveHandler;
    id *_fetchCompletionHandler;
    id<FCContentContext> *_context;
    id<FCFlintHelper> *_flintHelper;
    NSArray *_articleIDs;
    NSArray *_inputHeadlines;
}




-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif