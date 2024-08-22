// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKHORIZONTALTILEDLAYOUTGENERATOR_H
#define CKHORIZONTALTILEDLAYOUTGENERATOR_H



#import "CKTiledLayoutGenerator.h"

@interface CKHorizontalTiledLayoutGenerator : CKTiledLayoutGenerator {
    CGPoint _origin;
}


@property (nonatomic) CGFloat referenceHeight; // ivar: _referenceHeight


-(BOOL)_addColumnWithContiguousTiles:(struct ? *)arg0 count:(NSInteger)arg1 ;
-(BOOL)_addColumnWithTiles:(struct ? *)arg0 imageFrames:(struct CGRect *)arg1 count:(NSInteger)arg2 ;
-(BOOL)_addSpecialSequenceBlock:(struct ? *)arg0 ;
-(BOOL)_hasLeftSuboptimalColumn;
-(BOOL)_isAtEndOfColumn;
-(BOOL)_parseSingleTile;
-(BOOL)_parseSpecialSequence;
-(BOOL)_parseSpecialSubsequenceWithColumnRequired:(BOOL)arg0 columnParsed:(*BOOL)arg1 ;
-(BOOL)_parseSpecialTileTriplet;
-(BOOL)_parseTilePair;
-(BOOL)_parseTileTriplet;
-(BOOL)_scanNonPanoramaSequence:(struct ? *)arg0 count:(NSInteger)arg1 ;
-(BOOL)_scanSpecialSequenceBlock:(struct ? *)arg0 ;
-(BOOL)_scanSpecialSequenceColumn:(struct ? *)arg0 count:(*NSInteger)arg1 ;
-(BOOL)_scanTripletWithLargeLead:(struct ? *)arg0 ;
-(BOOL)parseNextTiles;
-(CGFloat)referenceDistanceForMagneticGuidelines;
-(void)_enumerateColumnFramesWithContiguousTiles:(struct ? *)arg0 count:(NSInteger)arg1 useMagneticGuidelines:(BOOL)arg2 block:(id)arg3 ;
-(void)willParseTiles;


@end


#endif