// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTLAYOUTSPACE_H
#define TSTLAYOUTSPACE_H


#import <Foundation/Foundation.h>

#import "TSTLayoutSpaceBezierPathCache.h"
#import "TSTCoordinateArray.h"
#import "TSTLayoutSpaceBundle.h"
#import "TSTLayout.h"
#import "TSTLayoutEngine.h"

@interface TSTLayoutSpace : NSObject {
    _opaque_pthread_rwlock_t mLock;
}


@property (readonly, nonatomic) CGRect alignedStrokeFrameForTableNameBorder;
@property (retain, nonatomic) TSTLayoutSpaceBezierPathCache *bezierPathCache; // ivar: _bezierPathCache
@property (retain, nonatomic) TSTCoordinateArray *bodyColumnCoordinates; // ivar: _bodyColumnCoordinates
@property (retain, nonatomic) TSTCoordinateArray *bodyRowCoordinates; // ivar: _bodyRowCoordinates
@property (readonly, weak, nonatomic) TSTLayoutSpaceBundle *bundle; // ivar: _bundle
@property (nonatomic) CGRect cachedAlignedFrame; // ivar: _cachedAlignedFrame
@property (nonatomic) CGRect cachedAlignedStrokeFrame; // ivar: _cachedAlignedStrokeFrame
@property (nonatomic) CGRect cachedFrame; // ivar: _cachedFrame
@property (nonatomic) CGRect cachedStrokeFrame; // ivar: _cachedStrokeFrame
@property (readonly, nonatomic) CGRect canvasFrame;
@property (readonly, nonatomic) TSUCellRect cellRange;
@property (nonatomic) BOOL drawBlackAndWhite; // ivar: _drawBlackAndWhite
@property (nonatomic) BOOL drawPreventAntialias; // ivar: _drawPreventAntialias
@property (readonly, nonatomic) CGRect frame;
@property (readonly, nonatomic) CGRect frameForTableNameBorder;
@property (readonly, nonatomic) BOOL frameHasWidthAndHeight;
@property (nonatomic) ? gridRange; // ivar: _gridRange
@property (retain, nonatomic) TSTCoordinateArray *headerColumnRowCoordinates; // ivar: _headerColumnRowCoordinates
@property (nonatomic) BOOL headerColumnsRepeat; // ivar: _headerColumnsRepeat
@property (readonly, nonatomic) CGFloat headerColumnsWidth;
@property (retain, nonatomic) TSTCoordinateArray *headerRowColumnCoordinates; // ivar: _headerRowColumnCoordinates
@property (readonly, nonatomic) CGFloat headerRowsHeight;
@property (nonatomic) BOOL headerRowsRepeat; // ivar: _headerRowsRepeat
@property (nonatomic) unsigned short invalidColumnIndex; // ivar: _invalidColumnIndex
@property (nonatomic) unsigned int invalidRowIndex; // ivar: _invalidRowIndex
@property (nonatomic) BOOL invalidTableOffset; // ivar: _invalidTableOffset
@property (nonatomic) BOOL invalidatedForEditingCell; // ivar: _invalidatedForEditingCell
@property (readonly, nonatomic) BOOL isColumns;
@property (readonly, nonatomic) BOOL isCorner;
@property (readonly, nonatomic) BOOL isFrozen;
@property (readonly, nonatomic) BOOL isMain;
@property (readonly, nonatomic) BOOL isRepeat;
@property (readonly, nonatomic) BOOL isRows;
@property (readonly, weak, nonatomic) TSTLayout *layout;
@property (nonatomic) BOOL layoutDirectionIsLeftToRight; // ivar: _layoutDirectionIsLeftToRight
@property (readonly, weak, nonatomic) TSTLayoutEngine *layoutEngine;
@property (readonly, nonatomic) int layoutSpaceType; // ivar: _layoutSpaceType
@property (readonly, nonatomic) CGRect strokeFrame;
@property (readonly, nonatomic) CGRect strokeFrameForTableNameBorder;
@property (nonatomic) CGPoint tableOffset; // ivar: _tableOffset
@property (nonatomic) CGAffineTransform transformFromCanvas; // ivar: _transformFromCanvas
@property (nonatomic) CGAffineTransform transformFromDevice; // ivar: _transformFromDevice
@property (nonatomic) CGAffineTransform transformToCanvas; // ivar: _transformToCanvas
@property (nonatomic) CGAffineTransform transformToDevice; // ivar: _transformToDevice
@property (nonatomic) CGFloat viewScale; // ivar: _viewScale


