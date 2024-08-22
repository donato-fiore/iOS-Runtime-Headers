// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUBEZIERPATH_H
#define TSUBEZIERPATH_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSUBezierPath : NSObject <NSCopying>

 {
    NSInteger sfr_elementCount;
    NSInteger sfr_elementMax;
    *PATHSEGMENT sfr_head;
    *CGFloat sfr_elementLength;
    CGFloat sfr_totalLength;
    NSInteger sfr_lastSubpathIndex;
    *void sfr_extraSegments;
    CGFloat sfr_lineWidth;
    CGRect sfr_bounds;
    CGRect sfr_controlPointBounds;
    CGFloat sfr_miterLimit;
    CGFloat sfr_flatness;
    *CGFloat sfr_dashedLinePattern;
    NSUInteger sfr_dashedLineCount;
    CGFloat sfr_dashedLinePhase;
    *CGPath sfr_path;
    NSInteger sfr_extraSegmentCount;
    NSInteger sfr_extraSegmentMax;
    ? sfr_bpFlags;
}


@property (readonly, nonatomic) CGRect bounds;
@property (readonly, nonatomic) BOOL containsClosePathElement;
@property (nonatomic) CGFloat flatness;
@property (nonatomic) NSUInteger lineCapStyle;
@property (nonatomic) NSUInteger lineJoinStyle;
@property (nonatomic) CGFloat lineWidth;
@property (nonatomic) CGFloat miterLimit;
@property (nonatomic) NSInteger windingRule;


