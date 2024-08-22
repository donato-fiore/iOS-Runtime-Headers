// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSEARCHRESULTSSEARCHCONTROLLER_H
#define PKSEARCHRESULTSSEARCHCONTROLLER_H

@class UISearchController, UINavigationController;


#import "PKSearchResultsViewController.h"

@interface PKSearchResultsSearchController : UISearchController {
    UINavigationController *_navVC;
    PKSearchResultsViewController *_resultsVC;
    BOOL _searchBarWasFirstResponder;
    BOOL _showSearchBar;
}




-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(NSInteger)preferredStatusBarStyle;
-(id)initWithPaymentDataProvider:(id)arg0 transactionSourceCollection:(id)arg1 familyCollection:(id)arg2 ;
-(void)_updateSearchBarFrame;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)setSearchBarVisible:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif