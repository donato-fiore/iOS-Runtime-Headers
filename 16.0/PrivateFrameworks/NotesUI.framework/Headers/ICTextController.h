// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTEXTCONTROLLER_H
#define ICTEXTCONTROLLER_H

@class NSTextStorage, ICHashtagController, ICMentionsController, ICNote, NSMutableArray, NSMutableDictionary;


#import "TTTextController.h"
#import "ICAttachmentInsertionController.h"
#import "ICAuthorHighlightsController.h"

@interface ICTextController : TTTextController {
    BOOL _isForPrint;
}


@property (weak, nonatomic) ICAttachmentInsertionController *attachmentInsertionController; // ivar: _attachmentInsertionController
@property (weak, nonatomic) ICAuthorHighlightsController *authorHighlightsController; // ivar: _authorHighlightsController
@property (nonatomic) BOOL disableAddingExtraLinesIfNeeded; // ivar: _disableAddingExtraLinesIfNeeded
@property (retain, nonatomic) NSTextStorage *emptyTextStorage; // ivar: _emptyTextStorage
@property (nonatomic) BOOL fullTextStylingRefreshScheduled; // ivar: _fullTextStylingRefreshScheduled
@property (weak, nonatomic) ICHashtagController *hashtagController; // ivar: _hashtagController
@property (nonatomic) BOOL isAutoListInsertionDisabled; // ivar: _isAutoListInsertionDisabled
@property (nonatomic) BOOL isConvertingTables; // ivar: _isConvertingTables
@property (weak, nonatomic) ICMentionsController *mentionsController; // ivar: _mentionsController
@property (weak, nonatomic) ICNote *note; // ivar: _note
@property (nonatomic) NSUInteger overrideAppearanceType; // ivar: _overrideAppearanceType
@property (nonatomic) NSUInteger pauseMergeForScrollingCounter; // ivar: _pauseMergeForScrollingCounter
@property (nonatomic) BOOL shouldMergeNoteAfterScrolling; // ivar: _shouldMergeNoteAfterScrolling
@property (nonatomic) BOOL trackAddedExtraNewlineRanges; // ivar: _trackAddedExtraNewlineRanges
@property (retain, nonatomic) NSMutableArray *trackedRangesForAddedExtraNewlines; // ivar: _trackedRangesForAddedExtraNewlines
@property (readonly, nonatomic) NSMutableDictionary *trackedToDoParagraphs; // ivar: _trackedToDoParagraphs
@property BOOL userChangedWritingDirection; // ivar: _userChangedWritingDirection


