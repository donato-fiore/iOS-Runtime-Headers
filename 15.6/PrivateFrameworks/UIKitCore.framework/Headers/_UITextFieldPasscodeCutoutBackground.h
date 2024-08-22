// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTFIELDPASSCODECUTOUTBACKGROUND_H
#define _UITEXTFIELDPASSCODECUTOUTBACKGROUND_H

@class CAShapeLayer;


#import "UITextFieldBackgroundView.h"
#import "UIBezierPath.h"

@interface _UITextFieldPasscodeCutoutBackground : UITextFieldBackgroundView {
    BOOL _hasCustomStrokeColor;
    BOOL _hasCustomFillColor;
    CAShapeLayer *_lighteningOutline;
    CGFloat _outlineAlpha;
}


@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) UIBezierPath *customPath;
@property (nonatomic) CGFloat outlineAlpha;


+(Class)layerClass;
+(id)_fillColor:(BOOL)arg0 ;
+(id)_strokeColor:(BOOL)arg0 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(CGFloat)_pathInset;
-(CGFloat)lineWidth;
-(id)_fillColor:(BOOL)arg0 ;
-(id)_shapeLayer;
-(id)_strokeColor:(BOOL)arg0 ;
-(id)fillColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 active:(BOOL)arg1 ;
-(id)strokeColor;
-(void)_updateLightingOutlinePath;
-(void)_updatePath;
-(void)setActive:(BOOL)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setFillColor:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setLineWidth:(CGFloat)arg0 ;
-(void)setLineWidth:(CGFloat)arg0 updatePath:(BOOL)arg1 ;
-(void)setStrokeColor:(id)arg0 ;


@end


#endif