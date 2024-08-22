// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCFEEDITEMHEADLINESOPERATION_H
#define FCFEEDITEMHEADLINESOPERATION_H

@class NSDictionary, NSMapTable, NSArray;
@protocol FCCoreConfiguration, FCContentContext, FCFeedPersonalizing;


#import "FCOperation.h"
#import "FCFeedItemHeadlinesOperationProperties.h"

@interface FCFeedItemHeadlinesOperation : FCOperation

@property (copy, nonatomic) NSObject<FCCoreConfiguration> *configuration; // ivar: _configuration
@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (copy, nonatomic) NSDictionary *feedContextByFeedID; // ivar: _feedContextByFeedID
@property (copy, nonatomic) NSDictionary *feedIDsByArticleID; // ivar: _feedIDsByArticleID
@property (copy, nonatomic) NSMapTable *feedItemScoreProfiles;
@property (copy, nonatomic) NSArray *feedItems; // ivar: _feedItems
@property (nonatomic) NSInteger feedPersonalizationConfigurationSet; // ivar: _feedPersonalizationConfigurationSet
@property (copy, nonatomic) id *headlinesCompletionHandler; // ivar: _headlinesCompletionHandler
@property (copy, nonatomic) id *headlinesMapCompletionHandler; // ivar: _headlinesMapCompletionHandler
@property (retain, nonatomic) NSObject<FCFeedPersonalizing> *personalizer; // ivar: _personalizer
@property (retain, nonatomic) FCFeedItemHeadlinesOperationProperties *properties; // ivar: _properties
@property (copy, nonatomic) id *rapidUpdateRefreshTest; // ivar: _rapidUpdateRefreshTest
@property (retain, nonatomic) NSArray *resultHeadlines; // ivar: _resultHeadlines
@property (nonatomic) BOOL shouldFilterHeadlinesWithoutSourceChannels; // ivar: _shouldFilterHeadlinesWithoutSourceChannels


-(BOOL)validateOperation;
-(id)init;
-(void)_fetchUnadornedHeadlinesWithCompletionHandler:(id)arg0 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif