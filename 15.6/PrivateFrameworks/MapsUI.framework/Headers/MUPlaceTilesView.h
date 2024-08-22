// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUPLACETILESVIEW_H
#define MUPLACETILESVIEW_H

@class UIView, UICollectionView, UICollectionViewDiffableDataSource, NSLayoutConstraint, NSString, NSArray;
@protocol UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, MUCollectionViewDiffableDataSourceCellProviding, MUScrollAnalyticActionObserving, MUPlaceTilesViewDelegate;


#import "MUPlaceTilesViewConfiguration.h"
#import "MUPunchoutViewModel.h"

@interface MUPlaceTilesView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, MUCollectionViewDiffableDataSourceCellProviding>

 {
    UICollectionView *_contentCollectionView;
    UICollectionViewDiffableDataSource *_diffableDataSource;
    MUPlaceTilesViewConfiguration *_configuration;
    NSLayoutConstraint *_heightConstraint;
    CGPoint _beginAnalyticsScrollingPoint;
    CGSize _tileSize;
}


@property (retain, nonatomic) MUPunchoutViewModel *accessoryViewModel; // ivar: _accessoryViewModel
@property (weak, nonatomic) NSObject<MUScrollAnalyticActionObserving> *analyticsDelegate; // ivar: _analyticsDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUPlaceTilesViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *focusItems;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *viewModels; // ivar: _viewModels


-(CGFloat)heightForTileSize:(struct CGSize )arg0 ;
-(id)accessoryView;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 itemIdentifier:(id)arg2 ;
-(id)imageViewForIndex:(NSUInteger)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_contentSizeDidChange;
-(void)_setupStackView;
-(void)_updateContent;
-(void)_updateTileMetrics;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)displayPlaceTiles;
-(void)enumerateImageViewsWithBlock:(id)arg0 ;
-(void)scrollToViewAtIndex:(NSUInteger)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateViewsWithAlpha:(CGFloat)arg0 ;


@end


#endif