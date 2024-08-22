// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7SWIFTUI23SWIFTUISEARCHCONTROLLER_H
#define _TTC7SWIFTUI23SWIFTUISEARCHCONTROLLER_H

@class UISearchController, UISearchBar;
@protocol UISearchControllerDelegate, _UISearchControllerDelegatePrivate, _UISearchResultsUpdating_dci;



@interface _TtC7SwiftUI23SwiftUISearchController : UISearchController <UISearchControllerDelegate, _UISearchControllerDelegatePrivate, _UISearchResultsUpdating_dci>

 {
    ? searchItem;
    ? $__lazy_storage_$__searchBar;
    ? coordinator;
    ? suggestions;
}


@property (nonatomic, readonly) UISearchBar *searchBar;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSearchResultsController:(id)arg0 ;
-(void)searchController:(id)arg0 willChangeToSearchBarPlacement:(NSInteger)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)updateSearchResultsForSearchController:(id)arg0 selectingSearchSuggestion:(id)arg1 ;


@end


#endif