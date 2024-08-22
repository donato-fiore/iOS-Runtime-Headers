// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC17PROMOTEDCONTENTUI14CAROUSELADVIEW_H
#define _TTC17PROMOTEDCONTENTUI14CAROUSELADVIEW_H

@protocol UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout;


#import "APPCPromotedContentView.h"

@interface _TtC17PromotedContentUI14CarouselAdView : APPCPromotedContentView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

 {
    ? $__lazy_storage_$_headlineLabel;
    ? $__lazy_storage_$_advertiserView;
    ? $__lazy_storage_$_advertiserLabel;
    ? $__lazy_storage_$_collectionView;
    ? $__lazy_storage_$__adSize;
    ? elements;
    ? dataRepresentation;
    ? previousVelocity;
}


@property (nonatomic) CGRect frame;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)didMoveToWindow;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;


@end


#endif