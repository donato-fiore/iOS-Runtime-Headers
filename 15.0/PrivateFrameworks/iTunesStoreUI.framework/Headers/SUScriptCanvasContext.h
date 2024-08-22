// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTCANVASCONTEXT_H
#define SUSCRIPTCANVASCONTEXT_H

@class NSString;


#import "SUScriptObject.h"
#import "SUScriptColor.h"

@interface SUScriptCanvasContext : SUScriptObject {
    *CGContext _context;
    *CGPath _contextPath;
    id *_fillStyle;
    NSInteger _fillStyleType;
    CGFloat _height;
    CGFloat _scale;
    CGFloat _shadowBlur;
    SUScriptColor *_shadowColor;
    CGFloat _shadowOffsetX;
    CGFloat _shadowOffsetY;
    id *_strokeStyle;
    NSInteger _strokeStyleType;
    CGFloat _width;
}


@property (retain) id *fillStyle;
@property CGFloat globalAlpha;
@property (retain) NSString *globalCompositeOperation;
@property (readonly) CGFloat height;
@property (retain) id *lineCap;
@property (retain) id *lineJoin;
@property CGFloat lineWidth;
@property CGFloat miterLimit;
@property CGFloat shadowBlur;
@property (retain) id *shadowColor;
@property CGFloat shadowOffsetX;
@property CGFloat shadowOffsetY;
@property (retain) id *strokeStyle;
@property (readonly) CGFloat width;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(BOOL)isPointInPathWithX:(CGFloat)arg0 y:(CGFloat)arg1 ;
-(id)_className;
-(id)attributeKeys;
-(id)copyCanvasImage;
-(id)initWithWidth:(CGFloat)arg0 height:(CGFloat)arg1 ;
-(id)makeLinearGradientWithX0:(CGFloat)arg0 y0:(CGFloat)arg1 x1:(CGFloat)arg2 y1:(CGFloat)arg3 ;
-(id)makeRadialGradientWithX0:(CGFloat)arg0 y0:(CGFloat)arg1 r0:(CGFloat)arg2 x1:(CGFloat)arg3 y1:(CGFloat)arg4 r1:(CGFloat)arg5 ;
-(id)scriptAttributeKeys;
-(struct CGPath *)copyCanvasPath;
-(void)_ntsApplyShadow;
-(void)arcToX1:(CGFloat)arg0 y1:(CGFloat)arg1 x2:(CGFloat)arg2 y2:(CGFloat)arg3 radius:(CGFloat)arg4 ;
-(void)arcWithX:(CGFloat)arg0 y:(CGFloat)arg1 radius:(CGFloat)arg2 startAngle:(CGFloat)arg3 endAngle:(CGFloat)arg4 antiClockwise:(BOOL)arg5 ;
-(void)beginPath;
-(void)bezierCurveToCP1X:(CGFloat)arg0 cp1y:(CGFloat)arg1 cp2x:(CGFloat)arg2 cp2y:(CGFloat)arg3 x:(CGFloat)arg4 y:(CGFloat)arg5 ;
-(void)clearRectWithX:(CGFloat)arg0 y:(CGFloat)arg1 width:(CGFloat)arg2 height:(CGFloat)arg3 ;
-(void)clip;
-(void)closePath;
-(void)dealloc;
-(void)fill;
-(void)fillRectWithX:(CGFloat)arg0 y:(CGFloat)arg1 width:(CGFloat)arg2 height:(CGFloat)arg3 ;
-(void)lineToX:(CGFloat)arg0 y:(CGFloat)arg1 ;
-(void)moveToX:(CGFloat)arg0 y:(CGFloat)arg1 ;
-(void)quadraticCurveToCPX:(CGFloat)arg0 cpy:(CGFloat)arg1 x:(CGFloat)arg2 y:(CGFloat)arg3 ;
-(void)restoreState;
-(void)rotateWithAngle:(CGFloat)arg0 ;
-(void)saveState;
-(void)scaleWithX:(CGFloat)arg0 y:(CGFloat)arg1 ;
-(void)setTransformWithM11:(CGFloat)arg0 m12:(CGFloat)arg1 m21:(CGFloat)arg2 m22:(CGFloat)arg3 dx:(CGFloat)arg4 dy:(CGFloat)arg5 ;
-(void)stroke;
-(void)strokeRectWithX:(CGFloat)arg0 y:(CGFloat)arg1 width:(CGFloat)arg2 height:(CGFloat)arg3 ;
-(void)transformWithM11:(CGFloat)arg0 m12:(CGFloat)arg1 m21:(CGFloat)arg2 m22:(CGFloat)arg3 dx:(CGFloat)arg4 dy:(CGFloat)arg5 ;
-(void)translateWithX:(CGFloat)arg0 y:(CGFloat)arg1 ;


@end


#endif