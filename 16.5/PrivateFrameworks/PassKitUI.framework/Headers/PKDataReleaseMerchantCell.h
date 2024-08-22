// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDATARELEASEMERCHANTCELL_H
#define PKDATARELEASEMERCHANTCELL_H

@class UITableViewHeaderFooterView, UILabel, UIImageView, UIView, NSString;



@interface PKDataReleaseMerchantCell : UITableViewHeaderFooterView {
    UILabel *_titleLabel;
    BOOL _isTemplateLayout;
    UIImageView *_imageView;
    UIView *_imageBackgroundView;
    BOOL _strokeImage;
}


@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL useShadows; // ivar: _useShadows


-(id)initWithReuseIdentifier:(id)arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_setupImageView;
-(void)_updateImageViewDynamicColors;
-(void)layoutSubviews;
-(void)setImage:(id)arg0 animated:(BOOL)arg1 ;
-(void)setStrokeImage:(BOOL)arg0 ;


@end


#endif