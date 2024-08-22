// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPALETTETOOLSHADOWPATHVIEW_H
#define PKPALETTETOOLSHADOWPATHVIEW_H

@class UIView, CALayer, UIBezierPath;



@interface PKPaletteToolShadowPathView : UIView {
    CALayer *_largeShadow;
    CALayer *_smallShadow;
}


@property (readonly, nonatomic) UIBezierPath *toolAndTipShadowPath;
@property (readonly, nonatomic) UIBezierPath *toolShadowPath;


+(id)createPaletteToolShadowPathViewWithIdentifier:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;


@end


#endif