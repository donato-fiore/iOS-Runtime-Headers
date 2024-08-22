// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDPARAGRAPHPROPERTIES_H
#define WDPARAGRAPHPROPERTIES_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "WDCharacterProperties.h"
#import "WDParagraphPropertiesValues.h"
#import "WDDocument.h"

@interface WDParagraphProperties : NSObject <NSCopying>

 {
    WDCharacterProperties *mCharacterProperties;
    BOOL mCharacterPropertiesOverridden;
    BOOL mOriginal;
    BOOL mTracked;
    BOOL mResolved;
    WDParagraphPropertiesValues *mOriginalProperties;
    WDParagraphPropertiesValues *mTrackedProperties;
}


@property (readonly, weak) WDDocument *document; // ivar: mDocument


-(BOOL)anchorLock;
-(BOOL)biDi;
-(BOOL)contextualSpacing;
-(BOOL)hasTabStopAddedAtPosition:(short)arg0 ;
-(BOOL)hasTabStopDeletedAtPosition:(short)arg0 ;
-(BOOL)isAnchorLockOverridden;
-(BOOL)isAnythingOverridden;
-(BOOL)isAnythingOverriddenIn:(id)arg0 ;
-(BOOL)isBarBorderOverridden;
-(BOOL)isBaseStyleOverridden;
-(BOOL)isBetweenBorderOverridden;
-(BOOL)isBiDiOverridden;
-(BOOL)isBottomBorderOverridden;
-(BOOL)isCharacterPropertiesOverridden;
-(BOOL)isContextualSpacingOverridden;
-(BOOL)isDropCapOverridden;
-(BOOL)isFirstLineIndentCharsOverridden;
-(BOOL)isFirstLineIndentOverridden;
-(BOOL)isFollowingIndentOverridden;
-(BOOL)isFormattingChangedOverridden;
-(BOOL)isHeightOverridden;
-(BOOL)isHeightRuleOverridden;
-(BOOL)isHorizontalAnchorOverridden;
-(BOOL)isHorizontalPositionOverridden;
-(BOOL)isHorizontalSpaceOverridden;
-(BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
-(BOOL)isJustificationOverridden;
-(BOOL)isKeepLinesTogetherOverridden;
-(BOOL)isKeepNextParagraphTogetherOverridden;
-(BOOL)isKinsokuOffOverridden;
-(BOOL)isLeadingIndentOverridden;
-(BOOL)isLeftBorderOverridden;
-(BOOL)isLeftIndentCharsOverridden;
-(BOOL)isLeftIndentOverridden;
-(BOOL)isLineSpacingOverridden;
-(BOOL)isLineSpacingRuleOverridden;
-(BOOL)isListIndexOverridden;
-(BOOL)isListLevelOverridden;
-(BOOL)isOutlineLevelOverridden;
-(BOOL)isPageBreakBefore;
-(BOOL)isPageBreakBeforeOverridden;
-(BOOL)isPhysicalJustificationOverridden;
-(BOOL)isRightBorderOverridden;
-(BOOL)isRightIndentCharsOverridden;
-(BOOL)isRightIndentOverridden;
-(BOOL)isShadingOverridden;
-(BOOL)isSpaceAfterAutoOverridden;
-(BOOL)isSpaceAfterOverridden;
-(BOOL)isSpaceBeforeAutoOverridden;
-(BOOL)isSpaceBeforeOverridden;
-(BOOL)isSuppressAutoHyphensOverridden;
-(BOOL)isSuppressLineNumbersOverridden;
-(BOOL)isTopBorderOverridden;
-(BOOL)isVerticalAnchorOverridden;
-(BOOL)isVerticalPositionOverridden;
-(BOOL)isVerticalSpaceOverridden;
-(BOOL)isWidowControlOverridden;
-(BOOL)isWidthOverridden;
-(BOOL)isWrapCodeOverridden;
-(BOOL)isWrapOverridden;
-(BOOL)keepLinesTogether;
-(BOOL)keepNextParagraphTogether;
-(BOOL)kinsokuOff;
-(BOOL)spaceAfterAuto;
-(BOOL)spaceBeforeAuto;
-(BOOL)suppressAutoHyphens;
-(BOOL)suppressLineNumbers;
-(BOOL)widowControl;
-(BOOL)wrap;
-(NSInteger)height;
-(NSInteger)horizontalPosition;
-(NSInteger)horizontalSpace;
-(NSInteger)verticalPosition;
-(NSInteger)verticalSpace;
-(NSInteger)width;
-(NSUInteger)listIndex;
-(NSUInteger)tabStopAddedCount;
-(NSUInteger)tabStopDeletedPositionCount;
-(char)wrapCode;
-(id)barBorder;
-(id)baseStyle;
-(id)betweenBorder;
-(id)bottomBorder;
-(id)characterProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDocument:(id)arg0 ;
-(id)leftBorder;
-(id)mutableBarBorder;
-(id)mutableBetweenBorder;
-(id)mutableBottomBorder;
-(id)mutableCharacterProperties;
-(id)mutableLeftBorder;
-(id)mutableRightBorder;
-(id)mutableShading;
-(id)mutableTopBorder;
-(id)rightBorder;
-(id)shading;
-(id)topBorder;
-(int)formattingChanged;
-(int)heightRule;
-(int)horizontalAnchor;
-(int)justification;
-(int)lineSpacingRule;
-(int)physicalJustification;
-(int)resolveMode;
-(int)verticalAnchor;
-(short)firstLineIndent;
-(short)firstLineIndentChars;
-(short)followingIndent;
-(short)leadingIndent;
-(short)leftIndent;
-(short)leftIndentChars;
-(short)lineSpacing;
-(short)rightIndent;
-(short)rightIndentChars;
-(short)tabStopDeletedPositionAt:(NSUInteger)arg0 ;
-(struct ? )dropCap;
-(struct ? *)tabStopAddedAt:(NSUInteger)arg0 ;
-(unsigned char)listLevel;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(unsigned short)outlineLevel;
-(unsigned short)spaceAfter;
-(unsigned short)spaceBefore;
-(void)addTabStopAdded:(struct ? *)arg0 ;
-(void)addTabStopDeletedPosition:(short)arg0 ;
-(void)clearBaseStyle;
-(void)clearChararacterProperties;
-(void)clearFirstLineIndent;
-(void)clearFollowingIndent;
-(void)clearLeadingIndent;
-(void)clearLeftIndent;
-(void)clearRightIndent;
-(void)copyPropertiesInto:(id)arg0 ;
-(void)negateFormattingChangesWithDefaults:(id)arg0 ;
-(void)removeTabStopAddedWithPosition:(short)arg0 ;
-(void)removeTabStopDeletedPosition:(short)arg0 ;
-(void)setAnchorLock:(BOOL)arg0 ;
-(void)setBaseStyle:(id)arg0 ;
-(void)setBiDi:(BOOL)arg0 ;
-(void)setCharacterProperties:(id)arg0 ;
-(void)setContextualSpacing:(BOOL)arg0 ;
-(void)setDropCap:(struct ? )arg0 ;
-(void)setFirstLineIndent:(short)arg0 ;
-(void)setFirstLineIndentChars:(short)arg0 ;
-(void)setFollowingIndent:(short)arg0 ;
-(void)setFormattingChanged:(int)arg0 ;
-(void)setHeight:(NSInteger)arg0 ;
-(void)setHeightRule:(int)arg0 ;
-(void)setHorizontalAnchor:(int)arg0 ;
-(void)setHorizontalPosition:(NSInteger)arg0 ;
-(void)setHorizontalSpace:(NSInteger)arg0 ;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg0 ;
-(void)setJustification:(int)arg0 ;
-(void)setKeepLinesTogether:(BOOL)arg0 ;
-(void)setKeepNextParagraphTogether:(BOOL)arg0 ;
-(void)setKinsokuOff:(BOOL)arg0 ;
-(void)setLeadingIndent:(short)arg0 ;
-(void)setLeftIndent:(short)arg0 ;
-(void)setLeftIndentChars:(short)arg0 ;
-(void)setLineSpacing:(short)arg0 ;
-(void)setLineSpacingRule:(int)arg0 ;
-(void)setListIndex:(NSUInteger)arg0 ;
-(void)setListLevel:(unsigned char)arg0 ;
-(void)setOutlineLevel:(unsigned short)arg0 ;
-(void)setPageBreakBefore:(BOOL)arg0 ;
-(void)setPhysicalJustification:(int)arg0 ;
-(void)setResolveMode:(int)arg0 ;
-(void)setRightIndent:(short)arg0 ;
-(void)setRightIndentChars:(short)arg0 ;
-(void)setSpaceAfter:(unsigned short)arg0 ;
-(void)setSpaceAfterAuto:(BOOL)arg0 ;
-(void)setSpaceBefore:(unsigned short)arg0 ;
-(void)setSpaceBeforeAuto:(BOOL)arg0 ;
-(void)setSuppressAutoHyphens:(BOOL)arg0 ;
-(void)setSuppressLineNumbers:(BOOL)arg0 ;
-(void)setTabStopAddedCount:(NSUInteger)arg0 ;
-(void)setTabStopDeletedPositionCount:(NSUInteger)arg0 ;
-(void)setVerticalAnchor:(int)arg0 ;
-(void)setVerticalPosition:(NSInteger)arg0 ;
-(void)setVerticalSpace:(NSInteger)arg0 ;
-(void)setWidowControl:(BOOL)arg0 ;
-(void)setWidth:(NSInteger)arg0 ;
-(void)setWrap:(BOOL)arg0 ;
-(void)setWrapCode:(char)arg0 ;


@end


#endif