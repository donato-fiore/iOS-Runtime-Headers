// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIMENUCOLLECTIONVIEWCONTROLLER_H
#define VUIMENUCOLLECTIONVIEWCONTROLLER_H

@class UIViewController, NSString, UICollectionViewDiffableDataSource, NSArray, _UIDiffableDataSourceSectionController, UICollectionViewCell;
@protocol UICollectionViewDelegate, VUILegacyCollectionViewDelegate, VUIMenuCollectionViewControllerDelegate;


#import "VUIMenuDataSource.h"
#import "VUICollectionConfiguration.h"
#import "VUILegacyCollectionView.h"
#import "VUIMenuSectionHeaderCollectionViewCell.h"

@interface VUIMenuCollectionViewController : UIViewController <UICollectionViewDelegate, VUILegacyCollectionViewDelegate>



@property (retain, nonatomic) VUIMenuDataSource *categories; // ivar: _categories
@property (retain, nonatomic) VUICollectionConfiguration *collectionConfiguration; // ivar: _collectionConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUIMenuCollectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (retain, nonatomic) NSArray *genreMenuItems; // ivar: _genreMenuItems
@property (nonatomic) BOOL genresOnlyMenu; // ivar: _genresOnlyMenu
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInPrimaryOnlyMode; // ivar: _isInPrimaryOnlyMode
@property (retain, nonatomic) NSArray *mainMenuItems; // ivar: _mainMenuItems
@property (retain, nonatomic) VUILegacyCollectionView *menuCollectionView; // ivar: _menuCollectionView
@property (retain, nonatomic) _UIDiffableDataSourceSectionController *sectionController; // ivar: _sectionController
@property (retain, nonatomic) VUIMenuSectionHeaderCollectionViewCell *sectionHeaderSizingCell; // ivar: _sectionHeaderSizingCell
@property (nonatomic) BOOL shouldDeselectOnViewAppear; // ivar: _shouldDeselectOnViewAppear
@property (nonatomic) BOOL shouldMarkFirstCategorySelected; // ivar: _shouldMarkFirstCategorySelected
@property (nonatomic) BOOL shouldShowBackButton; // ivar: _shouldShowBackButton
@property (nonatomic) BOOL shouldShowLeftBarButton; // ivar: _shouldShowLeftBarButton
@property (retain, nonatomic) UICollectionViewCell *sizingCell; // ivar: _sizingCell
@property (readonly) Class superclass;


-(BOOL)_menuHasContent;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(id)_backButton;
-(id)_createDiffableDataSource;
-(id)_createDiffableDataSourceSnapshot;
-(id)_leftBarButton;
-(id)initWithCategories:(id)arg0 gridConfiguration:(id)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_applySnapshotsToSectionController:(BOOL)arg0 ;
-(void)_backSelected:(id)arg0 ;
-(void)_leftBarButtonSelected:(id)arg0 ;
-(void)_selectFirstMenuItemIfNecessary;
-(void)_updateNavigationBarPadding;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)loadView;
-(void)setTitle:(id)arg0 ;
-(void)updateWithCategories:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif