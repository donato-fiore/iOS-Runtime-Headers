// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSECTIONEDSEARCHRESULTS_H
#define ICSECTIONEDSEARCHRESULTS_H

@class NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ICSectionedSearchResults : NSObject

@property (readonly, nonatomic) NSArray *allSearchResults;
@property (nonatomic) BOOL disableAutomaticUpdates; // ivar: _disableAutomaticUpdates
@property (retain, nonatomic) NSMutableDictionary *searchResultsBySection; // ivar: _searchResultsBySection


+(id)newSearchResultsBySection;
-(BOOL)hasSearchResults;
-(BOOL)hideSearchResultsForIdentifier:(id)arg0 ;
-(BOOL)hideSearchResultsForObjects:(id)arg0 ;
-(BOOL)passesVisibilityTesting:(id)arg0 forSearchResult:(id)arg1 ;
-(BOOL)removeSearchResultWithIdentifier:(id)arg0 forHiding:(BOOL)arg1 ;
-(BOOL)removeSearchResultWithIdentifier:(id)arg0 fromSection:(NSUInteger)arg1 forHiding:(BOOL)arg2 ;
-(BOOL)replaceSearchResultObject:(id)arg0 withObject:(id)arg1 ;
-(NSUInteger)addSearchResults:(id)arg0 removingFoundIdentifiers:(id)arg1 passingVisibilityTesting:(id)arg2 ;
-(NSUInteger)addSearchResultsBySection:(id)arg0 ;
-(NSUInteger)countForSection:(NSUInteger)arg0 ;
-(NSUInteger)removeSearchResultsWithIdentifiers:(id)arg0 forHiding:(BOOL)arg1 ;
-(NSUInteger)sectionForSearchResult:(id)arg0 ;
-(id)description;
-(id)indexPathOfObject:(id)arg0 ;
-(id)indexPathOfSearchResult:(id)arg0 ;
-(id)init;
-(id)removeSearchResultAtRow:(NSInteger)arg0 section:(NSUInteger)arg1 ;
-(id)searchResultAtRow:(NSInteger)arg0 section:(NSUInteger)arg1 ;
-(id)searchResultObjectsInSection:(NSUInteger)arg0 ;
-(id)searchResultSectionForSectionIndex:(NSUInteger)arg0 ;
-(id)searchResultWithObject:(id)arg0 ;
-(id)searchResultsBySectionForSearchResults:(id)arg0 passingVisibilityTesting:(id)arg1 ;
-(id)searchResultsInSection:(NSUInteger)arg0 ;
-(void)addSearchResult:(id)arg0 toSection:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)addSearchResults:(id)arg0 toSection:(NSUInteger)arg1 ;
-(void)clear;
-(void)dealloc;
-(void)filterSearchResultsUsingVisiblityTesting:(id)arg0 ;
-(void)noteWillBeDeletedOrTrashed:(id)arg0 ;
-(void)noteWillBeUndeletedOrUntrashed:(id)arg0 ;
-(void)objectsDidChange:(id)arg0 ;
-(void)setSearchResults:(id)arg0 forSection:(NSUInteger)arg1 ;
-(void)updateForSortTypeChange;


@end


#endif