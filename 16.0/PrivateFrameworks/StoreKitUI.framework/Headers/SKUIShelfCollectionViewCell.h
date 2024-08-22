// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISHELFCOLLECTIONVIEWCELL_H
#define SKUISHELFCOLLECTIONVIEWCELL_H

@class UICollectionView, NSString;
@protocol SKUIPerspectiveView;


#import "SKUICollectionViewCell.h"

@interface SKUIShelfCollectionViewCell : SKUICollectionViewCell <SKUIPerspectiveView>



@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL rendersWithParallax; // ivar: _rendersWithParallax
@property (nonatomic) BOOL rendersWithPerspective; // ivar: _rendersWithPerspective
@property (readonly) Class superclass;


+(CGFloat)maximumPerspectiveHeightForSize:(struct CGSize )arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setPerspectiveTargetView:(id)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setVanishingPoint:(struct CGPoint )arg0 ;
-(void)updateForChangedDistanceFromVanishingPoint;


@end


#endif