// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKGEOMETRYHELPER_H
#define AKGEOMETRYHELPER_H


#import <Foundation/Foundation.h>

#import "AKPageController.h"

@interface AKGeometryHelper : NSObject

@property (weak) AKPageController *pageController; // ivar: _pageController


+(BOOL)annotationHasRotation:(id)arg0 outAngle:(*CGFloat)arg1 ;
+(BOOL)exifOrientationHasFlip:(NSInteger)arg0 ;
+(BOOL)exifOrientationHasReversedAxes:(NSInteger)arg0 ;
+(BOOL)isPoint:(struct CGPoint )arg0 onEllipse:(struct CGRect )arg1 ;
+(BOOL)isPointOnLeft:(struct CGPoint )arg0 ofRayWithFirstPoint:(struct CGPoint )arg1 andSecondPoint:(struct CGPoint )arg2 ;
+(BOOL)isUnpresentablePoint:(struct CGPoint )arg0 ;
+(BOOL)isUnpresentableRect:(struct CGRect )arg0 ;
+(BOOL)isUnpresentableSize:(struct CGSize )arg0 ;
+(BOOL)rectHasZeroSize:(struct CGRect )arg0 ;
+(CGFloat)angleBetweenPoint:(struct CGPoint )arg0 andPoint:(struct CGPoint )arg1 ;
+(CGFloat)angleOfVector:(struct CGVector )arg0 ;
+(CGFloat)distanceBetweenPoints:(struct CGPoint )arg0 andPoint:(struct CGPoint )arg1 ;
+(CGFloat)lengthOfVector:(struct CGVector )arg0 ;
+(CGFloat)radiusOfCenteredCircleFor:(struct CGRect )arg0 ;
+(CGFloat)scaleOfTransform:(struct CGAffineTransform )arg0 ;
+(NSInteger)concatExifOrientation:(NSInteger)arg0 withExifOrientation:(NSInteger)arg1 ;
+(NSInteger)exifOrientationWithConversionBlock:(id)arg0 ;
+(NSInteger)inverseExifOrientation:(NSInteger)arg0 ;
+(NSUInteger)draggableArea:(NSUInteger)arg0 convertedForExif:(NSInteger)arg1 ;
+(id)_cornersOfRotatedRectangle:(struct CGRect )arg0 angle:(CGFloat)arg1 ;
+(id)verticesOfPolygonWithPointCount:(NSUInteger)arg0 inRect:(struct CGRect )arg1 rotation:(CGFloat)arg2 flippedVertically:(BOOL)arg3 ;
+(struct CGAffineTransform )_rawAffineTransformForExifOrientation:(NSInteger)arg0 ;
+(struct CGAffineTransform )affineTransformFlatteningOriginalModelExif:(NSInteger)arg0 withOriginalModelSize:(struct CGSize )arg1 ;
+(struct CGAffineTransform )affineTransformForExifOrientation:(NSInteger)arg0 aboutCenter:(struct CGPoint )arg1 ;
+(struct CGAffineTransform )affineTransformRecenteringAboutOriginForExifOrientation:(NSInteger)arg0 withOriginalSize:(struct CGSize )arg1 ;
+(struct CGAffineTransform )centeredCircleToEllipseTransform:(struct CGRect )arg0 ;
+(struct CGAffineTransform )ellipseToCenteredCircleTransform:(struct CGRect )arg0 ;
+(struct CGAffineTransform )horizontalFlipTransformForRect:(struct CGRect )arg0 ;
+(struct CGAffineTransform )rotationTransformAroundPoint:(struct CGPoint )arg0 withAngle:(CGFloat)arg1 ;
+(struct CGAffineTransform )rotationTransformForRect:(struct CGRect )arg0 withAngle:(CGFloat)arg1 ;
+(struct CGAffineTransform )rotationTransformForRectangularAnnotation:(id)arg0 hasRotation:(*BOOL)arg1 ;
+(struct CGAffineTransform )verticalFlipTransformForRect:(struct CGRect )arg0 ;
+(struct CGPath *)newPathWithPath:(struct CGPath *)arg0 applyingExifOrientation:(NSInteger)arg1 aboutCenter:(struct CGPoint )arg2 ;
+(struct CGPoint )_alignedPointForPoint:(struct CGPoint )arg0 alignToContent:(BOOL)arg1 alignToScreenUsingPageController:(id)arg2 orAlignToBitmapContext:(struct CGContext *)arg3 usingAnnotation:(id)arg4 ;
+(struct CGPoint )_farthestPointFrom:(struct CGPoint )arg0 inArray:(id)arg1 ;
+(struct CGPoint )adjustPoint:(struct CGPoint )arg0 forExifOrientation:(NSInteger)arg1 aboutCenter:(struct CGPoint )arg2 ;
+(struct CGPoint )centerOfRect:(struct CGRect )arg0 ;
+(struct CGPoint )compareVectorDirectionsFirstVector:(struct CGPoint )arg0 secondVector:(struct CGPoint )arg1 ;
+(struct CGPoint )convertModelToScreenOrientationForPoint:(struct CGPoint )arg0 relativeToRect:(struct CGRect )arg1 withPageController:(id)arg2 ;
+(struct CGPoint )convertScreenToModelOrientationForPoint:(struct CGPoint )arg0 relativeToRect:(struct CGRect )arg1 withPageController:(id)arg2 ;
+(struct CGPoint )flipPointVertically:(struct CGPoint )arg0 inRect:(struct CGRect )arg1 ;
+(struct CGPoint )intersectLineSegmentStartingAt:(struct CGPoint )arg0 ending:(struct CGPoint )arg1 withAnotherSegmentStartingAt:(struct CGPoint )arg2 ending:(struct CGPoint )arg3 ;
+(struct CGPoint )intersectLineSegmentStartingAt:(struct CGPoint )arg0 ending:(struct CGPoint )arg1 withCircleWithCenter:(struct CGPoint )arg2 andRadius:(CGFloat)arg3 farthestResult:(BOOL)arg4 ;
+(struct CGPoint )intersectLineSegmentStartingAt:(struct CGPoint )arg0 ending:(struct CGPoint )arg1 withEllipseOfRect:(struct CGRect )arg2 farthestResult:(BOOL)arg3 ;
+(struct CGPoint )intersectLineSegmentStartingAt:(struct CGPoint )arg0 ending:(struct CGPoint )arg1 withRect:(struct CGRect )arg2 andRoundedCornerRadius:(CGFloat)arg3 ;
+(struct CGPoint )intersectRayStartingAt:(struct CGPoint )arg0 ending:(struct CGPoint )arg1 withCircleWithCenter:(struct CGPoint )arg2 andRadius:(CGFloat)arg3 farthestResult:(BOOL)arg4 ;
+(struct CGPoint )intersectRayStartingAt:(struct CGPoint )arg0 ending:(struct CGPoint )arg1 withEllipseOfRect:(struct CGRect )arg2 farthestResult:(BOOL)arg3 ;
+(struct CGPoint )normalizeVectorPoint:(struct CGPoint )arg0 ;
+(struct CGPoint )pointAtAngle:(CGFloat)arg0 inCircleWithCenter:(struct CGPoint )arg1 andRadius:(CGFloat)arg2 ;
+(struct CGPoint )projectPoint:(struct CGPoint )arg0 ontoRayWithFirstPoint:(struct CGPoint )arg1 andSecondPoint:(struct CGPoint )arg2 ;
+(struct CGPoint )projectVector:(struct CGPoint )arg0 ontoAspectVector:(struct CGPoint )arg1 ;
+(struct CGPoint )snapVector:(struct CGPoint )arg0 toDiagonalForAspectRatio:(CGFloat)arg1 ignoreWidth:(BOOL)arg2 ignoreHeight:(BOOL)arg3 ;
+(struct CGPoint )snapVectorTo45Degrees:(struct CGPoint )arg0 ;
+(struct CGPoint )tangentOfEllipse:(struct CGRect )arg0 throughRayWithFirstPoint:(struct CGPoint )arg1 goingThrough:(struct CGPoint )arg2 ;
+(struct CGRect )_alignedStableRectForRect:(struct CGRect )arg0 alignToContent:(BOOL)arg1 alignToScreenUsingPageController:(id)arg2 orAlignToBitmapContext:(struct CGContext *)arg3 usingAnnotation:(id)arg4 ;
+(struct CGRect )_rectForRect:(struct CGRect )arg0 alignToContent:(BOOL)arg1 alignToScreenUsingPageController:(id)arg2 orAlignToBitmapContext:(struct CGContext *)arg3 usingAnnotation:(id)arg4 withAlignmentBlock:(id)arg5 ;
+(struct CGRect )_strokeAlignedRectForRect:(struct CGRect )arg0 withStrokeWidth:(CGFloat)arg1 shouldAlignStrictlyToScreen:(BOOL)arg2 alignToScreenUsingPageController:(id)arg3 orAlignToBitmapContext:(struct CGContext *)arg4 usingAnnotation:(id)arg5 ;
+(struct CGRect )adjustRect:(struct CGRect )arg0 forExifOrientation:(NSInteger)arg1 aboutCenter:(struct CGPoint )arg2 ;
+(struct CGRect )boundsOfRotatedRectangle:(struct CGRect )arg0 angle:(CGFloat)arg1 ;
+(struct CGRect )constrainRect:(struct CGRect )arg0 withinRect:(struct CGRect )arg1 ;
+(struct CGRect )convertModelToScreenOrientationForRect:(struct CGRect )arg0 withPageController:(id)arg1 ;
+(struct CGRect )convertRect:(struct CGRect )arg0 fromScreenPointsToView:(id)arg1 ;
+(struct CGRect )convertRect:(struct CGRect )arg0 fromViewToScreenPixels:(id)arg1 useNativeScale:(BOOL)arg2 ;
+(struct CGRect )convertScreenToModelOrientationForRect:(struct CGRect )arg0 withPageController:(id)arg1 ;
+(struct CGRect )effectiveDrawingBoundsForAnnotation:(id)arg0 forDisplay:(BOOL)arg1 pageControllerOrNil:(id)arg2 outScaleFactor:(*CGFloat)arg3 ;
+(struct CGRect )expandCGRect:(struct CGRect )arg0 toContainPoint:(struct CGPoint )arg1 ;
+(struct CGRect )integralRect:(struct CGRect )arg0 withOptions:(NSUInteger)arg1 ;
+(struct CGRect )rectForSize:(struct CGSize )arg0 inRect:(struct CGRect )arg1 ;
+(struct CGRect )rectWithSize:(struct CGSize )arg0 centeredAtPoint:(struct CGPoint )arg1 ;
+(struct CGRect )renderingAlignedTextRectForRect:(struct CGRect )arg0 alignToScreenUsingPageController:(id)arg1 orAlignToContext:(struct CGContext *)arg2 usingAnnotation:(id)arg3 ;
+(struct CGRect )renderingStrokeAlignedRectForRect:(struct CGRect )arg0 withStrokeWidth:(CGFloat)arg1 alignToScreenUsingPageController:(id)arg2 orAlignToContext:(struct CGContext *)arg3 usingAnnotation:(id)arg4 ;
+(struct CGRect )stableIntegralRectForRect:(struct CGRect )arg0 ;
+(struct CGVector )normalizeVector:(struct CGVector )arg0 ;
+(void)_checkIntersectionOfLineSegmentStartingAt:(struct CGPoint )arg0 endingAt:(struct CGPoint )arg1 withCircleAt:(struct CGPoint )arg2 andRadius:(CGFloat)arg3 results:(id)arg4 ;
+(void)_collectIntersectionsOfLineSegmentStartingAt:(struct CGPoint )arg0 endingAt:(struct CGPoint )arg1 withCornerCirclesOfRoundedRect:(struct CGRect )arg2 withRadius:(CGFloat)arg3 results:(id)arg4 ;
+(void)adjustOriginalExifOrientationOnAnnotation:(id)arg0 flatteningOriginalModelExif:(NSInteger)arg1 ;
+(void)intersectCircleAtPoint:(struct CGPoint )arg0 withRadius:(CGFloat)arg1 withCircleAtPoint:(struct CGPoint )arg2 withRadius:(CGFloat)arg3 firstOutPoint:(struct CGPoint *)arg4 secondOutPoint:(struct CGPoint *)arg5 ;
+(void)tangentPointsToEllipse:(struct CGRect )arg0 fromPoint:(struct CGPoint )arg1 firstOutPoint:(struct CGPoint *)arg2 secondOutPoint:(struct CGPoint *)arg3 ;
-(BOOL)_shouldAlignToContent;
-(BOOL)_shouldAlignToScreen;
-(id)_rootLayer;
-(id)initWithPageController:(id)arg0 ;
-(struct CGPoint )contentAlignedPointForPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromModelToLayer:(id)arg1 ;
-(struct CGPoint )screenPixelAlignedPointForPoint:(struct CGPoint )arg0 ;
-(struct CGRect )_clippingFrameForView:(id)arg0 ;
-(struct CGRect )_smartAlignedRectForRect:(struct CGRect )arg0 ;
-(struct CGRect )adornmentLayerFrameForAnnotation:(id)arg0 ;
-(struct CGRect )annotationLayerFrameForAnnotation:(id)arg0 layerIsClipped:(*BOOL)arg1 ;
-(struct CGRect )contentAlignedRectForRect:(struct CGRect )arg0 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromModelToLayer:(id)arg1 ;
-(struct CGRect )screenPixelAlignedRectForRect:(struct CGRect )arg0 ;
-(struct CGRect )screenStrokeAlignedRectForRect:(struct CGRect )arg0 withStrokeWidth:(CGFloat)arg1 ;


@end


#endif