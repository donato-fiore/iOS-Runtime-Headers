// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLSHEETMASKLAYER_H
#define SLSHEETMASKLAYER_H

@class CALayer, UIColor;


#import "_SLSheetMaskLayer.h"

@interface SLSheetMasklayer : CALayer {
    CALayer *_topLayer;
    CALayer *_leftLayer;
    CALayer *_bottomLayer;
    CALayer *_rightLayer;
    _SLSheetMaskLayer *_sheetMaskLayer;
    CALayer *_solidSheetMaskLayer;
    UIColor *_backgroundColor;
    CGRect _lastBounds;
    CGRect _lastMaskRect;
}


@property (retain, nonatomic) UIColor *clipBackgroundColor; // ivar: _clipBackgroundColor
@property (nonatomic) CGFloat clipCornerRadius; // ivar: _clipCornerRadius


-(id)initWithBackgroundColor:(id)arg0 cornerRadius:(CGFloat)arg1 ;
-(void)animateSheetMaskFromOldSheetFrame:(struct CGRect )arg0 toSheetFrame:(struct CGRect )arg1 duration:(CGFloat)arg2 ;
-(void)removeAllAnimations;
-(void)removeSheetCutout;
-(void)restoreSheetCutout;
-(void)updateMaskWithBounds:(struct CGRect )arg0 maskRect:(struct CGRect )arg1 ;


@end


#endif