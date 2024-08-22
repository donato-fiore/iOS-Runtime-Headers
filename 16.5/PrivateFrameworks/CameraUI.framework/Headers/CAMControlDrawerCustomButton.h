// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMCONTROLDRAWERCUSTOMBUTTON_H
#define CAMCONTROLDRAWERCUSTOMBUTTON_H

@protocol CAMControlDrawerExpandableButton, CAMControlDrawerExpandableButtonDelegate;


#import "CAMControlDrawerButton.h"

@interface CAMControlDrawerCustomButton : CAMControlDrawerButton <CAMControlDrawerExpandableButton>



@property (nonatomic, getter=_isTouchInTrackedView, setter=_setTouchInTrackedView:) BOOL _touchInTrackedView; // ivar: __touchInTrackedView
@property (weak, nonatomic) NSObject<CAMControlDrawerExpandableButtonDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (nonatomic) UIEdgeInsets expansionInsets; // ivar: _expansionInsets
@property (readonly, nonatomic, getter=isSelfExpanding) BOOL selfExpanding;


-(BOOL)_shouldRejectAccessibilityGestureForHUDManager:(id)arg0 ;
-(BOOL)_shouldTrackView:(id)arg0 forTouchAtLocation:(struct CGPoint )arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)isExpandable;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)shouldAccessibilityGestureBeginForHUDManager:(id)arg0 ;
-(void)_updateHighlightedView;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)selectedByAccessibilityHUDManager:(id)arg0 ;


@end


#endif