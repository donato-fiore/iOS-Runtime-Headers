// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDPARAGRAPHPROPERTIESVALUES_H
#define WDPARAGRAPHPROPERTIESVALUES_H

@class NSMutableData;

#import <Foundation/Foundation.h>

#import "WDBorder.h"
#import "WDStyle.h"
#import "WDShading.h"

@interface WDParagraphPropertiesValues : NSObject

@property BOOL anchorLock; // ivar: mAnchorLock
@property BOOL anchorLockOverridden; // ivar: mAnchorLockOverridden
@property (retain, nonatomic) WDBorder *barBorder; // ivar: _barBorder
@property BOOL barBorderOverridden; // ivar: mBarBorderOverridden
@property (retain, nonatomic) WDStyle *baseStyle; // ivar: _baseStyle
@property BOOL baseStyleOverridden; // ivar: mBaseStyleOverridden
@property (retain, nonatomic) WDBorder *betweenBorder; // ivar: _betweenBorder
@property BOOL betweenBorderOverridden; // ivar: mBetweenBorderOverridden
@property BOOL biDi; // ivar: mBiDi
@property BOOL biDiOverridden; // ivar: mBiDiOverridden
@property (retain, nonatomic) WDBorder *bottomBorder; // ivar: _bottomBorder
@property BOOL bottomBorderOverridden; // ivar: mBottomBorderOverridden
@property BOOL cachedRtl; // ivar: mCachedRtl
@property BOOL cachedRtlOverridden; // ivar: mCachedRtlOverridden
@property BOOL contextualSpacing; // ivar: mContextualSpacing
@property BOOL contextualSpacingOverridden; // ivar: mContextualSpacingOverridden
@property ? dropCap; // ivar: _dropCap
@property BOOL dropCapOverridden; // ivar: mDropCapOverridden
@property short firstLineIndent; // ivar: _firstLineIndent
@property short firstLineIndentChars; // ivar: _firstLineIndentChars
@property BOOL firstLineIndentCharsOverridden; // ivar: mFirstLineIndentCharsOverridden
@property BOOL firstLineIndentOverridden; // ivar: mFirstLineIndentOverridden
@property short followingIndent; // ivar: _followingIndent
@property BOOL followingIndentOverridden; // ivar: mFollowingIndentOverridden
@property unsigned char formattingChanged; // ivar: _formattingChanged
@property BOOL formattingChangedOverridden; // ivar: mFormattingChangedOverridden
@property unsigned short height; // ivar: _height
@property BOOL heightOverridden; // ivar: mHeightOverridden
@property unsigned char heightRule; // ivar: _heightRule
@property BOOL heightRuleOverridden; // ivar: mHeightRuleOverridden
@property unsigned char horizontalAnchor; // ivar: _horizontalAnchor
@property BOOL horizontalAnchorOverridden; // ivar: mHorizontalAnchorOverridden
@property NSInteger horizontalPosition; // ivar: _horizontalPosition
@property BOOL horizontalPositionOverridden; // ivar: mHorizontalPositionOverridden
@property NSInteger horizontalSpace; // ivar: _horizontalSpace
@property BOOL horizontalSpaceOverridden; // ivar: mHorizontalSpaceOverridden
@property unsigned short indexToAuthorIDOfFormattingChange; // ivar: _indexToAuthorIDOfFormattingChange
@property BOOL indexToAuthorIDOfFormattingChangeOverridden; // ivar: mIndexToAuthorIDOfFormattingChangeOverridden
@property unsigned char justification; // ivar: _justification
@property BOOL justificationOverridden; // ivar: mJustificationOverridden
@property BOOL keepLinesTogether; // ivar: mKeepLinesTogether
@property BOOL keepLinesTogetherOverridden; // ivar: mKeepLinesTogetherOverridden
@property BOOL keepNextParagraphTogether; // ivar: mKeepNextParagraphTogether
@property BOOL keepNextParagraphTogetherOverridden; // ivar: mKeepNextParagraphTogetherOverridden
@property BOOL kinsokuOff; // ivar: mKinsokuOff
@property BOOL kinsokuOffOverridden; // ivar: mKinsokuOffOverridden
@property short leadingIndent; // ivar: _leadingIndent
@property BOOL leadingIndentOverridden; // ivar: mLeadingIndentOverridden
@property (retain, nonatomic) WDBorder *leftBorder; // ivar: _leftBorder
@property BOOL leftBorderOverridden; // ivar: mLeftBorderOverridden
@property short leftIndent; // ivar: _leftIndent
@property short leftIndentChars; // ivar: _leftIndentChars
@property BOOL leftIndentCharsOverridden; // ivar: mLeftIndentCharsOverridden
@property BOOL leftIndentOverridden; // ivar: mLeftIndentOverridden
@property short lineSpacing; // ivar: _lineSpacing
@property BOOL lineSpacingOverridden; // ivar: mLineSpacingOverridden
@property unsigned char lineSpacingRule; // ivar: _lineSpacingRule
@property BOOL lineSpacingRuleOverridden; // ivar: mLineSpacingRuleOverridden
@property NSInteger listIndex; // ivar: _listIndex
@property BOOL listIndexOverridden; // ivar: mListIndexOverridden
@property unsigned char listLevel; // ivar: _listLevel
@property BOOL listLevelOverridden; // ivar: mListLevelOverridden
@property unsigned short outlineLevel; // ivar: _outlineLevel
@property BOOL outlineLevelOverridden; // ivar: mOutlineLevelOverridden
@property BOOL pageBreakBefore; // ivar: mPageBreakBefore
@property BOOL pageBreakBeforeOverridden; // ivar: mPageBreakBeforeOverridden
@property unsigned char physicalJustification; // ivar: _physicalJustification
@property BOOL physicalJustificationOverridden; // ivar: mPhysicalJustificationOverridden
@property (retain, nonatomic) WDBorder *rightBorder; // ivar: _rightBorder
@property BOOL rightBorderOverridden; // ivar: mRightBorderOverridden
@property short rightIndent; // ivar: _rightIndent
@property short rightIndentChars; // ivar: _rightIndentChars
@property BOOL rightIndentCharsOverridden; // ivar: mRightIndentCharsOverridden
@property BOOL rightIndentOverridden; // ivar: mRightIndentOverridden
@property (retain, nonatomic) WDShading *shading; // ivar: _shading
@property BOOL shadingOverridden; // ivar: mShadingOverridden
@property unsigned short spaceAfter; // ivar: _spaceAfter
@property BOOL spaceAfterAuto; // ivar: mSpaceAfterAuto
@property BOOL spaceAfterAutoOverridden; // ivar: mSpaceAfterAutoOverridden
@property BOOL spaceAfterOverridden; // ivar: mSpaceAfterOverridden
@property unsigned short spaceBefore; // ivar: _spaceBefore
@property BOOL spaceBeforeAuto; // ivar: mSpaceBeforeAuto
@property BOOL spaceBeforeAutoOverridden; // ivar: mSpaceBeforeAutoOverridden
@property BOOL spaceBeforeOverridden; // ivar: mSpaceBeforeOverridden
@property BOOL suppressAutoHyphens; // ivar: mSuppressAutoHyphens
@property BOOL suppressAutoHyphensOverridden; // ivar: mSuppressAutoHyphensOverridden
@property BOOL suppressLineNumbers; // ivar: mSuppressLineNumbers
@property BOOL suppressLineNumbersOverridden; // ivar: mSuppressLineNumbersOverridden
@property NSUInteger tabStopAddedCount; // ivar: _tabStopAddedCount
@property BOOL tabStopAddedCountOverridden; // ivar: mTabStopAddedCountOverridden
@property (retain, nonatomic) NSMutableData *tabStopAddedTable; // ivar: _tabStopAddedTable
@property NSUInteger tabStopDeletedCount; // ivar: _tabStopDeletedCount
@property BOOL tabStopDeletedCountOverridden; // ivar: mTabStopDeletedCountOverridden
@property (retain, nonatomic) NSMutableData *tabStopDeletedTable; // ivar: _tabStopDeletedTable
@property (retain, nonatomic) WDBorder *topBorder; // ivar: _topBorder
@property BOOL topBorderOverridden; // ivar: mTopBorderOverridden
@property unsigned char verticalAnchor; // ivar: _verticalAnchor
@property BOOL verticalAnchorOverridden; // ivar: mVerticalAnchorOverridden
@property NSInteger verticalPosition; // ivar: _verticalPosition
@property BOOL verticalPositionOverridden; // ivar: mVerticalPositionOverridden
@property NSInteger verticalSpace; // ivar: _verticalSpace
@property BOOL verticalSpaceOverridden; // ivar: mVerticalSpaceOverridden
@property BOOL widowControl; // ivar: mWidowControl
@property BOOL widowControlOverridden; // ivar: mWidowControlOverridden
@property NSInteger width; // ivar: _width
@property BOOL widthOverridden; // ivar: mWidthOverridden
@property BOOL wrap; // ivar: mWrap
@property char wrapCode; // ivar: _wrapCode
@property BOOL wrapCodeOverridden; // ivar: mWrapCodeOverridden
@property BOOL wrapOverridden; // ivar: mWrapOverridden


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif