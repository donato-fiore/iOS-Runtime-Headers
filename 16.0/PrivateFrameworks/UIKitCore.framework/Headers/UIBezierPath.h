// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIBEZIERPATH_H
#define UIBEZIERPATH_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UIBezierPath : NSObject <NSCopying, NSSecureCoding>

 {
    *CGPath _path;
    *CGFloat _lineDashPattern;
    NSUInteger _lineDashPatternCount;
    CGFloat _lineDashPhase;
    *CGPath _immutablePath;
    BOOL _immutablePathIsValid;
    BOOL _isRoundedRect;
    CGFloat _cornerRadius;
    BOOL _hasContinuousCorners;
    NSUInteger _cornerMask;
}


@property (nonatomic) *CGPath CGPath;
@property (readonly, nonatomic) CGRect bounds;
@property (readonly, nonatomic) CGPoint currentPoint;
@property (readonly, getter=isEmpty) BOOL empty;
@property (nonatomic) CGFloat flatness; // ivar: _flatness
@property (nonatomic) int lineCapStyle; // ivar: _lineCapStyle
@property (nonatomic) int lineJoinStyle; // ivar: _lineJoinStyle
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (nonatomic) CGFloat miterLimit; // ivar: _miterLimit
@property (nonatomic) BOOL usesEvenOddFillRule; // ivar: _usesEvenOddFillRule


+(BOOL)supportsSecureCoding;
+(id)_bezierPathWithArcRoundedRect:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 ;
+(id)_bezierPathWithPillRect:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 ;
+(id)_bezierPathWithRoundedRect:(struct CGRect )arg0 byRoundingCorners:(NSUInteger)arg1 cornerRadius:(CGFloat)arg2 ;
+(id)_continuousRoundedRectBezierPath:(struct CGRect )arg0 withRoundedCorners:(NSUInteger)arg1 cornerRadii:(id)arg2 segments:(int)arg3 smoothPillShapes:(BOOL)arg4 ;
+(id)_continuousRoundedRectBezierPath:(struct CGRect )arg0 withRoundedCorners:(NSUInteger)arg1 cornerRadius:(struct CGSize )arg2 segments:(int)arg3 ;
+(id)_roundedRectBezierPath:(struct CGRect )arg0 withRoundedCorners:(NSUInteger)arg1 cornerRadius:(CGFloat)arg2 segments:(int)arg3 ;
+(id)_roundedRectBezierPath:(struct CGRect )arg0 withRoundedCorners:(NSUInteger)arg1 cornerRadius:(CGFloat)arg2 segments:(int)arg3 legacyCorners:(BOOL)arg4 ;
+(id)bezierPath;
+(id)bezierPathWithArcCenter:(struct CGPoint )arg0 radius:(CGFloat)arg1 startAngle:(CGFloat)arg2 endAngle:(CGFloat)arg3 clockwise:(BOOL)arg4 ;
+(id)bezierPathWithCGPath:(struct CGPath *)arg0 ;
+(id)bezierPathWithOvalInRect:(struct CGRect )arg0 ;
+(id)bezierPathWithRect:(struct CGRect )arg0 ;
+(id)bezierPathWithRoundedRect:(struct CGRect )arg0 byRoundingCorners:(NSUInteger)arg1 cornerRadii:(struct CGSize )arg2 ;
+(id)bezierPathWithRoundedRect:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 ;
+(id)roundedRectBezierPath:(struct CGRect )arg0 withRoundedCorners:(NSUInteger)arg1 withCornerRadii:(id)arg2 ;
+(id)roundedRectBezierPath:(struct CGRect )arg0 withRoundedCorners:(NSUInteger)arg1 withCornerRadius:(CGFloat)arg2 ;
+(id)roundedRectBezierPath:(struct CGRect )arg0 withRoundedEdges:(NSUInteger)arg1 ;
+(id)roundedRectBezierPath:(struct CGRect )arg0 withTopCornerRadius:(CGFloat)arg1 withBottomCornerRadius:(CGFloat)arg2 ;
+(id)shadowBezierPath:(struct CGRect )arg0 withRoundedEdges:(NSUInteger)arg1 ;
-(BOOL)_hasContinuousCorners;
-(BOOL)_isRoundedRect;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_cornerRadius;
-(NSUInteger)_cornerMask;
-(id)_bezierPathConvertedFromCoordinateSpace:(id)arg0 toCoordinateSpace:(id)arg1 ;
-(id)_initWithCGMutablePath:(struct CGPath *)arg0 ;
-(id)_objcCodeDescription;
-(id)bezierPathByReversingPath;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct CGPath *)_createMutablePathByDecodingData:(id)arg0 ;
-(struct CGPath *)_mutablePath;
-(struct CGPath *)_pathRef;
-(void)_addRoundedCornerWithTrueCorner:(struct CGPoint )arg0 radius:(struct CGSize )arg1 corner:(NSUInteger)arg2 clockwise:(BOOL)arg3 ;
-(void)_addRoundedCornerWithTrueCorner:(struct CGPoint )arg0 radius:(struct CGSize )arg1 corner:(NSUInteger)arg2 clockwise:(BOOL)arg3 leadInIsContinuous:(BOOL)arg4 leadOutIsContinuous:(BOOL)arg5 ;
-(void)_invalidatePathMetadata;
-(void)addArcWithCenter:(struct CGPoint )arg0 radius:(CGFloat)arg1 startAngle:(CGFloat)arg2 endAngle:(CGFloat)arg3 clockwise:(BOOL)arg4 ;
-(void)addClip;
-(void)addCurveToPoint:(struct CGPoint )arg0 controlPoint1:(struct CGPoint )arg1 controlPoint2:(struct CGPoint )arg2 ;
-(void)addLineToPoint:(struct CGPoint )arg0 ;
-(void)addQuadCurveToPoint:(struct CGPoint )arg0 controlPoint:(struct CGPoint )arg1 ;
-(void)appendBezierPath:(id)arg0 ;
-(void)appendBezierPathWithArcWithCenter:(struct CGPoint )arg0 radius:(CGFloat)arg1 startAngle:(CGFloat)arg2 endAngle:(CGFloat)arg3 clockwise:(BOOL)arg4 ;
-(void)appendBezierPathWithOvalInRect:(struct CGRect )arg0 ;
-(void)appendBezierPathWithOvalInRect:(struct CGRect )arg0 transform:(struct CGAffineTransform )arg1 ;
-(void)appendBezierPathWithRect:(struct CGRect )arg0 ;
-(void)appendPath:(id)arg0 ;
-(void)applyTransform:(struct CGAffineTransform )arg0 ;
-(void)clip;
-(void)closePath;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fill;
-(void)fillWithBlendMode:(int)arg0 alpha:(CGFloat)arg1 ;
-(void)getLineDash:(*CGFloat)arg0 count:(*NSInteger)arg1 phase:(*CGFloat)arg2 ;
-(void)lineToPoint:(struct CGPoint )arg0 ;
-(void)moveToPoint:(struct CGPoint )arg0 ;
-(void)removeAllPoints;
-(void)setLineDash:(*CGFloat)arg0 count:(NSInteger)arg1 phase:(CGFloat)arg2 ;
-(void)stroke;
-(void)strokeWithBlendMode:(int)arg0 alpha:(CGFloat)arg1 ;


@end


#endif