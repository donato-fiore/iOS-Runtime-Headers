// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSTROKEUTILITIES_H
#define CHSTROKEUTILITIES_H


#import <Foundation/Foundation.h>


@interface CHStrokeUtilities : NSObject



+(?)convexHullForPoints;
+(?)convexHullForStroke;
+(?)enlargedConvexHullwithMargin;
+(?)regularizedPathFromPoints:(?)arg0 delta:(?)arg1 gammaoutError;
+(BOOL)isPointEnumerationSupportedForStroke:(id)arg0 ;
+(CGFloat)arcLengthForStroke:(id)arg0 ;
+(CGFloat)circumferenceRatioOfCircleFittedToPoints:(*void)arg0 circleCenter:(struct CGPoint *)arg1 circleRadius:(*CGFloat)arg2 ;
+(CGFloat)distanceFromPoint:(struct CGPoint )arg0 toRectangle:(struct CGRect )arg1 ;
+(CGFloat)distanceFromPoint:(struct CGPoint )arg0 toSegmentFromPoint:(struct CGPoint )arg1 toPoint:(struct CGPoint )arg2 ;
+(CGFloat)durationOfStrokesInStrokeGroup:(id)arg0 strokeProvider:(id)arg1 ;
+(CGFloat)lineOrientationForStrokePoints:(*void)arg0 error:(*CGFloat)arg1 ;
+(CGFloat)speedForFinalTimeRange:(CGFloat)arg0 stroke:(id)arg1 ;
+(CGFloat)threePointsOrientationWithOrigin:(struct CGPoint )arg0 pointA:(struct CGPoint )arg1 pointB:(struct CGPoint )arg2 ;
+(CGFloat)vectorMeanWithoutOutliers:(*void)arg0 ;
+(id)encodedStrokeIdentifiers:(id)arg0 withStrokeProvider:(id)arg1 ;
+(id)strokeForIdentifier:(id)arg0 inStrokeProvider:(id)arg1 ;
+(id)strokeIdentifiersForData:(id)arg0 withStrokeProvider:(id)arg1 ;
+(struct CGRect )boundingBoxOfPoints:(*void)arg0 rotatedAroundPoint:(struct CGPoint )arg1 byAngle:(CGFloat)arg2 ;
+(struct CGRect )unionStrokeBounds:(*void)arg0 aroundXPosition:(CGFloat)arg1 usingOneSideStrokeCountLimit:(NSInteger)arg2 ;
+(struct CGRect )unionStrokeBounds:(*void)arg0 usingStrokeCountLimit:(NSInteger)arg1 reverseOrder:(BOOL)arg2 ;
+(struct vector<CGPoint, std::allocator<CGPoint>> )convexHullForStrokes:(id)arg0 inDrawing:(id)arg1 ;
+(void)enumeratePointsForStroke:(id)arg0 interpolationType:(NSInteger)arg1 resolution:(NSInteger)arg2 usingBlock:(id)arg3 ;
+(void)getAddedStrokes:(*id)arg0 removedStrokeIdentifiers:(*id)arg1 inStrokeProvider:(id)arg2 lastGroupingResult:(id)arg3 ;


@end


#endif