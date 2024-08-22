// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8PAPERKIT23CANVASELEMENTRESIZEVIEW_H
#define _TTC8PAPERKIT23CANVASELEMENTRESIZEVIEW_H

@class UIView;
@protocol UIContextMenuInteractionDelegate;



@interface _TtC8PaperKit23CanvasElementResizeView : UIView <UIContextMenuInteractionDelegate>

 {
    ? resizeHandles;
    ? borderView;
    ? canvas;
    ? contextMenuInteraction;
    ? resizingCanvasElements;
    ? hasContextMenuInteractionVisible;
    ? hasDraggingCanvasElement;
    ? resizeOriginalFrame;
}




-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)dragMoved:(id)arg0 ;
-(void)layoutSubviews;
-(void)resizeHandleMoved:(id)arg0 ;
-(void)tapped:(id)arg0 ;


@end


#endif