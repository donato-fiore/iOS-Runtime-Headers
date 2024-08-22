// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC21AXWATCHREMOTESCREENUI25AXTWICECOMPANIONWATCHVIEW_H
#define _TTC21AXWATCHREMOTESCREENUI25AXTWICECOMPANIONWATCHVIEW_H

@class UIView;



@interface _TtC21AXWatchRemoteScreenUI25AXTwiceCompanionWatchView : UIView {
    ? isCrownOrientationOnRightSide;
    ? leftPadding;
    ? leftConstraint;
    ? rightPadding;
    ? rightContraint;
    ? watchChromeView;
    ? watchCrownButtonTopConstraint;
    ? watchCrownButtonHorizontalConstraint;
    ? watchCrownButton;
    ? swipeUpCrownGesture;
    ? swipeDownCrownGesture;
    ? watchSideButtonTopConstraint;
    ? watchSideButtonHorizontalConstraint;
    ? watchSideButton;
    ? watchRendererViewLeftConstraint;
    ? watchRendererViewRightConstraint;
    ? watchRendererView;
    ? mirroringLayer;
    ? $__lazy_storage_$_watchDeviceSpinner;
    ? hasStingSupport;
    ? watchStingButtonTopConstraint;
    ? watchStingButtonHorizontalConstraint;
    ? watchStingButton;
}




-(BOOL)digitalCrownAXLongPressed:(id)arg0 ;
-(BOOL)digitalCrownButtonScrollDown:(id)arg0 ;
-(BOOL)digitalCrownButtonScrollUp:(id)arg0 ;
-(BOOL)digitalCrownDirectTouch:(id)arg0 ;
-(BOOL)sideButtonAXLongPressed:(id)arg0 ;
-(BOOL)stingButtonAXKeycord:(id)arg0 ;
-(BOOL)stingButtonAXLongPressed:(id)arg0 ;
-(BOOL)tripleDigitalCrownButtonTapped:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)digitalCrownButtonTappedWithSender:(id)arg0 ;
-(void)digitalCrownLongPressedWithGesture:(id)arg0 ;
-(void)digitalCrownSwipeDownWithGesture:(id)arg0 ;
-(void)digitalCrownSwipeUpWithGesture:(id)arg0 ;
-(void)handleLongPressGestureWithGesture:(id)arg0 endBlock:(id)arg1 ;
-(void)sideButtonLongPressedWithGesture:(id)arg0 ;
-(void)sideButtonTappedWithSender:(id)arg0 ;
-(void)stingButtonLongPressedWithGesture:(id)arg0 ;
-(void)stingButtonTappedWithSender:(id)arg0 ;
-(void)tripleCrownButtonTappedWithSender:(id)arg0 ;


@end


#endif