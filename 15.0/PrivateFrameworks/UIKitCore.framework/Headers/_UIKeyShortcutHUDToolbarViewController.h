// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIKEYSHORTCUTHUDTOOLBARVIEWCONTROLLER_H
#define _UIKEYSHORTCUTHUDTOOLBARVIEWCONTROLLER_H

@class NSString;
@protocol _UIKeyShortcutHUDSearchButtonDelegate, _UIKeyShortcutHUDSearchBarDelegate, _UIKeyShortcutHUDCollectionViewManagerClient, _UIKeyShortcutHUDToolbarViewControllerDelegate;


#import "UIViewController.h"
#import "UIView.h"
#import "UIPageControl.h"
#import "UICollectionViewCellRegistration.h"
#import "_UIKeyShortcutHUDCell.h"
#import "UICollectionViewSupplementaryRegistration.h"
#import "UICollectionView.h"
#import "_UIKeyShortcutHUDCollectionViewManager.h"
#import "UICollectionViewDiffableDataSource.h"
#import "_UIKeyShortcutHUDIndexPath.h"
#import "_UIKeyShortcutHUDMenu.h"
#import "_UIKeyShortcutHUDMetrics.h"
#import "_UIKeyShortcutHUDSeparatorView.h"
#import "_UIKeyShortcutHUDSearchBar.h"
#import "_UIKeyShortcutHUDSearchButton.h"
#import "UIVisualEffectView.h"

@interface _UIKeyShortcutHUDToolbarViewController : UIViewController <_UIKeyShortcutHUDSearchButtonDelegate, _UIKeyShortcutHUDSearchBarDelegate, _UIKeyShortcutHUDCollectionViewManagerClient>



@property (retain, nonatomic) UIView *categoriesContentView; // ivar: _categoriesContentView
@property (retain, nonatomic) UIPageControl *categoriesPageControl; // ivar: _categoriesPageControl
@property (retain, nonatomic) UICollectionViewCellRegistration *categoryCellRegistration; // ivar: _categoryCellRegistration
@property (weak, nonatomic) _UIKeyShortcutHUDCell *cellForSearchTransition; // ivar: _cellForSearchTransition
@property (retain, nonatomic) UICollectionViewSupplementaryRegistration *cellSeparatorRegistration; // ivar: _cellSeparatorRegistration
@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (weak, nonatomic) _UIKeyShortcutHUDCollectionViewManager *collectionViewManager; // ivar: _collectionViewManager
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIKeyShortcutHUDToolbarViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _UIKeyShortcutHUDIndexPath *firstCategoryIndexPath;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) _UIKeyShortcutHUDMenu *menu; // ivar: _menu
@property (weak, nonatomic) _UIKeyShortcutHUDMetrics *metrics; // ivar: _metrics
@property (nonatomic, getter=isPreparingSearchTransition) BOOL preparingSearchTransition; // ivar: _preparingSearchTransition
@property (retain, nonatomic) _UIKeyShortcutHUDSeparatorView *scrollingSeparatorView; // ivar: _scrollingSeparatorView
@property (retain, nonatomic) _UIKeyShortcutHUDSearchBar *searchBar; // ivar: _searchBar
@property (retain, nonatomic) _UIKeyShortcutHUDSearchButton *searchButton; // ivar: _searchButton
@property (nonatomic, getter=isSearching) BOOL searching; // ivar: _searching
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *toolbarContentView; // ivar: _toolbarContentView
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldHideScrollingSeparatorView;
-(BOOL)selectionFollowsFocusForItemAtIndexPath:(id)arg0 ;
-(BOOL)shouldPersistSelectionForCellAtIndexPath:(id)arg0 ;
-(id)indexPathsForCellsUsingSeparatorAtIndexPath:(id)arg0 ;
-(id)indexPathsForSeparatorsUsedByCellAtIndexPath:(id)arg0 ;
-(void)_configureCollectionView;
-(void)_configureSeparatorViewAppearance:(id)arg0 ;
-(void)_setupSubviews;
-(void)categoriesPageControlCurrentPageChanged:(id)arg0 ;
-(void)didCompleteSearchTransition;
-(void)didScrollCollectionView;
-(void)flashCategoryAtIndex:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)performActionForSelectingCellAtIndexPath:(id)arg0 ;
-(void)prepareForSearchTransition:(BOOL)arg0 ;
-(void)searchBar:(id)arg0 didUpdateSearchText:(id)arg1 ;
-(void)searchBarDidPressCancelButton:(id)arg0 ;
-(void)searchButtonDidPress:(id)arg0 ;
-(void)selectCategory:(id)arg0 withCategoryIndex:(NSInteger)arg1 ;
-(void)updateScrollingSeparatorViewVisibility;
-(void)viewDidLoad;


@end


#endif