// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACCORRECTIONSCANDIDATEVIEWSTYLE_H
#define CACCORRECTIONSCANDIDATEVIEWSTYLE_H

@class UIColor, UIFont, NSString, UIImage;
@protocol TUICandidateViewStyle;

#import <Foundation/Foundation.h>


@interface CACCorrectionsCandidateViewStyle : NSObject <TUICandidateViewStyle>



@property (nonatomic) BOOL allowCandidateGridExpanding; // ivar: _allowCandidateGridExpanding
@property (nonatomic) NSInteger alternativeTextAlignment; // ivar: _alternativeTextAlignment
@property (retain, nonatomic) UIColor *alternativeTextColor; // ivar: _alternativeTextColor
@property (retain, nonatomic) UIFont *alternativeTextFont; // ivar: _alternativeTextFont
@property (retain, nonatomic) UIFont *annotationTextFont; // ivar: _annotationTextFont
@property (retain, nonatomic) UIColor *arrowButtonBackgroundColor; // ivar: _arrowButtonBackgroundColor
@property (nonatomic) CGFloat arrowButtonHeight; // ivar: _arrowButtonHeight
@property (copy, nonatomic) NSString *arrowButtonImageName; // ivar: _arrowButtonImageName
@property (nonatomic) UIEdgeInsets arrowButtonPadding; // ivar: _arrowButtonPadding
@property (retain, nonatomic) UIImage *arrowButtonSeparatorImage; // ivar: _arrowButtonSeparatorImage
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) CGFloat backgroundOpacity; // ivar: _backgroundOpacity
@property (retain, nonatomic) UIFont *candidateFont; // ivar: _candidateFont
@property (retain, nonatomic) UIColor *candidateNumberColor; // ivar: _candidateNumberColor
@property (retain, nonatomic) UIFont *candidateNumberFont; // ivar: _candidateNumberFont
@property (retain, nonatomic) UIColor *cellBackgroundColor; // ivar: _cellBackgroundColor
@property (retain, nonatomic) UIImage *cellBackgroundImage; // ivar: _cellBackgroundImage
@property (retain, nonatomic) UIImage *cellSeparatorImage; // ivar: _cellSeparatorImage
@property (nonatomic) NSInteger cellTextAlignment; // ivar: _cellTextAlignment
@property (nonatomic) NSUInteger columnsCount; // ivar: _columnsCount
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) BOOL darkBackdrop; // ivar: _darkBackdrop
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableSwitchingSortingMethodByTabKey; // ivar: _disableSwitchingSortingMethodByTabKey
@property (nonatomic) BOOL doNotClipToBounds; // ivar: _doNotClipToBounds
@property (nonatomic) BOOL dontSelectLastItemByBackwardMoving; // ivar: _dontSelectLastItemByBackwardMoving
@property (nonatomic) UIEdgeInsets extraCellPadding; // ivar: _extraCellPadding
@property (nonatomic) BOOL fillGridWithLines; // ivar: _fillGridWithLines
@property (nonatomic) CGFloat foregroundOpacity; // ivar: _foregroundOpacity
@property (retain, nonatomic) UIColor *gridBackgroundColor; // ivar: _gridBackgroundColor
@property (nonatomic) CGPoint gridLineOffset; // ivar: _gridLineOffset
@property (nonatomic) UIEdgeInsets gridLinePadding; // ivar: _gridLinePadding
@property (nonatomic) NSUInteger gridMaskedCorners; // ivar: _gridMaskedCorners
@property (nonatomic) UIEdgeInsets gridPadding; // ivar: _gridPadding
@property (retain, nonatomic) UIColor *groupHeaderBackgroundColor; // ivar: _groupHeaderBackgroundColor
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesPartialCandidates; // ivar: _hidesPartialCandidates
@property (retain, nonatomic) UIColor *highlightedAlternativeTextColor; // ivar: _highlightedAlternativeTextColor
@property (retain, nonatomic) UIColor *highlightedBackgroundColor; // ivar: _highlightedBackgroundColor
@property (retain, nonatomic) UIColor *highlightedCandidateNumberColor; // ivar: _highlightedCandidateNumberColor
@property (retain, nonatomic) UIImage *highlightedCellBackgroundImage; // ivar: _highlightedCellBackgroundImage
@property (retain, nonatomic) UIColor *highlightedRowBackgroundColor; // ivar: _highlightedRowBackgroundColor
@property (retain, nonatomic) UIColor *highlightedTextColor; // ivar: _highlightedTextColor
@property (nonatomic) NSInteger layoutOrientation; // ivar: _layoutOrientation
@property (retain, nonatomic) UIImage *leftEdgeMaskImage; // ivar: _leftEdgeMaskImage
@property (retain, nonatomic) UIImage *leftEdgeSeparatorImage; // ivar: _leftEdgeSeparatorImage
@property (retain, nonatomic) UIColor *lineColor; // ivar: _lineColor
@property (nonatomic) NSUInteger maskedCorners; // ivar: _maskedCorners
@property (nonatomic) NSUInteger maxNumberOfProactiveCells; // ivar: _maxNumberOfProactiveCells
@property (nonatomic) CGFloat maximumIconWidth; // ivar: _maximumIconWidth
@property (nonatomic) CGFloat minimumCellPadding; // ivar: _minimumCellPadding
@property (nonatomic) CGFloat minimumCellWidth; // ivar: _minimumCellWidth
@property (nonatomic) NSInteger minimumNumberOfCandidates; // ivar: _minimumNumberOfCandidates
@property (retain, nonatomic) UIImage *rightEdgeMaskImage; // ivar: _rightEdgeMaskImage
@property (retain, nonatomic) UIImage *rightEdgeSeparatorImage; // ivar: _rightEdgeSeparatorImage
@property (nonatomic) CGFloat rowHeight; // ivar: _rowHeight
@property (nonatomic) BOOL scrollDisabled; // ivar: _scrollDisabled
@property (nonatomic) BOOL showExtraLineBeforeFirstRow; // ivar: _showExtraLineBeforeFirstRow
@property (nonatomic) BOOL showOneMoreCandidate; // ivar: _showOneMoreCandidate
@property (nonatomic) BOOL showsIndex; // ivar: _showsIndex
@property (nonatomic) CGFloat singleSlottedCellMargin; // ivar: _singleSlottedCellMargin
@property (nonatomic) BOOL skipInlineCandidate; // ivar: _skipInlineCandidate
@property (retain, nonatomic) UIImage *slottedCellSeparatorImage; // ivar: _slottedCellSeparatorImage
@property (retain, nonatomic) UIColor *sortControlBackgroundColor; // ivar: _sortControlBackgroundColor
@property (retain, nonatomic) UIColor *sortControlColor; // ivar: _sortControlColor
@property (retain, nonatomic) UIFont *sortControlFont; // ivar: _sortControlFont
@property (nonatomic) UIEdgeInsets sortControlPadding; // ivar: _sortControlPadding
@property (readonly) Class superclass;
@property (retain, nonatomic) UIFont *supplementalLexiconCandidateFont; // ivar: _supplementalLexiconCandidateFont
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (retain, nonatomic) UIColor *transliterationCandidateBackgroundColor; // ivar: _transliterationCandidateBackgroundColor
@property (retain, nonatomic) UIImage *transliterationCandidateBackgroundImage; // ivar: _transliterationCandidateBackgroundImage


+(id)cacDarkStyle;
+(id)cacLightStyle;
+(id)darkKeyboardStyleForDisambiguation;
+(id)defaultDarkKeyboardStyle;
+(id)defaultLightKeyboardStyle;
+(id)lightKeyboardStyleForDisambiguation;
+(id)lightTVStyle;
+(id)onePixelImageWithColor:(id)arg0 ;


@end


#endif