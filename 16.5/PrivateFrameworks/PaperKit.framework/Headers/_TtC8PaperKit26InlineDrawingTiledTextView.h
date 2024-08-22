// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT26INLINEDRAWINGTILEDTEXTVIEW_H
#define _TTC8PAPERKIT26INLINEDRAWINGTILEDTEXTVIEW_H

@class PKTiledTextView;
@protocol PKSelectionInteractionDelegate;



@interface _TtC8PaperKit26InlineDrawingTiledTextView : PKTiledTextView <PKSelectionInteractionDelegate>

 {
    ? inlineDrawingCanvasElementController;
}




-(BOOL)selectionInteraction:(id)arg0 canPerformAction:(SEL)arg1 withSender:(id)arg2 inAttachment:(id)arg3 ;
-(id)initInScrollView:(id)arg0 sixChannelBlending:(BOOL)arg1 defaultDrawingClass:(Class)arg2 readOnly:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)didMoveToWindow;
-(void)selectionInteractionDidPaste:(id)arg0 atPoint:(struct CGPoint )arg1 inAttachment:(id)arg2 ;


@end


#endif