// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUILIBRARYSHELFCOLLECTIONVIEWCONTROLLER_H
#define VUILIBRARYSHELFCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewDiffableDataSource, NSArray, NSString;
@protocol VUILibraryShelfCollectionViewControllerDelegate;


#import "VUIShelfViewController.h"
#import "VUILibraryLockupViewCell.h"
#import "VUIMediaEntitiesDataSource.h"

@interface VUILibraryShelfCollectionViewController : VUIShelfViewController {
    VUILibraryLockupViewCell *_sizingCell;
}


@property (readonly, nonatomic) VUIMediaEntitiesDataSource *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<VUILibraryShelfCollectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (nonatomic) BOOL disableSeeAllButton; // ivar: _disableSeeAllButton
@property (copy, nonatomic) NSArray *fetchResults; // ivar: _fetchResults
@property (retain, nonatomic) NSString *headerSubtitle; // ivar: _headerSubtitle
@property (retain, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (nonatomic) NSInteger shelfType; // ivar: _shelfType


-(BOOL)_shouldHideDisclosureButton;
-(CGFloat)_computeBottomMargin;
-(id)_attributedHeaderTitle;
-(id)_createDiffableDataSourceForCollectionView:(id)arg0 ;
-(id)_createDiffableDataSourceSnapshot;
-(id)_getEntityIdentifiersFromEntities;
-(id)initWithDataSource:(id)arg0 ;
-(struct CGSize )_configureSizingCellWithEntity:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_didPressSeeAllButton:(id)arg0 ;
-(void)_headerTapped:(id)arg0 ;
-(void)_updateHeaderView;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureWithCollectionView:(id)arg0 ;
-(void)updateWithDataSource:(id)arg0 ;


@end


#endif