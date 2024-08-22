// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTCONFIGURATION_H
#define TSTCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface TSTConfiguration : NSObject

@property (nonatomic) BOOL allowFreeformFormulaText; // ivar: mAllowFreeformFormulaText
@property (nonatomic) BOOL allowHorizontalAutoresize; // ivar: mAllowHorizontalAutoresize
@property (nonatomic) BOOL allowWhitespaceInFormulas; // ivar: mAllowWhitespaceInFormulas
@property (nonatomic) BOOL allowsFullyFilteredTables; // ivar: _allowsFullyFilteredTables
@property (nonatomic) BOOL arrowKeyAtEdgeWhileEditingNavigates; // ivar: mArrowKeyAtEdgeWhileEditingNavigates
@property (nonatomic) BOOL arrowKeysNavigateWhenEditingBeganByTyping; // ivar: mArrowKeysNavigateWhenEditingBeganByTyping
@property (nonatomic) BOOL arrowKeysWrap; // ivar: mArrowKeysWrap
@property (nonatomic) BOOL backTabWraps; // ivar: mBackTabWraps
@property (nonatomic) BOOL beginEditingOnSingleTap; // ivar: mBeginEditingOnSingleTap
@property (nonatomic) BOOL cellEditorsCanScrollToNonLocalTableSelection; // ivar: _cellEditorsCanScrollToNonLocalTableSelection
@property (nonatomic) BOOL cornersCanDragResize; // ivar: mCornersCanDragResize
@property (nonatomic) BOOL createLargeDefaultTables; // ivar: mCreateLargeDefaultTables
@property (nonatomic) BOOL disableImplicitNaming; // ivar: _disableImplicitNaming
@property (nonatomic) BOOL dragByHandleOnly; // ivar: mDragByHandleOnly
@property (nonatomic) BOOL exportPermanentHidingState; // ivar: mExportPermanentHidingState
@property (nonatomic) BOOL exportsCellAnnotations; // ivar: mExportsCellAnnotations
@property (nonatomic) BOOL exportsCellComments; // ivar: mExportsCellComments
@property (nonatomic) BOOL formulaCellEditorSupportsTextTokenEditor; // ivar: _formulaCellEditorSupportsTextTokenEditor
@property (nonatomic) BOOL formulaEditorEvaluatesFormulas; // ivar: _formulaEditorEvaluatesFormulas
@property (nonatomic) BOOL formulaEqualsTokenIsSelectable; // ivar: mFormulaEqualsTokenIsSelectable
@property (nonatomic) BOOL hasLargerFonts; // ivar: mHasLargerFonts
@property (nonatomic) BOOL headersFrozenByDefault; // ivar: mHeadersFrozenByDefault
@property (nonatomic) unsigned int maxNumberOfColumns; // ivar: mMaxNumberOfColumns
@property (nonatomic) unsigned int maxNumberOfPopulatedCells; // ivar: mMaxNumberOfPopulatedCells
@property (nonatomic) unsigned int maxNumberOfRows; // ivar: mMaxNumberOfRows
@property (nonatomic) BOOL pasteFilterHidingAsUserHiding; // ivar: _pasteFilterHidingAsUserHiding
@property (nonatomic) BOOL pastesTile; // ivar: mPastesTile
@property (nonatomic) BOOL requireMatchedFunctionTokens; // ivar: mRequireMatchedFunctionTokens
@property (nonatomic) BOOL returnWhileEditingNavigates; // ivar: mReturnWhileEditingNavigates
@property (nonatomic) BOOL selectionUsesBezierPath; // ivar: mSelectionUsesBezierPath
@property (nonatomic) BOOL selectsCellOnInitialTap; // ivar: mSelectsCellOnInitialTap
@property (nonatomic) BOOL showReferenceHighlightsOnFormulaCellSelection; // ivar: _showReferenceHighlightsOnFormulaCellSelection
@property (nonatomic) BOOL showsAddressBarAlways; // ivar: mShowsAddressBarAlways
@property (nonatomic) BOOL showsAddressBarHighlights; // ivar: mShowsAddressBarHighlights
@property (nonatomic) BOOL showsAddressBarLetteringAndNumbering; // ivar: mShowsAddressBarLetteringAndNumbering
@property (nonatomic) BOOL showsCellOverflowIndicator; // ivar: mShowsCellOverflowIndicator
@property (nonatomic) BOOL showsHideUnhideUI; // ivar: mShowsHideUnhideUI
@property (nonatomic) BOOL supportsAutoResizedTables; // ivar: mSupportsAutoResizedTables
@property (nonatomic) BOOL supportsAutofill; // ivar: mSupportsAutofill
@property (nonatomic) BOOL supportsCanvasReferenceEditing; // ivar: mSupportsCanvasReferenceEditing
@property (nonatomic) BOOL supportsComplexFilterUI; // ivar: _supportsComplexFilterUI
@property (nonatomic) BOOL supportsContainedTextEditing; // ivar: mSupportsContainedTextEditing
@property (nonatomic) BOOL supportsControlCells; // ivar: mSupportsControlCells
@property (nonatomic) BOOL supportsCreateChartFromSelection; // ivar: mSupportsCreateChartFromSelection
@property (nonatomic) BOOL supportsDragDropMoveMode; // ivar: mSupportsDragDropMoveMode
@property (nonatomic) BOOL supportsFormulaEditing; // ivar: mSupportsFormulaEditing
@property (nonatomic) BOOL supportsFrozenHeaders; // ivar: mSupportsFrozenHeaders
@property (nonatomic) BOOL supportsHiddenCells; // ivar: mSupportsHiddenCells
@property (nonatomic) BOOL supportsImplicitEditing; // ivar: mSupportsImplicitEditing
@property (nonatomic) BOOL supportsMergedCells; // ivar: mSupportsMergedCells
@property (nonatomic) BOOL supportsQuickFilterUI; // ivar: _supportsQuickFilterUI
@property (nonatomic) BOOL supportsRepeatHeaderRowsOnEachPage; // ivar: mSupportsRepeatHeaderRowsOnEachPage
@property (nonatomic) BOOL supportsResumingTextEditing; // ivar: mSupportsResumingTextEditing
@property (nonatomic) BOOL supportsRowColumnAdderKnob; // ivar: mSupportsRowColumnAdderKnob
@property (nonatomic) BOOL tabAtEdgeAddsColumn; // ivar: mTabAtEdgeAddsColumn
@property (nonatomic) BOOL tabAtEdgeAddsRow; // ivar: mTabAtEdgeAddsRow
@property (nonatomic) BOOL tabWhileEditingNavigates; // ivar: mTabWhileEditingNavigates
@property (nonatomic) BOOL tableNameEnabledInNewTables; // ivar: mTableNameEnabledInNewTables
@property (nonatomic) BOOL tokenizeFormulaStringLiterals; // ivar: _tokenizeFormulaStringLiterals
@property (nonatomic) BOOL usesLimitedAutomaticFormatParsing; // ivar: mUsesLimitedAutomaticFormatParsing
@property (nonatomic) BOOL usesLimitedNumberFormatInspector; // ivar: mUsesLimitedNumberFormatInspector
@property (nonatomic) BOOL usesWholeChromeResizer; // ivar: mUsesWholeChromeResizer


+(id)sharedTableConfiguration;
+(void)resetSharedTableConfiguration;
-(id)init;


@end


#endif