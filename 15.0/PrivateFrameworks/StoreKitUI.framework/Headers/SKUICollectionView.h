// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICOLLECTIONVIEW_H
#define SKUICOLLECTIONVIEW_H

@class UICollectionView, UICollectionViewLayout, UIRefreshControl;


#import "SKUIIndexBarControl.h"

@interface SKUICollectionView : UICollectionView {
    BOOL _delegateWantsWillLayoutSubviews;
    BOOL _externalShowsHorizontalScrollIndicator;
    BOOL _externalShowsVerticalScrollIndicator;
    UICollectionViewLayout *_pendingCollectionViewLayout;
}


@property (retain, nonatomic) SKUIIndexBarControl *indexBarControl; // ivar: _indexBarControl
@property (nonatomic) CGFloat overrideBoundsWidth; // ivar: _overrideBoundsWidth
@property (retain, nonatomic) UIRefreshControl *refreshControl; // ivar: _refreshControl


-(id)collectionViewLayout;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(struct CGRect )bounds;
-(void)_updateIndexBarControlFrame;
-(void)_updateShowsScrollIndicators;
-(void)layoutSubviews;
-(void)setCollectionViewLayout:(id)arg0 animated:(BOOL)arg1 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)setDelegate:(id)arg0 ;
-(void)setShowsHorizontalScrollIndicator:(BOOL)arg0 ;
-(void)setShowsVerticalScrollIndicator:(BOOL)arg0 ;


@end


#endif