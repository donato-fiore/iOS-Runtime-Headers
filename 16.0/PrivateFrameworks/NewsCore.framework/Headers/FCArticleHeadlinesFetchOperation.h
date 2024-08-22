// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCARTICLEHEADLINESFETCHOPERATION_H
#define FCARTICLEHEADLINESFETCHOPERATION_H

@class NSArray;
@protocol FCCoreConfiguration, FCContentContext;


#import "FCMultiStepFetchOperation.h"

@interface FCArticleHeadlinesFetchOperation : FCMultiStepFetchOperation

@property NSUInteger articleCachePolicy; // ivar: _articleCachePolicy
@property (retain, nonatomic) NSArray *articleIDs; // ivar: _articleIDs
@property CGFloat articleMaximumCachedAge; // ivar: _articleMaximumCachedAge
@property (copy, nonatomic) NSObject<FCCoreConfiguration> *configuration; // ivar: _configuration
@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (retain, nonatomic) NSArray *ignoreCacheForArticleIDs; // ivar: _ignoreCacheForArticleIDs
@property (copy, nonatomic) id *interestTokenHandler; // ivar: _interestTokenHandler
@property BOOL overrideArticleCachePolicy; // ivar: _overrideArticleCachePolicy
@property BOOL overrideTagCachePolicy; // ivar: _overrideTagCachePolicy
@property (retain, nonatomic) NSArray *resultHeadlines; // ivar: _resultHeadlines
@property (nonatomic) BOOL shouldFilterHeadlinesWithoutSourceChannels; // ivar: _shouldFilterHeadlinesWithoutSourceChannels
@property NSUInteger tagCachePolicy; // ivar: _tagCachePolicy
@property CGFloat tagMaximumCachedAge; // ivar: _tagMaximumCachedAge


-(id)completeFetchOperation;
-(id)determineAppropriateFetchStepsWithCompletion:(id)arg0 ;
-(id)fetchConfigWithCompletion:(id)arg0 ;
-(id)fetchRecordsWithCompletion:(id)arg0 ;
-(id)init;
-(id)initWithContext:(id)arg0 articleIDs:(id)arg1 ignoreCacheForArticleIDs:(id)arg2 ;


@end


#endif