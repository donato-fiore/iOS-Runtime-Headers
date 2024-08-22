// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCOLLABORATORAVATARVIEW_H
#define ICCOLLABORATORAVATARVIEW_H

@class UIView, UIColor, NSString;



@interface ICCollaboratorAvatarView : UIView {
    ? name;
    ? fetchImage;
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


@property (nonatomic, readonly) UIView *boundingSuperview; // ivar: boundingSuperview
@property (nonatomic, readonly) UIColor *color; // ivar: color
@property (nonatomic) BOOL frameAnchorIsInverted; // ivar: frameAnchorIsInverted
@property (nonatomic) CGPoint frameAnchorPoint; // ivar: frameAnchorPoint
@property (nonatomic) BOOL isExpanded; // ivar: isExpanded
@property (nonatomic, readonly) NSString *name;


+(CGFloat)animationDuration;
+(CGFloat)animationSpringDamping;
+(CGFloat)contentHeight;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didMoveToWindow;
-(void)handleHoverWithRecognizer:(id)arg0 ;
-(void)handleTap:(id)arg0 ;
-(void)removeFromSuperviewAnimatedWithCompletion:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif