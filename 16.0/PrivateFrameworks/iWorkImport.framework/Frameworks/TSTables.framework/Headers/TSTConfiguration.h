// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTCONFIGURATION_H
#define TSTCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface TSTConfiguration : NSObject

@property (nonatomic) BOOL allowFreeformFormulaText; // ivar: _allowFreeformFormulaText
@property (nonatomic) BOOL allowHorizontalAutoresize; // ivar: _allowHorizontalAutoresize
@property (nonatomic) BOOL allowWhitespaceInFormulas; // ivar: _allowWhitespaceInFormulas
@property (nonatomic) BOOL allowsBlackDragDropBackground; // ivar: _allowsBlackDragDropBackground
@property (nonatomic) BOOL allowsFullyFilteredTables; // ivar: _allowsFullyFilteredTables
@property (nonatomic) BOOL arrowKeyAtEdgeWhileEditingNavigates; // ivar: _arrowKeyAtEdgeWhileEditingNavigates
@property (nonatomic) BOOL arrowKeysNavigateWhenEditingBeganByTyping; // ivar: _arrowKeysNavigateWhenEditingBeganByTyping
@property (nonatomic) BOOL arrowKeysWrap; // ivar: _arrowKeysWrap
@property (nonatomic) BOOL backTabWraps; // ivar: _backTabWraps
@property (nonatomic) BOOL cellEditorsCanScrollToNonLocalTableSelection; // ivar: _cellEditorsCanScrollToNonLocalTableSelection
@property (nonatomic) BOOL continuesEditingAfterNavigation; // ivar: _continuesEditingAfterNavigation
@property (nonatomic) BOOL controlCellUIAlwaysVisible; // ivar: _controlCellUIAlwaysVisible
@property (nonatomic) BOOL cornersCanDragResize; // ivar: _cornersCanDragResize
@property (nonatomic) BOOL createLargeDefaultTables; // ivar: _createLargeDefaultTables
@property (nonatomic) BOOL disableImplicitNaming; // ivar: _disableImplicitNaming
@property (nonatomic) BOOL dragByHandleOnly; // ivar: _dragByHandleOnly
@property (nonatomic) BOOL exportPermanentHidingState; // ivar: _exportPermanentHidingState
@property (nonatomic) BOOL exportsCellAnnotations; // ivar: _exportsCellAnnotations
@property (nonatomic) BOOL exportsCellComments; // ivar: _exportsCellComments
@property (nonatomic) BOOL followsLinksOnFirstTap; // ivar: _followsLinksOnFirstTap
@property (nonatomic) BOOL forceZoomInOnBeginEditing; // ivar: _forceZoomInOnBeginEditing
@property (nonatomic) BOOL formulaEditorEvaluatesFormulas; // ivar: _formulaEditorEvaluatesFormulas
@property (nonatomic) BOOL hasLargerFonts; // ivar: _hasLargerFonts
@property (nonatomic) BOOL headersFrozenByDefault; // ivar: _headersFrozenByDefault
@property (nonatomic) unsigned int maxNumberOfColumns; // ivar: _maxNumberOfColumns
@property (nonatomic) unsigned int maxNumberOfPopulatedCells; // ivar: _maxNumberOfPopulatedCells
@property (nonatomic) unsigned int maxNumberOfRows; // ivar: _maxNumberOfRows
@property (nonatomic) BOOL pasteFilterHidingAsUserHiding; // ivar: _pasteFilterHidingAsUserHiding
@property (nonatomic) BOOL pastesTile; // ivar: _pastesTile
@property (nonatomic) BOOL returnWhileEditingNavigates; // ivar: _returnWhileEditingNavigates
@property (nonatomic) BOOL selectionUsesBezierPath; // ivar: _selectionUsesBezierPath
@property (nonatomic) BOOL selectsCellOnInitialTap; // ivar: _selectsCellOnInitialTap
@property (nonatomic) BOOL shouldZoomOutOnEndEditing; // ivar: _shouldZoomOutOnEndEditing
@property (nonatomic) BOOL showReferenceHighlightsOnFormulaCellSelection; // ivar: _showReferenceHighlightsOnFormulaCellSelection
@property (nonatomic) BOOL showsCellEditingToolbar; // ivar: _showsCellEditingToolbar
@property (nonatomic) BOOL showsCellOverflowIndicator; // ivar: _showsCellOverflowIndicator
@property (nonatomic) BOOL showsCellWarningIndicator; // ivar: _showsCellWarningIndicator
@property (nonatomic) BOOL showsChromeWhileEditingCell; // ivar: _showsChromeWhileEditingCell
@property (nonatomic) BOOL showsHideUnhideUI; // ivar: _showsHideUnhideUI
@property (nonatomic) BOOL showsSelectionKnobsWhileEditingCell; // ivar: _showsSelectionKnobsWhileEditingCell
@property (nonatomic) CGFloat structuredTextImportConfidenceThreshold; // ivar: _structuredTextImportConfidenceThreshold
@property (nonatomic) CGFloat structuredTextImportConfidenceThresholdForCanvas; // ivar: _structuredTextImportConfidenceThresholdForCanvas
@property (nonatomic) NSUInteger structuredTextImportSizeLimit; // ivar: _structuredTextImportSizeLimit
@property (nonatomic) BOOL supportsActionMenu; // ivar: _supportsActionMenu
@property (nonatomic) BOOL supportsAddBodyRowAtBottomSiriKitIntent; // ivar: _supportsAddBodyRowAtBottomSiriKitIntent
@property (nonatomic) BOOL supportsAutoResizedTables; // ivar: _supportsAutoResizedTables
@property (nonatomic) BOOL supportsAutofill; // ivar: _supportsAutofill
@property (nonatomic) BOOL supportsAutomaticNumberKeyboard; // ivar: _supportsAutomaticNumberKeyboard
@property (nonatomic) BOOL supportsBidiTablesUI; // ivar: _supportsBidiTablesUI
@property (nonatomic) BOOL supportsCanvasReferenceEditing; // ivar: _supportsCanvasReferenceEditing
@property (nonatomic) BOOL supportsCategorization; // ivar: _supportsCategorization
@property (nonatomic) BOOL supportsCellCommentsActivityLines; // ivar: _supportsCellCommentsActivityLines
@property (nonatomic) BOOL supportsComplexReorganizeUI; // ivar: _supportsComplexReorganizeUI
@property (nonatomic) BOOL supportsContainedTextEditing; // ivar: _supportsContainedTextEditing
@property (nonatomic) BOOL supportsControlCells; // ivar: _supportsControlCells
@property (nonatomic) BOOL supportsCopySnapshot; // ivar: _supportsCopySnapshot
@property (nonatomic) BOOL supportsCreateChartFromSelection; // ivar: _supportsCreateChartFromSelection
@property (nonatomic) BOOL supportsDragDropMoveMode; // ivar: _supportsDragDropMoveMode
@property (nonatomic) BOOL supportsDynamicallyHidingRowColumnForDragDrop; // ivar: _supportsDynamicallyHidingRowColumnForDragDrop
@property (readonly, nonatomic) BOOL supportsExpandedTables;
@property (nonatomic) BOOL supportsFormulaEditing; // ivar: _supportsFormulaEditing
@property (nonatomic) BOOL supportsFrozenHeaders; // ivar: _supportsFrozenHeaders
@property (nonatomic) BOOL supportsHiddenCells; // ivar: _supportsHiddenCells
@property (nonatomic) BOOL supportsImplicitEditing; // ivar: _supportsImplicitEditing
@property (nonatomic) BOOL supportsInlineAttachments; // ivar: _supportsInlineAttachments
@property (nonatomic) BOOL supportsMergedCells; // ivar: _supportsMergedCells
@property (nonatomic) BOOL supportsPivotTables; // ivar: _supportsPivotTables
@property (nonatomic) BOOL supportsPlaceholderGeometry; // ivar: _supportsPlaceholderGeometry
@property (nonatomic) BOOL supportsQuickFilterUI; // ivar: _supportsQuickFilterUI
@property (nonatomic) BOOL supportsRepeatHeaderRowsOnEachPage; // ivar: _supportsRepeatHeaderRowsOnEachPage
@property (nonatomic) BOOL supportsRowColumnAdderKnob; // ivar: _supportsRowColumnAdderKnob
@property (nonatomic) BOOL supportsRowMovesInPaginatedTables; // ivar: _supportsRowMovesInPaginatedTables
@property (nonatomic) BOOL supportsStockUI; // ivar: _supportsStockUI
@property (nonatomic) BOOL supportsTableColumnAutocomplete; // ivar: _supportsTableColumnAutocomplete
@property (nonatomic) BOOL supportsTableTranspose; // ivar: _supportsTableTranspose
@property (nonatomic) BOOL supportsiOSContextMenuItemForEvenlyDistributedColumns; // ivar: _supportsiOSContextMenuItemForEvenlyDistributedColumns
@property (nonatomic) BOOL supportsiOSContextMenuItemForEvenlyDistributedRows; // ivar: _supportsiOSContextMenuItemForEvenlyDistributedRows
@property (nonatomic) BOOL supportsiOSContextMenuItemForWrappedText; // ivar: _supportsiOSContextMenuItemForWrappedText
@property (nonatomic) BOOL tabAtEdgeAddsColumn; // ivar: _tabAtEdgeAddsColumn
@property (nonatomic) BOOL tabAtEdgeAddsRow; // ivar: _tabAtEdgeAddsRow
@property (nonatomic) BOOL tabWhileEditingNavigates; // ivar: _tabWhileEditingNavigates
@property (nonatomic) BOOL tableNameEnabledInNewTables; // ivar: _tableNameEnabledInNewTables
@property (nonatomic) BOOL tokenizeFormulaStringLiterals; // ivar: _tokenizeFormulaStringLiterals
@property (nonatomic) BOOL usesLimitedAutomaticFormatParsing; // ivar: _usesLimitedAutomaticFormatParsing
@property (nonatomic) BOOL usesLimitedNumberFormatInspector; // ivar: _usesLimitedNumberFormatInspector
@property (nonatomic) BOOL usesSelectionChromeResizer; // ivar: _usesSelectionChromeResizer


+(id)sharedTableConfiguration;
+(void)resetSharedTableConfiguration;
-(id)init;


@end


#endif