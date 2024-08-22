// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMESCREENMATERIALVIEW_H
#define SBHOMESCREENMATERIALVIEW_H

@class UIView, UIImageView, UIImage;



@interface SBHomeScreenMaterialView : UIView {
    UIView *_whiteTintView;
    UIImageView *_xColorBurnView;
    UIImageView *_xPlusDView;
    UIView *_highlightView;
}


@property (nonatomic) UIEdgeInsets backgroundInsets; // ivar: _backgroundInsets
@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (nonatomic) CGFloat brightness;
@property (retain, nonatomic) UIImage *foregroundImage;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted


+(id)colorBurnContentImageForImage:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 backgroundView:(id)arg1 foregroundImage:(id)arg2 ;
-(void)_addHighlightViewIfNecessary;
-(void)layoutSubviews;
-(void)setLegibilityStyle:(NSInteger)arg0 ;


@end


#endif