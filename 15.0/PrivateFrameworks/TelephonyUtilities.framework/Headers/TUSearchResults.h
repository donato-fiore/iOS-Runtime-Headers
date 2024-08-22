// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUSEARCHRESULTS_H
#define TUSEARCHRESULTS_H

@class NSArray, NSMutableArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TUSearchController.h"

@interface TUSearchResults : NSObject <NSCopying>



@property (readonly) NSArray *allDataItems;
@property (retain, nonatomic) NSMutableArray *allDataItemsCache; // ivar: _allDataItemsCache
@property (readonly) NSArray *allSearchItems;
@property (retain, nonatomic) NSMutableArray *allSearchItemsCache; // ivar: _allSearchItemsCache
@property (readonly) NSInteger numberOfResults;
@property (readonly) NSInteger numberOfSections;
@property (retain, nonatomic) NSMutableArray *resultGroups; // ivar: _resultGroups
@property (weak) TUSearchController *searchController; // ivar: _searchController
@property (retain, nonatomic) NSString *searchTerm; // ivar: _searchTerm


-(NSInteger)numberOfTableViewRows;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSearchTerm:(id)arg0 shouldAddAdhocResults:(BOOL)arg1 ;
-(id)resultGroupForSection:(NSInteger)arg0 ;
-(void)_clearCaches;
-(void)addAdhocResultGroup;
-(void)addResultGroup:(id)arg0 ;
-(void)addSearchResults:(id)arg0 ;
-(void)finalizeSearchResults;
-(void)removeDuplicateResults;
-(void)removeSearchItem:(id)arg0 ;


@end


#endif