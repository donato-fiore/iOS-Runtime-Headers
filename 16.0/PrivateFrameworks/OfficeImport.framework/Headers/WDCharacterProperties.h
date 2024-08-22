// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDCHARACTERPROPERTIES_H
#define WDCHARACTERPROPERTIES_H


#import <Foundation/Foundation.h>

#import "WDCharacterPropertiesValues.h"
#import "WDDocument.h"

@interface WDCharacterProperties : NSObject {
    BOOL mOriginal;
    BOOL mTracked;
    BOOL mResolved;
    WDCharacterPropertiesValues *mOriginalProperties;
    WDCharacterPropertiesValues *mTrackedProperties;
}


@property (readonly, weak) WDDocument *document; // ivar: mDocument


+(SEL)fontOverriddenSelectorForFontType:(int)arg0 ;
+(SEL)fontSelectorForFontType:(int)arg0 ;
+(SEL)setFontSelectorForFontType:(int)arg0 ;
-(BOOL)compressHorizontalInVertical;
-(BOOL)deletionDifferentFrom:(id)arg0 ;
-(BOOL)deletionDifferentFrom:(id)arg0 mode:(int)arg1 ;
-(BOOL)editDifferentFrom:(id)arg0 ;
-(BOOL)editDifferentFrom:(id)arg0 mode:(int)arg1 ;
-(BOOL)embeddedObject;
-(BOOL)formattingChangedDifferentFrom:(id)arg0 ;
-(BOOL)formattingChangedDifferentFrom:(id)arg0 mode:(int)arg1 ;
-(BOOL)horizontalInVertical;
-(BOOL)isAnythingOverridden;
-(BOOL)isAnythingOverriddenIn:(id)arg0 ;
-(BOOL)isBaseStyleOverridden;
-(BOOL)isBoldForBiTextOverridden;
-(BOOL)isBoldOverridden;
-(BOOL)isBooleanProbablyDifferent:(unsigned char)arg0 than:(unsigned char)arg1 ;
-(BOOL)isBorderOverridden;
-(BOOL)isBracketTwoLinesInOneOverridden;
-(BOOL)isCapsOverridden;
-(BOOL)isCharPositionOfPictureBulletInBookmarkOverridden;
-(BOOL)isColorAuto;
-(BOOL)isColorAutoOverridden;
-(BOOL)isColorOverridden;
-(BOOL)isCompressHorizontalInVerticalOverridden;
-(BOOL)isDeletedOverridden;
-(BOOL)isDeletionDateOverridden;
-(BOOL)isDoubleStrikeThroughOverridden;
-(BOOL)isEditDateOverridden;
-(BOOL)isEditedOverridden;
-(BOOL)isEmbeddedObjectOverridden;
-(BOOL)isEmbossedOverridden;
-(BOOL)isEmphasisMarkOverridden;
-(BOOL)isExtendedFontOverridden;
-(BOOL)isFarEastFontOverridden;
-(BOOL)isFontHintOverridden;
-(BOOL)isFontOverridden;
-(BOOL)isFontOverriddenForFontType:(int)arg0 ;
-(BOOL)isFontSizeForBiTextOverridden;
-(BOOL)isFontSizeOverridden;
-(BOOL)isFormattingChangedOverridden;
-(BOOL)isHiddenOverridden;
-(BOOL)isHighlight;
-(BOOL)isHighlightColorOverridden;
-(BOOL)isHighlightOverridden;
-(BOOL)isHorizontalInVerticalOverridden;
-(BOOL)isImprintOverridden;
-(BOOL)isIndexToAuthorIDOfDeletionOverridden;
-(BOOL)isIndexToAuthorIDOfEditOverridden;
-(BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
-(BOOL)isItalicForBiTextOverridden;
-(BOOL)isItalicOverridden;
-(BOOL)isKerningOverridden;
-(BOOL)isLanguageForBiTextOverridden;
-(BOOL)isLanguageForDefaultTextOverridden;
-(BOOL)isLanguageForFarEastOverridden;
-(BOOL)isLigatureOverridden;
-(BOOL)isListCharacterPictureBullet;
-(BOOL)isListCharacterPictureBulletOverridden;
-(BOOL)isLowerCase;
-(BOOL)isLowerCaseOverridden;
-(BOOL)isObjectIDForOle2Overridden;
-(BOOL)isOffsetToPictureDataOverridden;
-(BOOL)isOle2Overridden;
-(BOOL)isOutline2010WidthOverridden;
-(BOOL)isOutlineColorOverridden;
-(BOOL)isOutlineOverridden;
-(BOOL)isPositionOverridden;
-(BOOL)isReflectionOverridden;
-(BOOL)isRightToLeftOverridden;
-(BOOL)isShadingOverridden;
-(BOOL)isShadow2010OpacityOverridden;
-(BOOL)isShadow2010Overridden;
-(BOOL)isShadowOverridden;
-(BOOL)isSmallCapsOverridden;
-(BOOL)isSpacingOverridden;
-(BOOL)isSpecialCharacter;
-(BOOL)isSpecialCharacterOverridden;
-(BOOL)isStrikeThroughOverridden;
-(BOOL)isSymbolCharacterOverridden;
-(BOOL)isSymbolFontOverridden;
-(BOOL)isTextScaleOverridden;
-(BOOL)isTwoLinesInOneOverridden;
-(BOOL)isUnderlineColorOverridden;
-(BOOL)isUnderlineOverridden;
-(BOOL)isUseCsFontOverridden;
-(BOOL)isVerticalAlignOverridden;
-(BOOL)ole2;
-(BOOL)twoLinesInOne;
-(float)outline2010Width;
-(float)shadow2010Opacity;
-(id)baseStyle;
-(id)border;
-(id)color;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deletionDate;
-(id)description;
-(id)editDate;
-(id)extendedFont;
-(id)farEastFont;
-(id)font;
-(id)fontForFontType:(int)arg0 ;
-(id)initWithDocument:(id)arg0 ;
-(id)mutableBorder;
-(id)mutableShading;
-(id)outlineColor;
-(id)reflection;
-(id)shading;
-(id)shadow2010;
-(id)symbolFont;
-(id)underlineColor;
-(int)bold;
-(int)boldForBiText;
-(int)bracketTwoLinesInOne;
-(int)caps;
-(int)charPositionOfPictureBulletInBookmark;
-(int)deleted;
-(int)doubleStrikeThrough;
-(int)edited;
-(int)embossed;
-(int)emphasisMark;
-(int)fontHint;
-(int)formattingChanged;
-(int)hidden;
-(int)highlightColor;
-(int)imprint;
-(int)italic;
-(int)italicForBiText;
-(int)languageForBiText;
-(int)languageForDefaultText;
-(int)languageForFarEast;
-(int)ligature;
-(int)objectIDForOle2;
-(int)offsetToPictureData;
-(int)outline;
-(int)resolveMode;
-(int)reverseBooleanProperty:(int)arg0 ;
-(int)rightToLeft;
-(int)shadow;
-(int)smallCaps;
-(int)strikeThrough;
-(int)underline;
-(int)useCsFont;
-(int)verticalAlign;
-(short)position;
-(short)spacing;
-(unsigned short)fontSize;
-(unsigned short)fontSizeForBiText;
-(unsigned short)indexToAuthorIDOfDeletion;
-(unsigned short)indexToAuthorIDOfEdit;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(unsigned short)kerning;
-(unsigned short)symbolCharacter;
-(unsigned short)textScale;
-(void)applyPropertiesFrom:(id)arg0 ifOverriddenIn:(id)arg1 ;
-(void)clearBaseStyle;
-(void)copyPropertiesInto:(id)arg0 ;
-(void)negateFormattingChangesWithDefaults:(id)arg0 ;
-(void)removeEmptyFormattingChanges:(id)arg0 ;
-(void)setBaseStyle:(id)arg0 ;
-(void)setBold:(int)arg0 ;
-(void)setBoldForBiText:(int)arg0 ;
-(void)setBracketTwoLinesInOne:(int)arg0 ;
-(void)setCaps:(int)arg0 ;
-(void)setCharPositionOfPictureBulletInBookmark:(int)arg0 ;
-(void)setColor:(id)arg0 ;
-(void)setColorAuto:(BOOL)arg0 ;
-(void)setCompressHorizontalInVertical:(BOOL)arg0 ;
-(void)setDeleted:(int)arg0 ;
-(void)setDeletionDate:(id)arg0 ;
-(void)setDoubleStrikeThrough:(int)arg0 ;
-(void)setEditDate:(id)arg0 ;
-(void)setEdited:(int)arg0 ;
-(void)setEmbeddedObject:(BOOL)arg0 ;
-(void)setEmbossed:(int)arg0 ;
-(void)setEmphasisMark:(int)arg0 ;
-(void)setExtendedFont:(id)arg0 ;
-(void)setFarEastFont:(id)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setFont:(id)arg0 forFontType:(int)arg1 ;
-(void)setFontHint:(int)arg0 ;
-(void)setFontSize:(unsigned short)arg0 ;
-(void)setFontSizeForBiText:(unsigned short)arg0 ;
-(void)setFormattingChanged:(int)arg0 ;
-(void)setHidden:(int)arg0 ;
-(void)setHighlight:(BOOL)arg0 ;
-(void)setHighlightColor:(int)arg0 ;
-(void)setHorizontalInVertical:(BOOL)arg0 ;
-(void)setImprint:(int)arg0 ;
-(void)setIndexToAuthorIDOfDeletion:(unsigned short)arg0 ;
-(void)setIndexToAuthorIDOfEdit:(unsigned short)arg0 ;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg0 ;
-(void)setItalic:(int)arg0 ;
-(void)setItalicForBiText:(int)arg0 ;
-(void)setKerning:(unsigned short)arg0 ;
-(void)setLanguageForBiText:(int)arg0 ;
-(void)setLanguageForDefaultText:(int)arg0 ;
-(void)setLanguageForFarEast:(int)arg0 ;
-(void)setLigature:(int)arg0 ;
-(void)setListCharacterPictureBullet:(BOOL)arg0 ;
-(void)setLowerCase:(BOOL)arg0 ;
-(void)setObjectIDForOle2:(int)arg0 ;
-(void)setOffsetToPictureData:(int)arg0 ;
-(void)setOle2:(BOOL)arg0 ;
-(void)setOutline2010Width:(float)arg0 ;
-(void)setOutline:(int)arg0 ;
-(void)setOutlineColor:(id)arg0 ;
-(void)setPosition:(short)arg0 ;
-(void)setReflection:(id)arg0 ;
-(void)setResolveMode:(int)arg0 ;
-(void)setRightToLeft:(int)arg0 ;
-(void)setShadow2010:(id)arg0 ;
-(void)setShadow2010Opacity:(float)arg0 ;
-(void)setShadow:(int)arg0 ;
-(void)setSmallCaps:(int)arg0 ;
-(void)setSpacing:(short)arg0 ;
-(void)setSpecialCharacter:(BOOL)arg0 ;
-(void)setStrikeThrough:(int)arg0 ;
-(void)setSymbolCharacter:(unsigned short)arg0 ;
-(void)setSymbolFont:(id)arg0 ;
-(void)setTextScale:(unsigned short)arg0 ;
-(void)setTwoLinesInOne:(BOOL)arg0 ;
-(void)setUnderline:(int)arg0 ;
-(void)setUnderlineColor:(id)arg0 ;
-(void)setUseCsFont:(int)arg0 ;
-(void)setVerticalAlign:(int)arg0 ;


@end


#endif