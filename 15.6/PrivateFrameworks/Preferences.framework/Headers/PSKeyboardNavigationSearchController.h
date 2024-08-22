// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSKEYBOARDNAVIGATIONSEARCHCONTROLLER_H
#define PSKEYBOARDNAVIGATIONSEARCHCONTROLLER_H

@class UISearchController, UIViewController<PSKeyboardNavigationSearchResultsController>;


#import "PSKeyboardNavigationSearchBar.h"

@interface PSKeyboardNavigationSearchController : UISearchController

@property (retain, nonatomic) PSKeyboardNavigationSearchBar *searchBar; // ivar: searchBar
@property (retain, nonatomic) UIViewController<PSKeyboardNavigationSearchResultsController> *searchResultsController; // ivar: searchResultsController


-(id)initWithSearchResultsController:(id)arg0 ;
-(void)_downArrowKeyPressed;
-(void)_escapeKeyPressed;
-(void)_upArrowKeyPressed;


@end


#endif