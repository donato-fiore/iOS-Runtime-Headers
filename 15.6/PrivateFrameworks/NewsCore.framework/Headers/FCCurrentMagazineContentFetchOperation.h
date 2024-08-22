// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCURRENTMAGAZINECONTENTFETCHOPERATION_H
#define FCCURRENTMAGAZINECONTENTFETCHOPERATION_H

@class NSArray, NSString;
@protocol FCFeedTransforming;


#import "FCOperation.h"
#import "FCCloudContext.h"
#import "FCCachePolicy.h"

@interface FCCurrentMagazineContentFetchOperation : FCOperation {
    FCCloudContext *_context;
    NSArray *_configIssueIDs;
    NSArray *_configArticleIDs;
    NSString *_trendingArticleListID;
    id<FCFeedTransforming> *_currentHeadlinesTransformation;
    NSArray *_resultConfigIssues;
    NSArray *_resultConfigHeadlines;
    NSArray *_resultCurrentIssues;
    NSArray *_resultCurrentFeatureHeadlines;
    NSArray *_resultTrendingHeadlines;
}


@property (retain, nonatomic) FCCachePolicy *cachedPolicy; // ivar: _cachedPolicy
@property (nonatomic) NSInteger contentOptions; // ivar: _contentOptions
@property (copy, nonatomic) id *fetchCompletionHandler; // ivar: _fetchCompletionHandler


-(BOOL)validateOperation;
-(id)init;
-(id)initWithContext:(id)arg0 configIssueIDs:(id)arg1 configArticleIDs:(id)arg2 trendingArticleListID:(id)arg3 currentHeadlinesTransformation:(id)arg4 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif