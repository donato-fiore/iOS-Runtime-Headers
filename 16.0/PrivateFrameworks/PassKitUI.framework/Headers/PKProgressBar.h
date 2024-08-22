// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPROGRESSBAR_H
#define PKPROGRESSBAR_H

@class UIView, CAGradientLayer, UIColor;



@interface PKProgressBar : UIView {
    CAGradientLayer *_fillLayer;
    UIColor *_originalStartColor;
    UIColor *_originalEndColor;
}


@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (retain, nonatomic) UIColor *gradientEndColor;
@property (retain, nonatomic) UIColor *gradientStartColor;
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (nonatomic) BOOL roundEndCap; // ivar: _roundEndCap


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateLayerColors;
-(void)layoutSubviews;


@end


#endif