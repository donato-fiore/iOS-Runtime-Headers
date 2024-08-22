// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDTABLEPROPERTIESVALUES_H
#define WDTABLEPROPERTIESVALUES_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "WDStyle.h"
#import "WDBorder.h"
#import "WDShading.h"

@interface WDTablePropertiesValues : NSObject

@property int alignment; // ivar: _alignment
@property BOOL alignmentOverridden; // ivar: mAlignmentOverridden
@property (weak, nonatomic) WDStyle *baseStyle; // ivar: _baseStyle
@property BOOL baseStyleOverridden; // ivar: mBaseStyleOverridden
@property BOOL biDirectional; // ivar: _biDirectional
@property BOOL biDirectionalOverridden; // ivar: mBiDirectionalOverridden
@property (retain, nonatomic) WDBorder *bottomBorder; // ivar: _bottomBorder
@property BOOL bottomBorderOverridden; // ivar: mBottomBorderOverridden
@property NSInteger bottomDistanceFromText; // ivar: _bottomDistanceFromText
@property BOOL bottomDistanceFromTextOverridden; // ivar: mBottomDistanceFromTextOverridden
@property short cellSpacing; // ivar: _cellSpacing
@property BOOL cellSpacingOverridden; // ivar: mCellSpacingOverridden
@property int cellSpacingType; // ivar: _cellSpacingType
@property BOOL cellSpacingTypeOverridden; // ivar: mCellSpacingTypeOverridden
@property int deleted; // ivar: _deleted
@property BOOL deletedOverridden; // ivar: mDeletedOverridden
@property (retain, nonatomic) NSDate *deletionDate; // ivar: _deletionDate
@property BOOL deletionDateOverridden; // ivar: mDeletionDateOverridden
@property (retain, nonatomic) NSDate *editDate; // ivar: _editDate
@property BOOL editDateOverridden; // ivar: mEditDateOverridden
@property int edited; // ivar: _edited
@property BOOL editedOverridden; // ivar: mEditedOverridden
@property (retain, nonatomic) NSDate *formattingChangeDate; // ivar: _formattingChangeDate
@property BOOL formattingChangeDateOverridden; // ivar: mFormattingChangeDateOverridden
@property int formattingChanged; // ivar: _formattingChanged
@property BOOL formattingChangedOverridden; // ivar: mFormattingChangedOverridden
@property int horizontalAnchor; // ivar: _horizontalAnchor
@property BOOL horizontalAnchorOverridden; // ivar: mHorizontalAnchorOverridden
@property NSInteger horizontalPosition; // ivar: _horizontalPosition
@property BOOL horizontalPositionOverridden; // ivar: mHorizontalPositionOverridden
@property short indent; // ivar: _indent
@property BOOL indentOverridden; // ivar: mIndentOverridden
@property int indentType; // ivar: _indentType
@property BOOL indentTypeOverridden; // ivar: mIndentTypeOverridden
@property unsigned short indexToAuthorIDOfDeletion; // ivar: _indexToAuthorIDOfDeletion
@property BOOL indexToAuthorIDOfDeletionOverridden; // ivar: mIndexToAuthorIDOfDeletionOverridden
@property unsigned short indexToAuthorIDOfEdit; // ivar: _indexToAuthorIDOfEdit
@property BOOL indexToAuthorIDOfEditOverridden; // ivar: mIndexToAuthorIDOfEditOverridden
@property unsigned short indexToAuthorIDOfFormattingChange; // ivar: _indexToAuthorIDOfFormattingChange
@property BOOL indexToAuthorIDOfFormattingChangeOverridden; // ivar: mIndexToAuthorIDOfFormattingChangeOverridden
@property (retain, nonatomic) WDBorder *insideHorizontalBorder; // ivar: _insideHorizontalBorder
@property BOOL insideHorizontalBorderOverridden; // ivar: mInsideHorizontalBorderOverridden
@property (retain, nonatomic) WDBorder *insideVerticalBorder; // ivar: _insideVerticalBorder
@property BOOL insideVerticalBorderOverridden; // ivar: mInsideVerticalBorderOverridden
@property int justification; // ivar: _justification
@property BOOL justificationOverridden; // ivar: mJustificationOverridden
@property (retain, nonatomic) WDBorder *leftBorder; // ivar: _leftBorder
@property BOOL leftBorderOverridden; // ivar: mLeftBorderOverridden
@property NSInteger leftDistanceFromText; // ivar: _leftDistanceFromText
@property BOOL leftDistanceFromTextOverridden; // ivar: mLeftDistanceFromTextOverridden
@property unsigned short look; // ivar: _look
@property BOOL lookOverridden; // ivar: mLookOverridden
@property (retain, nonatomic) WDBorder *rightBorder; // ivar: _rightBorder
@property BOOL rightBorderOverridden; // ivar: mRightBorderOverridden
@property NSInteger rightDistanceFromText; // ivar: _rightDistanceFromText
@property BOOL rightDistanceFromTextOverridden; // ivar: mRightDistanceFromTextOverridden
@property (retain, nonatomic) WDShading *shading; // ivar: _shading
@property BOOL shadingOverridden; // ivar: mShadingOverridden
@property (retain, nonatomic) WDBorder *topBorder; // ivar: _topBorder
@property BOOL topBorderOverridden; // ivar: mTopBorderOverridden
@property NSInteger topDistanceFromText; // ivar: _topDistanceFromText
@property BOOL topDistanceFromTextOverridden; // ivar: mTopDistanceFromTextOverridden
@property int verticalAnchor; // ivar: _verticalAnchor
@property BOOL verticalAnchorOverridden; // ivar: mVerticalAnchorOverridden
@property NSInteger verticalPosition; // ivar: _verticalPosition
@property BOOL verticalPositionOverridden; // ivar: mVerticalPositionOverridden
@property NSInteger width; // ivar: _width
@property BOOL widthOverridden; // ivar: mWidthOverridden
@property int widthType; // ivar: _widthType
@property BOOL widthTypeOverridden; // ivar: mWidthTypeOverridden


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif