// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCVEGACGCONTEXT_H
#define CCVEGACGCONTEXT_H

@class JSValue, NSString;
@protocol CCVegaCGContextInterface;

#import <Foundation/Foundation.h>

#import "CCVegaJSFont.h"
#import "CCVegaRenderer.h"

@interface CCVegaCGContext : NSObject <CCVegaCGContextInterface>

 {
    JSValue *_fillStyle;
    CGFloat _globalAlpha;
    NSString *_lineCap;
    NSString *_lineJoin;
    CGFloat _lineWidth;
    CGFloat _miterLimit;
    NSString *_strokeStyle;
    NSString *_textAlign;
    CGAffineTransform _currentTransform;
    CGFloat _lineDashOffset;
    NSString *_font;
    NSString *_globalCompositeOperation;
    *CGContext _bitmapContext;
    CGFloat _width;
    CGFloat _height;
    CCVegaJSFont *_internalFont;
}


@property (readonly) *CGContext context;
@property (retain) JSValue *fillStyle;
@property (retain) NSString *font;
@property CGFloat globalAlpha;
@property (retain) NSString *globalCompositeOperation;
@property CGFloat height;
@property (retain) NSString *lineCap;
@property CGFloat lineDashOffset;
@property (retain) NSString *lineJoin;
@property CGFloat lineWidth;
@property CGFloat miterLimit;
@property (nonatomic) CGFloat pixelRatio; // ivar: pixelRatio
@property (weak, nonatomic) CCVegaRenderer *renderer; // ivar: renderer
@property (retain) NSString *strokeStyle;
@property (retain) NSString *textAlign;
@property CGFloat width;


+(struct CGAffineTransform )flipYAxisWithHeight:(CGFloat)arg0 ;
-(BOOL)isPointInPathWithX:(CGFloat)arg0 y:(CGFloat)arg1 ;
-(id)createLinearGradientWithX0:(CGFloat)arg0 y0:(CGFloat)arg1 x1:(CGFloat)arg2 y1:(CGFloat)arg3 ;
-(id)init;
-(id)measureText:(id)arg0 ;
-(struct CGColor *)newColorFromString:(id)arg0 ;
-(void)arcWithX:(CGFloat)arg0 y:(CGFloat)arg1 radius:(CGFloat)arg2 startAngle:(CGFloat)arg3 endAngle:(CGFloat)arg4 anticlockwise:(BOOL)arg5 ;
-(void)beginPath;
-(void)bezierCurveToCP1x:(CGFloat)arg0 cp1y:(CGFloat)arg1 cp2x:(CGFloat)arg2 cp2y:(CGFloat)arg3 x:(CGFloat)arg4 y:(CGFloat)arg5 ;
-(void)clearRectWithX:(CGFloat)arg0 y:(CGFloat)arg1 w:(CGFloat)arg2 h:(CGFloat)arg3 ;
-(void)clip;
-(void)closePath;
-(void)dealloc;
-(void)fill;
-(void)fillRectWithX:(CGFloat)arg0 y:(CGFloat)arg1 width:(CGFloat)arg2 height:(CGFloat)arg3 ;
-(void)fillTextWithString:(id)arg0 x:(CGFloat)arg1 y:(CGFloat)arg2 ;
-(void)invalidateBitmapContext;
-(void)lineToX:(CGFloat)arg0 y:(CGFloat)arg1 ;
-(void)moveToX:(CGFloat)arg0 y:(CGFloat)arg1 ;
-(void)quadraticCurveToCP1x:(CGFloat)arg0 cp1y:(CGFloat)arg1 x:(CGFloat)arg2 y:(CGFloat)arg3 ;
-(void)rectWithX:(CGFloat)arg0 y:(CGFloat)arg1 width:(CGFloat)arg2 height:(CGFloat)arg3 ;
-(void)resizeBitmapContext;
-(void)restore;
-(void)rotateWithAngle:(CGFloat)arg0 ;
-(void)save;
-(void)setLineDashWithSegments:(id)arg0 ;
-(void)setTransformWithA:(CGFloat)arg0 b:(CGFloat)arg1 c:(CGFloat)arg2 d:(CGFloat)arg3 e:(CGFloat)arg4 f:(CGFloat)arg5 ;
-(void)stroke;
-(void)strokeTextWithString:(id)arg0 x:(CGFloat)arg1 y:(CGFloat)arg2 ;
-(void)textWithString:(id)arg0 x:(CGFloat)arg1 y:(CGFloat)arg2 drawingMode:(int)arg3 ;
-(void)translateWithX:(CGFloat)arg0 y:(CGFloat)arg1 ;


@end


#endif