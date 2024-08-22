// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICBASETEXTVIEW_H
#define ICBASETEXTVIEW_H

@class UITextView, TTTextStorage, NSArray, NSAttributedString, NSMutableDictionary, UISelectionFeedbackGenerator, UIView, NSString, ICTrackedParagraph, ICNAEventReporter, ICHashtagController, NSDictionary, ICMentionsController, UITapGestureRecognizer, CALayer, NSMutableArray;
@protocol UITextDragDelegate_Private, UITextDropDelegate_Private, UITextPasteDelegate, ICNoteMergeObserver, ICAccessibilityChildReparentingProvider, UIGestureRecognizerDelegate, ICHashtagKeyboardDelegate, ICMentionsKeyboardDelegate, ICBaseTextViewDelegate, TTTextStoragePersistenceHelper;


#import "ICNoteMergeabilityController.h"
#import "ICBaseTextView.h"
#import "ICNoteEditorViewController.h"
#import "ICLayoutManager.h"
#import "ICBaseTextViewItemProviderPasteSession.h"

@interface ICBaseTextView : UITextView <UITextDragDelegate_Private, UITextDropDelegate_Private, UITextPasteDelegate, ICNoteMergeObserver, ICAccessibilityChildReparentingProvider, UIGestureRecognizerDelegate, ICHashtagKeyboardDelegate, ICMentionsKeyboardDelegate>



@property (readonly, nonatomic) TTTextStorage *TTTextStorage;
@property (retain, nonatomic) NSArray *_icaxCachedChildrenForReparenting; // ivar: __icaxCachedChildrenForReparenting
@property (copy, nonatomic) NSAttributedString *_icaxCachedModifiedAttributedString; // ivar: __icaxCachedModifiedAttributedString
@property (nonatomic) CGFloat _icaxLastOffsetForBuildingReparentingCache; // ivar: __icaxLastOffsetForBuildingReparentingCache
@property (nonatomic) NSUInteger _icaxModifiedCursorPosition; // ivar: __icaxModifiedCursorPosition
@property (nonatomic) _NSRange _icaxModifiedSelectionRange; // ivar: __icaxModifiedSelectionRange
@property (retain, nonatomic) NSMutableDictionary *_icaxPencilKitAttachmentsDict; // ivar: __icaxPencilKitAttachmentsDict
@property (nonatomic) BOOL _icaxShouldPreventUpdatingFakeCursorRange; // ivar: __icaxShouldPreventUpdatingFakeCursorRange
@property (readonly, nonatomic) NSAttributedString *_icaxUnfilteredAttributedString; // ivar: __icaxUnfilteredAttributedString
@property (retain, nonatomic) UISelectionFeedbackGenerator *checklistDragFeedbackGenerator; // ivar: _checklistDragFeedbackGenerator
@property (nonatomic) CGFloat checklistDragVerticalOffset; // ivar: _checklistDragVerticalOffset
@property (readonly, nonatomic) UIView *containerViewForAttachments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ICNoteMergeabilityController *dragMergeabilityController; // ivar: _dragMergeabilityController
@property (retain, nonatomic) ICBaseTextView *dragTextViewStrongReference; // ivar: _dragTextViewStrongReference
@property (retain, nonatomic) ICTrackedParagraph *draggedChecklistTrackedParagraph; // ivar: _draggedChecklistTrackedParagraph
@property (retain, nonatomic) ICNoteMergeabilityController *dropMergeabilityController; // ivar: _dropMergeabilityController
@property (weak, nonatomic) ICNoteEditorViewController *editorController; // ivar: _editorController
@property (retain, nonatomic) ICNAEventReporter *eventReporter; // ivar: _eventReporter
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) ICHashtagController *hashtagController; // ivar: _hashtagController
@property (nonatomic) CGPoint hitTestPoint; // ivar: _hitTestPoint
@property (weak, nonatomic) NSObject<ICBaseTextViewDelegate> *icDelegate; // ivar: _icDelegate
@property (readonly, nonatomic) ICLayoutManager *icLayoutManager;
@property (retain, nonatomic) NSDictionary *icTypingAttributes; // ivar: _icTypingAttributes
@property (readonly, nonatomic) NSUInteger ic_selectedBIUS;
@property (nonatomic) BOOL inhibitNextDropCursorUpdateAnimation; // ivar: _inhibitNextDropCursorUpdateAnimation
@property (readonly, nonatomic) BOOL isDocumentCopyableSize;
@property (nonatomic) BOOL isDraggingChecklistItem; // ivar: _isDraggingChecklistItem
@property (nonatomic) BOOL isDraggingOverChecklistItem; // ivar: _isDraggingOverChecklistItem
@property (nonatomic) BOOL isInProcessEditingForTextStorage; // ivar: _isInProcessEditingForTextStorage
@property (readonly, nonatomic) BOOL isSelectionCopyableSize;
@property (nonatomic) BOOL isSettingTextStyle; // ivar: _isSettingTextStyle
@property (retain, nonatomic) ICBaseTextViewItemProviderPasteSession *itemProviderPasteSession; // ivar: _itemProviderPasteSession
@property (nonatomic) BOOL languageHasSpaces; // ivar: _languageHasSpaces
@property (nonatomic) NSUInteger lastChecklistDropIndex; // ivar: _lastChecklistDropIndex
@property (weak, nonatomic) ICMentionsController *mentionsController; // ivar: _mentionsController
@property (nonatomic) NSArray *participants; // ivar: _participants
@property (retain, nonatomic) NSDictionary *pendingTypingAttributes; // ivar: _pendingTypingAttributes
@property (readonly, nonatomic) NSObject<TTTextStoragePersistenceHelper> *persistenceHelper;
@property (nonatomic) _NSRange selectedRangeBeforeMarking; // ivar: _selectedRangeBeforeMarking
@property (readonly, nonatomic) BOOL selectionSupportsFindInNote;
@property (nonatomic) BOOL shouldAvoidResigningFirstResponder; // ivar: _shouldAvoidResigningFirstResponder
@property (nonatomic) BOOL shouldDropChecklistAbove; // ivar: _shouldDropChecklistAbove
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAttachments;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain, nonatomic) CALayer *tempHighlightLayer; // ivar: _tempHighlightLayer
@property (readonly, nonatomic) CALayer *tempHighlightLayerIfExists;
@property (nonatomic) BOOL textSelectionHidden; // ivar: _textSelectionHidden
@property (nonatomic) BOOL touchIsPointer; // ivar: _touchIsPointer
@property (retain, nonatomic) ICTrackedParagraph *trackedParagraphCurrentlyUnderDraggedChecklist; // ivar: _trackedParagraphCurrentlyUnderDraggedChecklist
@property (retain, nonatomic) NSMutableArray *viewsGhostedForDrag; // ivar: _viewsGhostedForDrag


+(id)attachmentInNote:(id)arg0 range:(struct _NSRange )arg1 ;
+(id)copyTmpFileToTmpFileInSubDirectory:(id)arg0 uti:(id)arg1 suggestedName:(id)arg2 ;
+(id)temporaryTextStorageWithAttributedString:(id)arg0 note:(id)arg1 filterAttributedString:(BOOL)arg2 ;
-(BOOL)_accessibilityHasTextOperations;
-(BOOL)_accessibilityOverridesInstructionsHint;
-(BOOL)_accessibilityTextOperationAction:(id)arg0 ;
-(BOOL)_isDropSessionLocalDragContextViewFromSubview:(id)arg0 ;
-(BOOL)_shouldBecomeEditableUponDrop;
-(BOOL)accessibilityActivate;
-(BOOL)accessibilityPerformEscape;
-(BOOL)accessibilityScroll:(NSInteger)arg0 ;
-(BOOL)attributedStringContainsTTAttachment:(id)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)dd_ignoreSignatures;
-(BOOL)exceedsMaxLengthIfSelectionReplacedWithAttributedString:(id)arg0 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)handleAttributedStringDropForItemProvider:(id)arg0 atTextPosition:(id)arg1 pasteSession:(id)arg2 outProgress:(*id)arg3 completionBlock:(id)arg4 ;
-(BOOL)handleGenericFileForItemProvider:(id)arg0 atTextPosition:(id)arg1 pasteSession:(id)arg2 preferredTypeIdentifier:(id)arg3 outProgress:(*id)arg4 completionBlock:(id)arg5 ;
-(BOOL)handleImageDropForItemProvider:(id)arg0 atTextPosition:(id)arg1 pasteSession:(id)arg2 outProgress:(*id)arg3 completionBlock:(id)arg4 ;
-(BOOL)handleInlineDrawingDropForItemProvider:(id)arg0 atTextPosition:(id)arg1 pasteSession:(id)arg2 outProgress:(*id)arg3 completionBlock:(id)arg4 ;
-(BOOL)handleInlinePaperDropForItemProvider:(id)arg0 atTextPosition:(id)arg1 pasteSession:(id)arg2 outProgress:(*id)arg3 completionBlock:(id)arg4 ;
-(BOOL)handleMapKitItemDropForItemProvider:(id)arg0 atTextPosition:(id)arg1 pasteSession:(id)arg2 outProgress:(*id)arg3 completionBlock:(id)arg4 ;
-(BOOL)handleMovieOrAudioDropForItemProvider:(id)arg0 atTextPosition:(id)arg1 pasteSession:(id)arg2 outProgress:(*id)arg3 completionBlock:(id)arg4 ;
-(BOOL)handleTopotextDropForItemProvider:(id)arg0 atTextPosition:(id)arg1 pasteSession:(id)arg2 outProgress:(*id)arg3 completionBlock:(id)arg4 ;
-(BOOL)handleURLDropForItemProvider:(id)arg0 atTextPosition:(id)arg1 pasteSession:(id)arg2 outProgress:(*id)arg3 completionBlock:(id)arg4 ;
-(BOOL)hasFullWidthTextAttachmentAtCaretLocation:(NSInteger)arg0 ;
-(BOOL)hasSupportedImageInItemProvider:(id)arg0 ;
-(BOOL)ic_allSelectedRangesContainAttributeName:(id)arg0 ;
-(BOOL)ic_allSelectedRangesContainFontHint:(unsigned int)arg0 ;
-(BOOL)ic_canChangeStyle;
-(BOOL)ic_canIndentByDelta:(NSInteger)arg0 ;
-(BOOL)ic_shouldStartDataDetectors;
-(BOOL)isAccessibilityElement;
-(BOOL)isAccessibilityTableTextView;
-(BOOL)isPreviewing;
-(BOOL)isSupportedAsGenericFile:(id)arg0 ;
-(BOOL)resignFirstResponder;
-(BOOL)selectionContainsDDResultAttribute;
-(BOOL)shouldAcceptDropSession:(id)arg0 ;
-(BOOL)shouldCheckURLFirstForItemProvider:(id)arg0 ;
-(BOOL)textDroppableView:(id)arg0 dropSession:(id)arg1 willMoveCaretToRange:(id)arg2 ;
-(BOOL)willInteractWithLinkAtPoint:(struct CGPoint )arg0 ;
-(CGFloat)distanceFromContentToGivenPoint:(struct CGPoint )arg0 charIndexAtPoint:(*NSUInteger)arg1 ;
-(NSInteger)_accessibilityLineEndPosition;
-(NSInteger)_accessibilityLineStartPosition;
-(NSInteger)_textDraggableView:(id)arg0 dataOwnerForDrag:(id)arg1 ;
-(NSInteger)_textDroppableView:(id)arg0 dataOwnerForDrop:(id)arg1 ;
-(NSInteger)ic_currentWritingDirection;
-(NSUInteger)_icaxLinePositionForPosition:(NSUInteger)arg0 start:(BOOL)arg1 ;
-(NSUInteger)_icaxModifiedPositionForPosition:(NSUInteger)arg0 ;
-(NSUInteger)_icaxPositionForModifiedPosition:(NSUInteger)arg0 ;
-(NSUInteger)accessibilityTraits;
-(NSUInteger)textDroppableView:(id)arg0 willBecomeEditableForDrop:(id)arg1 ;
-(id)_accessibilityAttributedValueForRange:(struct _NSRange *)arg0 ;
-(id)_accessibilityHitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint )arg0 ;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)_accessibilityTextOperations;
-(id)_accessibilityUserTestingChildren;
-(id)_accessibilityValueForRange:(struct _NSRange *)arg0 ;
-(id)_icaxAttachmentElements;
-(id)_icaxAttachmentElementsForRotor;
-(id)_icaxAttachmentViewForCurrentSelectedRange;
-(id)_icaxAttributedStringForRange:(struct _NSRange *)arg0 ;
-(id)_icaxChecklistDeleteCheckedItemsString;
-(id)_icaxChecklistMarkAllItemsCompleteString;
-(id)_icaxChecklistMoveCheckedToBottomString;
-(id)_icaxChecklistUnmarkAllItemsCompleteString;
-(id)_icaxCurrentParagraph;
-(id)_icaxDecreaseIndentationString;
-(id)_icaxFirstAttachmentViewSupportingAction:(SEL)arg0 ;
-(id)_icaxFirstTextAttachmentInRange:(struct _NSRange )arg0 ;
-(id)_icaxIncreaseIndentationString;
-(id)_icaxInsertDrawingString;
-(id)_icaxLinkElements;
-(id)_icaxMakeBoldString;
-(id)_icaxMakeChecklistString;
-(id)_icaxMakeItalicString;
-(id)_icaxMakeNotBoldString;
-(id)_icaxMakeNotItalicString;
-(id)_icaxMakeNotUnderlinedString;
-(id)_icaxMakeUnderlinedString;
-(id)_icaxMarkAsCompletedString;
-(id)_icaxMarkAsIncompleteString;
-(id)_icaxMentionsElementsForRotor;
-(id)_icaxModifiedAttributedStorageString;
-(id)_icaxRemoveChecklistString;
-(id)_icaxShareAttachmentString;
-(id)_icaxTableElementsForRotor;
-(id)_icaxTagsElementsForRotor;
-(id)_icaxTextOperationsForAttachmentViews;
-(id)_icaxTodoElements;
-(id)_targetedPreviewForHighlightRange:(id)arg0 ;
-(id)accessibilityCustomActions;
-(id)accessibilityCustomRotors;
-(id)accessibilityDragSourceDescriptors;
-(id)accessibilityDropPointDescriptors;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)attachmentsInRange:(struct _NSRange )arg0 ;
-(id)attributedStringForDrawing:(id)arg0 session:(id)arg1 ;
-(id)attributedStringForImageData:(id)arg0 imageTypeUTI:(id)arg1 itemProvider:(id)arg2 pasteSession:(id)arg3 ;
-(id)attributedStringForStrokeSelection:(id)arg0 session:(id)arg1 ;
-(id)attributedStringForURL:(id)arg0 uti:(id)arg1 name:(id)arg2 metadata:(id)arg3 synapseData:(id)arg4 session:(id)arg5 ;
-(id)baseAttributedStringForAccessibility;
-(id)childElements;
-(id)childElementsForAccessibilityReparenting;
-(id)containerViewForDragItemPreviews;
-(id)correctlyPositionedPreviewForCharacterRange:(struct _NSRange )arg0 inTextStorage:(id)arg1 ;
-(id)correctlyPositionedPreviewForCharacterRange:(struct _NSRange )arg0 uiRange:(id)arg1 ;
-(id)elementsForAccessibilityRotorType:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)ic_selectedStyles;
-(id)ic_selectedStylesIgnoreTypingAttributes:(BOOL)arg0 ;
-(id)icaxMakeNotStrikethroughString;
-(id)icaxMakeStrikethroughString;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(id)internalTypingAttributes;
-(id)itemProviderConsumerTypesForItemProvider:(id)arg0 ;
-(id)linkTappedByGesture:(id)arg0 ;
-(id)pasteConfigurationForCurrentTextView;
-(id)pasteImagesDataArray:(id)arg0 typesArray:(id)arg1 session:(id)arg2 ;
-(id)pasteIntoSelectedRangeWithoutExceedingMaxLengthWithAttributedString:(id)arg0 session:(id)arg1 ;
-(id)pasteNotePasteboardData:(id)arg0 session:(id)arg1 error:(*id)arg2 ;
// -(id)pasteStringUsingBlock:(id)arg0 approxPasteString:(unk)arg1 pasteboardTypes:(id)arg2 session:(id)arg3  ;
-(id)pasteURL:(id)arg0 uti:(id)arg1 name:(id)arg2 metadata:(id)arg3 session:(id)arg4 ;
-(id)preferredFileTypeForItemProvider:(id)arg0 ;
-(id)preferredFileTypesExtensionDictionary;
-(id)previewTargetWithView:(id)arg0 ;
-(id)singleSelectedAttachment;
-(id)standardizedAttributedString:(id)arg0 attachmentIdentifiers:(*id)arg1 ;
-(id)targetedPreviewForPaperKitAttachment:(id)arg0 textFindingResult:(id)arg1 ;
-(id)textAttachmentsInRange:(struct _NSRange )arg0 ;
-(id)textController;
-(id)textDraggableView:(id)arg0 dragPreviewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)textDraggableView:(id)arg0 itemsForDrag:(id)arg1 ;
-(id)textDraggableView:(id)arg0 textRangeForDragFromPosition:(id)arg1 defaultRange:(id)arg2 session:(id)arg3 ;
-(id)textDroppableView:(id)arg0 positionForDrop:(id)arg1 ;
-(id)textDroppableView:(id)arg0 previewForDroppingAllItemsWithDefault:(id)arg1 ;
-(id)textDroppableView:(id)arg0 proposalForDrop:(id)arg1 ;
-(id)textPasteConfigurationSupporting:(id)arg0 combineItemAttributedStrings:(id)arg1 forRange:(id)arg2 ;
-(id)textPasteConfigurationSupporting:(id)arg0 performPasteOfAttributedString:(id)arg1 toRange:(id)arg2 ;
-(id)textPasteConfigurationSupporting:(id)arg0 transformPasteItem:(id)arg1 ;
-(id)typeIdentifiersSupportedAsGenericFiles;
-(id)typingAttributes;
-(id)updateIndentForChecklistDragIfNecessaryForString:(id)arg0 lineUnderDrop:(id)arg1 ;
-(struct CGPoint )accessibilityActivationPoint;
-(struct CGPoint )renderTextInCharacterRange:(struct _NSRange )arg0 inTextStorage:(id)arg1 image:(*id)arg2 boundingRectangles:(*id)arg3 renderedGlyphRange:(struct _NSRange *)arg4 ;
-(struct CGPoint )textOriginOffsetForGlyphRange:(struct _NSRange )arg0 ;
-(struct CGRect )_accessibilityBoundsForRange:(struct _NSRange )arg0 ;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(struct CGRect )enclosingRectForGlyphRange:(struct _NSRange )arg0 ;
-(struct _NSRange )_accessibilityLineRangeForPosition:(NSUInteger)arg0 ;
-(struct _NSRange )_accessibilityRangeForLineNumberAndColumn:(id)arg0 ;
-(struct _NSRange )_accessibilitySelectedTextRange;
-(struct _NSRange )_icaxRangeInModifiedAttributedString:(id)arg0 forRange:(struct _NSRange )arg1 ;
-(struct _NSRange )_icaxRangeInTextStorageForRange:(struct _NSRange )arg0 fromModifiedString:(id)arg1 ;
-(struct _NSRange )_icaxRangeOfAttachment:(id)arg0 ;
-(void)_accessibilitySetSelectedTextRange:(struct _NSRange )arg0 ;
-(void)_define:(id)arg0 ;
-(void)_deleteBackwardAndNotify:(BOOL)arg0 ;
-(void)_icaxAddParticipantEditHighlightsToString:(id)arg0 forRange:(struct _NSRange )arg1 ;
-(void)_icaxChecklistDeleteChecked;
-(void)_icaxChecklistMarkAllComplete;
-(void)_icaxChecklistSortCheckedToBottom;
-(void)_icaxChecklistUnMarkAllComplete;
-(void)_icaxGetBoldForCurrentRange:(*BOOL)arg0 italic:(*BOOL)arg1 underline:(*BOOL)arg2 strikethrough:(*BOOL)arg3 ;
-(void)_icaxMarkTodoCompleteForCurrentSelection;
-(void)_icaxMarkTodoIncompleteForCurrentSelection;
-(void)_icaxUpdateFakeTextSelectionRange;
-(void)_insertDrawing:(id)arg0 ;
-(void)_pushPendingTypingAttributesIfNeeded;
-(void)_removeDrawingAttachment:(id)arg0 withView:(id)arg1 forDeletion:(BOOL)arg2 ;
-(void)_share:(id)arg0 ;
-(void)beginDrop;
-(void)buildMenuWithBuilder:(id)arg0 ;
-(void)commonInit;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)deleteBackward;
-(void)didPasteOrDropText:(id)arg0 toRange:(id)arg1 ;
-(void)finishDropWithString:(id)arg0 ;
-(void)ic_editAttributesInSelectedRanges:(id)arg0 ;
-(void)ic_enumerateAttributesInSelectedRanges:(id)arg0 ;
-(void)ic_enumerateTableAttachmentViewControllersInRanges:(id)arg0 usingBlock:(id)arg1 ;
-(void)ic_indentByAmount:(NSInteger)arg0 ;
-(void)ic_performBlock:(id)arg0 ;
-(void)ic_resetDataDetectorsResults;
-(void)ic_setTextStyleForCurrentSelection:(unsigned int)arg0 ;
-(void)ic_startDataDetectors;
-(void)ic_toggleAttributeWithName:(id)arg0 ;
-(void)ic_toggleBoldface;
-(void)ic_toggleFontHint:(unsigned int)arg0 ;
-(void)ic_toggleItalics;
-(void)ic_toggleStrikethrough;
-(void)ic_toggleUnderline;
-(void)icaxBeginEditingAtAttachment:(id)arg0 ;
-(void)icaxBeginEditingInStorageRange:(struct _NSRange )arg0 ;
-(void)icaxClearCachedChildrenForReparenting;
-(void)icaxClearCaches;
-(void)icaxSpeakIndentationLevelForCurrentSelectedRange;
-(void)icaxTextDidChange;
-(void)icaxTextDidChangeSelection;
-(void)icaxUpdateLinkRanges;
-(void)informDelegateOfAnalyticsCalloutBarButtonActionOfType:(NSInteger)arg0 sender:(id)arg1 ;
-(void)insertText:(id)arg0 ;
-(void)insertTextSuggestion:(id)arg0 ;
-(void)keyboardLocaleChanged:(id)arg0 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg0 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg0 ;
-(void)paste:(id)arg0 ;
-(void)respondToTapGesture:(id)arg0 ;
-(void)select:(id)arg0 ;
-(void)selectAll:(id)arg0 ;
-(void)setInternalTypingAttributes:(id)arg0 ;
-(void)setMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)setTypingAttributes:(id)arg0 ;
-(void)setupLinkTextAttributes;
-(void)setupTextViewDragAndDropDelegates;
-(void)showDeleteAlertsIfNecessaryWithCompletionHandler:(id)arg0 ;
-(void)showDeleteInlineDrawingAlertWithType:(NSUInteger)arg0 attachments:(id)arg1 completionHandler:(id)arg2 ;
-(void)speakAccessibilityAutoListItemIfNecessaryForInsertedText:(id)arg0 ;
-(void)startEditingForTapGesture:(id)arg0 ;
-(void)textDraggableView:(id)arg0 dragSessionDidEnd:(id)arg1 withOperation:(NSUInteger)arg2 ;
-(void)textDraggableView:(id)arg0 dragSessionWillBegin:(id)arg1 ;
-(void)textDraggableView:(id)arg0 willAnimateLiftWithAnimator:(id)arg1 session:(id)arg2 ;
-(void)textDroppableView:(id)arg0 dropSessionDidEnd:(id)arg1 ;
-(void)textDroppableView:(id)arg0 dropSessionDidEnter:(id)arg1 ;
-(void)textDroppableView:(id)arg0 dropSessionDidExit:(id)arg1 ;
-(void)textDroppableView:(id)arg0 dropSessionDidUpdate:(id)arg1 ;
-(void)textDroppableView:(id)arg0 willPerformDrop:(id)arg1 ;
-(void)textStorageDidEndEditingNotification:(id)arg0 ;
-(void)textStorageDidPerformMerge:(id)arg0 ;
-(void)textStorageWillPerformMerge:(id)arg0 ;
-(void)toggleBoldface:(id)arg0 ;
-(void)toggleItalics:(id)arg0 ;
-(void)toggleStrikethrough;
-(void)toggleUnderline:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)unmarkText;
-(void)updateKeyboardSuggestions:(id)arg0 hashtagController:(id)arg1 ;
-(void)updateKeyboardSuggestions:(id)arg0 mentionsController:(id)arg1 mentionString:(id)arg2 ;
-(void)updateTextViewForDidChange;


@end


#endif