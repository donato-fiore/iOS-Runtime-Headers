// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTDRAGASSISTANT_H
#define UITEXTDRAGASSISTANT_H

@class NSArray, NSMapTable, NSTextStorage, NSString, UIView<UITextDragSupporting><UITextDropSupporting>;
@protocol UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, _UITextPasteProgressSupport, UITextPasteSessionDelegate, UITextDragDropSupport, UITextDraggableGeometry, UIDragSession, UIDropSession, UITextDraggableGeometrySameViewDropOperation, UITextDropPasteSession;

#import <Foundation/Foundation.h>

#import "UIDragInteraction.h"
#import "UITextRange.h"
#import "_UITextDragCaretView.h"
#import "UIDragItem.h"
#import "UITargetedDragPreview.h"
#import "UITextDropProposal.h"
#import "UITextDraggableGeometrySameViewDropOperationResult.h"
#import "UITextPasteController.h"
#import "UIDropInteraction.h"

@interface UITextDragAssistant : NSObject <UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, _UITextPasteProgressSupport, UITextPasteSessionDelegate, UITextDragDropSupport>

 {
    ? _flags;
    id<UITextDraggableGeometry> *_geometry;
    id<UIDragSession> *_currentDragSession;
    UIDragInteraction *_currentDragInteraction;
    NSArray *_draggedTextRanges;
    UITextRange *_initialDragSelectedRange;
    CGPoint _initialDragLocation;
    NSArray *_movedItemsInView;
    NSMapTable *_targetedPreviewProviders;
    NSMapTable *_previewProviders;
    NSTextStorage *_observingStorage;
    id<UIDropSession> *_currentDropSession;
    _UITextDragCaretView *_dropCaret;
    UITextRange *_currentDropRange;
    UIDragItem *_topmostDropItem;
    UITargetedDragPreview *_topmostDropPreview;
    UITextDropProposal *_currentDropProposal;
    UITextRange *_preDropSelectionRange;
    id<UITextDraggableGeometrySameViewDropOperation> *_sameViewDropOperation;
    UITextDraggableGeometrySameViewDropOperationResult *_sameViewDropOperationResult;
    UITextPasteController *_dropPasteController;
    id<UITextDropPasteSession> *_dropPasteSession;
    id *_delayedPreviewProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDragActive) BOOL dragActive;
@property (readonly, weak, nonatomic) UIDragInteraction *dragInteraction; // ivar: _dragInteraction
@property (readonly, nonatomic, getter=isDropActive) BOOL dropActive;
@property (readonly, weak, nonatomic) UIDropInteraction *dropInteraction; // ivar: _dropInteraction
@property (readonly, nonatomic) NSObject<UITextDraggableGeometry> *geometry;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView<UITextDragSupporting><UITextDropSupporting> *view; // ivar: _view


-(BOOL)_dragInteraction:(id)arg0 competingGestureRecognizerShouldDelayLift:(id)arg1 ;
-(BOOL)_dragInteraction:(id)arg0 shouldDelayCompetingGestureRecognizer:(id)arg1 ;
-(BOOL)_dragInteractionShouldBecomeDraggingSourceDelegate:(id)arg0 ;
-(BOOL)_hasDraggedTextRange:(id)arg0 ;
-(BOOL)_updateCurrentDropProposalInSession:(id)arg0 usingRequest:(id)arg1 ;
-(BOOL)accessibilityCanDrag;
-(BOOL)dragInteraction:(id)arg0 prefersFullSizePreviewsForSession:(id)arg1 ;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(NSInteger)_dataOwnerForSession:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(NSInteger)_dropInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(NSInteger)_textPasteRangeBehavior;
-(id)_accessibilityDraggableRanges;
-(id)_closestPositionToPoint:(struct CGPoint )arg0 ;
-(id)_dropRequestWithRange:(id)arg0 inSession:(id)arg1 ;
-(id)_dropRequestWithRange:(id)arg0 suggestedProposal:(id)arg1 inSession:(id)arg2 ;
-(id)_itemsForDraggedRange:(id)arg0 ;
-(id)_positionInSession:(id)arg0 ;
-(id)_previewForIrrelevantItemFromPreview:(id)arg0 ;
-(id)_previewForTopmostItem:(id)arg0 ;
-(id)_rangeInSession:(id)arg0 ;
-(id)_shrinkingPreview:(id)arg0 toPosition:(id)arg1 ;
-(id)_suggestedProposalForRequest:(id)arg0 ;
-(id)_textPasteSelectableRangeForResult:(id)arg0 fromRange:(id)arg1 ;
-(id)_textRangeForDraggingFromPoint:(struct CGPoint )arg0 ;
-(id)dragInteraction:(id)arg0 itemsForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForCancellingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)dragInteraction:(id)arg0 sessionForAddingItems:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)dropInteraction:(id)arg0 previewForDroppingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)initWithDraggableOnlyView:(id)arg0 ;
-(id)initWithView:(id)arg0 ;
-(id)initWithView:(id)arg0 geometry:(id)arg1 ;
-(void)_addDraggedTextRangeForItems:(id)arg0 defaultRange:(id)arg1 ;
-(void)_applyOptionsToGeometry;
-(void)_cleanupDrop;
-(void)_clearDraggedTextRanges;
-(void)_dropInteraction:(id)arg0 delayedPreviewProviderForDroppingItem:(id)arg1 previewProvider:(id)arg2 ;
-(void)_forDraggedTextRangesDo:(id)arg0 ;
-(void)_ghostDraggedTextRanges:(BOOL)arg0 ;
-(void)_initializeDragSession:(id)arg0 withInteraction:(id)arg1 ;
-(void)_liftOrDrag:(NSInteger)arg0 didEndWithOperation:(NSUInteger)arg1 ;
-(void)_performDropToRange:(id)arg0 inSession:(id)arg1 ;
-(void)_performSameViewOperation:(id)arg0 ;
-(void)_prepareSameViewOperation:(NSUInteger)arg0 forItems:(id)arg1 fromRanges:(id)arg2 toRange:(id)arg3 ;
-(void)_restoreResponderIfNeededForOperation:(NSUInteger)arg0 ;
-(void)_stopObservingTextStorage;
-(void)_textStorageDidProcessEditing;
-(void)_updateDropCaretToRange:(id)arg0 session:(id)arg1 ;
-(void)dragInteraction:(id)arg0 item:(id)arg1 willAnimateCancelWithAnimator:(id)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 didEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 willEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 sessionDidMove:(id)arg1 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)dragInteraction:(id)arg0 willAnimateLiftWithAnimator:(id)arg1 session:(id)arg2 ;
-(void)dropInteraction:(id)arg0 concludeDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 item:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnd:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnter:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidExit:(id)arg1 ;
-(void)installDragInteractionIfNeeded;
-(void)installDropInteractionIfNeeded;
-(void)invalidateDropCaret;
-(void)notifyTextInteraction;
-(void)textPasteSessionDidEndPasting:(id)arg0 ;
-(void)textPasteSessionDidRevealPasteResult:(id)arg0 ;
-(void)textPasteSessionWillBeginPasting:(id)arg0 ;
-(void)textPasteSessionWillHidePasteResult:(id)arg0 ;


@end


#endif