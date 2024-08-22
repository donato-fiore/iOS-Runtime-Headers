// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INPAINTINGTILINGFILTER_H
#define INPAINTINGTILINGFILTER_H


#import <Foundation/Foundation.h>


@interface InpaintingTilingFilter : NSObject



+(BOOL)initializeBoundaryPreservingTile;
+(BOOL)isMaskNarrowDiagonal:(id)arg0 maskBoundingBox:(struct CGRect )arg1 expandedMaskBoundingBox:(struct CGRect )arg2 maxDiagonalMaskEdgeSize:(int)arg3 maxRelativeMaskAreaSize:(float)arg4 ;
+(BOOL)isMaskRelativeAreaTooLargeForTiling:(id)arg0 maskBoundingBox:(struct CGRect )arg1 expandedMaskBoundingBox:(struct CGRect )arg2 andMaxRelativeAreaSize:(CGFloat)arg3 ;
+(BOOL)isMaskSmallOrElongated:(id)arg0 maskBoundingBox:(struct CGRect )arg1 expandedMaskBoundingBox:(struct CGRect )arg2 maxElogatedMaskEdgeSize:(int)arg3 ;
+(CGFloat)computeDistanceMultiplierForMask:(id)arg0 andTileSize:(int)arg1 ;
+(id)computeTileCentersForNarrowDiagonalMask:(id)arg0 tileSize:(int)arg1 maxBaseDistanceBetweenPoints:(int)arg2 maxRelativeMaskAreaSize:(float)arg3 ;
+(id)performInpaintingTilingPipelineOnImage:(id)arg0 usingMask:(id)arg1 boundingBox:(struct CGRect )arg2 additionalParameters:(id)arg3 espressoResources:(id)arg4 executionContext:(id)arg5 ;
+(void)computeTileSize:(*int)arg0 andMaxDistanceBetweenTiles:(*CGFloat)arg1 forExpandedMaskBBox:(struct CGRect )arg2 ;


@end


#endif