+(struct ? )gridRangeOfLayoutSpace:(id)arg0 ;
+(struct ? )intersectionColumnGridRange:(struct ? )arg0 ofLayoutSpace:(id)arg1 ;
+(struct ? )intersectionGridRange:(struct ? )arg0 ofLayoutSpace:(id)arg1 ;
+(struct ? )intersectionRowGridRange:(struct ? )arg0 ofLayoutSpace:(id)arg1 ;
-(BOOL)containsCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)containsGridRange:(struct ? )arg0 ;
-(BOOL)intersectsCellRange:(struct TSUCellRect )arg0 ;
-(BOOL)intersectsColumnGridRange:(struct ? )arg0 ;
-(BOOL)intersectsGridRange:(struct ? )arg0 ;
-(BOOL)intersectsRowGridRange:(struct ? )arg0 ;
-(BOOL)p_drawStrokeForGridColumn:(unsigned int)arg0 strokeRect:(struct ? )arg1 clearStroke:(BOOL)arg2 shadowType:(int)arg3 context:(struct CGContext *)arg4 ;
-(BOOL)p_drawStrokeForGridRow:(unsigned int)arg0 strokeRect:(struct ? )arg1 clearStroke:(BOOL)arg2 shadowType:(int)arg3 context:(struct CGContext *)arg4 ;
-(BOOL)p_getLayoutDirectionLeftToRight;
-(CGFloat)canvasPositionForGridColumn:(unsigned int)arg0 ;
-(CGFloat)canvasPositionForGridRow:(unsigned int)arg0 ;
-(CGFloat)p_bodyTranslationX;
-(CGFloat)p_bodyTranslationY;
-(CGFloat)p_layoutCoordinateForGridColumn:(unsigned int)arg0 ;
-(CGFloat)p_layoutCoordinateForGridRow:(unsigned int)arg0 ;
-(CGFloat)p_rawTableCoordinateForGridColumn:(unsigned int)arg0 ;
-(CGFloat)p_tableCoordinateForGridColumn:(unsigned int)arg0 ;
-(CGFloat)p_tableCoordinateForGridRow:(unsigned int)arg0 ;
-(CGFloat)p_tableCoordinateForX:(CGFloat)arg0 ;
-(CGFloat)p_tableCoordinateForY:(CGFloat)arg0 ;
-(CGFloat)strokeWidthForDrawingWithAlignedWidth:(CGFloat)arg0 originalWidth:(CGFloat)arg1 ;
-(id)alignedMaskStrokeFramePathForTransform:(struct CGAffineTransform *)arg0 cornerRadius:(CGFloat)arg1 ;
-(id)alignedStrokeFramePathForGridRange:(struct ? )arg0 transform:(struct CGAffineTransform *)arg1 inset:(CGFloat)arg2 reoriginToZero:(BOOL)arg3 cornerRadius:(CGFloat)arg4 ;
-(id)alignedStrokeLinePathForColumnGridRange:(struct ? )arg0 transform:(struct CGAffineTransform *)arg1 inset:(CGFloat)arg2 reoriginToZero:(BOOL)arg3 cornerRadius:(CGFloat)arg4 ;
-(id)alignedStrokeLinePathForRowGridRange:(struct ? )arg0 transform:(struct CGAffineTransform *)arg1 inset:(CGFloat)arg2 reoriginToZero:(BOOL)arg3 cornerRadius:(CGFloat)arg4 ;
-(id)initWithLayoutSpaceBundle:(id)arg0 type:(int)arg1 ;
-(id)p_createColumnCoordinatesForGridRange:(struct ? )arg0 invalidColumnIndex:(unsigned short)arg1 previousCoordinates:(id)arg2 outCoordinatesChanged:(*BOOL)arg3 ;
-(id)p_createRowCoordinatesForGridRange:(struct ? )arg0 invalidRowIndex:(unsigned int)arg1 previousCoordinates:(id)arg2 validateSingleRow:(BOOL)arg3 outCoordinatesChanged:(*BOOL)arg4 ;
-(int)p_cellTypeForGridPoint:(struct ? )arg0 ;
-(int)validate:(id)arg0 ;
-(int)validateCoordinateCache:(id)arg0 ;
-(int)validateTableOffset:(id)arg0 ;
-(struct ? )gridPointHitByCanvasPoint:(struct CGPoint )arg0 tabsViewable:(BOOL)arg1 ;
-(struct ? )gridPointHitByLayoutPoint:(struct CGPoint )arg0 ;
-(struct ? )gridRangeForLayoutRect:(struct CGRect )arg0 ;
-(struct ? )p_alignedFrameSpecForColumnGridRange:(struct ? )arg0 ;
-(struct ? )p_alignedFrameSpecForGridRange:(struct ? )arg0 strokeWidthOverride:(*CGFloat)arg1 ;
-(struct ? )p_alignedFrameSpecForRowGridRange:(struct ? )arg0 ;
-(struct ? )p_bodyGridRange;
-(struct ? )p_extendedBodyGridRange;
-(struct ? )p_footerRowsGridRange;
-(struct ? )p_frameSpecForGridRange:(struct ? )arg0 frameType:(int)arg1 strokeWidthOverride:(*CGFloat)arg2 ;
-(struct ? )p_gridPointForTablePoint:(struct CGPoint )arg0 ;
-(struct ? )p_gridRangeForTableRect:(struct CGRect )arg0 ;
-(struct ? )p_headerColumnsGridRange;
-(struct ? )p_headerRowsGridRange;
-(struct ? )p_topLeftCornerGridRange;
-(struct CGPoint )canvasPointForLayoutPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )layoutPointForCanvasPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )p_layoutOffsetForGridPoint:(struct ? )arg0 ;
-(struct CGPoint )p_layoutOffsetForTablePoint:(struct CGPoint )arg0 ;
-(struct CGPoint )p_layoutPointForTablePoint:(struct CGPoint )arg0 ;
-(struct CGPoint )p_tablePointForLayoutPoint:(struct CGPoint )arg0 ;
-(struct CGRect )alignedContentFrameForGridRange:(struct ? )arg0 ;
-(struct CGRect )alignedFrame;
-(struct CGRect )alignedFrameForGridRange:(struct ? )arg0 ;
-(struct CGRect )alignedOverrideFrameForGridRange:(struct ? )arg0 strokeWidthOverride:(CGFloat)arg1 ;
-(struct CGRect )alignedRectForLayoutRect:(struct CGRect )arg0 ;
-(struct CGRect )alignedStrokeFrame;
-(struct CGRect )alignedStrokeFrameForCellRange:(struct TSUCellRect )arg0 ;
-(struct CGRect )alignedStrokeFrameForGridRange:(struct ? )arg0 ;
-(struct CGRect )alignedStrokeLineForColumnGridRange:(struct ? )arg0 ;
-(struct CGRect )alignedStrokeLineForRowGridRange:(struct ? )arg0 ;
-(struct CGRect )canvasFrameForCellRange:(struct TSUCellRect )arg0 ;
-(struct CGRect )canvasFrameForGridRange:(struct ? )arg0 ;
-(struct CGRect )canvasRectForLayoutRect:(struct CGRect )arg0 ;
-(struct CGRect )canvasStrokeFrame;
-(struct CGRect )canvasStrokeFrameForGridRange:(struct ? )arg0 ;
-(struct CGRect )contentFrameForGridRange:(struct ? )arg0 ;
-(struct CGRect )contentFrameForRange:(struct TSUCellRect )arg0 ;
-(struct CGRect )frameForGridRange:(struct ? )arg0 ;
-(struct CGRect )frameForRange:(struct TSUCellRect )arg0 ;
-(struct CGRect )layoutRectForCanvasRect:(struct CGRect )arg0 ;
-(struct CGRect )p_layoutRectForTableRect:(struct CGRect )arg0 ;
-(struct CGRect )p_tableRectForGridRange:(struct ? )arg0 ;
-(struct CGRect )p_tableRectForLayoutRect:(struct CGRect )arg0 ;
-(struct CGRect )strokeFrameForGridRange:(struct ? )arg0 ;
-(struct CGRect )strokeFrameForRange:(struct TSUCellRect )arg0 ;
-(struct TSUCellRect )intersectionCellRange:(struct TSUCellRect )arg0 ;
-(struct TSUCellRect )nearestRangeForLayoutRect:(struct CGRect )arg0 ;
-(struct TSUCellRect )p_rangeForLayoutRect:(struct CGRect )arg0 ;
-(struct TSUCellRect )rangeIntersectingLayoutRect:(struct CGRect )arg0 ;
-(struct TSUCellRect )visiblePartOfRange:(struct TSUCellRect )arg0 ;
-(struct TSUCellRect )visibleRange;
-(unsigned int)p_gridColumnForTableCoordinate:(CGFloat)arg0 ;
-(unsigned int)p_gridRowForTableCoordinate:(CGFloat)arg0 ;
-(void)alignStrokeCoordinatesOfBeginPoint:(struct CGPoint *)arg0 endPoint:(struct CGPoint *)arg1 width:(*CGFloat)arg2 ;
-(void)dealloc;
-(void)drawSingleStroke:(id)arg0 context:(struct CGContext *)arg1 beginPoint:(struct CGPoint )arg2 endPoint:(struct CGPoint )arg3 width:(CGFloat)arg4 strokeWidthForDrawing:(CGFloat)arg5 strokeFrame:(struct CGRect )arg6 ;
-(void)drawStrokesInGridRange:(struct ? )arg0 clearStrokes:(BOOL)arg1 context:(struct CGContext *)arg2 ;
-(void)invalidateCoordinates;
-(void)invalidateCoordinatesAfterColumn:(unsigned short)arg0 ;
-(void)invalidateCoordinatesAfterRow:(unsigned int)arg0 ;
-(void)invalidateCoordinatesForEditingCellID:(struct TSUCellCoord )arg0 ;
-(void)invalidateTableOffset;
-(void)lockForRead;
-(void)lockForWrite;
-(void)p_alignFrameSpec:(struct ? *)arg0 ;
-(void)p_alignStrokeHeight:(CGFloat)arg0 deviceWidth:(*CGFloat)arg1 scaledWidth:(*CGFloat)arg2 ;
-(void)p_alignStrokeWidth:(CGFloat)arg0 deviceWidth:(*CGFloat)arg1 scaledWidth:(*CGFloat)arg2 ;
-(void)setUserSpaceToDeviceSpaceTransform:(struct CGAffineTransform )arg0 ;
-(void)unlock;
-(void)validateCachedFrames;
-(void)validateCoordinateDirection;


@end


#endif