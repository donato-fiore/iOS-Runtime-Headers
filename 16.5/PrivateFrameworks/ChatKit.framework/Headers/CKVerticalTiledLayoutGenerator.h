// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVERTICALTILEDLAYOUTGENERATOR_H
#define CKVERTICALTILEDLAYOUTGENERATOR_H



#import "CKTiledLayoutGenerator.h"

@interface CKVerticalTiledLayoutGenerator : CKTiledLayoutGenerator {
    CGPoint _origin;
    ? _enqueuedCaptionTileInfo;
}


@property (nonatomic) CGFloat referenceWidth; // ivar: _referenceWidth
@property (nonatomic) BOOL shouldDisplayCaptionsBelowBatches; // ivar: _shouldDisplayCaptionsBelowBatches


-(BOOL)_addRowWithContiguousTiles:(struct ? *)arg0 count:(NSInteger)arg1 ;
-(BOOL)_addRowWithTiles:(struct ? *)arg0 imageFrames:(struct CGRect *)arg1 count:(NSInteger)arg2 ;
-(BOOL)_addSpecialSequenceBlock:(struct ? *)arg0 ;
-(BOOL)_dequeueCaption;
-(BOOL)_hasEnqueuedCaption;
-(BOOL)_hasLeftSuboptimalRow;
-(BOOL)_isAtEndOfRow;
-(BOOL)_parseSingleTile;
-(BOOL)_parseSpecialSequence;
-(BOOL)_parseSpecialSubsequenceWithRowRequired:(BOOL)arg0 rowParsed:(*BOOL)arg1 ;
-(BOOL)_parseSpecialTileTriplet;
-(BOOL)_parseTilePair;
-(BOOL)_parseTileRequiringFullWidth;
-(BOOL)_parseTileTriplet;
-(BOOL)_scanNonPanoramaSequence:(struct ? *)arg0 count:(NSInteger)arg1 ;
-(BOOL)_scanSpecialSequenceBlock:(struct ? *)arg0 ;
-(BOOL)_scanSpecialSequenceRow:(struct ? *)arg0 count:(*NSInteger)arg1 ;
-(BOOL)_scanTilePair:(struct ? *)arg0 ;
-(BOOL)_scanTileRequiringFullWidth:(struct ? *)arg0 ;
-(BOOL)_scanTileRequiringNewRow:(struct ? *)arg0 ;
-(BOOL)_scanTileTriplet:(struct ? *)arg0 ;
-(BOOL)_scanTripletWithLargeLead:(struct ? *)arg0 ;
-(BOOL)_scanTripletWithRearrangment:(struct ? *)arg0 ;
-(BOOL)parseNextTiles;
-(CGFloat)referenceDistanceForMagneticGuidelines;
-(void)_enqueueCaptionWithTileInfo:(struct ? )arg0 ;
-(void)_enumerateRowFramesWithContiguousTiles:(struct ? *)arg0 count:(NSInteger)arg1 useMagneticGuidelines:(BOOL)arg2 block:(id)arg3 ;
-(void)_willAddRowWithFirstTileInfo:(struct ? )arg0 ;
-(void)didParseTiles;
-(void)willParseTiles;


@end


#endif