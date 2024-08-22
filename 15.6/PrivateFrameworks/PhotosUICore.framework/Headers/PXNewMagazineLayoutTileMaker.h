// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXNEWMAGAZINELAYOUTTILEMAKER_H
#define PXNEWMAGAZINELAYOUTTILEMAKER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "PXNewMagazineRectArray.h"

@interface PXNewMagazineLayoutTileMaker : NSObject {
    PXNewMagazineRectArray *_cachedTileRects;
    NSMutableArray *_allFrames;
    CGFloat _lastTileWidthPadding;
    CGFloat _maxFrameAspectRatio;
    CGFloat _minFrameAspectRatio;
    BOOL _startLastPadding;
    NSMutableArray *_sharedTempArray;
    *CGFloat _normalizedWeights;
    BOOL _isPerfectEnding;
}


@property (readonly, nonatomic) CGSize defaultTileSize; // ivar: _defaultTileSize
@property (readonly, nonatomic) CGFloat height; // ivar: _height
@property (nonatomic) CGFloat interTileSpacing; // ivar: _interTileSpacing
@property (nonatomic) BOOL layoutFromRightToLeft; // ivar: _layoutFromRightToLeft
@property (nonatomic) NSUInteger maxTilesInFrame; // ivar: _maxTilesInFrame
@property (readonly, nonatomic) NSUInteger numberOfColumns; // ivar: _numberOfColumns
@property (readonly, nonatomic) CGSize referenceSize; // ivar: _referenceSize
@property (readonly, nonatomic) CGFloat tileAspectRatio; // ivar: _tileAspectRatio


+(void)printInputs:(id)arg0 ;
+(void)printLayout:(id)arg0 numOfColumns:(NSUInteger)arg1 ;
+(void)printPossibleFrames:(NSUInteger)arg0 cellAspectRatio:(CGFloat)arg1 maxAspectRatio:(CGFloat)arg2 minAspectRato:(CGFloat)arg3 ;
-(*CGFloat)_normalizeWeightsByInputs:(id)arg0 ;
-(BOOL)_findNextTileWithInputs:(id)arg0 atIndex:(NSUInteger)arg1 baseIndex:(NSUInteger)arg2 coordinator:(id)arg3 ;
-(BOOL)_generateNextChunkWithInputs:(id)arg0 fromIndex:(NSUInteger)arg1 maxY:(NSUInteger)arg2 reserveNumberForPadding:(NSUInteger)arg3 context:(id)arg4 ;
-(BOOL)_isSameRectsArray:(id)arg0 otherArray:(id)arg1 ;
-(BOOL)checkAndPrintResults:(BOOL)arg0 ;
-(BOOL)convertRects:(struct PXMagazineRect *)arg0 outFrames:(struct CGRect *)arg1 count:(NSUInteger)arg2 forReferenceSize:(struct CGSize )arg3 ;
-(NSInteger)_availableFrames:(*id)arg0 maxReturnCount:(NSUInteger)arg1 forAspectRatio:(CGFloat)arg2 weight:(CGFloat)arg3 maxWidth:(NSUInteger)arg4 ;
-(NSUInteger)_numberOfInputsForLastPadding;
-(NSUInteger)getMagazineRects:(struct PXMagazineRect *)arg0 withInputs:(id)arg1 ;
-(id)_generateLastTilesWithInputs:(id)arg0 baseIndex:(NSUInteger)arg1 returnFallback:(BOOL)arg2 ;
-(id)_generateTilesWithInputs:(id)arg0 ;
-(id)_getAllFramesInOrder;
-(id)description;
-(id)initWithReferenceSize:(struct CGSize )arg0 numberOfColumns:(NSUInteger)arg1 ;
-(struct CGRect )_frameFromTileFrame:(struct PXMagazineRect )arg0 ;
-(void)_findNextChunkWithInputs:(id)arg0 fromIndex:(NSUInteger)arg1 context:(id)arg2 ;
-(void)_getFrames:(struct CGRect *)arg0 magazineRects:(struct PXMagazineRect *)arg1 withInputs:(id)arg2 ;
-(void)_resetWithNumberOfAssets:(NSUInteger)arg0 ;
-(void)_setRandomSeedWithInputs:(id)arg0 ;
-(void)_updateDimensionInfos;
-(void)dealloc;
-(void)getFrames:(struct CGRect *)arg0 withInputs:(id)arg1 ;


@end


#endif