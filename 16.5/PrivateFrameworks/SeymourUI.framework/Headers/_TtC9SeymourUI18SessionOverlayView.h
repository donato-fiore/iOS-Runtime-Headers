// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI18SESSIONOVERLAYVIEW_H
#define _TTC9SEYMOURUI18SESSIONOVERLAYVIEW_H

@class UIView;



@interface _TtC9SeymourUI18SessionOverlayView : UIView {
    ? presenter;
    ? contentLayoutGuide;
    ? unobscuredLayoutGuide;
    ? burnBarView;
    ? energyView;
    ? distanceView;
    ? progressView;
    ? heartRateView;
    ? ringsView;
    ? timerView;
    ? metricContainer;
    ? multiUserCelebrationView;
    ? trackView;
    ? highlightPlatter;
    ? highlightLabel;
    ? inclineView;
    ? intensityView;
    ? rpmView;
    ? spmView;
    ? separatorView;
    ? activeConstraints;
    ? trackViewRightConstraint;
    ? multiUserCelebrationViewRightConstraint;
    ? overlayLayoutGuide;
    ? notchInset;
    ? oldOrientation;
    ? onNotchSide;
    ? elementViewMap;
    ? overlayLayoutGuideTop;
    ? overlayLayoutGuideBottom;
    ? overlayLayoutGuideLeft;
    ? overlayLayoutGuideRight;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif