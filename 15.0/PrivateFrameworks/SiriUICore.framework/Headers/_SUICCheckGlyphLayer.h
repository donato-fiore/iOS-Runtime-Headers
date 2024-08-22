// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SUICCHECKGLYPHLAYER_H
#define _SUICCHECKGLYPHLAYER_H

@class CALayer, CAShapeLayer, CAGradientLayer, UIColor;



@interface _SUICCheckGlyphLayer : CALayer {
    CAShapeLayer *_checkPackageLayer;
    CAGradientLayer *_maskLayer;
    BOOL _covered;
    CATransform3D _uncoveredTransform;
    CATransform3D _coveredTransform;
}


@property (copy, nonatomic) UIColor *primaryColor; // ivar: _primaryColor
@property (nonatomic, getter=isRevealed) BOOL revealed;


-(CGFloat)_pointScaleToMatchBoundsSize:(struct CGSize )arg0 ;
-(CGFloat)_updateCovered:(BOOL)arg0 completion:(id)arg1 ;
-(CGFloat)setCovered:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_createMask;
-(void)layoutSublayers;


@end


#endif