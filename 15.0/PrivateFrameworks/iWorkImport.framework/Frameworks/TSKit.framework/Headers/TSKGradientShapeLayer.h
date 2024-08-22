// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKGRADIENTSHAPELAYER_H
#define TSKGRADIENTSHAPELAYER_H

@class CAShapeLayer, NSArray, CAGradientLayer, NSString;



@interface TSKGradientShapeLayer : CAShapeLayer

@property (copy) NSArray *colors;
@property CGPoint endPoint;
@property (retain, nonatomic) CAGradientLayer *gradient; // ivar: _gradient
@property (copy) NSArray *locations;
@property (retain, nonatomic) CAShapeLayer *shapeMask; // ivar: _shapeMask
@property CGPoint startPoint;
@property (copy) NSString *type;


-(BOOL)isGradientTree;
-(void)dealloc;
-(void)p_createGradientTreeIfNeeded;
-(void)p_flatten;
-(void)setDelegate:(id)arg0 ;
-(void)setFillColor:(struct CGColor *)arg0 ;
-(void)setFillRule:(id)arg0 ;
-(void)setLineCap:(id)arg0 ;
-(void)setLineDashPattern:(id)arg0 ;
-(void)setLineDashPhase:(CGFloat)arg0 ;
-(void)setLineJoin:(id)arg0 ;
-(void)setLineWidth:(CGFloat)arg0 ;
-(void)setMiterLimit:(CGFloat)arg0 ;
-(void)setPath:(struct CGPath *)arg0 ;
-(void)setStrokeColor:(struct CGColor *)arg0 ;
-(void)setStrokeEnd:(CGFloat)arg0 ;
-(void)setStrokeStart:(CGFloat)arg0 ;


@end


#endif