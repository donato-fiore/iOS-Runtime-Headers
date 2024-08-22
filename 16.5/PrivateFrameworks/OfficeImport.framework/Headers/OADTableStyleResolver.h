// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADTABLESTYLERESOLVER_H
#define OADTABLESTYLERESOLVER_H


#import <Foundation/Foundation.h>

#import "OADTable.h"
#import "OADTableProperties.h"
#import "OADTableStyle.h"

@interface OADTableStyleResolver : NSObject {
    OADTable *mTable;
    OADTableProperties *mTableProperties;
    OADTableStyle *mTableStyle;
    int mColumnCount;
    int mRowCount;
    *void mCellMatrix;
    *void mCellStyles;
    *void mStrokes;
}




-(id)initWithTable:(id)arg0 ;
-(id)sourceCellAtI1:(int)arg0 i2:(int)arg1 dir1:(int)arg2 ;
-(id)strokeOfSegmentNormalToDir1:(int)arg0 i1:(int)arg1 fromI2:(int)arg2 ;
-(int)cellCountAlongDir:(int)arg0 ;
-(int)cellParityRelativeToDir1:(int)arg0 i1:(int)arg1 i2:(int)arg2 ;
-(struct OADTMatrixPos )dominantCellInRowRange:(struct _NSRange )arg0 columnRange:(struct _NSRange )arg1 ;
-(void)applyBandCellStyles;
-(void)applyBandStrokes;
-(void)applyCellStyleFromPart:(int)arg0 dir1:(int)arg1 fromI1:(int)arg2 fromI2:(int)arg3 dir1Span:(int)arg4 dir2Span:(int)arg5 ;
-(void)applyCellStyleOfBandsNormalToDir:(int)arg0 parity:(int)arg1 part:(int)arg2 ;
-(void)applyCellStyleOfExtremeVectorNormalToDir:(int)arg0 atExtremePos:(int)arg1 part:(int)arg2 ;
-(void)applyCellStyles;
-(void)applyCornerCellStyleWithRowPos:(int)arg0 columnPos:(int)arg1 part:(int)arg2 ;
-(void)applyCornerCellStyles;
-(void)applyCornerStrokes;
-(void)applyCornerStrokesWithRowPos:(int)arg0 columnPos:(int)arg1 part:(int)arg2 ;
-(void)applyExtremeVectorCellStyles;
-(void)applyExtremeVectorStrokes;
-(void)applyResolvedPartStyle:(id)arg0 leftStroke:(id)arg1 rightStroke:(id)arg2 topStroke:(id)arg3 bottomStroke:(id)arg4 toCell:(id)arg5 ;
-(void)applyResolvedStyling;
-(void)applyStroke:(int)arg0 fromPart:(int)arg1 normalToDir1:(int)arg2 i1:(int)arg3 fromI2:(int)arg4 dir2Span:(int)arg5 ;
-(void)applyStroke:(int)arg0 fromPart:(int)arg1 normalToDir1:(int)arg2 i1:(int)arg3 fromI2:(int)arg4 toI2:(int)arg5 ;
-(void)applyStrokeOfExtremeVectorNormalToDir:(int)arg0 atExtremePos:(int)arg1 ;
-(void)applyStrokesFromPart:(int)arg0 fromPos:(struct OADTMatrixPos )arg1 toPos:(struct OADTMatrixPos )arg2 ;
-(void)applyStrokesOfBandsNormalToDir:(int)arg0 parity:(int)arg1 part:(int)arg2 ;
-(void)applyStyleStrokes;
-(void)applyTextStyle:(id)arg0 toCell:(id)arg1 ;
-(void)applyTextStyle:(id)arg0 toParagraph:(id)arg1 ;
-(void)applyWholeTableCellStyle;
-(void)applyWholeTableStrokes;
-(void)createStrokeMatrices;
-(void)dealloc;
-(void)fixVectorAtExtremePositionFlags;
-(void)flatten;
-(void)loadCells;
-(void)setStroke:(id)arg0 ofSegmentNormalToDir1:(int)arg1 i1:(int)arg2 fromI2:(int)arg3 ;


@end


#endif