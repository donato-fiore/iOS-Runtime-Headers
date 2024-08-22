// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERICONCELL_H
#define PKPAYLATERICONCELL_H

@class UIView, UIImage;


#import "PKDashboardCollectionViewCell.h"

@interface PKPayLaterIconCell : PKDashboardCollectionViewCell {
    UIView *_view;
    UIImage *_icon;
    UIView *_imageView;
}


@property (nonatomic) BOOL appearInactive; // ivar: _appearInactive
@property (nonatomic) BOOL hasCircleBorder; // ivar: _hasCircleBorder
@property (nonatomic) CGFloat minimumHeight; // ivar: _minimumHeight


-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyInactiveAppearance;
-(void)_setupImageView;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setIcon:(id)arg0 animated:(BOOL)arg1 ;
-(void)setIconDate:(id)arg0 animated:(BOOL)arg1 ;
-(void)setView:(id)arg0 ;


@end


#endif