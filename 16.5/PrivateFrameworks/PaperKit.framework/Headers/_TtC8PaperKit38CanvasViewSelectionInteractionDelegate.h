// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT38CANVASVIEWSELECTIONINTERACTIONDELEGATE_H
#define _TTC8PAPERKIT38CANVASVIEWSELECTIONINTERACTIONDELEGATE_H

@protocol PKSelectionInteractionDelegate;

#import <Foundation/Foundation.h>


@interface _TtC8PaperKit38CanvasViewSelectionInteractionDelegate : NSObject <PKSelectionInteractionDelegate>

 {
    ? containerView;
}




-(BOOL)selectionInteraction:(id)arg0 canPerformAction:(SEL)arg1 withSender:(id)arg2 inAttachment:(id)arg3 ;
-(BOOL)selectionInteraction:(id)arg0 didLongPressElement:(id)arg1 withGesture:(id)arg2 inAttachment:(id)arg3 ;
-(BOOL)selectionInteraction:(id)arg0 selectionContainsPoint:(struct CGPoint )arg1 inAttachment:(id)arg2 ;
-(BOOL)selectionInteractionShouldBegin:(id)arg0 atPoint:(struct CGPoint )arg1 forEvent:(id)arg2 orGestureRecognizer:(id)arg3 ;
-(BOOL)selectionInteractionShouldForwardToElements:(id)arg0 atPoint:(struct CGPoint )arg1 forEvent:(id)arg2 ;
-(id)init;
-(id)selectionInteraction:(id)arg0 contextMenuInteraction:(id)arg1 configurationForElement:(id)arg2 inAttachment:(id)arg3 ;
-(id)selectionInteraction:(id)arg0 contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 forElement:(id)arg3 inAttachment:(id)arg4 ;
-(id)selectionInteraction:(id)arg0 didDuplicateElements:(id)arg1 inAttachment:(id)arg2 ;
-(id)selectionInteraction:(id)arg0 elementsForSpaceInsertedAtPoint:(struct CGPoint )arg1 inAttachment:(id)arg2 ;
-(id)selectionInteraction:(id)arg0 elementsInAttachment:(id)arg1 ;
-(id)selectionInteraction:(id)arg0 pasteboardRepresentationsForElements:(id)arg1 strokes:(id)arg2 inAttachment:(id)arg3 ;
-(id)selectionInteraction:(id)arg0 requestElementsInPath:(id)arg1 inAttachment:(id)arg2 ;
-(id)selectionInteraction:(id)arg0 requestElementsInRect:(struct CGRect )arg1 inAttachment:(id)arg2 ;
-(id)selectionInteraction:(id)arg0 selectedElementsInAttachment:(id)arg1 ;
-(struct CGPath *)selectionInteraction:(id)arg0 pathForElement:(id)arg1 inAttachment:(id)arg2 ;
-(void)selectionInteraction:(id)arg0 contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3 forElement:(id)arg4 inAttachment:(id)arg5 ;
-(void)selectionInteraction:(id)arg0 contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 forElement:(id)arg4 inAttachment:(id)arg5 ;
-(void)selectionInteraction:(id)arg0 didClearSelectionForElements:(id)arg1 inAttachment:(id)arg2 ;
-(void)selectionInteraction:(id)arg0 didDeleteElements:(id)arg1 inAttachment:(id)arg2 ;
-(void)selectionInteraction:(id)arg0 didDragElements:(id)arg1 withTransform:(struct CGAffineTransform )arg2 inAttachment:(id)arg3 ;
-(void)selectionInteraction:(id)arg0 didDropItemProvider:(id)arg1 inAttachment:(id)arg2 withCompletion:(id)arg3 ;
-(void)selectionInteraction:(id)arg0 didEndDraggingElements:(id)arg1 inAttachment:(id)arg2 ;
-(void)selectionInteraction:(id)arg0 didEndInsertSpaceInAttachment:(id)arg1 ;
-(void)selectionInteraction:(id)arg0 didSelectElements:(id)arg1 inAttachment:(id)arg2 ;
-(void)selectionInteraction:(id)arg0 didTapElement:(id)arg1 withGesture:(id)arg2 inAttachment:(id)arg3 ;
-(void)selectionInteraction:(id)arg0 dragInteractionWillBeginForElements:(id)arg1 inAttachment:(id)arg2 ;
-(void)selectionInteraction:(id)arg0 dragInteractionWillEndForElements:(id)arg1 withOperation:(NSUInteger)arg2 inAttachment:(id)arg3 ;
-(void)selectionInteraction:(id)arg0 insertSpaceDidMove:(CGFloat)arg1 inAttachment:(id)arg2 ;
-(void)selectionInteraction:(id)arg0 renderPreviewForElements:(id)arg1 inContext:(struct CGContext *)arg2 withConfig:(id)arg3 inAttachment:(id)arg4 withCompletion:(id)arg5 ;
-(void)selectionInteraction:(id)arg0 willBeginInsertSpaceInAttachment:(id)arg1 ;
-(void)selectionInteractionDidPaste:(id)arg0 atPoint:(struct CGPoint )arg1 inAttachment:(id)arg2 ;


@end


#endif