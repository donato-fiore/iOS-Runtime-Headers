// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTABLECOLUMNTEXTVIEW_H
#define ICTABLECOLUMNTEXTVIEW_H

@class NSUUID, ICTableColumnTextStorage, NSString, ICHashtagController, ICMentionsController;
@protocol ICHashtagViewControllerDelegate, UIScribbleInteractionDelegate, UIIndirectScribbleInteractionDelegate, ICHashtagKeyboardDelegate, ICMentionsKeyboardDelegate, ICTableColumnTextViewDelegate, ICTableSelectionDelegate;


#import "ICBaseTextView.h"

@interface ICTableColumnTextView : ICBaseTextView <ICHashtagViewControllerDelegate, UIScribbleInteractionDelegate, UIIndirectScribbleInteractionDelegate, ICHashtagKeyboardDelegate, ICMentionsKeyboardDelegate>



@property (weak, nonatomic) NSObject<ICTableColumnTextViewDelegate> *cellDelegate; // ivar: _cellDelegate
@property (retain, nonatomic) NSUUID *columnID; // ivar: _columnID
@property (readonly, nonatomic) ICTableColumnTextStorage *columnTextStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) ICHashtagController *hashtagController; // ivar: _hashtagController
@property (nonatomic) BOOL isChangingFont; // ivar: _isChangingFont
@property (nonatomic) BOOL isProcessingDelete; // ivar: _isProcessingDelete
@property (nonatomic) BOOL isResigningFirstResponder; // ivar: _isResigningFirstResponder
@property (weak, nonatomic) ICMentionsController *mentionsController; // ivar: _mentionsController
@property (nonatomic) _NSRange previousSelectedRange; // ivar: _previousSelectedRange
@property (weak, nonatomic) NSObject<ICTableSelectionDelegate> *selectionDelegate; // ivar: _selectionDelegate
@property (readonly) Class superclass;


-(BOOL)_accessibilityCanDrag;
-(BOOL)_accessibilityScrollToVisible;
-(BOOL)atCellBoundaryForDirection:(NSUInteger)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)indirectScribbleInteraction:(id)arg0 isElementFocused:(id)arg1 ;
-(BOOL)isAccessibilityTableTextView;
-(BOOL)resignFirstResponder;
-(BOOL)scribbleInteraction:(id)arg0 shouldBeginAtLocation:(struct CGPoint )arg1 ;
-(NSInteger)returnKeyType;
-(id)_accessibilityAXAttributedValue;
-(id)_accessibilityAttributedValueForRange:(struct _NSRange *)arg0 ;
-(id)_accessibilityResponderElement;
-(id)_icaxAccessibilityAttributedStringFromOriginalString:(id)arg0 ;
-(id)accessibilityDragSourceDescriptors;
-(id)accessibilityLabel;
-(id)baseAttributedStringForAccessibility;
-(id)closestPositionToPoint:(struct CGPoint )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(id)inputAssistantItem;
-(id)keyCommands;
-(id)positionFromPosition:(id)arg0 inDirection:(NSInteger)arg1 offset:(NSInteger)arg2 ;
-(id)textDroppableView:(id)arg0 proposalForDrop:(id)arg1 ;
-(id)undoManager;
-(struct CGRect )_accessibilityBoundsForRange:(struct _NSRange )arg0 ;
-(struct CGRect )accessibilityFrame;
-(struct CGRect )indirectScribbleInteraction:(id)arg0 frameForElement:(id)arg1 ;
-(struct CGRect )selectionRect;
-(struct _NSRange )_accessibilitySelectedTextRange;
-(struct _NSRange )rangeInSelectedCellFromRangeInTextView:(struct _NSRange )arg0 ;
-(struct _NSRange )rangeInTextViewFromRangeInSelectedCell:(struct _NSRange )arg0 ;
-(void)_accessibilitySetSelectedTextRange:(struct _NSRange )arg0 ;
-(void)_handleKeyUIEvent:(id)arg0 ;
-(void)_scrollRect:(struct CGRect )arg0 toVisibleInContainingScrollView:(BOOL)arg1 ;
-(void)addColumnLeft:(id)arg0 ;
-(void)addColumnRight:(id)arg0 ;
-(void)addRowDown:(id)arg0 ;
-(void)addRowUp:(id)arg0 ;
-(void)altMoveDown:(id)arg0 ;
-(void)altMoveUp:(id)arg0 ;
-(void)dealloc;
-(void)deleteBackward;
-(void)didPasteOrDropText:(id)arg0 toRange:(id)arg1 ;
-(void)finishProcessingDelete;
-(void)hashtagViewController:(id)arg0 insertFutureHashtagWithText:(id)arg1 ;
-(void)hashtagViewController:(id)arg0 insertHashtagWithText:(id)arg1 ;
-(void)hashtagViewController:(id)arg0 insertUnknownInlineAttachmentWithText:(id)arg1 ;
-(void)indirectScribbleInteraction:(id)arg0 focusElementIfNeeded:(id)arg1 referencePoint:(struct CGPoint )arg2 completion:(id)arg3 ;
-(void)indirectScribbleInteraction:(id)arg0 requestElementsInRect:(struct CGRect )arg1 completion:(id)arg2 ;
-(void)indirectScribbleInteraction:(id)arg0 willBeginWritingInElement:(id)arg1 ;
-(void)insertInlineAttachment:(id)arg0 saveAndResumeEditingForAttachment:(id)arg1 inNote:(id)arg2 ;
-(void)moveDown:(id)arg0 ;
-(void)moveLeft:(id)arg0 ;
-(void)moveLeftCellAfterDelete;
-(void)moveRight:(id)arg0 ;
-(void)moveToBeginningOfCell:(id)arg0 ;
-(void)moveToBeginningOfCellAndModifySelection:(id)arg0 ;
-(void)moveToEndOfCell:(id)arg0 ;
-(void)moveToEndOfCellAndModifySelection:(id)arg0 ;
-(void)moveUp:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)openExperimentalHashtagUI:(id)arg0 ;
-(void)paste:(id)arg0 ;
-(void)select:(id)arg0 ;
-(void)selectAll:(id)arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 ;
-(void)setEditorController:(id)arg0 ;
-(void)setupMenuController;
-(void)shiftReturn:(id)arg0 ;
-(void)startEditingForTapGesture:(id)arg0 ;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)toggleBoldface:(id)arg0 ;
-(void)toggleItalics:(id)arg0 ;
-(void)toggleUnderline:(id)arg0 ;


@end


#endif