// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXHORIZONTALFEEDLAYOUTGENERATOR_H
#define PXHORIZONTALFEEDLAYOUTGENERATOR_H



#import "PXFeedLayoutGenerator.h"

@interface PXHorizontalFeedLayoutGenerator : PXFeedLayoutGenerator {
    CGPoint _origin;
}


@property (nonatomic) CGFloat referenceHeight; // ivar: _referenceHeight


-(BOOL)_addColumnWithContiguousTiles:(struct PXTileInfo *)arg0 count:(NSInteger)arg1 ;
-(BOOL)_addColumnWithTiles:(struct PXTileInfo *)arg0 imageFrames:(struct CGRect *)arg1 count:(NSInteger)arg2 ;
-(BOOL)_addSpecialSequenceBlock:(struct PXTileInfo *)arg0 ;
-(BOOL)_hasLeftSuboptimalColumn;
-(BOOL)_isAtEndOfColumn;
-(BOOL)_parseSingleTile;
-(BOOL)_parseSpecialSequence;
-(BOOL)_parseSpecialSubsequenceWithColumnRequired:(BOOL)arg0 columnParsed:(*BOOL)arg1 ;
-(BOOL)_parseSpecialTileTriplet;
-(BOOL)_parseTilePair;
-(BOOL)_parseTileTriplet;
-(BOOL)_scanNonPanoramaSequence:(struct PXTileInfo *)arg0 count:(NSInteger)arg1 ;
-(BOOL)_scanSpecialSequenceBlock:(struct PXTileInfo *)arg0 ;
-(BOOL)_scanSpecialSequenceColumn:(struct PXTileInfo *)arg0 count:(*NSInteger)arg1 ;
-(BOOL)_scanTripletWithLargeLead:(struct PXTileInfo *)arg0 ;
-(BOOL)parseNextTiles;
-(CGFloat)referenceDistanceForMagneticGuidelines;
-(void)_enumerateColumnFramesWithContiguousTiles:(struct PXTileInfo *)arg0 count:(NSInteger)arg1 useMagneticGuidelines:(BOOL)arg2 block:(id)arg3 ;
-(void)willParseTiles;


@end


#endif