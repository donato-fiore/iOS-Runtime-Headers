// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALSPOTLIGHTPENDINGSEARCH_H
#define CALSPOTLIGHTPENDINGSEARCH_H

@class NSString, MDSearchQuery, NSMutableOrderedSet;
@protocol MDSearchQueryDelegate, CalSpotlightQueryPendingSearchProtocol;

#import <Foundation/Foundation.h>


@interface CalSpotlightPendingSearch : NSObject <MDSearchQueryDelegate, CalSpotlightQueryPendingSearchProtocol>



@property (copy) NSString *clientBundleID; // ivar: _clientBundleID
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) MDSearchQuery *query; // ivar: _query
@property (retain) NSMutableOrderedSet *searchableItemIdentifiers; // ivar: _searchableItemIdentifiers
@property (retain) NSMutableOrderedSet *searchableItems; // ivar: _searchableItems
@property (readonly) Class superclass;


+(id)_createSearchQueryWithPredicate:(id)arg0 options:(id)arg1 ;
+(id)_pendingSearches;
+(id)_queue;
+(id)_resultForSearchableItem:(id)arg0 ;
+(id)_resultsForSearchableItems:(id)arg0 ;
-(id)initWithString:(id)arg0 clientBundleID:(id)arg1 completionHandler:(id)arg2 ;
-(void)_searchEnded;
-(void)_startSearchWithQuery:(id)arg0 ;
-(void)cancel;
-(void)searchQuery:(id)arg0 didFailWithError:(id)arg1 ;
-(void)searchQuery:(id)arg0 didReturnItems:(id)arg1 ;
-(void)searchQuery:(id)arg0 statusChanged:(NSUInteger)arg1 ;
-(void)searchWithString:(id)arg0 ;


@end


#endif