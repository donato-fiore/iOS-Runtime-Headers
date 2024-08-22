// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8PAPERKIT33CANVASELEMENTRESIZEVIEWMOREBUTTON_H
#define _TTC8PAPERKIT33CANVASELEMENTRESIZEVIEWMOREBUTTON_H

@class UIControl;
@protocol UIPointerInteractionDelegate;



@interface _TtC8PaperKit33CanvasElementResizeViewMoreButton : UIControl <UIPointerInteractionDelegate>

 {
    ? delegate;
    ? imageView;
}




-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)didMoveToWindow;


@end


#endif