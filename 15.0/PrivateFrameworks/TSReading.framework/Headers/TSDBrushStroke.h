// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDBRUSHSTROKE_H
#define TSDBRUSHSTROKE_H



#import "TSDSmartStroke.h"

@interface TSDBrushStroke : TSDSmartStroke



+(BOOL)brushStrokeUsesMetal;
+(Class)mutableClass;
+(id)p_metalShaderQueue;
+(id)p_metalTextureQueue;
+(void)p_drawColor:(id)arg0 intoContext:(struct CGContext *)arg1 usingImageAsMask:(struct CGImage *)arg2 withRect:(struct CGRect )arg3 ;
-(BOOL)canApplyToShapeRenderable;
-(BOOL)drawsInOneStep;
-(BOOL)needsToExtendJoinsForBoundsCalculation;
-(BOOL)p_isDrawingRasterizedIntoPDFWithContext:(struct CGContext *)arg0 ;
-(BOOL)p_isFreehandDrawingStrokeWithFixedTileWidth;
-(BOOL)p_prefersRasterRenderingInContext:(struct CGContext *)arg0 ;
-(BOOL)p_shouldDrawAsVectorInContext:(struct CGContext *)arg0 ;
-(BOOL)prefersToApplyToShapeRenderableDuringManipulation;
-(BOOL)supportsPattern;
-(CGFloat)horizontalMarginForSwatch;
-(CGFloat)lineEndInsetAdjustment;
-(CGFloat)suggestedMinimumLineWidth;
-(NSInteger)p_fastElementPercentage:(*CGFloat)arg0 forOverallPercentage:(CGFloat)arg1 onPath:(id)arg2 withCachedCurrentElementPercentage:(struct ? *)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArchive:(struct StrokeArchive *)arg0 unarchiver:(id)arg1 ;
-(id)initWithName:(id)arg0 color:(id)arg1 width:(CGFloat)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(CGFloat)arg6 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)p_metalBrushShaderForPixelFormat:(NSUInteger)arg0 andDevice:(id)arg1 ;
-(id)p_metalOpacityShaderForPixelFormat:(NSUInteger)arg0 andDevice:(id)arg1 ;
-(id)p_metalTextureForCurrentStrokeAndDevice:(id)arg0 ;
-(id)strokeLineEnd:(id)arg0 ;
-(int)cap;
-(void)i_setCap:(int)arg0 ;
-(void)p_brushPath:(id)arg0 withScaling:(struct ? )arg1 inElementRange:(struct _NSRange )arg2 intoPath:(id)arg3 orIntoVector:(*void)arg4 sectionIndex:(*NSUInteger)arg5 viewScale:(CGFloat)arg6 withLayoutOptions:(id)arg7 currentSubpathIndex:(NSUInteger)arg8 cachedCurrentElementPercentage:(struct ? *)arg9 ;
-(void)p_brushPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 orDirectly:(id)arg2 parameterized:(BOOL)arg3 drawRasterized:(BOOL)arg4 shouldReverseDrawOrder:(BOOL)arg5 withLayoutOptions:(id)arg6 ;
-(void)p_brushSection:(id)arg0 sectionIndex:(NSUInteger)arg1 ontoPath:(id)arg2 inElementRange:(struct _NSRange )arg3 intoPath:(id)arg4 orIntoVector:(*void)arg5 viewScale:(CGFloat)arg6 strokeTileLayout:(struct ? )arg7 cachedCurrentElementPercentage:(struct ? *)arg8 ;
-(void)p_finishMetalRenderInContext:(struct CGContext *)arg0 orDirectly:(id)arg1 pathVertexData:(*void)arg2 parameterized:(BOOL)arg3 shouldReverseDrawOrder:(BOOL)arg4 withLayoutOptions:(id)arg5 ;
-(void)p_rasterBrushPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 orDirectly:(id)arg2 parameterized:(BOOL)arg3 shouldReverseDrawOrder:(BOOL)arg4 withLayoutOptions:(id)arg5 ;
-(void)p_rasterRenderSection:(id)arg0 sectionIndex:(NSUInteger)arg1 ontoPath:(id)arg2 inElementRange:(struct _NSRange )arg3 into:(*void)arg4 viewScale:(CGFloat)arg5 strokeTileLayout:(struct ? )arg6 cachedCurrentElementPercentage:(struct ? *)arg7 ;
-(void)paintLineEnd:(id)arg0 atPoint:(struct CGPoint )arg1 atAngle:(CGFloat)arg2 withScale:(CGFloat)arg3 inContext:(struct CGContext *)arg4 useFastDrawing:(BOOL)arg5 ;
-(void)paintPath:(struct CGPath *)arg0 directlyUsingContext:(id)arg1 withLayoutOptions:(id)arg2 ;
-(void)paintPath:(struct CGPath *)arg0 wantsInteriorStroke:(BOOL)arg1 inContext:(struct CGContext *)arg2 useFastDrawing:(BOOL)arg3 parameterized:(BOOL)arg4 shouldReverseDrawOrder:(BOOL)arg5 ;
-(void)paintPath:(struct CGPath *)arg0 wantsInteriorStroke:(BOOL)arg1 inContext:(struct CGContext *)arg2 useFastDrawing:(BOOL)arg3 parameterized:(BOOL)arg4 shouldReverseDrawOrder:(BOOL)arg5 withLayoutOptions:(id)arg6 ;


@end


#endif