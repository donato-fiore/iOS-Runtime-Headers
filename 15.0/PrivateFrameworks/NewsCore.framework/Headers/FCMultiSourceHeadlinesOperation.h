// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCMULTISOURCEHEADLINESOPERATION_H
#define FCMULTISOURCEHEADLINESOPERATION_H

@class NSSet, NSArray, NSDictionary;
@protocol FCCoreConfiguration, FCContentContext;


#import "FCOperation.h"
#import "FCCachePolicy.h"

@interface FCMultiSourceHeadlinesOperation : FCOperation

@property (copy, nonatomic) NSSet *articleIDs; // ivar: _articleIDs
@property (copy, nonatomic) NSArray *articleListIDs; // ivar: _articleListIDs
@property (retain, nonatomic) FCCachePolicy *cachePolicyForArticleLists; // ivar: _cachePolicyForArticleLists
@property (copy, nonatomic) NSObject<FCCoreConfiguration> *configuration; // ivar: _configuration
@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (copy, nonatomic) id *headlinesCompletionHandler; // ivar: _headlinesCompletionHandler
@property (retain, nonatomic) NSDictionary *heldRecordsByType; // ivar: _heldRecordsByType
@property (copy, nonatomic) NSArray *networkEvents; // ivar: _networkEvents
@property (retain, nonatomic) NSDictionary *resultArticleIDHeadlinesByArticleID; // ivar: _resultArticleIDHeadlinesByArticleID
@property (retain, nonatomic) NSDictionary *resultArticleListHeadlinesByArticleListID; // ivar: _resultArticleListHeadlinesByArticleListID
@property (retain, nonatomic) NSDictionary *resultArticleListsByID; // ivar: _resultArticleListsByID
@property (nonatomic) BOOL shouldBypassRecordSourcePersistence; // ivar: _shouldBypassRecordSourcePersistence


-(BOOL)validateOperation;
-(id)init;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif