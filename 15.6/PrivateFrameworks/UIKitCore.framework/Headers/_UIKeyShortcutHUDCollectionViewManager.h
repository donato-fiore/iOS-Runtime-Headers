// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKEYSHORTCUTHUDCOLLECTIONVIEWMANAGER_H
#define _UIKEYSHORTCUTHUDCOLLECTIONVIEWMANAGER_H

@class NSArray, NSString;
@protocol UICollectionViewDelegate, UIScrollViewDelegate, _UIKeyShortcutHUDCollectionViewManagerClient;

#import <Foundation/Foundation.h>

#import "_UIKeyShortcutHUDIndexPath.h"
#import "_UIKeyShortcutHUDViewController.h"

@interface _UIKeyShortcutHUDCollectionViewManager : NSObject <UICollectionViewDelegate, UIScrollViewDelegate>



@property (readonly, nonatomic) NSArray *allClients;
@property (retain, nonatomic) _UIKeyShortcutHUDIndexPath *categoryVisibleIndexPath; // ivar: _categoryVisibleIndexPath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIKeyShortcutHUDIndexPath *highlightedIndexPath; // ivar: _highlightedIndexPath
@property (weak, nonatomic) _UIKeyShortcutHUDViewController *hudVC; // ivar: _hudVC
@property (weak, nonatomic) NSObject<_UIKeyShortcutHUDCollectionViewManagerClient> *menu; // ivar: _menu
@property (nonatomic) BOOL nextFocusUpdatePrefersTopSearchResult; // ivar: _nextFocusUpdatePrefersTopSearchResult
@property (readonly, nonatomic) NSArray *preferredFocusEnvironments;
@property (weak, nonatomic) NSObject<_UIKeyShortcutHUDCollectionViewManagerClient> *searchButton; // ivar: _searchButton
@property (retain, nonatomic) _UIKeyShortcutHUDIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<_UIKeyShortcutHUDCollectionViewManagerClient> *toolbar; // ivar: _toolbar


-(BOOL)client:(id)arg0 isCategoryVisibleForCellAtIndexPath:(id)arg1 ;
-(BOOL)client:(id)arg0 shouldHideSeparatorAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 selectionFollowsFocusForItemAtIndexPath:(id)arg1 ;
-(id)_clientForCollectionView:(id)arg0 ;
-(void)_client:(id)arg0 deselectCellAtIndexPath:(id)arg1 ;
-(void)_client:(id)arg0 highlightCellAtIndexPath:(id)arg1 ;
-(void)_client:(id)arg0 performBookkeepingForDeselectingCellAtIndexPath:(id)arg1 ;
-(void)_client:(id)arg0 performBookkeepingForHighlightingCellAtIndexPath:(id)arg1 ;
-(void)_client:(id)arg0 performBookkeepingForRemovingCategoryVisibleForCellAtIndexPath:(id)arg1 ;
-(void)_client:(id)arg0 performBookkeepingForSelectingCellAtIndexPath:(id)arg1 ;
-(void)_client:(id)arg0 performBookkeepingForSettingCategoryVisibleForCellAtIndexPath:(id)arg1 ;
-(void)_client:(id)arg0 performBookkeepingForUnhighlightingCellAtIndexPath:(id)arg1 ;
-(void)_client:(id)arg0 removeCategoryVisibleForCellAtIndexPath:(id)arg1 ;
-(void)_client:(id)arg0 selectCellAtIndexPath:(id)arg1 ;
-(void)_client:(id)arg0 setCategoryVisibleForCellAtIndexPath:(id)arg1 ;
-(void)_client:(id)arg0 unhighlightCellAtIndexPath:(id)arg1 ;
-(void)_collectionView:(id)arg0 performActionForSelectingCellAtIndexPath:(id)arg1 ;
-(void)_collectionView:(id)arg0 updateSeparatorVisibilityForCellAtIndexPath:(id)arg1 ;
-(void)_configureCollectionView:(id)arg0 ;
-(void)client:(id)arg0 flashCellIfPossibleAtIndexPath:(id)arg1 completionHandler:(id)arg2 ;
-(void)client:(id)arg0 highlightCellAtIndexPath:(id)arg1 ;
-(void)client:(id)arg0 reloadSeparatorAtIndexPath:(id)arg1 ;
-(void)client:(id)arg0 selectCellAtIndexPath:(id)arg1 ;
-(void)client:(id)arg0 setCategoryVisibleForCellAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)deselectCurrentlySelectedCell;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)reloadAllVisibleSeparatorsForClient:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;


@end


#endif