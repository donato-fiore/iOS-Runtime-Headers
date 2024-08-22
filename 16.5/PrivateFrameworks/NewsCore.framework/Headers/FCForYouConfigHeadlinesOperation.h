// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFORYOUCONFIGHEADLINESOPERATION_H
#define FCFORYOUCONFIGHEADLINESOPERATION_H

@class NSArray, NSError, NSDictionary;
@protocol FCBundleSubscriptionManagerType, FCCoreConfiguration, FCContentContext, FCFeedPersonalizing;


#import "FCOperation.h"
#import "FCCachePolicy.h"
#import "FCForYouConfig.h"

@interface FCForYouConfigHeadlinesOperation : FCOperation

@property (copy, nonatomic) NSArray *additionalArticleListIDs; // ivar: _additionalArticleListIDs
@property (copy, nonatomic) NSArray *additionalTagIDs; // ivar: _additionalTagIDs
@property (retain, nonatomic) FCCachePolicy *articleListCachePolicy; // ivar: _articleListCachePolicy
@property (retain, nonatomic) NSObject<FCBundleSubscriptionManagerType> *bundleSubscriptionManager; // ivar: _bundleSubscriptionManager
@property (copy, nonatomic) NSObject<FCCoreConfiguration> *configuration; // ivar: _configuration
@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (retain, nonatomic) FCCachePolicy *editorialSectionTagCachePolicy; // ivar: _editorialSectionTagCachePolicy
@property (retain) NSError *error; // ivar: _error
@property (nonatomic) NSInteger fields; // ivar: _fields
@property (retain) FCForYouConfig *forYouConfig; // ivar: _forYouConfig
@property (retain, nonatomic) FCCachePolicy *forYouConfigCachePolicy; // ivar: _forYouConfigCachePolicy
@property (copy, nonatomic) id *headlinesAndTagsCompletionHandler; // ivar: _headlinesAndTagsCompletionHandler
@property (copy, nonatomic) id *headlinesCompletionHandler; // ivar: _headlinesCompletionHandler
@property (retain, nonatomic) NSObject<FCFeedPersonalizing> *personalizer; // ivar: _personalizer
@property (retain, nonatomic) NSDictionary *resultArticleListsByID; // ivar: _resultArticleListsByID
@property (retain, nonatomic) FCForYouConfig *resultForYouConfig; // ivar: _resultForYouConfig
@property (retain, nonatomic) NSDictionary *resultHeadlinesByArticleID; // ivar: _resultHeadlinesByArticleID
@property (retain, nonatomic) NSDictionary *resultHeadlinesByArticleListID; // ivar: _resultHeadlinesByArticleListID
@property (retain, nonatomic) NSDictionary *resultTagsByID; // ivar: _resultTagsByID
@property (nonatomic) BOOL shouldFetchEditorialSectionTags; // ivar: _shouldFetchEditorialSectionTags


-(BOOL)validateOperation;
-(id)_edgeCacheHint;
-(id)localTodayFeedConfiguration;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif