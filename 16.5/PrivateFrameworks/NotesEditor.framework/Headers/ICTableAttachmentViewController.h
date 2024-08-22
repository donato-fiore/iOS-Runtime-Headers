// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTABLEATTACHMENTVIEWCONTROLLER_H
#define ICTABLEATTACHMENTVIEWCONTROLLER_H

@class NSMutableDictionary, NSDictionary, NSMapTable, ICDimensionSumCache, NSMutableOrderedSet, NSMutableSet, TTTextStorage, NSString, UIView, ICAppearanceInfo, _UIDragSnappingFeedbackGenerator, UIScrollView, ICTableAttachmentSelection, NSUUID, NSIndexSet, NSArray, ICTable, ICTableAttachmentProvider, NSMutableArray, NSUndoManager;
@protocol ICAttachmentFindable, ICTableAttachmentProviderDelegate, ICTableAutoScrollerDelegate, ICTableCellChangeObserving, ICTableDelegate, TTTextStorageDelegate, ICTableColumnTextViewDelegate, ICTableTextViewManagerDelegate, ICAvailableTableWidthProviding, TTTextUndoTarget, ICAuxiliaryStyling, ICTableSelectionDelegate, ICTableUndoHelping, ICBaseTextViewDelegate, ICAuxiliaryTextViewHosting;


#import "ICAttachmentViewController.h"
#import "ICTableColumnTextView.h"
#import "ICTableColumnRowButton.h"
#import "ICTableSelectionKnob.h"
#import "ICTableClipView.h"
#import "ICLayoutManager.h"
#import "ICBaseTextView.h"
#import "ICTableScrollView.h"
#import "ICTableSelectionView.h"
#import "ICTableAccessibilityController.h"
#import "ICTableAutoScroller.h"
#import "ICTableContentView.h"
#import "ICTableLayoutManager.h"
#import "ICTableTextViewManager.h"
#import "ICTableUndoTarget.h"
#import "ICTableAttachmentView.h"

@interface ICTableAttachmentViewController : ICAttachmentViewController <ICAttachmentFindable, ICTableAttachmentProviderDelegate, ICTableAutoScrollerDelegate, ICTableCellChangeObserving, ICTableDelegate, TTTextStorageDelegate, ICTableColumnTextViewDelegate, ICTableTextViewManagerDelegate, ICAvailableTableWidthProviding, TTTextUndoTarget, ICAuxiliaryStyling, ICTableSelectionDelegate, ICTableUndoHelping, ICBaseTextViewDelegate>



