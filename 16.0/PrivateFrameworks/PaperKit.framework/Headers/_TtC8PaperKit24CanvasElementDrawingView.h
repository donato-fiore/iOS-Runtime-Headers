// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8PAPERKIT24CANVASELEMENTDRAWINGVIEW_H
#define _TTC8PAPERKIT24CANVASELEMENTDRAWINGVIEW_H

@class PKAttachmentView, UIView, PKTiledView;



@interface _TtC8PaperKit24CanvasElementDrawingView : PKAttachmentView {
    ? canvasElementView;
    ? liveStreamingDisplayLink;
}


@property (nonatomic, readonly) UIView *attachmentContainerView;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
@property (nonatomic, readonly) CGAffineTransform drawingTransform;
@property (nonatomic, readonly) BOOL isAtEndOfDocument;
@property (nonatomic, readonly) PKTiledView *tiledView;


-(BOOL)becomeFirstResponder;
-(BOOL)hitByTouchLocation:(struct CGPoint )arg0 bounds:(struct CGRect )arg1 ;
-(BOOL)hitChrome:(struct CGPoint )arg0 isStylus:(BOOL)arg1 ;
-(BOOL)resignFirstResponder;
-(CGFloat)heightFromDrawing:(id)arg0 delta:(CGFloat)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 drawing:(id)arg1 ;
-(void)didBeginDrawing;
-(void)didEndDrawing;
-(void)didMoveToWindow;
-(void)drawingDidChangeVisibleStrokes:(BOOL)arg0 ;
-(void)drawingDidEraseStrokes;
-(void)setAttachmentChromeVisible:(BOOL)arg0 animated:(BOOL)arg1 highlightBackground:(BOOL)arg2 ;
-(void)updateDrawingHeight:(CGFloat)arg0 ;
-(void)updateFrameForTextContainer;
-(void)updateLiveDrawing;
-(void)updateTileContainerViewFrame;


@end


#endif