// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCONNECTEDCIRCLEFLAGVIEW_H
#define PKCONNECTEDCIRCLEFLAGVIEW_H

@class UIView, UIImageView, UIColor;



@interface PKConnectedCircleFlagView : UIView {
    UIImageView *_imageView;
    UIView *_backgroundView;
}


@property (readonly, nonatomic) UIColor *flagBackgroundColor; // ivar: _flagBackgroundColor


-(id)init;
-(id)initWithFlagBackgroundColor:(id)arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif