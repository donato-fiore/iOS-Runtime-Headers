// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUCALLHISTORYSEARCHMODULE_H
#define TUCALLHISTORYSEARCHMODULE_H

@class NSMutableArray, NSString;
@protocol TUSearchModuleProtocol;

#import <Foundation/Foundation.h>

#import "TUSearchController.h"
#import "TUSearchResults.h"

@interface TUCallHistorySearchModule : NSObject <TUSearchModuleProtocol>



@property (retain, nonatomic) NSMutableArray *currentResultsList; // ivar: _currentResultsList
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *previousSearchString; // ivar: _previousSearchString
@property (nonatomic, getter=isSearchComplete) BOOL searchComplete; // ivar: _searchComplete
@property (weak) TUSearchController *searchController; // ivar: _searchController
@property (readonly) TUSearchResults *searchResults;
@property (readonly) Class superclass;


-(void)cancelSearch;
-(void)searchForString:(id)arg0 completion:(id)arg1 ;


@end


#endif