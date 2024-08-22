// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACEPHOTOSLIDERVIEW_H
#define MUPLACEPHOTOSLIDERVIEW_H

@class UIView, UICollectionView, UICollectionViewDiffableDataSource, NSString, NSArray;
@protocol UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, MUCollectionViewDiffableDataSourceCellProviding, MUPlacePhotoSliderDataSource, MUScrollAnalyticActionObserving, MUPlacePhotoSliderDelegate;


#import "MUPagingScrollContainerView.h"

@interface MUPlacePhotoSliderView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, MUCollectionViewDiffableDataSourceCellProviding>

 {
    UICollectionView *_contentCollectionView;
    MUPagingScrollContainerView *_pagingScrollView;
    id<MUPlacePhotoSliderDataSource> *_dataSource;
    UICollectionViewDiffableDataSource *_diffableDataSource;
    UIView *_floatingView;
    CGSize _photoTileSize;
    CGPoint _beginAnalyticsScrollingPoint;
}


@property (weak, nonatomic) NSObject<MUScrollAnalyticActionObserving> *analyticsDelegate; // ivar: _analyticsDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUPlacePhotoSliderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *focusItems;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)attributionViewForAttribution:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 itemIdentifier:(id)arg2 ;
-(id)imageViewForIndex:(NSUInteger)arg0 ;
-(id)initWithDataSource:(id)arg0 photoTileSize:(struct CGSize )arg1 ;
-(struct CGSize )_sizeForAttribution;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_attachFloatingView;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)displayPhotos;
-(void)enumerateImageViewsWithBlock:(id)arg0 ;
-(void)layoutSubviews;
-(void)scrollToViewAtIndex:(NSUInteger)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)updateViewsWithAlpha:(CGFloat)arg0 ;


@end


#endif