// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT25CANVASELEMENTRESIZEHANDLE_H
#define _TTC8PAPERKIT25CANVASELEMENTRESIZEHANDLE_H

@class UIView;
@protocol UIPointerInteractionDelegate, UIScribbleInteractionDelegate;



@interface _TtC8PaperKit25CanvasElementResizeHandle : UIView <UIPointerInteractionDelegate, UIScribbleInteractionDelegate>

 {
    ? type;
    ? isControl;
    ? dragGestureRecognizer;
}




-(BOOL)scribbleInteraction:(id)arg0 shouldBeginAtLocation:(struct CGPoint )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)didMoveToWindow;


@end


#endif