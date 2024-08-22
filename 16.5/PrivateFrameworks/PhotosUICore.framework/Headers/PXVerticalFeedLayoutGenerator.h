// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXVERTICALFEEDLAYOUTGENERATOR_H
#define PXVERTICALFEEDLAYOUTGENERATOR_H



#import "PXFeedLayoutGenerator.h"

@interface PXVerticalFeedLayoutGenerator : PXFeedLayoutGenerator {
    CGPoint _origin;
    PXTileInfo _enqueuedCaptionTileInfo;
    PXTileInfo _enqueuedLikesTileInfo;
    PXTileInfo _enqueuedCommentsTileInfo;
}


@property (nonatomic) CGFloat referenceWidth; // ivar: _referenceWidth
@property (nonatomic) BOOL shouldDisplayCaptionsBelowBatches; // ivar: _shouldDisplayCaptionsBelowBatches


-(BOOL)_addRowWithContiguousTiles:(struct PXTileInfo *)arg0 count:(NSInteger)arg1 ;
-(BOOL)_addRowWithTiles:(struct PXTileInfo *)arg0 imageFrames:(struct CGRect *)arg1 count:(NSInteger)arg2 ;
-(BOOL)_addSpecialSequenceBlock:(struct PXTileInfo *)arg0 ;
-(BOOL)_dequeueCaption;
-(BOOL)_dequeueComments;
-(BOOL)_dequeueLikes;
-(BOOL)_hasEnqueuedCaption;
-(BOOL)_hasEnqueuedComments;
-(BOOL)_hasEnqueuedLikes;
-(BOOL)_hasLeftSuboptimalRow;
-(BOOL)_isAtEndOfRow;
-(BOOL)_parseSingleTile;
-(BOOL)_parseSpecialSequence;
-(BOOL)_parseSpecialSubsequenceWithRowRequired:(BOOL)arg0 rowParsed:(*BOOL)arg1 ;
-(BOOL)_parseSpecialTileTriplet;
-(BOOL)_parseTilePair;
-(BOOL)_parseTileRequiringFullWidth;
-(BOOL)_parseTileTriplet;
-(BOOL)_scanNonPanoramaSequence:(struct PXTileInfo *)arg0 count:(NSInteger)arg1 ;
-(BOOL)_scanSpecialSequenceBlock:(struct PXTileInfo *)arg0 ;
-(BOOL)_scanSpecialSequenceRow:(struct PXTileInfo *)arg0 count:(*NSInteger)arg1 ;
-(BOOL)_scanTilePair:(struct PXTileInfo *)arg0 ;
-(BOOL)_scanTileRequiringFullWidth:(struct PXTileInfo *)arg0 ;
-(BOOL)_scanTileRequiringNewRow:(struct PXTileInfo *)arg0 ;
-(BOOL)_scanTileTriplet:(struct PXTileInfo *)arg0 ;
-(BOOL)_scanTripletWithLargeLead:(struct PXTileInfo *)arg0 ;
-(BOOL)_scanTripletWithRearrangment:(struct PXTileInfo *)arg0 ;
-(BOOL)parseNextTiles;
-(CGFloat)referenceDistanceForMagneticGuidelines;
-(void)_enqueueCaptionWithTileInfo:(struct PXTileInfo )arg0 ;
-(void)_enqueueCommentsWithTileInfo:(struct PXTileInfo )arg0 ;
-(void)_enqueueLikesWithTileInfo:(struct PXTileInfo )arg0 ;
-(void)_enumerateRowFramesWithContiguousTiles:(struct PXTileInfo *)arg0 count:(NSInteger)arg1 useMagneticGuidelines:(BOOL)arg2 block:(id)arg3 ;
-(void)_willAddCaptionRowWithFirstTileInfo:(struct PXTileInfo )arg0 ;
-(void)_willAddCommentRowsWithFirstTileInfo:(struct PXTileInfo )arg0 ;
-(void)_willAddLikeRowWithFirstTileInfo:(struct PXTileInfo )arg0 ;
-(void)didParseTiles;
-(void)willParseTiles;


@end


#endif