// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDTABLECELLPROPERTIES_H
#define WDTABLECELLPROPERTIES_H


#import <Foundation/Foundation.h>

#import "WDDocument.h"

@interface WDTableCellProperties : NSObject {
    short mWidth;
    short mPosition;
    BOOL mOriginal;
    BOOL mTracked;
    BOOL mResolved;
    ? mOriginalProperties;
    ? mTrackedProperties;
}


@property (readonly, weak) WDDocument *document; // ivar: mDocument


-(BOOL)firstInSetOfVerticallyMergedCells;
-(BOOL)isBottomBorderOverridden;
-(BOOL)isBottomMarginOverridden;
-(BOOL)isBottomMarginTypeOverridden;
-(BOOL)isDeletedOverridden;
-(BOOL)isDeletionDateOverridden;
-(BOOL)isDiagonalDownBorderOverridden;
-(BOOL)isDiagonalUpBorderOverridden;
-(BOOL)isEditDateOverridden;
-(BOOL)isEditedOverridden;
-(BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;
-(BOOL)isFormattingChangeDateOverridden;
-(BOOL)isFormattingChangedOverridden;
-(BOOL)isIndexToAuthorIDOfDeletionOverridden;
-(BOOL)isIndexToAuthorIDOfEditOverridden;
-(BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
-(BOOL)isInsideHorizontalBorderOverridden;
-(BOOL)isInsideVerticalBorderOverridden;
-(BOOL)isLeftBorderOverridden;
-(BOOL)isLeftMarginOverridden;
-(BOOL)isLeftMarginTypeOverridden;
-(BOOL)isNoWrapOverridden;
-(BOOL)isRightBorderOverridden;
-(BOOL)isRightMarginOverridden;
-(BOOL)isRightMarginTypeOverridden;
-(BOOL)isShadingOverridden;
-(BOOL)isTextDirectionOverridden;
-(BOOL)isTopBorderOverridden;
-(BOOL)isTopMarginOverridden;
-(BOOL)isTopMarginTypeOverridden;
-(BOOL)isVerticalAlignmentOverridden;
-(BOOL)isVerticallyMergedCellOverridden;
-(BOOL)isWidthTypeOverridden;
-(BOOL)noWrap;
-(BOOL)verticallyMergedCell;
-(id)bottomBorder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deletionDate;
-(id)description;
-(id)diagonalDownBorder;
-(id)diagonalUpBorder;
-(id)editDate;
-(id)formattingChangeDate;
-(id)init;
-(id)initWithDocument:(id)arg0 ;
-(id)insideHorizontalBorder;
-(id)insideVerticalBorder;
-(id)leftBorder;
-(id)mutableBottomBorder;
-(id)mutableDiagonalDownBorder;
-(id)mutableDiagonalUpBorder;
-(id)mutableInsideHorizontalBorder;
-(id)mutableInsideVerticalBorder;
-(id)mutableLeftBorder;
-(id)mutableRightBorder;
-(id)mutableShading;
-(id)mutableTopBorder;
-(id)rightBorder;
-(id)shading;
-(id)topBorder;
-(int)bottomMarginType;
-(int)deleted;
-(int)edited;
-(int)formattingChanged;
-(int)leftMarginType;
-(int)resolveMode;
-(int)rightMarginType;
-(int)textDirection;
-(int)topMarginType;
-(int)verticalAlignment;
-(int)widthType;
-(short)bottomMargin;
-(short)leftMargin;
-(short)position;
-(short)rightMargin;
-(short)topMargin;
-(short)width;
-(unsigned short)indexToAuthorIDOfDeletion;
-(unsigned short)indexToAuthorIDOfEdit;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(void)addProperties:(id)arg0 ;
-(void)addPropertiesValues:(struct ? *)arg0 to:(struct ? *)arg1 ;
-(void)clearShading;
-(void)originalToTracked;
-(void)setBottomMargin:(short)arg0 ;
-(void)setBottomMarginType:(int)arg0 ;
-(void)setDeleted:(int)arg0 ;
-(void)setDeletionDate:(id)arg0 ;
-(void)setEditDate:(id)arg0 ;
-(void)setEdited:(int)arg0 ;
-(void)setFirstInSetOfVerticallyMergedCells:(BOOL)arg0 ;
-(void)setFormattingChangeDate:(id)arg0 ;
-(void)setFormattingChanged:(int)arg0 ;
-(void)setIndexToAuthorIDOfDeletion:(unsigned short)arg0 ;
-(void)setIndexToAuthorIDOfEdit:(unsigned short)arg0 ;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg0 ;
-(void)setLeftMargin:(short)arg0 ;
-(void)setLeftMarginType:(int)arg0 ;
-(void)setNoWrap:(BOOL)arg0 ;
-(void)setPosition:(short)arg0 ;
-(void)setResolveMode:(int)arg0 ;
-(void)setRightMargin:(short)arg0 ;
-(void)setRightMarginType:(int)arg0 ;
-(void)setTextDirection:(int)arg0 ;
-(void)setTopMargin:(short)arg0 ;
-(void)setTopMarginType:(int)arg0 ;
-(void)setVerticalAlignment:(int)arg0 ;
-(void)setVerticallyMergedCell:(BOOL)arg0 ;
-(void)setWidth:(short)arg0 ;
-(void)setWidthType:(int)arg0 ;


@end


#endif