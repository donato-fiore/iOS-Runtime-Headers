// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSSEARCHMODEL_H
#define STSSEARCHMODEL_H

@class NSArray, NSString, PARTask, PARSession, NSMutableArray, NSMutableDictionary;
@protocol PARSessionDelegate, STSSearchModelDelegate, OS_dispatch_queue, STSSearchModelQuerySuggestionsDelegate, STSRecentsDelegate;

#import <Foundation/Foundation.h>


@interface STSSearchModel : NSObject <PARSessionDelegate>



@property (retain, nonatomic) NSArray *categoryList; // ivar: _categoryList
@property NSUInteger categoryListRequestQueryId; // ivar: _categoryListRequestQueryId
@property (retain, nonatomic) NSString *conversationID; // ivar: _conversationID
@property (readonly, nonatomic) NSString *currentQuery; // ivar: _currentQuery
@property (retain, nonatomic) PARTask *currentTask; // ivar: _currentTask
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<STSSearchModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mutableSectionsQueue; // ivar: _mutableSectionsQueue
@property (retain, nonatomic) PARSession *parsecSession; // ivar: _parsecSession
@property (retain, nonatomic) NSArray *predictedSuggestions; // ivar: _predictedSuggestions
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queryQueue; // ivar: _queryQueue
@property (retain, nonatomic) NSArray *querySuggestions; // ivar: _querySuggestions
@property (weak, nonatomic) NSObject<STSSearchModelQuerySuggestionsDelegate> *querySuggestionsDelegate; // ivar: _querySuggestionsDelegate
@property (retain, nonatomic) NSArray *recentResults; // ivar: _recentResults
@property (weak, nonatomic) NSObject<STSRecentsDelegate> *recentsDelegate; // ivar: _recentsDelegate
@property (retain, nonatomic) NSMutableArray *recentsToDedup; // ivar: _recentsToDedup
@property (retain, nonatomic) NSMutableDictionary *searchResultStore; // ivar: _searchResultStore
@property (retain, nonatomic) NSArray *searchResults; // ivar: _searchResults
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *zkwResultStore; // ivar: _zkwResultStore


+(NSUInteger)clientQueryId;
+(id)serverURLString;
+(void)incrementClientQueryId;
-(id)createQuerySession;
-(id)defaultCategoryList;
-(id)init;
-(id)mockQuerySuggestions;
-(void)_clearQuerySuggestionsAndNotifyDelegate;
-(void)_clearSectionsAndNotifyDelegate;
-(void)_performParsecdSearchQuery:(id)arg0 requestType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_updateSearchProviderImageForResult:(id)arg0 ;
-(void)appendQueryItemsForRequest:(id)arg0 type:(NSInteger)arg1 ;
-(void)fetchMoreResults;
-(void)performCategoryListRequest:(id)arg0 ;
-(void)performSearchWithQueryString:(id)arg0 requestType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)performZKWSearchQueryWithCompletion:(id)arg0 ;
-(void)prefetchRecentsWithCompletion:(id)arg0 ;
-(void)removeAllSections;
-(void)removeQuerySuggestions;
-(void)session:(id)arg0 bag:(id)arg1 didLoadWithError:(id)arg2 ;


@end


#endif