+(CGFloat)defaultFlatness;
+(CGFloat)defaultLineWidth;
+(CGFloat)defaultMiterLimit;
+(CGFloat)minimumLengthForSideToHaveFullContinuityWithCornerRadius1:(CGFloat)arg0 cornerRadius2:(CGFloat)arg1 ;
+(NSInteger)defaultWindingRule;
+(NSUInteger)defaultLineCapStyle;
+(NSUInteger)defaultLineJoinStyle;
+(id)bezierPath;
+(id)bezierPathWithCGPath:(struct CGPath *)arg0 ;
+(id)bezierPathWithContinuousCornerRoundedRect:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 ;
+(id)bezierPathWithDefaultsForErrorCases;
+(id)bezierPathWithLegacyRoundedRect:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 ;
+(id)bezierPathWithOvalInRect:(struct CGRect )arg0 ;
+(id)bezierPathWithRect:(struct CGRect )arg0 ;
+(id)bezierPathWithRoundedRect:(struct CGRect )arg0 upperRightRadius:(CGFloat)arg1 lowerRightRadius:(CGFloat)arg2 lowerLeftRadius:(CGFloat)arg3 upperLeftRadius:(CGFloat)arg4 useLegacyCorners:(BOOL)arg5 keepNoOpElements:(BOOL)arg6 ;
+(id)bezierPathWithStart:(struct CGPoint )arg0 end:(struct CGPoint )arg1 ;
+(void)clipRect:(struct CGRect )arg0 ;
+(void)fillRect:(struct CGRect )arg0 ;
+(void)initialize;
+(void)setDefaultFlatness:(CGFloat)arg0 ;
+(void)setDefaultLineCapStyle:(NSUInteger)arg0 ;
+(void)setDefaultLineJoinStyle:(NSUInteger)arg0 ;
+(void)setDefaultLineWidth:(CGFloat)arg0 ;
+(void)setDefaultMiterLimit:(CGFloat)arg0 ;
+(void)setDefaultWindingRule:(NSInteger)arg0 ;
+(void)strokeLineFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 ;
+(void)strokeRect:(struct CGRect )arg0 ;
-(BOOL)_isValid:(CGFloat)arg0 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)isCircular;
-(BOOL)isClockwise;
-(BOOL)isDiamond;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFlat;
-(BOOL)isRectangular;
-(BOOL)isTriangular;
-(CGFloat)calculateLengthOfElement:(NSInteger)arg0 ;
-(CGFloat)length;
-(CGFloat)lengthOfElement:(NSInteger)arg0 ;
-(CGFloat)lengthToElement:(NSInteger)arg0 ;
-(NSInteger)elementAtIndex:(NSInteger)arg0 ;
-(NSInteger)elementAtIndex:(NSInteger)arg0 allPoints:(struct CGPoint *)arg1 ;
-(NSInteger)elementAtIndex:(NSInteger)arg0 associatedPoints:(struct CGPoint *)arg1 ;
-(NSInteger)elementCount;
-(NSUInteger)hash;
-(char *)cString;
-(id)_copyFlattenedPath;
-(id)bezierPathByFlatteningPath;
-(id)bezierPathByFlatteningPathWithFlatness:(CGFloat)arg0 ;
-(id)bezierPathByRemovingRedundantElements;
-(id)bezierPathByRemovingSmallSubpathsForInteriorWrapsForInset:(CGFloat)arg0 ;
-(id)bezierPathByReversingPath;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCString:(char *)arg0 ;
-(id)p_bezierPathByRemovingRedundantElementAndSubregionsSmallerThanThreshold:(CGFloat)arg0 ;
-(struct CGPath *)CGPath;
-(struct CGPoint )_checkPointForValidity:(struct CGPoint )arg0 ;
-(struct CGPoint )currentPoint;
-(struct CGRect )controlPointBounds;
-(void)_addPathSegment:(NSInteger)arg0 point:(struct CGPoint )arg1 ;
-(void)_appendArcSegmentWithCenter:(struct CGPoint )arg0 radius:(CGFloat)arg1 angle1:(CGFloat)arg2 angle2:(CGFloat)arg3 ;
-(void)_appendToPath:(id)arg0 skippingInitialMoveIfPossible:(BOOL)arg1 ;
-(void)_deviceClosePath;
-(void)_deviceCurveToPoint:(struct CGPoint )arg0 controlPoint1:(struct CGPoint )arg1 controlPoint2:(struct CGPoint )arg2 ;
-(void)_deviceLineToPoint:(struct CGPoint )arg0 ;
-(void)_deviceMoveToPoint:(struct CGPoint )arg0 ;
-(void)_doPath;
-(void)addClip;
-(void)appendBezierPath:(id)arg0 ;
-(void)appendBezierPath:(id)arg0 skippingInitialMoveIfPossible:(BOOL)arg1 ;
-(void)appendBezierPathWithArcFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 radius:(CGFloat)arg2 ;
-(void)appendBezierPathWithArcWithCenter:(struct CGPoint )arg0 radius:(CGFloat)arg1 startAngle:(CGFloat)arg2 endAngle:(CGFloat)arg3 ;
-(void)appendBezierPathWithArcWithCenter:(struct CGPoint )arg0 radius:(CGFloat)arg1 startAngle:(CGFloat)arg2 endAngle:(CGFloat)arg3 clockwise:(BOOL)arg4 ;
-(void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect )arg0 startAngle:(CGFloat)arg1 swingAngle:(CGFloat)arg2 angleType:(int)arg3 startNewPath:(BOOL)arg4 ;
-(void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect )arg0 startRadialVector:(struct CGPoint )arg1 endRadialVector:(struct CGPoint )arg2 angleSign:(int)arg3 startNewPath:(BOOL)arg4 ;
-(void)appendBezierPathWithOvalInRect:(struct CGRect )arg0 ;
-(void)appendBezierPathWithPoints:(struct CGPoint *)arg0 count:(NSInteger)arg1 ;
-(void)appendBezierPathWithRect:(struct CGRect )arg0 ;
-(void)calculateLengths;
-(void)closePath;
-(void)convertCloseElementsToLineElements;
-(void)copyPathAttributesTo:(id)arg0 ;
-(void)curveToPoint:(struct CGPoint )arg0 controlPoint1:(struct CGPoint )arg1 controlPoint2:(struct CGPoint )arg2 ;
-(void)curveToPoint:(struct CGPoint )arg0 controlPoint:(struct CGPoint )arg1 ;
-(void)dealloc;
-(void)fill;
-(void)flattenIntoPath:(id)arg0 ;
-(void)flattenIntoPath:(id)arg0 flatness:(CGFloat)arg1 ;
-(void)getLineDash:(*CGFloat)arg0 count:(*NSInteger)arg1 phase:(*CGFloat)arg2 ;
-(void)lineToPoint:(struct CGPoint )arg0 ;
-(void)moveToPoint:(struct CGPoint )arg0 ;
-(void)relativeCurveToPoint:(struct CGPoint )arg0 controlPoint1:(struct CGPoint )arg1 controlPoint2:(struct CGPoint )arg2 ;
-(void)relativeCurveToPoint:(struct CGPoint )arg0 controlPoint:(struct CGPoint )arg1 ;
-(void)relativeLineToPoint:(struct CGPoint )arg0 ;
-(void)relativeMoveToPoint:(struct CGPoint )arg0 ;
-(void)removeAllPoints;
-(void)setAssociatedPoints:(struct CGPoint *)arg0 atIndex:(NSInteger)arg1 ;
-(void)setLineDash:(*CGFloat)arg0 count:(NSInteger)arg1 phase:(CGFloat)arg2 ;
-(void)stroke;
-(void)subdivideBezierWithFlatness:(CGFloat)arg0 startPoint:(struct CGPoint )arg1 controlPoint1:(struct CGPoint )arg2 controlPoint2:(struct CGPoint )arg3 endPoint:(struct CGPoint )arg4 ;
-(void)transformUsingAffineTransform:(struct CGAffineTransform )arg0 ;


@end


#endif