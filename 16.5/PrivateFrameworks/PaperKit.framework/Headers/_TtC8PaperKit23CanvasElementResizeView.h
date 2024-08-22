// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT23CANVASELEMENTRESIZEVIEW_H
#define _TTC8PAPERKIT23CANVASELEMENTRESIZEVIEW_H

@class UIView;
@protocol UIDragInteractionDelegate_Private, UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate;



@interface _TtC8PaperKit23CanvasElementResizeView : UIView <UIDragInteractionDelegate_Private, UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate>

 {
    ? resizeHandles;
    ? controlHandles;
    ? currentActiveHandle;
    ? moreButton;
    ? borderView;
    ? canvas;
    ? contextMenuInteraction;
    ? resizeOriginalCoordinateSpace;
    ? resizeOriginalFrame;
    ? originalControlPointLocation;
    ? dragGestureRecognizer;
    ? rotationGestureRecognizer;
    ? tapGestureRecognizer;
    ? dragLocation;
    ? draggedImage;
    ? isResizing;
    ? resizingCanvasElements;
    ? editingCanvasElements;
    ? hasContextMenuInteractionVisible;
    ? hasDraggingCanvasElement;
    ? dragConstainedAxis;
    ? nudgeDelta;
    ? nudgeTimer;
}




-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForCancellingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)controlHandleMoved:(id)arg0 ;
-(void)didMoveToWindow;
-(void)dragInteraction:(id)arg0 session:(id)arg1 didEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)dragMoved:(id)arg0 ;
-(void)layoutSubviews;
-(void)resizeHandleMoved:(id)arg0 ;
-(void)rotate:(id)arg0 ;
-(void)rotateFromResizeHandle:(id)arg0 ;
-(void)tapped:(id)arg0 ;


@end


#endif