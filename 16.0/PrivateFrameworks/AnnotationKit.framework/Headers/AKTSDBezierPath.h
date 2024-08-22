// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKTSDBEZIERPATH_H
#define AKTSDBEZIERPATH_H

@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface AKTSDBezierPath : NSObject <NSCopying, NSCoding>

 {
    NSInteger sfr_elementCount;
    NSInteger sfr_elementMax;
    *PATHSEGMENT sfr_head;
    *CGFloat sfr_elementLength;
    CGFloat sfr_totalLength;
    NSInteger sfr_lastSubpathIndex;
    *void sfr_extraSegments;
    CGFloat sfr_lineWidth;
    CGRect sfr_controlPointBounds;
    CGFloat sfr_miterLimit;
    CGFloat sfr_flatness;
    *CGFloat sfr_dashedLinePattern;
    NSUInteger sfr_dashedLineCount;
    CGFloat sfr_dashedLinePhase;
    *void sfr_path;
    NSInteger sfr_extraSegmentCount;
    NSInteger sfr_extraSegmentMax;
    ? sfr_bpFlags;
}




+(CGFloat)defaultFlatness;
+(CGFloat)defaultLineWidth;
+(CGFloat)defaultMiterLimit;
+(CGFloat)flatness;
+(CGFloat)lineWidth;
+(CGFloat)miterLimit;
+(NSUInteger)defaultLineCapStyle;
+(NSUInteger)defaultLineJoinStyle;
+(NSUInteger)defaultWindingRule;
+(NSUInteger)lineCapStyle;
+(NSUInteger)lineJoinStyle;
+(NSUInteger)windingRule;
+(id)bezierPath;
+(id)bezierPathWithCGPath:(struct CGPath *)arg0 ;
+(id)bezierPathWithOvalInRect:(struct CGRect )arg0 ;
+(id)bezierPathWithRect:(struct CGRect )arg0 ;
+(id)bezierPathWithRoundedRect:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 ;
+(id)bezierPathWithStart:(struct CGPoint )arg0 end:(struct CGPoint )arg1 ;
+(void)clipRect:(struct CGRect )arg0 ;
+(void)fillRect:(struct CGRect )arg0 ;
+(void)initialize;
+(void)setDefaultFlatness:(CGFloat)arg0 ;
+(void)setDefaultLineCapStyle:(NSUInteger)arg0 ;
+(void)setDefaultLineJoinStyle:(NSUInteger)arg0 ;
+(void)setDefaultLineWidth:(CGFloat)arg0 ;
+(void)setDefaultMiterLimit:(CGFloat)arg0 ;
+(void)setDefaultWindingRule:(NSUInteger)arg0 ;
+(void)setFlatness:(CGFloat)arg0 ;
+(void)setLineCapStyle:(NSUInteger)arg0 ;
+(void)setLineJoinStyle:(NSUInteger)arg0 ;
+(void)setLineWidth:(CGFloat)arg0 ;
+(void)setMiterLimit:(CGFloat)arg0 ;
+(void)setWindingRule:(NSUInteger)arg0 ;
+(void)strokeLineFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 ;
+(void)strokeRect:(struct CGRect )arg0 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)isClockwise;
-(BOOL)isEmpty;
-(BOOL)isFlat;
-(CGFloat)calculateLengthOfElement:(NSInteger)arg0 ;
-(CGFloat)curvatureAt:(CGFloat)arg0 fromElement:(int)arg1 ;
-(CGFloat)flatness;
-(CGFloat)length;
-(CGFloat)lengthOfElement:(NSInteger)arg0 ;
-(CGFloat)lengthToElement:(NSInteger)arg0 ;
-(CGFloat)lineWidth;
-(CGFloat)miterLimit;
-(NSInteger)elementCount;
-(NSInteger)elementPercentage:(*float)arg0 forOverallPercentage:(float)arg1 ;
-(NSUInteger)elementAtIndex:(NSInteger)arg0 ;
-(NSUInteger)elementAtIndex:(NSInteger)arg0 allPoints:(struct CGPoint *)arg1 ;
-(NSUInteger)elementAtIndex:(NSInteger)arg0 associatedPoints:(struct CGPoint *)arg1 ;
-(NSUInteger)lineCapStyle;
-(NSUInteger)lineJoinStyle;
-(NSUInteger)windingRule;
-(char *)cString;
-(float)curvatureAt:(float)arg0 ;
-(float)elementPercentageFromElement:(int)arg0 forOverallPercentage:(float)arg1 ;
-(id)_copyFlattenedPath;
-(id)bezierPathByFlatteningPath;
-(id)bezierPathByReversingPath;
-(id)chisel;
-(id)copyFromSegment:(int)arg0 t:(float)arg1 toSegment:(int)arg2 t:(float)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCString:(char *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)pressure;
-(struct CGPath *)CGPath;
-(struct CGPoint )currentPoint;
-(struct CGPoint )gradientAt:(CGFloat)arg0 fromElement:(NSInteger)arg1 ;
-(struct CGPoint )gradientAt:(float)arg0 ;
-(struct CGPoint )myGradientAt:(float)arg0 ;
-(struct CGPoint )myGradientAt:(float)arg0 fromElement:(NSInteger)arg1 ;
-(struct CGPoint )nearestAngleOnPathToLine:(struct CGPoint )arg0 ;
-(struct CGPoint )nearestPointOnPathToLine:(struct CGPoint )arg0 ;
-(struct CGPoint )pointAt:(CGFloat)arg0 fromElement:(NSInteger)arg1 ;
-(struct CGPoint )rawGradientAt:(float)arg0 fromElement:(NSInteger)arg1 ;
-(struct CGPoint )transformedCoordinate:(struct CGPoint )arg0 withPressure:(id)arg1 ;
-(struct CGPoint )transformedTotalCoordinate:(struct CGPoint )arg0 betweenElement:(NSInteger)arg1 andElement:(NSInteger)arg2 withPressure:(id)arg3 getElement:(*NSInteger)arg4 getPercentage:(*float)arg5 ;
-(struct CGPoint )transformedTotalCoordinate:(struct CGPoint )arg0 inElement:(NSInteger)arg1 withPressure:(id)arg2 ;
-(struct CGRect )bounds;
-(struct CGRect )controlPointBounds;
-(void)_addPathSegment:(NSInteger)arg0 point:(struct CGPoint )arg1 ;
-(void)_appendArcSegmentWithCenter:(struct CGPoint )arg0 radius:(CGFloat)arg1 angle1:(CGFloat)arg2 angle2:(CGFloat)arg3 ;
-(void)_appendToPath:(id)arg0 ;
-(void)_deviceClosePath;
-(void)_deviceCurveToPoint:(struct CGPoint )arg0 controlPoint1:(struct CGPoint )arg1 controlPoint2:(struct CGPoint )arg2 ;
-(void)_deviceLineToPoint:(struct CGPoint )arg0 ;
-(void)_deviceMoveToPoint:(struct CGPoint )arg0 ;
-(void)_doPath;
-(void)addClip;
-(void)addIntersectionsWithLine:(struct CGPoint )arg0 to:(id)arg1 ;
-(void)addIntersectionsWithPath:(id)arg0 to:(id)arg1 ;
-(void)addIntersectionsWithPath:(id)arg0 to:(id)arg1 allIntersections:(BOOL)arg2 reversed:(BOOL)arg3 ;
-(void)appendBezierPath:(id)arg0 ;
-(void)appendBezierPath:(id)arg0 fromSegment:(NSInteger)arg1 t:(CGFloat)arg2 toSegment:(NSInteger)arg3 t:(CGFloat)arg4 withoutMove:(BOOL)arg5 ;
-(void)appendBezierPath:(id)arg0 fromSegment:(NSInteger)arg1 toSegment:(NSInteger)arg2 ;
-(void)appendBezierPathWithArcFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 radius:(CGFloat)arg2 ;
-(void)appendBezierPathWithArcWithCenter:(struct CGPoint )arg0 radius:(CGFloat)arg1 startAngle:(CGFloat)arg2 endAngle:(CGFloat)arg3 ;
-(void)appendBezierPathWithArcWithCenter:(struct CGPoint )arg0 radius:(CGFloat)arg1 startAngle:(CGFloat)arg2 endAngle:(CGFloat)arg3 clockwise:(BOOL)arg4 ;
-(void)appendBezierPathWithOvalInRect:(struct CGRect )arg0 ;
-(void)appendBezierPathWithPoints:(struct CGPoint *)arg0 count:(NSInteger)arg1 ;
-(void)appendBezierPathWithRect:(struct CGRect )arg0 ;
-(void)calculateLengths;
-(void)closePath;
-(void)curveToPoint:(struct CGPoint )arg0 controlPoint1:(struct CGPoint )arg1 controlPoint2:(struct CGPoint )arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fill;
-(void)flattenIntoPath:(id)arg0 ;
-(void)getLineDash:(*CGFloat)arg0 count:(*NSInteger)arg1 phase:(*CGFloat)arg2 ;
-(void)getStartPoint:(struct CGPoint *)arg0 andEndPoint:(struct CGPoint *)arg1 ;
-(void)lineToPoint:(struct CGPoint )arg0 ;
-(void)moveToPoint:(struct CGPoint )arg0 ;
-(void)recursiveSubdivideOntoPath:(id)arg0 into:(id)arg1 ;
-(void)recursiveSubdivideOntoPath:(id)arg0 withScaling:(struct ? )arg1 inElementRange:(struct _NSRange )arg2 into:(id)arg3 ;
-(void)recursiveSubdivideOntoPath:(id)arg0 withScaling:(struct ? )arg1 into:(id)arg2 ;
-(void)relativeCurveToPoint:(struct CGPoint )arg0 controlPoint1:(struct CGPoint )arg1 controlPoint2:(struct CGPoint )arg2 ;
-(void)relativeLineToPoint:(struct CGPoint )arg0 ;
-(void)relativeMoveToPoint:(struct CGPoint )arg0 ;
-(void)removeAllPoints;
-(void)setAssociatedPoints:(struct CGPoint *)arg0 atIndex:(NSInteger)arg1 ;
-(void)setFlatness:(CGFloat)arg0 ;
-(void)setLineCapStyle:(NSUInteger)arg0 ;
-(void)setLineDash:(*CGFloat)arg0 count:(NSInteger)arg1 phase:(CGFloat)arg2 ;
-(void)setLineJoinStyle:(NSUInteger)arg0 ;
-(void)setLineWidth:(CGFloat)arg0 ;
-(void)setMiterLimit:(CGFloat)arg0 ;
-(void)setWindingRule:(NSUInteger)arg0 ;
-(void)stroke;
-(void)subdivideBezierWithFlatness:(CGFloat)arg0 startPoint:(struct CGPoint )arg1 controlPoint1:(struct CGPoint )arg2 controlPoint2:(struct CGPoint )arg3 endPoint:(struct CGPoint )arg4 ;
-(void)transformUsingAffineTransform:(struct CGAffineTransform )arg0 ;


@end


#endif