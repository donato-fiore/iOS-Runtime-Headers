// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16MAGNIFIERSUPPORT19MFCARDCONTAINERVIEW_H
#define _TTC16MAGNIFIERSUPPORT19MFCARDCONTAINERVIEW_H

@class TtC16MagnifierSupport17MFPassthroughView;
@protocol UITextDragDelegate;



@interface _TtC16MagnifierSupport19MFCardContainerView : TtC16MagnifierSupport17MFPassthroughView <UITextDragDelegate>

 {
    ? card;
    ? configuration;
    ? draggableView;
    ? grabberView;
    ? contentView;
    ? backgroundBlur;
    ? internalDraggableView;
    ? shadowView;
    ? backdropView;
}




-(void)layoutSubviews;
-(void)updateAppearanceForReduceTransparency:(id)arg0 ;


@end


#endif