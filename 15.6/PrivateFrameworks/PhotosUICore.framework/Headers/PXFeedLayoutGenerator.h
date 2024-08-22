// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXFEEDLAYOUTGENERATOR_H
#define PXFEEDLAYOUTGENERATOR_H


#import <Foundation/Foundation.h>

#import "PXFeedLayoutGeneratorScanState.h"

@interface PXFeedLayoutGenerator : NSObject {
    NSInteger _cacheTailLocation;
    NSInteger _cacheHeadLocation;
    PXTileInfo _cachedTileInfo;
    id _cachedBatchID;
}


@property (nonatomic) UIEdgeInsets captionPadding; // ivar: _captionPadding
@property (nonatomic) CGSize interTileSpacing; // ivar: _interTileSpacing
@property (readonly, nonatomic) BOOL isAtEnd;
@property (nonatomic) CGSize noCaptionSpacing; // ivar: _noCaptionSpacing
@property (nonatomic) NSInteger numberOfMagneticGuidelines; // ivar: _numberOfMagneticGuidelines
@property (copy, nonatomic) id *parsedFrameBlock; // ivar: _parsedFrameBlock
@property (nonatomic) CGFloat roundingScale; // ivar: _roundingScale
@property (nonatomic) NSInteger scanLocation; // ivar: _scanLocation
@property (nonatomic) NSInteger scanSpecialSequenceCount; // ivar: _scanSpecialSequenceCount
@property (nonatomic) PXFeedLayoutGeneratorScanState *scanState;
@property (nonatomic) BOOL scannedBatchHasCaption; // ivar: _scannedBatchHasCaption
@property (retain, nonatomic) id *scannedBatchID; // ivar: _scannedBatchID
@property (nonatomic) BOOL shouldStop; // ivar: _shouldStop
@property (copy, nonatomic) id *tileBatchIDBlock; // ivar: _tileBatchIDBlock
@property (copy, nonatomic) id *tileCaptionSizeBlock; // ivar: _tileCaptionSizeBlock
@property (copy, nonatomic) id *tileCommentCountBlock; // ivar: _tileCommentCountBlock
@property (copy, nonatomic) id *tileCommentSizeBlock; // ivar: _tileCommentSizeBlock
@property (nonatomic) NSInteger tileCount; // ivar: _tileCount
@property (copy, nonatomic) id *tileHasCaptionBlock; // ivar: _tileHasCaptionBlock
@property (copy, nonatomic) id *tileHasLikesBlock; // ivar: _tileHasLikesBlock
@property (copy, nonatomic) id *tileImageSizeBlock; // ivar: _tileImageSizeBlock
@property (copy, nonatomic) id *tileLikesSizeBlock; // ivar: _tileLikesSizeBlock
@property (copy, nonatomic) id *tileMinimumSizeBlock; // ivar: _tileMinimumSizeBlock


-(BOOL)parseNextTiles;
-(BOOL)scanAnyTile:(struct PXTileInfo *)arg0 ;
-(BOOL)scanTile:(struct PXTileInfo *)arg0 ofType:(NSInteger)arg1 ;
-(BOOL)scanTile:(struct PXTileInfo *)arg0 passingTest:(id)arg1 ;
-(BOOL)scanTile:(struct PXTileInfo *)arg0 type:(*NSInteger)arg1 ;
-(BOOL)scanTileWithHorizontalPanorama:(struct PXTileInfo *)arg0 ;
-(BOOL)scanTileWithLandscapeImage:(struct PXTileInfo *)arg0 ;
-(BOOL)scanTileWithPortraitImage:(struct PXTileInfo *)arg0 ;
-(BOOL)scanTileWithSquareImage:(struct PXTileInfo *)arg0 ;
-(CGFloat)valueByRounding:(CGFloat)arg0 usingMagneticGuidelines:(BOOL)arg1 ;
-(id)init;
-(struct CGSize )captionSizeForTileAtIndex:(NSInteger)arg0 proposedSize:(struct CGSize )arg1 ;
-(struct CGSize )commentSizeForTileAtIndex:(NSInteger)arg0 commentIndex:(NSInteger)arg1 proposedSize:(struct CGSize )arg2 ;
-(struct CGSize )likesSizeForTileAtIndex:(NSInteger)arg0 proposedSize:(struct CGSize )arg1 ;
-(void)didParseTiles;
-(void)enumerateFramesWithBlock:(id)arg0 ;
-(void)parseTiles;
-(void)parsedFrame:(struct CGRect )arg0 type:(NSInteger)arg1 forCommentAtIndex:(NSInteger)arg2 ;
-(void)parsedFrame:(struct CGRect )arg0 type:(NSInteger)arg1 forLikesAtIndex:(NSInteger)arg2 ;
-(void)parsedFrame:(struct CGRect )arg0 type:(NSInteger)arg1 forTileAtIndex:(NSInteger)arg2 ;
-(void)willParseTiles;


@end


#endif