// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIGRIDVIEWGRADIENTDECORATIONVIEW_H
#define SKUIGRIDVIEWGRADIENTDECORATIONVIEW_H

@class UICollectionReusableView, IKColor, UIView;



@interface SKUIGridViewGradientDecorationView : UICollectionReusableView {
    IKColor *_kolor;
}


@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_createGradient:(id)arg0 withGradientType:(NSInteger)arg1 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif