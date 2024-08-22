// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDTABLECELLDESCRIPTOR_H
#define WDTABLECELLDESCRIPTOR_H


#import <Foundation/Foundation.h>

#import "WDShading.h"
#import "WDBorder.h"

@interface WDTableCellDescriptor : NSObject {
    WDShading *mShading;
    WDBorder *mTopBorder;
    WDBorder *mLeftBorder;
    WDBorder *mBottomBorder;
    WDBorder *mRightBorder;
    WDBorder *mDiagonalUpBorder;
    WDBorder *mDiagonalDownBorder;
    short mWidth;
    int mWidthType;
    short mTopMargin;
    int mTopMarginType;
    short mBottomMargin;
    int mBottomMarginType;
    short mLeftMargin;
    int mLeftMarginType;
    short mRightMargin;
    int mRightMarginType;
    int mVerticalAlignment;
    BOOL mShadingOverridden;
    BOOL mTopBorderOverridden;
    BOOL mLeftBorderOverridden;
    BOOL mBottomBorderOverridden;
    BOOL mRightBorderOverridden;
    BOOL mDiagonalUpBorderOverridden;
    BOOL mDiagonalDownBorderOverridden;
    BOOL mWidthTypeOverridden;
    BOOL mTopMarginOverridden;
    BOOL mTopMarginTypeOverridden;
    BOOL mBottomMarginOverridden;
    BOOL mBottomMarginTypeOverridden;
    BOOL mLeftMarginOverridden;
    BOOL mLeftMarginTypeOverridden;
    BOOL mRightMarginOverridden;
    BOOL mRightMarginTypeOverridden;
    BOOL mVerticalAlignmentOverridden;
    BOOL mVerticallyMergedCell;
    BOOL mVerticallyMergedCellOverridden;
    BOOL mFirstInSetOfVerticallyMergedCells;
    BOOL mFirstInSetOfVerticallyMergedCellsOverridden;
    BOOL mNoWrap;
    BOOL mNoWrapOverridden;
}




-(BOOL)firstInSetOfVerticallyMergedCells;
-(BOOL)isBottomBorderOverridden;
-(BOOL)isBottomMarginOverridden;
-(BOOL)isBottomMarginTypeOverridden;
-(BOOL)isDiagonalDownBorderOverridden;
-(BOOL)isDiagonalUpBorderOverridden;
-(BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;
-(BOOL)isLeftBorderOverridden;
-(BOOL)isLeftMarginOverridden;
-(BOOL)isLeftMarginTypeOverridden;
-(BOOL)isNoWrapOverridden;
-(BOOL)isRightBorderOverridden;
-(BOOL)isRightMarginOverridden;
-(BOOL)isRightMarginTypeOverridden;
-(BOOL)isShadingOverridden;
-(BOOL)isTopBorderOverridden;
-(BOOL)isTopMarginOverridden;
-(BOOL)isTopMarginTypeOverridden;
-(BOOL)isVerticalAlignmentOverridden;
-(BOOL)isVerticallyMergedCellOverridden;
-(BOOL)isWidthTypeOverridden;
-(BOOL)noWrap;
-(BOOL)verticallyMergedCell;
-(id)bottomBorder;
-(id)diagonalDownBorder;
-(id)diagonalUpBorder;
-(id)leftBorder;
-(id)rightBorder;
-(id)shading;
-(id)topBorder;
-(int)bottomMarginType;
-(int)leftMarginType;
-(int)rightMarginType;
-(int)topMarginType;
-(int)verticalAlignment;
-(int)widthType;
-(short)bottomMargin;
-(short)leftMargin;
-(short)rightMargin;
-(short)topMargin;
-(void)setBottomBorder:(id)arg0 ;
-(void)setBottomBorderOverridden:(BOOL)arg0 ;
-(void)setBottomMargin:(short)arg0 ;
-(void)setBottomMarginOverridden:(BOOL)arg0 ;
-(void)setBottomMarginType:(int)arg0 ;
-(void)setBottomMarginTypeOverridden:(BOOL)arg0 ;
-(void)setDiagonalDownBorder:(id)arg0 ;
-(void)setDiagonalDownBorderOverridden:(BOOL)arg0 ;
-(void)setDiagonalUpBorder:(id)arg0 ;
-(void)setDiagonalUpBorderOverridden:(BOOL)arg0 ;
-(void)setFirstInSetOfVerticallyMergedCells:(BOOL)arg0 ;
-(void)setFirstInSetOfVerticallyMergedCellsOverridden:(BOOL)arg0 ;
-(void)setLeftBorder:(id)arg0 ;
-(void)setLeftBorderOverridden:(BOOL)arg0 ;
-(void)setLeftMargin:(short)arg0 ;
-(void)setLeftMarginOverridden:(BOOL)arg0 ;
-(void)setLeftMarginType:(int)arg0 ;
-(void)setLeftMarginTypeOverridden:(BOOL)arg0 ;
-(void)setNoWrap:(BOOL)arg0 ;
-(void)setNoWrapOverridden:(BOOL)arg0 ;
-(void)setRightBorder:(id)arg0 ;
-(void)setRightBorderOverridden:(BOOL)arg0 ;
-(void)setRightMargin:(short)arg0 ;
-(void)setRightMarginOverridden:(BOOL)arg0 ;
-(void)setRightMarginType:(int)arg0 ;
-(void)setRightMarginTypeOverridden:(BOOL)arg0 ;
-(void)setShading:(id)arg0 ;
-(void)setShadingOverridden:(BOOL)arg0 ;
-(void)setTopBorder:(id)arg0 ;
-(void)setTopBorderOverridden:(BOOL)arg0 ;
-(void)setTopMargin:(short)arg0 ;
-(void)setTopMarginOverridden:(BOOL)arg0 ;
-(void)setTopMarginType:(int)arg0 ;
-(void)setTopMarginTypeOverridden:(BOOL)arg0 ;
-(void)setVerticalAlignment:(int)arg0 ;
-(void)setVerticalAlignmentOverridden:(BOOL)arg0 ;
-(void)setVerticallyMergedCell:(BOOL)arg0 ;
-(void)setVerticallyMergedCellOverridden:(BOOL)arg0 ;
-(void)setWidth:(short)arg0 ;
-(void)setWidthType:(int)arg0 ;
-(void)setWidthTypeOverridden:(BOOL)arg0 ;


@end


#endif