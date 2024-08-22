// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTTEXTSTORAGE_H
#define TTTEXTSTORAGE_H

@class NSTextStorage, NSMutableAttributedString, TTMergeableStringUndoGroup, NSNumber, NSString, NSMutableArray, TTMergeableStringVersionedDocument, TTMergeableAttributedString, NSDate, NSArray, NSUUID, NSUndoManager;
@protocol TTMergeableStringDelegate, TTTextUndoTarget, TTTextStorageDelegate, TTTextStorageStyler;



@interface TTTextStorage : NSTextStorage <TTMergeableStringDelegate, TTTextUndoTarget>

 {
    NSUInteger _temporaryAttributeEditing;
}


@property (retain, nonatomic) NSMutableAttributedString *attributedString; // ivar: _attributedString
@property (nonatomic) _NSRange beforeEndEditedRange; // ivar: _beforeEndEditedRange
@property (retain, nonatomic) TTMergeableStringUndoGroup *coalescingUndoGroup; // ivar: _coalescingUndoGroup
@property (nonatomic) BOOL convertAttributes; // ivar: _convertAttributes
@property (copy, nonatomic) NSNumber *currentTimestamp; // ivar: _currentTimestamp
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delayedFixupAfterEditingWantsUndoCommand; // ivar: _delayedFixupAfterEditingWantsUndoCommand
@property (weak, nonatomic) NSObject<TTTextStorageDelegate> *delegate;
@property (readonly, nonatomic) NSMutableArray *deletedRanges; // ivar: _deletedRanges
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL directlyEditing; // ivar: _directlyEditing
@property (nonatomic) BOOL disableUndoCoalesceBreaking; // ivar: _disableUndoCoalesceBreaking
@property (readonly, nonatomic) TTMergeableStringVersionedDocument *document; // ivar: _document
@property (nonatomic) NSUInteger editingCount; // ivar: _editingCount
@property (nonatomic) BOOL filterPastedAttributes; // ivar: _filterPastedAttributes
@property (nonatomic) BOOL filterSubstringAttributes; // ivar: _filterSubstringAttributes
@property (nonatomic) BOOL filterSubstringAttributesForPlainText; // ivar: _filterSubstringAttributesForPlainText
@property (readonly, nonatomic) BOOL hasAnyTextViewWithDarkAppearance;
@property (nonatomic) BOOL hasEditedCharactersAfterTextSelection; // ivar: _hasEditedCharactersAfterTextSelection
@property (readonly, nonatomic) BOOL hasMultipleTextViews;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isApplyingUndoCommand; // ivar: _isApplyingUndoCommand
@property (nonatomic) BOOL isChangingSelectionByGestures; // ivar: _isChangingSelectionByGestures
@property (nonatomic) BOOL isDictating; // ivar: _isDictating
@property (nonatomic) BOOL isDragging; // ivar: _isDragging
@property (nonatomic) BOOL isDropping; // ivar: _isDropping
@property (nonatomic) BOOL isEditingTemporaryAttributes; // ivar: _isEditingTemporaryAttributes
@property (nonatomic) BOOL isEndingEditing; // ivar: _isEndingEditing
@property (nonatomic) BOOL isFixing; // ivar: _isFixing
@property (nonatomic) BOOL isHandlingTextCheckingResults; // ivar: _isHandlingTextCheckingResults
@property (nonatomic) BOOL isPerformingAccessibilityUndoableTextInsertion; // ivar: _isPerformingAccessibilityUndoableTextInsertion
@property (nonatomic) BOOL isReadingSelectionFromPasteboard; // ivar: _isReadingSelectionFromPasteboard
@property (nonatomic) BOOL isResettingBaseWritingDirection; // ivar: _isResettingBaseWritingDirection
@property (nonatomic) BOOL isSelectingText; // ivar: _isSelectingText
@property (readonly, nonatomic) BOOL isSkippingTimestampUpdates;
@property (nonatomic) BOOL isTypingOrMarkingText; // ivar: _isTypingOrMarkingText
@property (nonatomic) BOOL isZombie; // ivar: _isZombie
@property (nonatomic) _NSRange lastUndoEditRange; // ivar: _lastUndoEditRange
@property (readonly, nonatomic) TTMergeableAttributedString *mergeableString;
@property (copy, nonatomic) NSDate *now; // ivar: _now
@property (weak) NSObject<TTTextUndoTarget> *overrideUndoTarget; // ivar: _overrideUndoTarget
@property (copy, nonatomic) NSArray *pasteboardTypes; // ivar: _pasteboardTypes
@property (nonatomic) BOOL pendingFixupAfterEditing; // ivar: _pendingFixupAfterEditing
@property (nonatomic) BOOL previouslyHadMarkedText; // ivar: _previouslyHadMarkedText
@property (readonly, copy, nonatomic) NSUUID *replicaID;
@property (nonatomic) BOOL retainOriginalFormatting; // ivar: _retainOriginalFormatting
@property (nonatomic) BOOL shouldConvertTablesToTabs; // ivar: _shouldConvertTablesToTabs
@property (nonatomic) BOOL shouldInhibitAddingExtraNewlinesAtEndDuringFixup; // ivar: _shouldInhibitAddingExtraNewlinesAtEndDuringFixup
@property (nonatomic) BOOL shouldRemoveLeadingWhitespaceForChecklistDrop; // ivar: _shouldRemoveLeadingWhitespaceForChecklistDrop
@property (nonatomic) NSInteger skipTimestampUpdatesCount; // ivar: _skipTimestampUpdatesCount
@property (retain, nonatomic) NSObject<TTTextStorageStyler> *styler; // ivar: _styler
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *textViews;
@property (nonatomic) NSInteger ttChangeInLength; // ivar: _ttChangeInLength
@property (nonatomic) NSUInteger ttEditedMask; // ivar: _ttEditedMask
@property (nonatomic) _NSRange ttEditedRange; // ivar: _ttEditedRange
@property (retain, nonatomic) NSMutableArray *undoCommands; // ivar: _undoCommands
@property (retain, nonatomic) NSUndoManager *undoManager; // ivar: _undoManager
@property (readonly, nonatomic) NSObject<TTTextUndoTarget> *undoTarget;
@property (readonly, nonatomic) BOOL wantsTimestampUpdates;
@property (nonatomic) BOOL wantsUndoCommands; // ivar: _wantsUndoCommands
@property (nonatomic) BOOL wantsUpdateTrackingForInitialLoading; // ivar: _wantsUpdateTrackingForInitialLoading


