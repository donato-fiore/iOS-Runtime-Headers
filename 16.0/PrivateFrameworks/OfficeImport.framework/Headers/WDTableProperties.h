// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDTABLEPROPERTIES_H
#define WDTABLEPROPERTIES_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "WDTablePropertiesValues.h"
#import "WDDocument.h"

@interface WDTableProperties : NSObject <NSCopying>

 {
    BOOL mOriginal;
    BOOL mTracked;
    BOOL mResolved;
    WDTablePropertiesValues *mOriginalProperties;
    WDTablePropertiesValues *mTrackedProperties;
}


@property (readonly, weak) WDDocument *document; // ivar: mDocument


-(BOOL)biDirectional;
-(BOOL)isAlignmentOverridden;
-(BOOL)isBaseStyleOverridden;
-(BOOL)isBiDirectionalOverridden;
-(BOOL)isBottomBorderOverridden;
-(BOOL)isBottomDistanceFromTextOverridden;
-(BOOL)isCellSpacingOverridden;
-(BOOL)isCellSpacingTypeOverridden;
-(BOOL)isDeletedOverridden;
-(BOOL)isDeletionDateOverridden;
-(BOOL)isEditDateOverridden;
-(BOOL)isEditedOverridden;
-(BOOL)isFormattingChangeDateOverridden;
-(BOOL)isFormattingChangedOverridden;
-(BOOL)isHorizontalAnchorOverridden;
-(BOOL)isHorizontalPositionOverridden;
-(BOOL)isIndentOverridden;
-(BOOL)isIndentTypeOverridden;
-(BOOL)isIndexToAuthorIDOfDeletionOverridden;
-(BOOL)isIndexToAuthorIDOfEditOverridden;
-(BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
-(BOOL)isInsideHorizontalBorderOverridden;
-(BOOL)isInsideVerticalBorderOverridden;
-(BOOL)isJustificationOverridden;
-(BOOL)isLeftBorderOverridden;
-(BOOL)isLeftDistanceFromTextOverridden;
-(BOOL)isLookOverridden;
-(BOOL)isRightBorderOverridden;
-(BOOL)isRightDistanceFromTextOverridden;
-(BOOL)isShadingOverridden;
-(BOOL)isTableFloating;
-(BOOL)isTopBorderOverridden;
-(BOOL)isTopDistanceFromTextOverridden;
-(BOOL)isVerticalAnchorOverridden;
-(BOOL)isVerticalPositionOverridden;
-(BOOL)isWidthOverridden;
-(BOOL)isWidthTypeOverridden;
-(NSInteger)bottomDistanceFromText;
-(NSInteger)horizontalPosition;
-(NSInteger)leftDistanceFromText;
-(NSInteger)rightDistanceFromText;
-(NSInteger)topDistanceFromText;
-(NSInteger)verticalPosition;
-(NSInteger)width;
-(id)baseStyle;
-(id)bottomBorder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deletionDate;
-(id)description;
-(id)editDate;
-(id)formattingChangeDate;
-(id)init;
-(id)initWithDocument:(id)arg0 ;
-(id)insideHorizontalBorder;
-(id)insideVerticalBorder;
-(id)leftBorder;
-(id)mutableBottomBorder;
-(id)mutableInsideHorizontalBorder;
-(id)mutableInsideVerticalBorder;
-(id)mutableLeftBorder;
-(id)mutableRightBorder;
-(id)mutableShading;
-(id)mutableTopBorder;
-(id)rightBorder;
-(id)shading;
-(id)topBorder;
-(int)alignment;
-(int)cellSpacingType;
-(int)deleted;
-(int)edited;
-(int)formattingChanged;
-(int)horizontalAnchor;
-(int)indentType;
-(int)justification;
-(int)resolveMode;
-(int)verticalAnchor;
-(int)widthType;
-(short)cellSpacing;
-(short)indent;
-(unsigned short)indexToAuthorIDOfDeletion;
-(unsigned short)indexToAuthorIDOfEdit;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(unsigned short)look;
-(void)clearBottomBorder;
-(void)clearInsideHorizontalBorder;
-(void)clearInsideVerticalBorder;
-(void)clearLeftBorder;
-(void)clearRightBorder;
-(void)clearShading;
-(void)clearTopBorder;
-(void)moveOrignalToTracked;
-(void)setAlignment:(int)arg0 ;
-(void)setBaseStyle:(id)arg0 ;
-(void)setBiDirectional:(BOOL)arg0 ;
-(void)setBottomDistanceFromText:(NSInteger)arg0 ;
-(void)setCellSpacing:(short)arg0 ;
-(void)setCellSpacingType:(int)arg0 ;
-(void)setDeleted:(int)arg0 ;
-(void)setDeletionDate:(id)arg0 ;
-(void)setEditDate:(id)arg0 ;
-(void)setEdited:(int)arg0 ;
-(void)setFormattingChangeDate:(id)arg0 ;
-(void)setFormattingChanged:(int)arg0 ;
-(void)setHorizontalAnchor:(int)arg0 ;
-(void)setHorizontalPosition:(NSInteger)arg0 ;
-(void)setIndent:(short)arg0 ;
-(void)setIndentType:(int)arg0 ;
-(void)setIndexToAuthorIDOfDeletion:(unsigned short)arg0 ;
-(void)setIndexToAuthorIDOfEdit:(unsigned short)arg0 ;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg0 ;
-(void)setJustification:(int)arg0 ;
-(void)setLeftDistanceFromText:(NSInteger)arg0 ;
-(void)setLook:(unsigned short)arg0 ;
-(void)setResolveMode:(int)arg0 ;
-(void)setRightDistanceFromText:(NSInteger)arg0 ;
-(void)setTopDistanceFromText:(NSInteger)arg0 ;
-(void)setVerticalAnchor:(int)arg0 ;
-(void)setVerticalPosition:(NSInteger)arg0 ;
-(void)setWidth:(NSInteger)arg0 ;
-(void)setWidthType:(int)arg0 ;


@end


#endif