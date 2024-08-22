// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCONNECTEDCIRCLECHECKMARKVIEW_H
#define PKCONNECTEDCIRCLECHECKMARKVIEW_H

@class UIView, UIImageView, UIColor;



@interface PKConnectedCircleCheckmarkView : UIView {
    UIImageView *_imageView;
    UIView *_backgroundView;
}


@property (readonly, nonatomic) UIColor *checkmarkBackgroundColor; // ivar: _checkmarkBackgroundColor
@property (readonly, nonatomic) UIColor *checkmarkTintColor; // ivar: _checkmarkTintColor


-(id)init;
-(id)initWithCheckmarkTintColor:(id)arg0 checkmarkBackgroundColor:(id)arg1 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif