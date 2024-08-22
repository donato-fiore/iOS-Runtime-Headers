// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKPKDRAWING_H
#define TSKPKDRAWING_H

@class NSArray, CHRecognizer, PKDrawing, NSCache;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSKPKDrawing : NSObject <NSCopying>



@property (nonatomic) CGPoint cachedAverageUnscaledPoint; // ivar: _cachedAverageUnscaledPoint
@property (nonatomic) CGRect cachedRenderedFrame; // ivar: _cachedRenderedFrame
@property (nonatomic) CGRect cachedStrokePointsFrame; // ivar: _cachedStrokePointsFrame
@property (retain, nonatomic) NSArray *cachedStrokes; // ivar: _cachedStrokes
@property (readonly, nonatomic) CGSize estimatedExcessPaddingOnIncorrectUnscaledFastFrame;
@property (readonly, nonatomic) CGRect incorrectUnscaledFastFrame;
@property (retain, nonatomic) CHRecognizer *lineRecognizer; // ivar: _lineRecognizer
@property (readonly, nonatomic) CGFloat pencilAnnotationDrawingScale; // ivar: _pencilAnnotationDrawingScale
@property (retain, nonatomic) PKDrawing *pencilKitDrawing; // ivar: _pencilKitDrawing
@property (readonly, nonatomic) CGRect renderedFrame;
@property (readonly, nonatomic) CGRect strokePointsFrame;
@property (readonly, nonatomic) NSArray *strokes;
@property (retain, nonatomic) NSCache *subDrawingCache; // ivar: _subDrawingCache
@property (retain, nonatomic) CHRecognizer *textRecognizer; // ivar: _textRecognizer
@property (readonly, nonatomic) CGRect unscaledRenderedFrame;
@property (readonly, nonatomic) CGRect unscaledStrokePointsFrame;


+(id)copyAndAddStroke:(id)arg0 transform:(struct CGAffineTransform )arg1 intoDrawing:(id)arg2 ;
+(id)copyPKDrawing:(id)arg0 ;
+(id)copyPKDrawing:(id)arg0 withTransform:(struct CGAffineTransform )arg1 ;
+(id)p_strokesForPencilKitDrawing:(id)arg0 ;
+(struct UIEdgeInsets )transparencyInsetsForCGImage:(struct CGImage *)arg0 ;
+(void)initialize;
-(BOOL)hasLargeBracketAnchorStroke;
-(BOOL)hasLargeVerticalLineAnchorStroke;
-(BOOL)isCircle;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHorizontalLine;
-(BOOL)isLine;
-(BOOL)isLinePerpendicularToTextWithVerticalTextLayout:(BOOL)arg0 ;
-(BOOL)isMarginBracket;
-(BOOL)isRectangle;
-(BOOL)isText:(id)arg0 ;
-(BOOL)isVerticalLine;
-(BOOL)isXMark;
-(CGFloat)endTimestamp;
-(NSInteger)toolTypeForFirstStroke;
-(id)CHDrawing;
-(id)anchorBaseColor;
-(id)copyAndAddStroke:(id)arg0 ;
-(id)copyAndAddStroke:(id)arg0 transform:(struct CGAffineTransform )arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)drawingByCroppingToClipRect:(struct CGRect )arg0 ;
-(id)drawingByFilteringStrokesWithFilter:(id)arg0 ;
-(id)drawingByScaling:(struct CGSize )arg0 ;
-(id)drawingByScaling:(struct CGSize )arg0 andMovingByDelta:(struct CGPoint )arg1 ;
-(id)drawingByScaling:(struct CGSize )arg0 andMovingByDelta:(struct CGPoint )arg1 andCroppingToClipRect:(struct CGRect )arg2 ;
-(id)drawingContainingStrokesMatchingBlock:(id)arg0 ;
-(id)drawingTransformedWith:(struct CGAffineTransform )arg0 ;
-(id)firstStrokeByTime;
-(id)initWithData:(id)arg0 cachedRenderedFrame:(struct CGRect )arg1 cachedStrokePointsFrame:(struct CGRect )arg2 pencilAnnotationDrawingScale:(CGFloat)arg3 ;
-(id)initWithData:(id)arg0 pencilAnnotationDrawingScale:(CGFloat)arg1 ;
-(id)initWithPKDrawing:(id)arg0 cachedRenderedFrame:(struct CGRect )arg1 cachedStrokePointsFrame:(struct CGRect )arg2 pencilAnnotationDrawingScale:(CGFloat)arg3 ;
-(id)initWithPKDrawing:(id)arg0 pencilAnnotationDrawingScale:(CGFloat)arg1 ;
-(id)initWithPencilAnnotationDrawingScale:(CGFloat)arg0 ;
-(id)initWithStrokes:(id)arg0 ;
-(id)p_drawingByCroppingToClipRect:(struct CGRect )arg0 ;
-(id)p_drawingByTransformingByDeltaPosition:(struct CGPoint )arg0 ;
-(id)p_paragraphAnnotationAnchorComponentsPassingFilterBlock:(id)arg0 ;
-(id)p_subDrawingCacheKeyForScale:(struct CGSize )arg0 movedToDelta:(struct CGPoint )arg1 cropRect:(struct CGRect )arg2 ;
-(id)p_subDrawingFromCacheAtScale:(struct CGSize )arg0 movedToDelta:(struct CGPoint )arg1 cropRect:(struct CGRect )arg2 ;
-(id)renderImageWithContentsScale:(CGFloat)arg0 ;
-(id)renderImageWithContentsScale:(CGFloat)arg0 drawingScale:(CGFloat)arg1 ;
-(id)renderImageWithContentsScale:(CGFloat)arg0 drawingScale:(CGFloat)arg1 drawingFrame:(struct CGRect )arg2 ;
-(id)strokesOrderedByCoordinateComparator:(id)arg0 ;
-(struct CGPoint )averageUnscaledPoint;
-(struct CGRect )convertStrokeToUnscaledCanvasRect:(struct CGRect )arg0 ;
-(struct CGRect )convertUnscaledCanvasToStrokeRect:(struct CGRect )arg0 ;
-(struct CGRect )p_incorrectPencilCoordinatesFastFrame;
-(struct CGSize )scaleForPointsBasedOnRenderingScale:(struct CGSize )arg0 ;
-(void)addSubStrokeFromStroke:(id)arg0 fromStartIndex:(NSUInteger)arg1 toEndIndex:(NSUInteger)arg2 andAdjustStart:(BOOL)arg3 andAdjustEnd:(BOOL)arg4 toEdgesOfRect:(struct CGRect )arg5 ;
-(void)copyAndAddStrokes:(id)arg0 ;
-(void)p_clearSubDrawingCache;
-(void)p_saveSubDrawingToCache:(id)arg0 atScale:(struct CGSize )arg1 movedToDelta:(struct CGPoint )arg2 cropRect:(struct CGRect )arg3 ;


@end


#endif