@property (readonly, nonatomic) ICTableColumnTextView *activeTextView; // ivar: _activeTextView
@property (readonly, weak, nonatomic) NSObject<ICAuxiliaryStyling> *auxiliaryStylingController;
@property (readonly, weak, nonatomic) NSObject<ICAuxiliaryTextViewHosting> *auxiliaryTextViewHost;
@property (readonly, nonatomic) CGFloat availableWidth;
@property (readonly, nonatomic) BOOL canStyleText;
@property (readonly, nonatomic) BOOL canToggleTodo;
@property (readonly, nonatomic) NSMutableDictionary *cellHeightCache; // ivar: _cellHeightCache
@property (retain, nonatomic) NSDictionary *cellTimestampsBeforeMerge; // ivar: _cellTimestampsBeforeMerge
@property (readonly, nonatomic) NSMapTable *coalescingUndoGroupForStringDelegate; // ivar: _coalescingUndoGroupForStringDelegate
@property (retain, nonatomic) ICTableColumnRowButton *columnButton; // ivar: _columnButton
@property (retain, nonatomic) ICDimensionSumCache *columnWidthCache; // ivar: _columnWidthCache
@property (readonly, nonatomic) NSMutableOrderedSet *columnsBeforeMerge; // ivar: _columnsBeforeMerge
@property (readonly, nonatomic) NSMutableSet *columnsNeedingWidthUpdate; // ivar: _columnsNeedingWidthUpdate
@property (nonatomic) CGPoint currentDragGestureLocation; // ivar: _currentDragGestureLocation
@property (nonatomic) NSUInteger currentDragIndex; // ivar: _currentDragIndex
@property (retain, nonatomic) TTTextStorage *currentlyEditingTextStorage; // ivar: _currentlyEditingTextStorage
@property (retain, nonatomic) ICTableColumnTextView *currentlyEditingTextView; // ivar: _currentlyEditingTextView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRecentlyAutoAddRow; // ivar: _didRecentlyAutoAddRow
@property (retain, nonatomic) UIView *dragView; // ivar: _dragView
@property (retain, nonatomic) ICAppearanceInfo *draggingAppearance; // ivar: _draggingAppearance
@property (nonatomic) NSUInteger editingCount; // ivar: _editingCount
@property (readonly, nonatomic) CGRect editingViewport; // ivar: _editingViewport
@property (readonly, nonatomic) ICTableSelectionKnob *endKnob; // ivar: _endKnob
@property (retain, nonatomic) _UIDragSnappingFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ICTableClipView *headerClipView; // ivar: _headerClipView
@property (nonatomic) CGPoint initialDragOffset; // ivar: _initialDragOffset
@property (retain, nonatomic) UIView *inputAccessoryView; // ivar: _inputAccessoryView
@property (retain, nonatomic) UIView *inputView; // ivar: _inputView
@property (readonly, nonatomic) CGSize intrinsicSize;
@property (readonly, nonatomic) BOOL isNoteEditable;
@property (nonatomic) BOOL isPerformingInitialLayout; // ivar: _isPerformingInitialLayout
@property (nonatomic) NSUInteger lastDraggedOverColumnOrRowIndex; // ivar: _lastDraggedOverColumnOrRowIndex
@property (nonatomic) BOOL lockSelection; // ivar: _lockSelection
@property (nonatomic) BOOL makingCellFirstResponder; // ivar: _makingCellFirstResponder
@property (weak, nonatomic) ICLayoutManager *noteLayoutManager; // ivar: _noteLayoutManager
@property (readonly, nonatomic) UIScrollView *noteScrollView; // ivar: _noteScrollView
@property (readonly, nonatomic) ICBaseTextView *noteTextView;
@property (nonatomic) BOOL performedInitialLayout; // ivar: _performedInitialLayout
@property (nonatomic) BOOL preventScrolling; // ivar: preventScrolling
@property (retain, nonatomic) ICTableAttachmentSelection *previousAXTableSelection; // ivar: _previousAXTableSelection
@property (nonatomic) CGFloat previousAvailableWidth; // ivar: _previousAvailableWidth
@property (nonatomic) CGRect proposedLineFragmentRect; // ivar: _proposedLineFragmentRect
@property (retain, nonatomic) NSUUID *rangeSelectionAnchorColumn; // ivar: _rangeSelectionAnchorColumn
@property (retain, nonatomic) NSUUID *rangeSelectionAnchorRow; // ivar: _rangeSelectionAnchorRow
@property (retain, nonatomic) ICTableColumnRowButton *rowButton; // ivar: _rowButton
@property (retain, nonatomic) ICDimensionSumCache *rowHeightCache; // ivar: _rowHeightCache
@property (readonly, nonatomic) NSMutableOrderedSet *rowsBeforeMerge; // ivar: _rowsBeforeMerge
@property (retain, nonatomic) ICTableScrollView *scrollView; // ivar: _scrollView
@property (readonly, nonatomic) CGFloat scrollerOutset;
@property (readonly, nonatomic) NSUInteger selectedStyleBIUS;
@property (readonly, nonatomic) NSIndexSet *selectedStyles;
@property (readonly, nonatomic) ICTableSelectionView *selectionHighlightView; // ivar: _selectionHighlightView
@property (nonatomic) BOOL shouldBeginInitialEditing; // ivar: _shouldBeginInitialEditing
@property (nonatomic) BOOL shouldPreventUndoCommands; // ivar: _shouldPreventUndoCommands
@property (readonly, nonatomic, getter=isShowingTextStyleOptions) BOOL showingTextStyleOptions; // ivar: _showingTextStyleOptions
@property (readonly, nonatomic) ICTableSelectionKnob *startKnob; // ivar: _startKnob
@property (retain, nonatomic) NSArray *stringSelectionBeforeDrag; // ivar: _stringSelectionBeforeDrag
@property (retain, nonatomic) NSArray *stringSelectionBeforeMerge; // ivar: _stringSelectionBeforeMerge
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ICTable *table;
@property (retain, nonatomic) ICTableAccessibilityController *tableAXController; // ivar: _tableAXController
@property (readonly, nonatomic) ICTableAttachmentProvider *tableAttachmentProvider; // ivar: _tableAttachmentProvider
@property (retain, nonatomic) ICTableAutoScroller *tableAutoScroller; // ivar: _tableAutoScroller
@property (readonly, nonatomic) ICTableContentView *tableContentView; // ivar: _tableContentView
@property (readonly, nonatomic) ICTableLayoutManager *tableLayoutManager; // ivar: _tableLayoutManager
@property (retain, nonatomic) ICTableAttachmentSelection *tableSelection; // ivar: _tableSelection
@property (retain, nonatomic) ICTableAttachmentSelection *tableSelectionBeforeMerge; // ivar: _tableSelectionBeforeMerge
@property (readonly, nonatomic) ICTableTextViewManager *textViewManager; // ivar: _textViewManager
@property (nonatomic) CGRect transitionViewport; // ivar: _transitionViewport
@property (retain, nonatomic) NSMutableArray *undoCommands; // ivar: _undoCommands
@property (readonly, nonatomic) NSUndoManager *undoManager;
@property (readonly, nonatomic) ICTableUndoTarget *undoTarget; // ivar: _undoTarget
@property (nonatomic, getter=isUpdatingTiles) BOOL updatingTiles; // ivar: _updatingTiles
@property (readonly, nonatomic) ICTableAttachmentView *view;
@property (readonly, nonatomic) CGRect viewport;
@property (readonly, nonatomic) NSMutableDictionary *visibleEmptyCellsBeforeMerge; // ivar: _visibleEmptyCellsBeforeMerge


