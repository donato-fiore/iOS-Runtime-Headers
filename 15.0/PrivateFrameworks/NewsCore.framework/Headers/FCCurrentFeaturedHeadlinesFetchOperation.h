// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCURRENTFEATUREDHEADLINESFETCHOPERATION_H
#define FCCURRENTFEATUREDHEADLINESFETCHOPERATION_H

@class NSArray;
@protocol FCContentContext, FCFeedTransforming;


#import "FCOperation.h"

@interface FCCurrentFeaturedHeadlinesFetchOperation : FCOperation {
    BOOL _useFallbackArticleSource;
    id<FCContentContext> *_context;
    id<FCFeedTransforming> *_transformation;
    NSArray *_resultHeadlines;
}


@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler


-(BOOL)validateOperation;
-(id)init;
-(id)initWithContext:(id)arg0 transformation:(id)arg1 ;
-(id)initWithContext:(id)arg0 transformation:(id)arg1 useFallbackArticleSource:(BOOL)arg2 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif