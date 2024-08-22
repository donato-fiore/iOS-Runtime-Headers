// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISEARCHBARCONTROLLER_H
#define SKUISEARCHBARCONTROLLER_H

@class UISearchBar, NSString, UIViewController;
@protocol SKUISearchFieldDelegate, UISearchBarDelegate;

#import <Foundation/Foundation.h>

#import "SKUIFocusedTouchGestureRecognizer.h"
#import "SKUISearchFieldController.h"
#import "SKUIClientContext.h"
#import "SKUISearchBarViewElement.h"

@interface SKUISearchBarController : NSObject <SKUISearchFieldDelegate, UISearchBarDelegate>

 {
    SKUIFocusedTouchGestureRecognizer *_cancelTouchGestureRecognizer;
    UISearchBar *_searchBar;
    SKUISearchFieldController *_searchFieldController;
    BOOL _usesSearchFieldController;
}


@property (readonly, nonatomic) BOOL canBecomeActive;
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displaysSearchBarInNavigationBar; // ivar: _displaysSearchBarInNavigationBar
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (readonly, nonatomic) UISearchBar *searchBar;
@property (retain, nonatomic) SKUISearchBarViewElement *searchBarViewElement; // ivar: _viewElement
@property (nonatomic) BOOL showsResultsForEmptyField; // ivar: _showsResultsForEmptyField
@property (readonly) Class superclass;


-(id)_newSearchFieldController;
-(id)_searchFieldController;
-(id)initWithSearchBarViewElement:(id)arg0 ;
-(void)_cancelGestureAction:(id)arg0 ;
-(void)_customizeSearchBar:(id)arg0 ;
-(void)_customizeSearchFieldController:(id)arg0 ;
-(void)_dispatchChangeEventWithText:(id)arg0 ;
-(void)_dispatchSubmitEventWithText:(id)arg0 URL:(id)arg1 searchHintOriginalTerm:(id)arg2 searchHintIndex:(id)arg3 ;
-(void)_removeCancelTouchGestureRecognizer;
-(void)becomeActive;
-(void)dealloc;
-(void)reloadAfterDocumentUpdate;
-(void)resignActive:(BOOL)arg0 ;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)searchFieldController:(id)arg0 requestSearch:(id)arg1 ;
-(void)searchFieldController:(id)arg0 searchBarDidChangeText:(id)arg1 ;


@end


#endif