-(BOOL)acceptsKeystrokes;
-(BOOL)allowsNewTextLength:(NSUInteger)arg0 ;
-(BOOL)becomeFirstResponderForAuxStyling;
-(BOOL)canIndent;
-(BOOL)canIndentByamount:(NSInteger)arg0 ;
-(BOOL)canOutdent;
-(BOOL)containedInNoteSelection;
-(BOOL)cursorPrefersWordBoundary;
-(BOOL)isInResponderChain;
-(BOOL)makeSpaceToPasteSourceTable:(id)arg0 ;
-(BOOL)pasteCellRange;
-(BOOL)resignFirstResponderForAuxStyling;
-(BOOL)updateAllColumnWidths;
-(BOOL)updateEditedColumnWidths;
-(BOOL)wantsUndoCommands;
-(NSInteger)textAlignmentForCurrentSelection;
-(NSInteger)textDirectionForCurrentSelection;
-(NSUInteger)cursorPositionForLocation:(struct CGPoint )arg0 inTextView:(id)arg1 ;
-(NSUInteger)preferredNavigationSelection;
-(id)RTFDataForSelection;
-(id)account;
-(id)attributedStringForTableSelectionInContext:(id)arg0 ;
-(id)attributedStringFromPasteboard;
-(id)customPasteboardDataForSelection;
-(id)dataForSelectionOfType:(id)arg0 ;
-(id)dataForSelectionWithDocumentAttributes:(id)arg0 ;
-(id)dragSnapshotFromRect:(struct CGRect )arg0 afterScreenUpdates:(BOOL)arg1 ;
-(id)htmlDataForSelection;
-(id)icTableDataForSelection;
-(id)icTableDataFromPasteboard;
-(id)icTableFromPasteboard;
-(id)initWithTextAttachment:(id)arg0 forManualRendering:(BOOL)arg1 layoutManager:(id)arg2 ;
-(id)insertColumns:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(id)namedStylesForCurrentSelectionAndBIUS:(*NSUInteger)arg0 ;
-(id)note;
-(id)notesDataFromPasteboard;
-(id)pasteboardItemsForSelection;
-(id)plainTextDataForSelection;
-(id)rectsForRange:(struct _NSRange )arg0 inFindableString:(id)arg1 ;
-(id)soloPlainTextStringFromPasteboard;
-(id)viewForRange:(struct _NSRange )arg0 inFindableString:(id)arg1 ;
-(id)webArchiveDataForSelection;
-(struct CGRect )frameOfCellForColumnTextView:(id)arg0 row:(id)arg1 ;
-(struct CGRect )selectionFrameFromContentFrame:(struct CGRect )arg0 ;
-(struct _NSRange )characterRangeForRange:(struct _NSRange )arg0 inString:(id)arg1 forLayoutManager:(id)arg2 ;
-(struct _NSRange )columnGlyphRangeForRange:(struct _NSRange )arg0 inString:(id)arg1 forLayoutManager:(id)arg2 ;
-(struct _NSRange )rangeOfTableInNote;
-(struct _NSRange )selectedRangeWithinRange:(struct _NSRange )arg0 inFindableString:(id)arg1 ;
-(void)addColumnAfterSelection:(id)arg0 ;
-(void)addColumnAtIndex:(NSUInteger)arg0 ;
-(void)addColumnBeforeSelection:(id)arg0 ;
-(void)addColumnLeftOfSelection:(id)arg0 ;
-(void)addColumnRightOfSelection:(id)arg0 ;
-(void)addRowAboveSelection:(id)arg0 ;
-(void)addRowAtIndex:(NSUInteger)arg0 ;
-(void)addRowBelowSelection:(id)arg0 ;
-(void)addUndoCommandsForObject:(id)arg0 block:(id)arg1 ;
-(void)adjustScrollPositionByOffset:(struct CGPoint )arg0 ;
-(void)announceCellRangeSelectionChangeForAccessibilityIfNecessary;
-(void)applyUndoGroup:(id)arg0 ;
-(void)beginEditing;
-(void)beginEditingCellWithColumnID:(id)arg0 andRowID:(id)arg1 location:(NSUInteger)arg2 ;
-(void)beginEditingCellWithColumnID:(id)arg0 andRowID:(id)arg1 textRange:(id)arg2 ;
-(void)beginEditingCellWithColumnID:(id)arg0 andRowID:(id)arg1 touchPoint:(struct CGPoint )arg2 ;
-(void)beginEditingInitialCell;
-(void)beginEditingNoteAtOffset:(NSInteger)arg0 ;
-(void)beginEditingNoteAtRange:(struct _NSRange )arg0 ;
-(void)beginEditingSelectedRangeInTextView:(id)arg0 ;
-(void)cellFirstResponderChanged;
-(void)cellRangeDragBeganOnView:(id)arg0 ;
-(void)cellRangeDraggedAtLocation:(struct CGPoint )arg0 ;
-(void)cleanDeletedColumn:(id)arg0 ;
-(void)cleanDeletedRow:(id)arg0 ;
-(void)contentSizeCategoryDidChange;
-(void)convertTableToText:(id)arg0 ;
-(void)convertUnconfirmedHashtagsMentionsIfNecessary;
-(void)copySelection:(id)arg0 ;
-(void)copyTable:(id)arg0 ;
-(void)cutSelection:(id)arg0 ;
-(void)dealloc;
-(void)deleteColumns:(id)arg0 ;
-(void)deleteRows:(id)arg0 ;
-(void)deleteSelectedColumns:(id)arg0 ;
-(void)deleteSelectedRows:(id)arg0 ;
-(void)deleteSelection:(id)arg0 ;
-(void)deleteSelectionCellContents;
-(void)deleteTable:(id)arg0 ;
-(void)didBeginEditingWithTextView:(id)arg0 ;
-(void)didPasteOrDropTextForTableColumnTextView:(id)arg0 ;
-(void)didUpdateContentSize;
-(void)dragBeganOnColumnOrRow:(BOOL)arg0 atLocation:(struct CGPoint )arg1 ;
-(void)dragEndedOnColumnOrRow:(BOOL)arg0 atLocation:(struct CGPoint )arg1 ;
-(void)dragMovedOnColumnOrRow:(BOOL)arg0 atLocation:(struct CGPoint )arg1 ;
-(void)drawCharactersInRange:(struct _NSRange )arg0 inFindableString:(id)arg1 forContentView:(id)arg2 ;
-(void)endCellEditingSessionWithTextView:(id)arg0 ;
-(void)endEditing;
-(void)extendCellRangeSelectionInDirection:(NSUInteger)arg0 toEnd:(BOOL)arg1 ;
-(void)flashAuthorHighlightsIfNeeded;
-(void)hideColumnRowButtons;
-(void)ic_makeFirstResponder:(id)arg0 ;
-(void)ic_resignFirstResponder:(id)arg0 ;
-(void)indentByamount:(NSInteger)arg0 ;
-(void)initializeTableAccessibilityControllerIfNecessary;
-(void)loadView;
-(void)makeDelegateOfTextView:(id)arg0 ;
-(void)moveCurrentColumnOrRow:(BOOL)arg0 toIndex:(NSUInteger)arg1 ;
-(void)moveDownCell;
-(void)moveDownCellAtLocation:(NSUInteger)arg0 ;
-(void)moveIntoTableWithDirection:(NSUInteger)arg0 ;
-(void)moveLeftCell;
-(void)moveNextCell;
-(void)moveNextCellAtLocation:(NSUInteger)arg0 ;
-(void)moveNextLineAtLocation:(NSUInteger)arg0 ;
-(void)movePrevCell;
-(void)movePrevCellAtLocation:(NSUInteger)arg0 ;
-(void)moveReturnCell;
-(void)moveRightCell;
-(void)moveShiftReturnCell;
-(void)moveTabCell;
-(void)moveUpCell;
-(void)moveUpCellAtLocation:(NSUInteger)arg0 ;
-(void)noteShowsAuthorHighlightsDidChange:(id)arg0 ;
-(void)pasteIntoSelection:(id)arg0 ;
-(void)pasteTable:(id)arg0 atColumnIndex:(NSUInteger)arg1 rowIndex:(NSUInteger)arg2 shouldSetSelectionToPastedRange:(BOOL)arg3 ;
-(void)performInitialLayoutIfNeeded;
-(void)postChangeNotification:(NSUInteger)arg0 columnOrRowUUIDs:(id)arg1 ;
-(void)prepareForPrinting;
-(void)redraw;
-(void)redrawAndSave;
-(void)removeFromParentViewController;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 inFindableString:(id)arg2 ;
-(void)reverseTableColumnDirection:(id)arg0 ;
-(void)save;
-(void)saveAfterDelay;
-(void)saveAttachmentChanges;
-(void)saveAttachmentChangesInBackground:(BOOL)arg0 ;
-(void)saveOnMainThread;
-(void)scrollToCaretIfNeededForTextView:(id)arg0 ;
-(void)scrollToRange:(struct _NSRange )arg0 inFindableString:(id)arg1 ;
-(void)scrollToRect:(struct CGRect )arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)scrollToSelectionInTextView:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)selectCurrentColumnForAccessibility;
-(void)selectCurrentRowForAccessibility;
-(void)selectTable;
-(void)selectionDidResignFirstResponder:(id)arg0 ;
-(void)selectionWillBecomeFirstResponder:(id)arg0 ;
-(void)setHidden:(BOOL)arg0 forColumn:(id)arg1 ;
-(void)setHidden:(BOOL)arg0 forRow:(id)arg1 ;
-(void)setHighlightColor:(id)arg0 ;
-(void)setHighlightPatternRegex:(id)arg0 ;
-(void)setNeedsSave;
-(void)setSelectedRange:(struct _NSRange )arg0 inFindableString:(id)arg1 ;
-(void)setSelectionAlignment:(NSInteger)arg0 ;
-(void)setSelectionBIUSStyle:(NSUInteger)arg0 toggleOn:(BOOL)arg1 ;
-(void)setSelectionBIUSStyle:(NSUInteger)arg0 toggleOn:(BOOL)arg1 withColumns:(id)arg2 rows:(id)arg3 ;
-(void)setSelectionDirection:(NSInteger)arg0 ;
-(void)setSelectionNamedStyle:(unsigned int)arg0 ;
-(void)setSelectionNamedStyle:(unsigned int)arg0 withColumns:(id)arg1 rows:(id)arg2 ;
-(void)setTextStyleForCurrentSelection:(unsigned int)arg0 ;
-(void)setTypingAttributesForTextView:(id)arg0 ;
-(void)setupEventHandling;
-(void)setupTableTextView:(id)arg0 ;
-(void)shareTable:(id)arg0 ;
-(void)showButtonsAtColumns:(id)arg0 rows:(id)arg1 ;
-(void)showColumnRowButtons;
-(void)speakAccessibilityAnnouncementForMoveToCellWithColumnID:(id)arg0 rowID:(id)arg1 ;
-(void)speakAccessibilityExitedTableAnnouncementAndDidRemoveRow:(BOOL)arg0 ;
-(void)tableAttachmentSelectionDidChange:(id)arg0 ;
-(void)tableAttachmentViewControllerDidChange:(id)arg0 ;
-(void)tableAutoScroller:(id)arg0 scrollOffsetDelta:(struct CGPoint )arg1 ;
-(void)tableDidCreateColumnTextStorage:(id)arg0 ;
-(void)tableDidInsertColumnID:(id)arg0 ;
-(void)tableDidPopulateCellAtColumnIndex:(NSUInteger)arg0 rowIndex:(NSUInteger)arg1 ;
-(void)tableValueDidChangeAtColumnID:(id)arg0 rowID:(id)arg1 delta:(NSInteger)arg2 ;
-(void)tableWillRemoveColumnID:(id)arg0 ;
-(void)tappedTableAtLocation:(struct CGPoint )arg0 ;
-(void)textRangeDragEnded;
-(void)textRangeDraggedAtLocation:(struct CGPoint )arg0 ;
-(void)textStorage:(id)arg0 didProcessEditing:(NSUInteger)arg1 range:(struct _NSRange )arg2 changeInLength:(NSInteger)arg3 ;
-(void)textStorage:(id)arg0 didReplace:(id)arg1 with:(id)arg2 ;
-(void)toggleBIUS:(NSUInteger)arg0 ;
-(void)toggleBoldface:(id)arg0 ;
-(void)toggleItalics:(id)arg0 ;
-(void)toggleStrikethrough:(id)arg0 ;
-(void)toggleTodoStyle:(id)arg0 ;
-(void)toggleUnderline:(id)arg0 ;
-(void)unselectColumnRow;
-(void)updateAllColumnWidthsAndRedraw;
-(void)updateAttachmentParagraphForWritingDirection:(NSInteger)arg0 ;
-(void)updateAvailableWidth;
-(void)updateButtonFrames;
-(void)updateCellSizeAtColumn:(id)arg0 row:(id)arg1 immediateWidthUpdate:(BOOL)arg2 ;
-(void)updateChrome;
-(void)updateColumnWidthForColumn:(id)arg0 ;
-(void)updateContentSize;
-(void)updateEditedColumnWidthsAfterDelay;
-(void)updateHeightCacheForColumn:(id)arg0 row:(id)arg1 ;
-(void)updateTableCellsWithDirection:(NSInteger)arg0 columnIndexes:(id)arg1 rowIndexes:(id)arg2 ;
-(void)updateTableColumnDirectionForWritingDirection:(NSInteger)arg0 ;
-(void)updateTiles;
-(void)updateWidthsForChangeInColumn:(id)arg0 ;
-(void)willAddRow;
-(void)willBeginEditingWithTextView:(id)arg0 ;
-(void)willFlashAuthorHighlights;
-(void)zoomFactorOrInsetsDidChange;


@end


#endif