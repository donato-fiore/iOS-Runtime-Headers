// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYSHORTCUTHUDSEARCHBUTTON_H
#define _UIKEYSHORTCUTHUDSEARCHBUTTON_H

@class NSString;
@protocol _UIKeyShortcutHUDCollectionViewManagerClient, _UIKeyShortcutHUDSearchButtonDelegate;


#import "UIView.h"
#import "UICollectionView.h"
#import "_UIKeyShortcutHUDCollectionViewManager.h"
#import "UICollectionViewDiffableDataSource.h"
#import "_UIKeyShortcutHUDIndexPath.h"
#import "UICollectionViewCellRegistration.h"
#import "_UIKeyShortcutHUDToolbarViewController.h"

@interface _UIKeyShortcutHUDSearchButton : UIView <_UIKeyShortcutHUDCollectionViewManagerClient>



@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (weak, nonatomic) _UIKeyShortcutHUDCollectionViewManager *collectionViewManager; // ivar: _collectionViewManager
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIKeyShortcutHUDSearchButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UIKeyShortcutHUDIndexPath *searchButtonIndexPath;
@property (retain, nonatomic) UICollectionViewCellRegistration *searchCellRegistration; // ivar: _searchCellRegistration
@property (nonatomic, getter=isSearching) BOOL searching; // ivar: _searching
@property (readonly) Class superclass;
@property (weak, nonatomic) _UIKeyShortcutHUDToolbarViewController *toolbarVC; // ivar: _toolbarVC


-(BOOL)selectionFollowsFocusForItemAtIndexPath:(id)arg0 ;
-(BOOL)shouldPersistSelectionForCellAtIndexPath:(id)arg0 ;
-(id)indexPathsForCellsUsingSeparatorAtIndexPath:(id)arg0 ;
-(id)indexPathsForSeparatorsUsedByCellAtIndexPath:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureCollectionView;
-(void)_setupSubviews;
-(void)didCompleteSearchTransition;
-(void)didScrollCollectionView;
-(void)performActionForSelectingCellAtIndexPath:(id)arg0 ;
-(void)prepareForSearchTransition:(BOOL)arg0 ;


@end


#endif