+(CGFloat)listItemGlyphPointSizeForUnorderedListStyle:(unsigned int)arg0 zoomFactor:(CGFloat)arg1 ;
+(id)bulletTextAttributesWithTextFont:(id)arg0 paragraphStyle:(id)arg1 zoomFactor:(CGFloat)arg2 ;
+(id)filteredAttributedSubstring:(id)arg0 fromRange:(struct _NSRange )arg1 forPlainText:(BOOL)arg2 forStandardizedText:(BOOL)arg3 fixAttachments:(BOOL)arg4 insertListMarkers:(BOOL)arg5 ;
+(id)removeDataDetectorLinksForAttributedString:(id)arg0 ;
+(id)removeTextAttachmentsForAttributedString:(id)arg0 translateTTFont:(BOOL)arg1 ;
+(id)standardizedAttributedStringFromAttributedString:(id)arg0 withStyler:(id)arg1 fixAttachments:(BOOL)arg2 translateTTFont:(BOOL)arg3 context:(id)arg4 ;
+(void)fixAttachmentsForRenderingInAttributedString:(id)arg0 forPlainText:(BOOL)arg1 forStandardizedText:(BOOL)arg2 ;
-(BOOL)_shouldSetOriginalFontAttribute;
-(BOOL)hasNamedStyle:(unsigned int)arg0 inRange:(struct _NSRange )arg1 ;
-(BOOL)ic_containsAttribute:(id)arg0 InRange:(struct _NSRange )arg1 ;
-(BOOL)isDeletingContentAttachmentWithReplacementRange:(struct _NSRange )arg0 replacementLength:(NSUInteger)arg1 ;
-(BOOL)isDeletingDictationAttachmentWithReplacementRange:(struct _NSRange )arg0 replacementLength:(NSUInteger)arg1 ;
-(BOOL)isEditing;
-(BOOL)isEditingOrConvertingMarkedText:(BOOL)arg0 ;
-(BOOL)mergeableStringIsEqualAfterSerialization:(id)arg0 ;
-(BOOL)shouldBreakUndoCoalescingWithReplacementRange:(struct _NSRange )arg0 replacementLength:(NSUInteger)arg1 ;
-(BOOL)textViewHasMarkedText:(id)arg0 ;
-(BOOL)validateIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(NSUInteger)length;
-(NSUInteger)mergeWithDocument:(id)arg0 ;
-(id)_icaxUnfilteredAttributedString;
-(id)attribute:(id)arg0 atIndex:(NSUInteger)arg1 effectiveRange:(struct _NSRange *)arg2 ;
-(id)attribute:(id)arg0 atIndex:(NSUInteger)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange )arg3 ;
-(id)attributedSubstringFromRange:(struct _NSRange )arg0 ;
-(id)attributesAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)attributesAtIndex:(NSUInteger)arg0 longestEffectiveRange:(struct _NSRange *)arg1 inRange:(struct _NSRange )arg2 ;
-(id)copyDataForUTI:(id)arg0 range:(struct _NSRange )arg1 persistenceHelper:(id)arg2 ;
-(id)correctParagraphStyleReuseForRange:(struct _NSRange )arg0 withNewAttributedString:(id)arg1 ;
-(id)customPasteboardDataFromRange:(struct _NSRange )arg0 persistenceHelper:(id)arg1 ;
-(id)dataFromRange:(struct _NSRange )arg0 documentAttributes:(id)arg1 error:(*id)arg2 ;
-(id)editAtIndex:(NSUInteger)arg0 ;
-(id)edits;
-(id)editsInRange:(struct _NSRange )arg0 ;
-(id)filteredAttributedStringForUTI:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)filteredAttributedSubstringFromRange:(struct _NSRange )arg0 ;
-(id)filteredAttributedSubstringFromRange:(struct _NSRange )arg0 insertListMarkers:(BOOL)arg1 ;
-(id)initWithAttributedString:(id)arg0 replicaID:(id)arg1 ;
-(id)initWithAttributedString:(id)arg0 replicaID:(id)arg1 sourceZoomController:(id)arg2 keepSourceZoomController:(BOOL)arg3 existingStyler:(id)arg4 ;
-(id)initWithData:(id)arg0 replicaID:(id)arg1 ;
-(id)initWithDocument:(id)arg0 ;
-(id)itemProviderForRange:(struct _NSRange )arg0 andNote:(id)arg1 ;
-(id)newCoalescingUndoGroup;
-(id)savedSelectionWithSelectionAffinity:(NSUInteger)arg0 ;
-(id)standardizedAttributedStringFixingTextAttachmentsForRange:(struct _NSRange )arg0 context:(id)arg1 ;
-(id)standardizedAttributedStringFixingTextAttachmentsForRange:(struct _NSRange )arg0 styler:(id)arg1 context:(id)arg2 ;
-(id)standardizedAttributedStringFixingTextAttachmentsInContext:(id)arg0 ;
-(id)string;
-(struct _NSRange )logicalRangeForLocation:(NSUInteger)arg0 ;
-(struct _NSRange )safeCharacterRangeForRange:(struct _NSRange )arg0 ;
-(void)addAttribute:(id)arg0 value:(id)arg1 range:(struct _NSRange )arg2 ;
-(void)addUndoCommand:(id)arg0 ;
-(void)applyUndoGroup:(id)arg0 ;
-(void)applyUndoWithBlock:(id)arg0 ;
-(void)beginEditing;
-(void)beginSkippingTimestampUpdates;
-(void)beginTemporaryAttributeEditing;
-(void)beginTemporaryAttributes;
-(void)breakUndoCoalescing;
-(void)convertNSTablesToTabs:(id)arg0 ;
-(void)coordinateAccess:(id)arg0 ;
-(void)coordinateEditing:(id)arg0 ;
-(void)coordinateReading:(id)arg0 ;
-(void)dd_makeLinksForResultsInAttributesOfType:(NSUInteger)arg0 context:(id)arg1 range:(struct _NSRange )arg2 ;
-(void)dd_resetResults;
-(void)edited:(NSUInteger)arg0 range:(struct _NSRange )arg1 changeInLength:(NSInteger)arg2 ;
-(void)editedAttributeRange:(struct _NSRange )arg0 ;
-(void)editedRange:(struct _NSRange )arg0 changeInLength:(NSInteger)arg1 ;
-(void)endEditing;
-(void)endSkippingTimestampUpdates;
-(void)endTemporaryAttributeEditing;
-(void)endTemporaryAttributes;
-(void)enumerateEditsInRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;
-(void)executeDelayedFixupAfterEditing;
-(void)fixupAfterEditing;
-(void)fixupAfterEditingDelayedToEndOfRunLoop;
-(void)forceFixupAfterEditingIfDelayed;
-(void)preReplaceCharactersInRange:(struct _NSRange )arg0 withStringLength:(NSUInteger)arg1 ;
-(void)redactAuthorAttributions;
-(void)removeAttribute:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withAttributedString:(id)arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)replaceWithDocument:(id)arg0 ;
-(void)resetTTEdits;
-(void)restoreAttributedString:(id)arg0 ;
-(void)restoreSelection:(id)arg0 ;
-(void)saveSelectionDuringBlock:(id)arg0 ;
// -(void)saveSelectionDuringBlock:(id)arg0 affinity:(unk)arg1  ;
-(void)setAttributes:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)setTimestamp:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)styleTextInRange:(struct _NSRange )arg0 ;


@end


#endif