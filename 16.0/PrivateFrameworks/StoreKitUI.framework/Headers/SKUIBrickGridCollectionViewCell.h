// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIBRICKGRIDCOLLECTIONVIEWCELL_H
#define SKUIBRICKGRIDCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView, UIView, NSString, UIImage;


#import "SKUIEditorialCellLayout.h"

@interface SKUIBrickGridCollectionViewCell : UICollectionViewCell {
    UIImageView *_brickImageView;
    SKUIEditorialCellLayout *_editorialCellLayout;
    UIView *_editorialContainerView;
}


@property (copy, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (retain, nonatomic) UIImage *brickImage;
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets


-(void)applyEditorialLayout:(id)arg0 orientation:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setColoringWithColorScheme:(id)arg0 ;


@end


#endif