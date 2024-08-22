// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNFREGSHADOWVIEW_H
#define CNFREGSHADOWVIEW_H

@class UIView, UIBezierPath, UIImage;



@interface CNFRegShadowView : UIView

@property (nonatomic) CGRect cachedBounds; // ivar: _cachedBounds
@property (retain, nonatomic) UIBezierPath *cachedPath; // ivar: _cachedPath
@property (retain, nonatomic) UIImage *shadowImage; // ivar: _shadowImage


-(id)initWithFrame:(struct CGRect )arg0 shadowImage:(id)arg1 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif