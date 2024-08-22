// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBPROTOTYPEBASICALERTELEMENTCOMPOUNDVIEW_H
#define _SBPROTOTYPEBASICALERTELEMENTCOMPOUNDVIEW_H

@class UIView, UIImageView, UIImage;



@interface _SBPrototypeBasicAlertElementCompoundView : UIView {
    UIImageView *_leadingImageView;
    UIImageView *_trailingImageView;
}


@property (nonatomic) NSUInteger layoutAxis; // ivar: _layoutAxis
@property (copy, nonatomic) UIImage *leadingImage;
@property (copy, nonatomic) UIImage *trailingImage;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif