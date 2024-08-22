// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHDRAWING_H
#define CHDRAWING_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHDrawing : NSObject <NSCopying, NSSecureCoding>

 {
    CHDrawingStrokes _drawing;
}


@property ? drawing;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDrawing:(id)arg0 ;
-(BOOL)isPrefixForDrawing:(id)arg0 ;
-(CGFloat)averageCharacterHeightEstimation:(CGFloat)arg0 minChunkHeight:(CGFloat)arg1 ;
-(CGFloat)endTimeForStroke:(NSUInteger)arg0 ;
-(CGFloat)startTimeForStroke:(NSUInteger)arg0 ;
-(NSUInteger)pointCountForStrokeIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)drawingByRemovingUnnaturalHorizontalGaps:(CGFloat)arg0 ;
-(id)drawingScaledByFactor:(CGFloat)arg0 ;
-(id)drawingSpatiallyResampled:(CGFloat)arg0 maxPointsPerStroke:(NSInteger)arg1 ;
-(id)drawingSpatiallyResampled:(CGFloat)arg0 outputPointMap:(*void)arg1 ;
-(id)drawingTransformedWithTranslation:(struct CGVector )arg0 scaleFactor:(CGFloat)arg1 ;
-(id)drawingWithStrokesFromIndexArray:(id)arg0 ;
-(id)drawingWithStrokesFromIndexSet:(id)arg0 ;
-(id)indexesOfStrokesSmallerThanSize:(struct CGSize )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithContentsOfJSONDictionary:(id)arg0 ;
-(id)initWithContentsOfXYString:(id)arg0 ;
-(id)jsonRepresentationWithContext:(id)arg0 ;
-(id)newDrawingWithAffineTransform:(struct CGAffineTransform )arg0 ;
-(id)newDrawingWithTransform:(id)arg0 ;
-(id)sortedDrawingUsingStrokeMidPoint:(*id)arg0 ;
-(struct CGPoint )centroidForStrokeIndexes:(id)arg0 ;
-(struct CGPoint )pointForStrokeIndex:(NSUInteger)arg0 pointIndex:(NSUInteger)arg1 ;
-(struct CGRect )boundingBoxForDrawingSegmentFromCutPoint:(id)arg0 toCutPoint:(id)arg1 ;
-(struct CGRect )boundsForStrokeIndex:(NSUInteger)arg0 ;
-(struct CGRect )boundsForStrokeIndexes:(id)arg0 ;
-(struct CGRect )strokeBoundsAtIndex:(NSUInteger)arg0 ;
-(struct Matrix<float> )bitmapRepresentationForSize:(struct CGSize )arg0 ;
-(struct Matrix<float> )orientationRepresentationForSampling:(NSUInteger)arg0 convolutionWidth:(NSUInteger)arg1 ;
-(struct _NSRange )matchingStrokePrefixRangeForDrawing:(id)arg0 ;
-(void)addEndTime:(CGFloat)arg0 ;
-(void)addPoint:(struct CGPoint )arg0 ;
-(void)addStartTime:(CGFloat)arg0 ;
-(void)appendDrawing:(id)arg0 ;
-(void)appendSegment:(id)arg0 fromDrawing:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeToFileWithContext:(id)arg0 folder:(id)arg1 basename:(id)arg2 ;


@end


#endif