+(BOOL)shouldRetainFirstListStyleForFilteredAttributedSubstring:(id)arg0 fromRange:(struct _NSRange )arg1 ;
+(CGFloat)extraBulletWidthForNumberedListWithMaxItemNumber:(id)arg0 textFont:(id)arg1 ;
+(CGFloat)extraWidthNeededForStyle:(id)arg0 range:(struct _NSRange )arg1 attributedString:(id)arg2 textView:(id)arg3 ;
+(CGFloat)indentForStyle:(id)arg0 range:(struct _NSRange )arg1 attributedString:(id)arg2 textView:(id)arg3 ;
+(id)attributedStringToPasteWithAdaptedParagraphStyles:(id)arg0 pasteRange:(struct _NSRange )arg1 textStorage:(id)arg2 ;
+(id)removeBeginningListStyleIfNecessaryForAttributedString:(id)arg0 fromTextStorage:(id)arg1 andRange:(struct _NSRange )arg2 ;
-(BOOL)attachmentsExistInRange:(struct _NSRange )arg0 textStorage:(id)arg1 ;
-(BOOL)canAddToTagsInTextView:(id)arg0 forRange:(struct _NSRange )arg1 ;
-(BOOL)canChangeStyleForSelectedRanges:(id)arg0 inTextStorage:(id)arg1 ;
-(BOOL)canConvertInlineAttachmentToTextInTextView:(id)arg0 forRange:(struct _NSRange )arg1 ;
-(BOOL)canIndentTextView:(id)arg0 byDelta:(NSInteger)arg1 ;
-(BOOL)canIndentTextView:(id)arg0 byDelta:(NSInteger)arg1 forRanges:(id)arg2 ;
-(BOOL)containsOnlyStyle:(unsigned int)arg0 inRange:(struct _NSRange )arg1 inTextStorage:(id)arg2 ;
-(BOOL)deleteBackwardForSpecialCasesInTextView:(id)arg0 ;
-(BOOL)deleteWordBackwardForSpecialCasesInTextView:(id)arg0 ;
-(BOOL)inlineAttachmentInTextView:(id)arg0 atIndex:(NSUInteger)arg1 outAttachment:(*id)arg2 ;
-(BOOL)insertNewlineForSpecialCasesInTextView:(id)arg0 ;
-(BOOL)insertedSpaceInTextView:(id)arg0 replacementRange:(struct _NSRange )arg1 ;
-(BOOL)isForPrint;
-(BOOL)isTodoDoneRange:(struct _NSRange )arg0 inTextStorage:(id)arg1 ;
-(BOOL)removeListStyleBeforeDeletingParagraphContentIfNecessaryForTextView:(id)arg0 textStorage:(id)arg1 rangeToBeDeleted:(struct _NSRange )arg2 blockBeforeEndEditing:(id)arg3 ;
-(BOOL)removeListStyleForDeletingEmptyParagrahIfNecessaryForTextView:(id)arg0 textStorage:(id)arg1 paragraphRange:(struct _NSRange )arg2 andLocation:(NSUInteger)arg3 ;
-(BOOL)setDone:(BOOL)arg0 range:(struct _NSRange )arg1 inTextStorage:(id)arg2 ;
-(BOOL)shouldHighlightStyleAsLink:(unsigned int)arg0 ;
-(NSInteger)setTextStyle:(unsigned int)arg0 range:(struct _NSRange )arg1 inTextStorage:(id)arg2 ;
-(NSInteger)setTextStyle:(unsigned int)arg0 range:(struct _NSRange )arg1 inTextStorage:(id)arg2 inTextView:(id)arg3 ;
-(NSInteger)setTextStyle:(unsigned int)arg0 removeExtraStyling:(BOOL)arg1 range:(struct _NSRange )arg2 inTextStorage:(id)arg3 ;
-(NSInteger)setTextStyle:(unsigned int)arg0 removeExtraStyling:(BOOL)arg1 range:(struct _NSRange )arg2 inTextStorage:(id)arg3 inTextView:(id)arg4 ;
-(NSInteger)writingDirectionForRange:(struct _NSRange )arg0 inTextView:(id)arg1 inTextStorage:(id)arg2 ;
-(id)addTableAttachmentWithNSTextTable:(id)arg0 attributedString:(id)arg1 filterPastedAttributes:(BOOL)arg2 isReadingSelectionFromPasteboard:(BOOL)arg3 ;
-(id)indentParagraphStyle:(id)arg0 byAmount:(NSInteger)arg1 ;
-(id)init;
-(id)keyboardLanguageForTextView:(id)arg0 ;
-(id)nsParagraphStyleForTTParagraphStyle:(id)arg0 range:(struct _NSRange )arg1 attributedString:(id)arg2 textView:(id)arg3 ;
-(id)scaleFont:(id)arg0 withScale:(CGFloat)arg1 ;
-(id)strippedTypingAttributesAtStartOfParagraph:(id)arg0 atTheEndOfDocument:(BOOL)arg1 isTyping:(BOOL)arg2 ;
-(id)todoForRange:(struct _NSRange )arg0 inTextStorage:(id)arg1 ;
-(struct ? )p_setCellsInTable:(id)arg0 fromAttributedString:(id)arg1 textTable:(id)arg2 atCellOffset:(struct ? )arg3 filterPastedAttributes:(BOOL)arg4 isReadingSelectionFromPasteboard:(BOOL)arg5 ;
-(struct _NSRange )addExtraLinesIfNeededToTextStorage:(id)arg0 editedRange:(struct _NSRange )arg1 actualLengthIncrease:(*NSInteger)arg2 ;
-(struct _NSRange )cleanupTextStorage:(id)arg0 afterProcessingEditing:(NSUInteger)arg1 range:(struct _NSRange )arg2 changeInLength:(NSInteger)arg3 changeInLengthAfterCleanup:(*NSInteger)arg4 ;
-(struct _NSRange )firstParagraphForSetListStyleRange:(struct _NSRange )arg0 inTextStorage:(id)arg1 ;
-(struct _NSRange )numberListsInAttributedString:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(unsigned int)paragraphStyleForRange:(struct _NSRange )arg0 inTextView:(id)arg1 inTextStorage:(id)arg2 ;
-(unsigned int)paragraphStyleForRange:(struct _NSRange )arg0 inTextView:(id)arg1 inTextStorage:(id)arg2 ignoreTypingAttributes:(BOOL)arg3 ;
-(void)addToTagsInTextView:(id)arg0 forRange:(struct _NSRange )arg1 ;
-(void)convertInlineAttachmentToTextInTextView:(id)arg0 forRange:(struct _NSRange )arg1 ;
-(void)convertNSTablesToICTables:(id)arg0 pasteboardTypes:(id)arg1 filterPastedAttributes:(BOOL)arg2 isReadingSelectionFromPasteboard:(BOOL)arg3 ;
-(void)createToDoItemForCharacterRange:(struct _NSRange )arg0 paragraphStyle:(id)arg1 textStorage:(id)arg2 ;
-(void)dealloc;
-(void)filterAttachmentsForPrintingInAttributedString:(id)arg0 ;
-(void)fixModelAttributesInTextStorage:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(void)fixTextStorage:(id)arg0 afterProcessingEditing:(NSUInteger)arg1 range:(struct _NSRange )arg2 changeInLength:(NSInteger)arg3 ;
-(void)indentRange:(struct _NSRange )arg0 byAmount:(NSInteger)arg1 inTextStorage:(id)arg2 textView:(id)arg3 ;
-(void)indentRange:(struct _NSRange )arg0 byAmount:(NSInteger)arg1 inTextStorage:(id)arg2 textView:(id)arg3 forceUpdateAttributes:(BOOL)arg4 ;
-(void)insertNewlineAtCharacterIndex:(NSUInteger)arg0 textStorage:(id)arg1 ;
-(void)insertedText:(id)arg0 replacementRange:(struct _NSRange )arg1 inTextView:(id)arg2 hashtagController:(id)arg3 mentionsController:(id)arg4 languageHasSpaces:(BOOL)arg5 parentAttachment:(id)arg6 ;
-(void)insertedText:(id)arg0 replacementRange:(struct _NSRange )arg1 inTextView:(id)arg2 languageHasSpaces:(BOOL)arg3 ;
-(void)notifyInlineAttachmentsDeletedInRange:(struct _NSRange )arg0 ofTextStorage:(id)arg1 ;
-(void)p_populateTable:(id)arg0 withNSTextTable:(id)arg1 attributedString:(id)arg2 filterPastedAttributes:(BOOL)arg3 isReadingSelectionFromPasteboard:(BOOL)arg4 ;
-(void)refreshTextStylingForTextStorage:(id)arg0 withTextController:(id)arg1 ;
-(void)refreshTypingAttributesForAllTextViewsOfTextStorage:(id)arg0 ;
-(void)refreshTypingAttributesForTextView:(id)arg0 textStorage:(id)arg1 ;
-(void)removeFontsAndColorsForRange:(struct _NSRange )arg0 inTextStorage:(id)arg1 ;
-(void)scaleFontPointSize:(CGFloat)arg0 range:(struct _NSRange )arg1 inTextStorage:(id)arg2 ;
-(void)setIsForPrint:(BOOL)arg0 ;
-(void)setParagraphWritingDirectionInRange:(struct _NSRange )arg0 toDirection:(NSInteger)arg1 inTextView:(id)arg2 ;
-(void)setSelectionToIndex:(NSUInteger)arg0 onTextView:(id)arg1 ;
-(void)setTypingAttributesForUndo:(id)arg0 ;
-(void)setTypingTextStyle:(unsigned int)arg0 textView:(id)arg1 ;
-(void)styleDataDetectorTypesForPreviewInTextStorage:(id)arg0 ;
-(void)styleListsAndIndentsInAttributedString:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(void)superscriptDelta:(NSInteger)arg0 range:(struct _NSRange )arg1 inTextStorage:(id)arg2 ;
// -(void)superscriptUpdate:(id)arg0 range:(unk)arg1 inTextStorage:(struct _NSRange )arg2  ;
-(void)targetedRefreshTextStylingForTextStorage:(id)arg0 withTextController:(id)arg1 firstVisibleCharLocation:(NSUInteger)arg2 ;
-(void)trackExtraNewLineRangeIfNecessary:(struct _NSRange )arg0 ;
-(void)uniqueParagraphStylesInTextStorage:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(void)unscriptRange:(struct _NSRange )arg0 inTextStorage:(id)arg1 ;
-(void)updateAttachmentsInNote;
-(void)updateAttachmentsSelectionStateInTextStorage:(id)arg0 forSelectedRanges:(id)arg1 layoutManager:(id)arg2 textView:(id)arg3 ;
-(void)updateCellInTable:(id)arg0 atColumnIndex:(NSUInteger)arg1 rowIndex:(NSUInteger)arg2 fromAttributedString:(id)arg3 andTextTableBlock:(id)arg4 filterPastedAttributes:(BOOL)arg5 isReadingSelectionFromPasteboard:(BOOL)arg6 ;
-(void)updateParagraphWritingDirectionToKeyboardWritingDirectionInRange:(struct _NSRange )arg0 textStorage:(id)arg1 textView:(id)arg2 ;
-(void)updateTrackedAttributesInTextStorage:(id)arg0 range:(struct _NSRange )arg1 changeInLength:(NSInteger)arg2 ;
-(void)updateTrackedToDoParagraphsAfterIndex:(NSUInteger)arg0 byDelta:(NSInteger)arg1 excludingSeenParagraphs:(id)arg2 ;
-(void)updateTrackingInTextStorage:(id)arg0 range:(struct _NSRange )arg1 changeInLength:(NSInteger)arg2 ;
-(void)workAroundSageTables:(id)arg0 ;


@end


#endif