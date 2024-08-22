// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HLPHELPTABLEOFCONTENTVIEWCONTROLLER_H
#define HLPHELPTABLEOFCONTENTVIEWCONTROLLER_H

@class UITableViewController, UIView, UILabel, UIButton, NSLayoutConstraint, NSString, NSMutableArray, UISearchController, NSArray;
@protocol UISearchBarDelegate, UISearchResultsUpdating, UISearchControllerDelegate, HLPHelpTableOfContentViewControllerDelegate;


#import "HLPHelpBookController.h"
#import "HLPHelpSearchIndexController.h"
#import "HLPHelpLocale.h"
#import "HLPHelpSearchResultTableViewController.h"

@interface HLPHelpTableOfContentViewController : UITableViewController <UISearchBarDelegate, UISearchResultsUpdating, UISearchControllerDelegate>

 {
    UIView *_tableBackgroundView;
    UIView *_tableFooterSeparatorView;
    UILabel *_copyrightFooterLabel;
    UIButton *_footerViewOverlayButton;
    NSLayoutConstraint *_copyrightFooterLabelHeightConstraint;
    NSLayoutConstraint *_copyrightFooterLabelTopConstraint;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HLPHelpTableOfContentViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *displayHelpItems; // ivar: _displayHelpItems
@property (nonatomic) BOOL fullBookView; // ivar: _fullBookView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HLPHelpBookController *helpBookController; // ivar: _helpBookController
@property (retain, nonatomic) HLPHelpSearchIndexController *helpSearchIndexController; // ivar: _helpSearchIndexController
@property (retain, nonatomic) HLPHelpLocale *locale; // ivar: _locale
@property (retain, nonatomic) NSMutableArray *openSections; // ivar: _openSections
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (nonatomic) BOOL searchLogged; // ivar: _searchLogged
@property (retain, nonatomic) HLPHelpSearchResultTableViewController *searchResultTableViewController; // ivar: _searchResultTableViewController
@property (retain, nonatomic) NSArray *searchTerms; // ivar: _searchTerms
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *tableFooterView; // ivar: _tableFooterView


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)numberOfVisibleHelpItemForSectionItem:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)appendChildrenForSectionItem:(id)arg0 ;
-(void)cancelSpotlightSearchDelay;
-(void)closeSectionItem:(id)arg0 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)copyrightButtonTapped;
-(void)dealloc;
-(void)deselectCurrentRow;
-(void)loadError;
-(void)openHelpItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)openHelpItem:(id)arg0 reload:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)scrollToHelpItem:(id)arg0 deselectImmediately:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)scrollToHelpItem:(id)arg0 deselectImmediately:(BOOL)arg1 reload:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)showHelpBookInfo;
-(void)showTopicItem:(id)arg0 fromTableView:(id)arg1 ;
-(void)spotlightSearchDelay;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCellSelectionWithScollPosition:(NSInteger)arg0 helpItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateFooterViewBackgroundColor;
-(void)updateFooterViewLayout;
-(void)updateSearchResultViewSeparatorValue;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)updateWithHelpBookController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willDismissSearchController:(id)arg0 ;
-(void)willPresentSearchController:(id)arg0 ;


@end


#endif