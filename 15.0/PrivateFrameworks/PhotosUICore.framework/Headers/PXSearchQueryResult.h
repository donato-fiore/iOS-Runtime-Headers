// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSEARCHQUERYRESULT_H
#define PXSEARCHQUERYRESULT_H

@class PHFetchResult, NSArray, NSSet;

#import <Foundation/Foundation.h>

#import "PXSearchQuery.h"

@interface PXSearchQueryResult : NSObject

@property (readonly, copy, nonatomic) PHFetchResult *curatedAssetsFetchResult; // ivar: _curatedAssetsFetchResult
@property (readonly, copy, nonatomic) NSArray *reloadItemIdentifiers; // ivar: _reloadItemIdentifiers
@property (readonly, copy, nonatomic) NSSet *sceneIdentifiers; // ivar: _sceneIdentifiers
@property (readonly, copy, nonatomic) NSArray *searchAssetResults; // ivar: _searchAssetResults
@property (readonly, copy, nonatomic) PXSearchQuery *searchQuery; // ivar: _searchQuery
@property (readonly, copy, nonatomic) NSArray *searchResults; // ivar: _searchResults
@property (readonly, copy, nonatomic) NSArray *searchSuggestions; // ivar: _searchSuggestions


-(id)initEmptySearchQueryResultForQuery:(id)arg0 ;
-(id)initWithSearchQuery:(id)arg0 searchResults:(id)arg1 searchAssetResults:(id)arg2 curatedAssetsFetchResult:(id)arg3 searchSuggestions:(id)arg4 sceneIdentifiers:(id)arg5 reloadItemIdentifiers:(id)arg6 ;


@end


#endif