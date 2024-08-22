// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKTESTCONTENTDATABASE_H
#define FCCKTESTCONTENTDATABASE_H

@class NSMutableSet, NSSet, NSMutableArray;


#import "FCCKContentDatabase.h"
#import "FCCKTestFeedQueryEndpoint.h"
#import "FCCKTestMultiFetchQueryEndpoint.h"
#import "FCCKTestOrderFeedQueryEndpoint.h"

@interface FCCKTestContentDatabase : FCCKContentDatabase

@property (retain, nonatomic) NSMutableSet *droppedFeeds; // ivar: _droppedFeeds
@property (retain, nonatomic) FCCKTestFeedQueryEndpoint *feedQueryEndpoint; // ivar: _feedQueryEndpoint
@property (copy, nonatomic) NSSet *fetchedKeys; // ivar: _fetchedKeys
@property (retain, nonatomic) FCCKTestMultiFetchQueryEndpoint *multiFetchQueryEndpoint; // ivar: _multiFetchQueryEndpoint
@property (retain, nonatomic) FCCKTestOrderFeedQueryEndpoint *orderFeedQueryEndpoint; // ivar: _orderFeedQueryEndpoint
@property (retain, nonatomic) NSMutableArray *records; // ivar: _records
@property (nonatomic) BOOL simulateNetworkError; // ivar: _simulateNetworkError


+(id)testingDatabase;
-(BOOL)shouldUseCloudd;
-(NSUInteger)orderForArticleID:(id)arg0 feedID:(id)arg1 ;
-(id)addArticlesToTopOfFeed:(id)arg0 count:(NSUInteger)arg1 ;
-(id)initWithContainerIdentifier:(id)arg0 productionEnvironment:(BOOL)arg1 networkBehaviorMonitor:(id)arg2 ;
-(id)insertTestArticle;
-(id)insertTestArticleListReferencingArticleIDs:(id)arg0 ;
-(id)insertTestArticleWithProperties:(id)arg0 ;
-(id)insertTestForYouConfigWithProperties:(id)arg0 ;
-(id)insertTestIssueListReferencingIssueIDs:(id)arg0 ;
-(id)insertTestIssueWithProperties:(id)arg0 ;
-(id)insertTestTagWithType:(id)arg0 feedID:(id)arg1 ;
-(id)insertTestTagWithType:(id)arg0 feedID:(id)arg1 properties:(id)arg2 ;
-(id)insertTestTagWithType:(id)arg0 properties:(id)arg1 ;
-(id)records:(id)arg0 withDesiredKeys:(id)arg1 ;
-(void)addOperation:(id)arg0 ;
-(void)deleteArticleWithID:(id)arg0 ;
-(void)deleteFeedID:(id)arg0 ;
-(void)insertArticleID:(id)arg0 atBottomOfFeedID:(id)arg1 ;
-(void)insertArticleID:(id)arg0 atTopOfFeedID:(id)arg1 ;
-(void)insertArticleID:(id)arg0 inFeedID:(id)arg1 withOrder:(NSUInteger)arg2 ;
-(void)insertArticleID:(id)arg0 inFeedID:(id)arg1 withOrder:(NSUInteger)arg2 subOrder:(NSUInteger)arg3 ;
-(void)insertRecord:(id)arg0 ;
-(void)insertTestArticleWithID:(id)arg0 properties:(id)arg1 ;
-(void)insertTestIssueWithID:(id)arg0 properties:(id)arg1 ;
-(void)insertTestTagWithID:(id)arg0 type:(id)arg1 properties:(id)arg2 ;
-(void)populateWithBasicTestFeeds;
-(void)simulateDroppedFeedForFeedID:(id)arg0 ;
-(void)updateArticleID:(id)arg0 inFeedID:(id)arg1 withProperties:(id)arg2 ;
-(void)updateArticleWithID:(id)arg0 modDate:(id)arg1 properties:(id)arg2 ;
-(void)updateArticleWithID:(id)arg0 properties:(id)arg1 ;
-(void)updateTagWithID:(id)arg0 properties:(id)arg1 ;


@end


#endif