// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT29CANVASCOLLABORATIONAVATARVIEW_H
#define _TTC8PAPERKIT29CANVASCOLLABORATIONAVATARVIEW_H

@class UIView;



@interface _TtC8PaperKit29CanvasCollaborationAvatarView : UIView {
    ? name;
    ? color;
    ? boundingSuperview;
    ? fetchImage;
    ? frameAnchorPoint;
    ? frameAnchorIsInverted;
    ? isExpanded;
    ? hasDisplayedInWindow;
    ? isRemovingFromSuperview;
    ? autocollapseTimer;
    ? autohideTimer;
    ? $__lazy_storage_$_imageView;
    ? $__lazy_storage_$_label;
    ? $__lazy_storage_$_imageViewTopConstraint;
    ? $__lazy_storage_$_imageViewBottomConstraint;
    ? $__lazy_storage_$_imageViewLeadingConstraint;
    ? $__lazy_storage_$_imageViewWidthConstraint;
    ? $__lazy_storage_$_labelWidthConstraint;
    ? $__lazy_storage_$_labelHeightConstraint;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didMoveToWindow;
-(void)handleHoverWithRecognizer:(id)arg0 ;
-(void)handleTap:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif