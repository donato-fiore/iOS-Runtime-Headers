// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDCHARACTERPROPERTIESVALUES_H
#define WDCHARACTERPROPERTIESVALUES_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "WDStyle.h"
#import "WDBorder.h"
#import "OITSUColor.h"
#import "WDFont.h"
#import "OADReflectionEffect.h"
#import "WDShading.h"
#import "OADShadowEffect.h"

@interface WDCharacterPropertiesValues : NSObject

@property (retain, nonatomic) WDStyle *baseStyle; // ivar: _baseStyle
@property BOOL baseStyleOverridden; // ivar: mBaseStyleOverridden
@property unsigned char bold; // ivar: _bold
@property unsigned char boldForBiText; // ivar: _boldForBiText
@property BOOL boldForBiTextOverridden; // ivar: mBoldForBiTextOverridden
@property BOOL boldOverridden; // ivar: mBoldOverridden
@property (retain, nonatomic) WDBorder *border; // ivar: _border
@property BOOL borderOverridden; // ivar: mBorderOverridden
@property unsigned char bracketTwoLinesInOne; // ivar: _bracketTwoLinesInOne
@property BOOL bracketTwoLinesInOneOverridden; // ivar: mBracketTwoLinesInOneOverridden
@property unsigned char caps; // ivar: _caps
@property BOOL capsOverridden; // ivar: mCapsOverridden
@property int charPositionOfPictureBulletInBookmark; // ivar: _charPositionOfPictureBulletInBookmark
@property BOOL charPositionOfPictureBulletInBookmarkOverridden; // ivar: mCharPositionOfPictureBulletInBookmarkOverridden
@property (retain, nonatomic) OITSUColor *color; // ivar: _color
@property BOOL colorAuto; // ivar: mColorAuto
@property BOOL colorAutoOverridden; // ivar: mColorAutoOverridden
@property BOOL colorOverridden; // ivar: mColorOverridden
@property BOOL compressHorizontalInVertical; // ivar: mCompressHorizontalInVertical
@property BOOL compressHorizontalInVerticalOverridden; // ivar: mCompressHorizontalInVerticalOverridden
@property unsigned char deleted; // ivar: _deleted
@property BOOL deletedOverridden; // ivar: mDeletedOverridden
@property (retain, nonatomic) NSDate *deletionDate; // ivar: _deletionDate
@property BOOL deletionDateOverridden; // ivar: mDeletionDateOverridden
@property unsigned char doubleStrikeThrough; // ivar: _doubleStrikeThrough
@property BOOL doubleStrikeThroughOverridden; // ivar: mDoubleStrikeThroughOverridden
@property (retain, nonatomic) NSDate *editDate; // ivar: _editDate
@property BOOL editDateOverridden; // ivar: mEditDateOverridden
@property unsigned char edited; // ivar: _edited
@property BOOL editedOverridden; // ivar: mEditedOverridden
@property BOOL embeddedObject; // ivar: mEmbeddedObject
@property BOOL embeddedObjectOverridden; // ivar: mEmbeddedObjectOverridden
@property unsigned char embossed; // ivar: _embossed
@property BOOL embossedOverridden; // ivar: mEmbossedOverridden
@property int emphasisMark; // ivar: _emphasisMark
@property BOOL emphasisMarkOverridden; // ivar: mEmphasisMarkOverridden
@property (retain, nonatomic) WDFont *extendedFont; // ivar: _extendedFont
@property BOOL extendedFontOverridden; // ivar: mExtendedFontOverridden
@property (retain, nonatomic) WDFont *farEastFont; // ivar: _farEastFont
@property BOOL farEastFontOverridden; // ivar: mFarEastFontOverridden
@property (retain, nonatomic) WDFont *font; // ivar: _font
@property int fontHint; // ivar: _fontHint
@property BOOL fontHintOverridden; // ivar: mFontHintOverridden
@property BOOL fontOverridden; // ivar: mFontOverridden
@property unsigned short fontSize; // ivar: _fontSize
@property unsigned short fontSizeForBiText; // ivar: _fontSizeForBiText
@property BOOL fontSizeForBiTextOverridden; // ivar: mFontSizeForBiTextOverridden
@property BOOL fontSizeOverridden; // ivar: mFontSizeOverridden
@property BOOL formattingChanged; // ivar: _formattingChanged
@property BOOL formattingChangedOverridden; // ivar: mFormattingChangedOverridden
@property unsigned char hidden; // ivar: _hidden
@property BOOL hiddenOverridden; // ivar: mHiddenOverridden
@property BOOL highlight; // ivar: mHighlight
@property unsigned char highlightColor; // ivar: _highlightColor
@property BOOL highlightColorOverridden; // ivar: mHighlightColorOverridden
@property BOOL highlightOverridden; // ivar: mHighlightOverridden
@property BOOL horizontalInVertical; // ivar: mHorizontalInVertical
@property BOOL horizontalInVerticalOverridden; // ivar: mHorizontalInVerticalOverridden
@property unsigned char imprint; // ivar: _imprint
@property BOOL imprintOverridden; // ivar: mImprintOverridden
@property unsigned short indexToAuthorIDOfDeletion; // ivar: _indexToAuthorIDOfDeletion
@property BOOL indexToAuthorIDOfDeletionOverridden; // ivar: mIndexToAuthorIDOfDeletionOverridden
@property unsigned short indexToAuthorIDOfEdit; // ivar: _indexToAuthorIDOfEdit
@property BOOL indexToAuthorIDOfEditOverridden; // ivar: mIndexToAuthorIDOfEditOverridden
@property unsigned short indexToAuthorIDOfFormattingChange; // ivar: _indexToAuthorIDOfFormattingChange
@property BOOL indexToAuthorIDOfFormattingChangeOverridden; // ivar: mIndexToAuthorIDOfFormattingChangeOverridden
@property unsigned char italic; // ivar: _italic
@property unsigned char italicForBiText; // ivar: _italicForBiText
@property BOOL italicForBiTextOverridden; // ivar: mItalicForBiTextOverridden
@property BOOL italicOverridden; // ivar: mItalicOverridden
@property unsigned short kerning; // ivar: _kerning
@property BOOL kerningOverridden; // ivar: mKerningOverridden
@property int languageForBiText; // ivar: _languageForBiText
@property BOOL languageForBiTextOverridden; // ivar: mLanguageForBiTextOverridden
@property int languageForDefaultText; // ivar: _languageForDefaultText
@property BOOL languageForDefaultTextOverridden; // ivar: mLanguageForDefaultTextOverridden
@property int languageForFarEast; // ivar: _languageForFarEast
@property BOOL languageForFarEastOverridden; // ivar: mLanguageForFarEastOverridden
@property unsigned char ligature; // ivar: _ligature
@property BOOL ligatureOverridden; // ivar: mLigatureOverridden
@property BOOL listCharacterPictureBullet; // ivar: mListCharacterPictureBullet
@property BOOL listCharacterPictureBulletOverridden; // ivar: mListCharacterPictureBulletOverridden
@property BOOL lowerCase; // ivar: mLowerCase
@property BOOL lowerCaseOverridden; // ivar: mLowerCaseOverridden
@property int objectIDForOle2; // ivar: _objectIDForOle2
@property BOOL objectIDForOle2Overridden; // ivar: mObjectIDForOle2Overridden
@property int offsetToPictureData; // ivar: _offsetToPictureData
@property BOOL offsetToPictureDataOverridden; // ivar: mOffsetToPictureDataOverridden
@property BOOL ole2; // ivar: mOle2
@property BOOL ole2Overridden; // ivar: mOle2Overridden
@property unsigned char outline; // ivar: _outline
@property float outline2010Width; // ivar: _outline2010Width
@property BOOL outline2010WidthOverridden; // ivar: mOutline2010WidthOverridden
@property (retain, nonatomic) OITSUColor *outlineColor; // ivar: _outlineColor
@property BOOL outlineColorOverridden; // ivar: mOutlineColorOverridden
@property BOOL outlineOverridden; // ivar: mOutlineOverridden
@property short position; // ivar: _position
@property BOOL positionOverridden; // ivar: mPositionOverridden
@property (retain, nonatomic) OADReflectionEffect *reflection; // ivar: _reflection
@property BOOL reflectionOverridden; // ivar: mReflectionOverridden
@property unsigned char rightToLeft; // ivar: _rightToLeft
@property BOOL rightToLeftOverridden; // ivar: mRightToLeftOverridden
@property (retain, nonatomic) WDShading *shading; // ivar: _shading
@property BOOL shadingOverridden; // ivar: mShadingOverridden
@property unsigned char shadow; // ivar: _shadow
@property (retain, nonatomic) OADShadowEffect *shadow2010; // ivar: _shadow2010
@property float shadow2010Opacity; // ivar: _shadow2010Opacity
@property BOOL shadow2010OpacityOverridden; // ivar: mShadow2010OpacityOverridden
@property BOOL shadow2010Overridden; // ivar: mShadow2010Overridden
@property BOOL shadowOverridden; // ivar: mShadowOverridden
@property unsigned char smallCaps; // ivar: _smallCaps
@property BOOL smallCapsOverridden; // ivar: mSmallCapsOverridden
@property short spacing; // ivar: _spacing
@property BOOL spacingOverridden; // ivar: mSpacingOverridden
@property BOOL specialCharacter; // ivar: mSpecialCharacter
@property BOOL specialCharacterOverridden; // ivar: mSpecialCharacterOverridden
@property unsigned char strikeThrough; // ivar: _strikeThrough
@property BOOL strikeThroughOverridden; // ivar: mStrikeThroughOverridden
@property unsigned short symbolCharacter; // ivar: _symbolCharacter
@property BOOL symbolCharacterOverridden; // ivar: mSymbolCharacterOverridden
@property (retain, nonatomic) WDFont *symbolFont; // ivar: _symbolFont
@property BOOL symbolFontOverridden; // ivar: mSymbolFontOverridden
@property unsigned short textScale; // ivar: _textScale
@property BOOL textScaleOverridden; // ivar: mTextScaleOverridden
@property BOOL twoLinesInOne; // ivar: mTwoLinesInOne
@property BOOL twoLinesInOneOverridden; // ivar: mTwoLinesInOneOverridden
@property unsigned char underline; // ivar: _underline
@property (retain, nonatomic) OITSUColor *underlineColor; // ivar: _underlineColor
@property BOOL underlineColorOverridden; // ivar: mUnderlineColorOverridden
@property BOOL underlineOverridden; // ivar: mUnderlineOverridden
@property unsigned char useCsFont; // ivar: _useCsFont
@property BOOL useCsFontOverridden; // ivar: mUseCsFontOverridden
@property unsigned char verticalAlign; // ivar: _verticalAlign
@property BOOL verticalAlignOverridden; // ivar: mVerticalAlignOverridden


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif